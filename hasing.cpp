 #include<bits/stdc++.h>
using namespace std;

// first non repeating element ------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int firstnonrepeating(vector<int>&arr){
    unordered_map<int,int>mpp;
    for(auto num:arr){
        mpp[num]++;
    }
    for(auto num:arr){
        if(mpp[num]==1){
            return num;
        }
    }
    return 0;
}

// 
// 
// 

class Solution {
    public:
      // Function to return the position of the first repeating element.

    //   first repeating element with minimum index-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

      int firstRepeated(vector<int> &arr) {
          // code here
          unordered_map<int,int>mpp;
          for(auto num:arr){
              mpp[num]++;
          }
          int result=0;
          for(int i=0;i<arr.size();i++){
              if(mpp[arr[i]]>1){
                int ind=i+1;
                return min(i+1,ind);
              }
          }
         
          return -1;
      }
  };

// union of two arrays-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int>st;
    //   int count=0;
       for(auto num:a){
         
               st.insert(num);
               
           
         
       }
       for(auto x:b){
           
               st.insert(x);
               
           
       }
       return st.size();
    }
};

// intersection of two arrays-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            vector<int>result;
            unordered_set<int>st1;
            // unordered_set<int>st2;
        //   sort(nums1.begin(),nums1.end());
      for(int num:nums1){
        st1.insert(num);
      }
      for(int x:nums2){
        // st2.insert(x);
        if(st1.find(x)!=st1.end()){
        result.push_back(x);
        st1.erase(x);
        }
      }
            return result;
        }
    };

    // Two Sum - Pair with Given Sum-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
// Output: true
// Explanation: arr[3] + arr[4] = 6 + 10 = 16.

  // User function template for C++
class Solution {
    public:
      bool twoSum(vector<int>& arr, int target) {
          unordered_map<int,int>mpp;
          for(int i=0;i<arr.size();i++){
              int rem=target-arr[i];
              if(mpp.find(rem)!=mpp.end()){
                  return true;
              }
              mpp[arr[i]]++;
          }
          return false;
      }
  };  

//   525. Contiguous Array----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//   Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
// Input: nums = [0,1,1,1,1,1,0,0,0]
// Output: 6
// Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.

class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
           unordered_map<int,int>mpp;
        //    here is use of two int where first int refer the prefixsum and second int refer to what index this prefixsum was seen previously
           int maxlen=0;
           int prefixsum=0;
           mpp[0]=-1;
           for(int i=0;i<nums.size();i++){
            //  presum+=(nums[i]==0)?-1:1;
            if(nums[i]==0){
                nums[i]=-1;
            }else{
                nums[i]=1;
            }
            prefixsum+=nums[i];
             if(mpp.find(prefixsum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[prefixsum]);
             }else{
             mpp[prefixsum]=i;
             }
           }
           return maxlen;
        }
    };

    // Subarray with 0 sum----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Input: arr[] = [4, 2, -3, 1, 6]
// Output: true
// Explanation: 2, -3, 1 is the subarray with a sum of 0.

class Solution {
    public:
      // Complete this function
      // Function to check whether there is a subarray present with 0-sum or not.
      bool subArrayExists(vector<int>& arr) {
          // Your code here
        unordered_set<int>st;
             int prefixsum=0;
        for(int i=0;i<arr.size();i++){
              prefixsum+=arr[i];
              if(prefixsum==0)return true;
              if(st.find(prefixsum)!=st.end()){
                  return true;
              }
            st.insert(prefixsum);        
        }
        return false;
      }
  };

// *************************888888888888888888  kadanes algorithms**********************************************************************************************************************************************************************************************************************************************************************************

// 53. Maximum Subarray
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int sum=0;
            int maxsum=INT_MIN;
            for(auto val:nums){
             sum+=val;
             maxsum=max(sum,maxsum);
             if(sum<0)sum=0;
    
            }
            return maxsum;
        }
    };


int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
 for(auto it=vec.begin();it!=vec.end();it++){
    cout<<*it<<endl;
 }
}