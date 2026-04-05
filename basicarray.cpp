#include<bits/stdc++.h>
using namespace std;

//  Two Sum return index of both element-------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
map<int,int>mpp;
      int n=nums.size();
      for(int i=0;i<n;i++){
        

        int rem=target-nums[i];
       if(mpp.find(rem)!=mpp.end()){
               return {mpp[rem],i};
        
       }
       mpp[nums[i]]=i;
      }


       return {} ;
 
    //    second methode

        vector<int>result;
    //     int n=nums.size();
       
    //   for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==target){
    //             result.push_back(i);
    //             result.push_back(j);
    //         }
    //     }
    //   }
    //   return result;

        }
};



// moves zero to end of the array-------------------------------------------------------------------------------------------------------------------------

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
         int n=nums.size();
           int nonzeroindex=0;
           for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[nonzeroindex]);
                nonzeroindex++;
            }
           }
        }
    };

//  sort 012 order-------------------------------------------------------
// ugsing dutch national flag algorithm----------------------------

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int low=0;
            int mid=0;
            int n=nums.size();
            int high=n-1;
            while(mid<=high){
                // int mid=(low+high)/2;
                if(nums[mid]==0){
                    swap(nums[low],nums[mid]);
                    low++;
                    mid++;
                }else if(nums[mid]==1){
                    mid++;
                }else {
                    swap(nums[mid],nums[high]);
                    high--;
                }
            }
            // sort(nums.begin(),nums.end());
          
           
        }
    };

    // 1752. Check if Array Is Sorted and Rotated-------------------------------------------------

    // Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 3 positions to begin on the element of value 3: [3,4,5,1,2].

// [2, 1, 3, 4] — two drops at 2 > 1 and 4 > 2 (wrap around) → ❌ not valid

class Solution {
    public:
        bool check(vector<int>& nums) {
            int n=nums.size();
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i]>nums[(i+1)%n]){
                    count++;
                }
                if(count>1)return false;
            }
            return true;
        }
    };

    // 189. Rotate Array---------------------------------------------------------------------------

    class Solution {
        public:
            void rotate(vector<int>& nums, int k) {

                // to rotate right the array we use  rotate(nums.begin(),nums.begin()+(n-k),nums.end());*************************************

                // to rotate left the array we use  rotate(nums.begin(),nums.begin()+k,nums.end());*************************************888888888888888888******************************
                

                int n=nums.size();
                k=k%n;
                    std::rotate(nums.begin(),nums.begin()+(n-k),nums.end());
        
                int n=nums.size();
              k=k%n;
             int temp[k+2];
            for(int i=0;i<=k;i++){
                temp[i]=nums[i];
            }
            for(int i=k+1;i<n;i++){
                nums[i-k+1]=nums[i];
            }
          
            for(int i=k;i<n;i++){
                nums[i]=temp[i-k];
                // j++;
            }
            // int n=nums.size();
            // k=k%n;
            // reverse(nums.begin(),nums.end());
            // reverse(nums.begin(),nums.begin()+k);
            // reverse(nums.begin()+k,nums.end());
            }
        };

        // 48. Rotate Image r-------------------------------------------------------------------------------

        // Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

        class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// 136. Single Number-------------------------------------------------------------------------------

// Input: nums = [2,2,1]
// Output: 1

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            unordered_map<int,int>mpp;
            int result=0;
            for(auto it:nums){
                mpp[it]++;
            }
            for(auto it:mpp){
                if(it.second==1){
                    return it.first;
                }
            }
            return -1;
        }
    };

//   169   majority element -------------------------------------------------------------------------------------------

// The majority element is the element that appears more than ⌊n / 2⌋ times. 

// Input: nums = [3,2,3]
// Output: 3

class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int,int>mpp;
            int n=nums.size();
            int maj=0;
            for(auto num:nums){
                mpp[num]++;
            }
            for(auto &it:mpp){
                if(it.second>n/2){
                    maj=it.first;
                }
            }
            return maj;
        }
    };


// 229. Majority Element II-------------------------------------------------------------------------------------------

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

// Input: nums = [3,2,3]
// Output: [3]

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        vector<int>result;
        int n=nums.size();
        for(auto it:nums){
            mpp[it]++;
        }
        for(auto it:mpp){
            if(it.second>n/3){
                result.push_back(it.first);
            }
        }
        return result;
    }
};

// 2149. Rearrange Array Elements by Sign------------------------------------------------------------------------------------------

// Input: nums = [3,1,-2,-5,2,-4]
// Output: [3,-2,1,-5,2,-4]

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posind=0;
        int n=nums.size();
        vector<int>result(n,0);
        int negind=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
               result[negind]=nums[i];
                negind+=2;
            }else{
                result[posind]=nums[i];
                posind+=2;
            }
        }
        return result;
    }
};

// 54. Spiral Matrix88.------------------------------------------------------------------------------------------
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
       vector<int>result;
       int top=0;
       int bottom=matrix.size()-1;
       int left=0;
       int right=matrix[0].size()-1;
       while(left<=right&& top<=bottom){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);

            }
            top++;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }

       }
       return result;
    }
};

// 88. Merge Sorted Array------------------------------------------------------------------------------------------

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
          nums1.erase(nums1.begin()+m,nums1.end());
       for(auto it:nums2){
        nums1.push_back(it);
       }
       sort(nums1.begin(),nums1.end());
     
    }
};

// 152. Maximum Product Subarray------------------------------------------------------------------------------------------

class Solution {
    public:
        int maxProduct(vector<int>& nums) {
          int maxsofar=nums[0];
          int minsofar=nums[0];
          int ans=nums[0];
          int n=nums.size();
          for(int i=1;i<n;i++){
             int curr=nums[i];
             if(nums[i]<=0){
                swap(maxsofar,minsofar);
             }
             maxsofar=max(curr,maxsofar*curr);
             minsofar=min(curr,minsofar*curr);
             ans=max(ans,maxsofar);
          }
          return ans;
        }
    };

    // 2427. Number of Common Factors---------------------------------------------------------------------------------------------------------------------------------------------------------

    // Input: a = 12, b = 6
// Output: 4
// Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.

class Solution {
    public:
        int commonFactors(int a, int b) {
            int n1=a/2;
            int n2=b/2;
            int count =0;
            int l1=max(n1,n2);
            for(int i=1;i<=1000;i++){
                if(a%i==0&&b%i==0 ){
                    count+=1;
                }
            }
            return count;
        }
    };

    // 1979. Find Greatest Common Divisor of Array

    // Input: nums = [2,5,6,9,10]
// Output: 2
// Explanation:
// The smallest number in nums is 2.
// The largest number in nums is 10.
// The greatest common divisor of 2 and 10 is 2.

class Solution {
    public:
        int findGCD(vector<int>& nums) {
            
            int ans=1;
            int i=0;
            int n=nums.size();
           sort(nums.begin(),nums.end());
            int minval=nums[i];
           int maxval=nums[n-1];
            for(int i=1;i<3000;i++){
                if(maxval%i==0 && minval%i==0){
                    ans=max(ans,i);
                }
            }
           
            return ans;
        }
    };

    // 1929. Concatenation of Array

    // Input: nums = [1,2,1]
// Output: [1,2,1,1,2,1]
// Explanation: The array ans is formed as follows:
// - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
// - ans = [1,2,1,1,2,1]
 
class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n=nums.size();
            vector<int>ans;
            for(int i=0;i<2*n;i++){
                ans.push_back(nums[i%n]);
            }
            return ans;
        }
    };

 
















