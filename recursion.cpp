#include<bits/stdc++.h>
using namespace std;
 
// find all subset-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

vector<vector<int>>result;

void solve(int i,vector<int>&nums,vector<int>&temp){
    if(i>=nums.size()){
        result.push_back(temp);
        return ;
    }
    temp.push_back(nums[i]);// take i th element 
    // explore the tree or that way
    // call the recursion and trust the recursion
    solve(i+1,nums,temp);
    // not take the element and explore
    result.pop_back();
    solve(i+1,nums,temp);

}

vector<vector<int>>subset(vector<int>&nums){
      vector<int>temp;
      solve(0,nums,temp);
      return result;
}

// 416. Partition Equal Subset Sum

// Given an integer array nums, return true if you can partition
//  the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.
class Solution {
    public:
    int t[200][20001];
          bool solve(vector<int>&nums,int i,int x){
            if(x==0){
                return true;
            }
            if(i>=nums.size()){
                return false;
            }
            bool take=false;
            if(t[i][x]!=-1){
                return t[i][x];
            }
            if(nums[i]<=x){
                take=solve(nums,i+1,x-nums[i]);
            }
            bool not_take=solve(nums,i+1,x);
            return t[i][x]= take||not_take;
          }
    
    
    
        bool canPartition(vector<int>& nums) {
            int s=accumulate(begin(nums),end(nums),0);
            if(s%2!=0){
                return false;
            }
            memset(t,-1,sizeof(t));
           int x=s/2;
         return   solve(nums,0,x); 
        }
    };





