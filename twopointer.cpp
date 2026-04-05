#include<bits/stdc++.h>
using namespace std;


// 2551. Put Marbles in Bags------------------------------------------------------------------------------------------------------------
// Input: weights = [1,3,5,1], k = 2
// Output: 4
// Explanation: 
// The distribution [1],[3,5,1] results in the minimal score of (1+1) + (3+1) = 6. 
// The distribution [1,3],[5,1], results in the maximal score of (1+3) + (5+1) = 10. 
// Thus, we return their difference 10 - 6 = 4.

class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
         int n=weights.size();
         int m=n-1;
         vector<int>pr(m,0);
         for(int i=0;i<m;i++){
            pr[i]=weights[i]+weights[i+1];
         }
         sort(pr.begin(),pr.end());
         long maxsum=0;
         long minsum=0;
         for(int i=0;i<k-1;i++){
            minsum+=pr[i];
            maxsum+=pr[m-1-i];
         }
         return maxsum-minsum;
    
        }
    };

    // A subarray arr is good if there are at least k pairs of indices (i, j) 
    // such that i < j and arr[i] == arr[j].
    // Input: nums = [3,1,4,3,2,2,4], k = 2
// Output: 4
// Explanation: There are 4 different good subarrays:
// - [3,1,4,3,2,2] that has 2 pairs.
// - [3,1,4,3,2,2,4] that has 3 pairs.
// - [1,4,3,2,2,4] that has 2 pairs.
// - [4,3,2,2,4] that has 2 pairs.-------------------------------------------------------------------------------------------------------------------------------

class Solution {
    public:
        long long countGood(vector<int>& nums, int k) {
            int n=nums.size();
            int i=0;
            int j=0;
            unordered_map<int,int>mp;
            long long result=0;
            long long pairs=0;
            while(j<n){
                pairs+=mp[nums[j]];
                mp[nums[j]]++;
                while(pairs>=k){
                    result+=(n-j);
                    mp[nums[i]]--;
                    pairs-=mp[nums[i]];
                    i++;
                }
                j++;
                
            }
            return result;
    
        }
    };
    // 561. Array Partition------------------------------------------------------------------------------------------------------------------------------------------------------------------

    // Input: nums = [1,4,3,2]
// Output: 4
// Explanation: All possible pairings (ignoring the ordering of elements) are:
// 1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
// 2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
// 3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
// So the maximum possible sum is 4.

class Solution {
    public:
        int arrayPairSum(vector<int>& nums) {
            int n=nums.size();
            int result=0;
            int psum=0;
            sort(nums.begin(),nums.end());
            for(int i=0;i<n;i++){
                psum=min(nums[i],nums[i+1]);
                result=result+psum;
                i+=1;
                // if(result==0)return -1;
            }
            return result;
        }
    };

    // 2740. Find the Value of the Partition-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Example 1:
// Input: nums = [1,3,2,4]
// Output: 1
// Explanation: We can partition the array nums into nums1 = [1,2] and nums2 = [3,4].
// - The maximum element of the array nums1 is equal to 2.
// - The minimum element of the array nums2 is equal to 3.
// The value of the partition is |2 - 3| = 1. 
// It can be proven that 1 is the minimum value out of all partitions.

class Solution {
    public:
        int findValueOfPartition(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int n=nums.size();
            int ans=INT_MAX;
          for(int i=1;i<n;i++){
            ans=min(ans,nums[i]-nums[i-1]);
          }
          
          return ans;
            
        }
    };

    // 1877. Minimize Maximum Pair Sum in Array-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Example 1:
    // Input: nums = [3,5,2,3]
    // Output: 7
    // Explanation: The elements can be paired up into pairs (3,3) and (5,2).
    // The maximum pair sum is max(3+3, 5+2) = max(6, 7) = 7.

    class Solution {
        public:
            int minPairSum(vector<int>& nums) {
                int result=0;
                sort(nums.begin(),nums.end());
                int n=nums.size();
                int i=0;
                int j=n-1;
                int sum=0;
        
                sort(nums.begin(),nums.end());
                while(i<j){
                  sum=nums[i]+nums[j];
                  result=max(result,sum);
                  i++;
                  j--;
                }
                return result;
            }
        };

        // 881. Boats to Save People------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        // Example 2
// Input: people = [3,2,2,1], limit = 3
// Output: 3
// Explanation: 3 boats (1, 2), (2) and (3)

        class Solution {
            public:
                int numRescueBoats(vector<int>& people, int limit) {
                    // sort(people.begin(),people.end());
                    // int n=people.size();
                    // int count=0;
                    // for(int i=0;i<n;i++){
                    //    if(people[i]+people[i+1]>limit){
                    //     if(max(people[i],people[i+1])>limit){
                    //         count-=1;
                    //     }
                    //     count+=2;
                        
                    //    }else{
                    //        count+=1;
                    //    }
                    //    i+=1;
                    // }
                    // return count;
                    sort(people.begin(),people.end());
                    int boat=0;
                    int n=people.size();
                    int i=0;
                    int j=n-1;
                    while(i<=j){
                        if(people[i]+people[j]<=limit){
                            i++;
                        }
                        j--;
                        boat++;
                    }
                    return boat;
                }
            };


