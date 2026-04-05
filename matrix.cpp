#include<bits/stdc++.h>
using namespace std;
// sum of uppertriangle and sum of lower triangle-------------------------------
class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int lowersum=0;
         int uppersum=0;
         int totalsum=0;
        vector<int>result;
        // code here
        for(int row=0;row<n;row++){
            for(int i=0;i<=row;i++){
                lowersum+=matrix[row][i];
            }
        }
        for(int row=0;row<n;row++){
            for(int j=n-1;j>=row;j--){
                uppersum+=matrix[row][j];
            }
        }
        // totalsum=uppersum+lowersum;
        result.push_back(uppersum);
        result.push_back(lowersum);
        return result;
    }
};

// sum of matrix of right diagonal and left diagonal-------------------------------------------------------------------------------------------------------------------------------------------

// Input: mat = [[1,2,3],
            //   [4,5,6],
            //   [7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
// Notice that element mat[1][1] = 5 is counted only once.
class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int m=mat.size();
            int sum=0;
            for(int i=0;i<m;i++){
                
                    sum+=mat[i][i];
                    sum+=mat[i][m-1-i];
                
            }
            if(m%2!=0){
                sum-=mat[m/2][m/2];
            }
           
          return sum;
        }
    };

    // Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs (i, j) 
    // where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.

    class Solution {
        public:
            int countPairs(vector<int>& nums, int k) {
              int i=0;
              int m=nums.size();
              int j=m-1;
              int count =0;
            //   sort(nums.begin(),nums.end());
             for(int i=0;i<m;i++){
                for(int j=i+1;j<m;j++){
                    if(nums[i]==nums[j]&&(i*j)%k==0){
                        count++;
                    }
                }
             }
              return count;
        
            }
        };




