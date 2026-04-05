#include<bits/stdc++.h>
using namespace std;

// 14. Longest Common Prefix-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
          sort(strs.begin(),strs.end());
          int i=0;   
          string st=strs.front();
          string last=strs.back();
          int minlen=min(st.size(),last.size());
          while(i<minlen&& st[i]==last[i]){
            i++;
          }
          return st.substr(0,i);
                
                
        }
    };
    
    // 242. Valid Anagram-------------------------------------------------------------------
    
    // Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

class Solution {
    public:
        bool isAnagram(string s, string t) {
    //         unordered_map<char,int>mpp1;
    //         if(s.size()!=t.size())return false;
    //         // unordered_map<int,int>mpp2;
    //         for(auto it:s){ 
    //             mpp1[it]++;
    //         }
    //              for(int i=0;i<t.size();i++){
    //                 if(mpp1.find(t[i])==mpp1.end()||mpp1[t[i]]==0){
    //                       return false;               
    //                 }
    //                  mpp1[t[i]]--;
    //              }      
    //          return true;

    if (s.length() != t.length()) return false;

    unordered_map<char, int> mpp1, mpp2;

    for (char ch : s) mpp1[ch]++;
    for (char ch : t) mpp2[ch]++;

    return mpp1 == mpp2;

    
             sort(s.begin(),s.end());
             sort(t.begin(),t.end());
             
      
      return (s==t);
        }
    }; 

    // Naive pattern matching--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

     
bool naive(string &pat,string &text){
    int n=pat.size();
    int count=0;
    int m =text.size();
    
    for(int i=0;i<=m-n;i++){
        bool istrue=true;
        for(int j=0;j<n;j++){
            if(pat[j]!=text[j+i]){
                
               istrue=false;
               break;
            }
        }
        if(istrue==true){
            return true;
        }

    }

    return false;
}

int main(){
   string pat;
   string text;
    cout<<"enter pat:";
    cin>>pat;
    cout<<"enter text:";
    cin>>text;
   if(naive(pat,text)){
    cout<<"pattern match"<<endl;

   }else{
    cout<<"not match"<<endl;
   }
   return 0;
}


// 3four four reverse string-----------------------------------------------------------------------------------------------------------------------------------------------------------------
// Example 1:
// 
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

class Solution {
    public:
        void reverseString(vector<char>& s) {
            // int n=s.size();
        // 
        //    / int i=0;
            // int j=n-1;
           int i=0;
           int j=s.size()-1;
           while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
           } 
            
            
        }
    };

    // 796. Rotate String--------*************************************************************************

    // Input: s = "abcde", goal = "cdeab"
    // Output: true

    class Solution {
        public:
            bool rotateString(string s, string goal) {
           
        //    first methode-------------------------------------------------------------------------------
              if(s.length()!=goal.length())return false;
            //   int m=s.size();
            //   for(int count=0;count<m;count++){
            //         rotate(s.begin(),s.begin()+1,s.end());
            //         if(s==goal)return true;
            //   }
            //   return false;
         
        // second methode 
        
        if((s+s).find(goal)!=string ::npos){
            return true;
        }
        return false;
                // int n=s.size();
                //  if (s.size() != goal.size()) return false;
        
                // string doubled = s + s;
                // return doubled.find(goal) != string::npos;
                // for(int i=0;i<n;i++){
                //     i=i%n;
                //     reverse(s.begin(),s.end());
                //     reverse(s.begin(),s.begin()+i);
                //     reverse(s.begin()+i,s.end());
                //     if(s==goal)return true;
                // }
                // return false;
            }
        };


// string palindrome------
// Input: s = "abba"
// Output: true
// Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.

class Solution {
    public:
      // Function to check if a string is a palindrome.
      bool isPalindrome(string& s) {
          // code here
          int i=0;
          int j=s.size()-1;
          while(i<=j){
              if(s[i]!=s[j]){
                  return false;
              }
              i++;
              j--;
          }
          return true;
        
      }
  };
// using stack----------------------------------------------------------------------


class Solution {
    public:
      // Function to check if a string is a palindrome.
      bool isPalindrome(string& s) {
         
          stack<char>st;
          for(auto it:s){
              st.push(it);
          }
          for(auto it:s){
              if(it!=st.top()){
                  return false;
              }
              st.pop();
          }
          return true;
        
      }
  };
//   string reverse-------

// Input: s = " i like this program very much "
// Output: "much very program this like i"
// Explanation: After removing extra spaces and reversing the whole string (not individual words), the input string
//  becomes "much very program this like i". 

string reverseWords(string &s) {
      
    stringstream ss(s);
     stack<string>st;
     string word;
     while(ss>>word){
         st.push(word);
     }
    string result="";
     while(!st.empty()){
        result+=st.top();
         st.pop();
         if(!st.empty()){
             result+=" ";
         }
         
     }
     return result;
};

class Solution {
    public:
        vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    
            // it is for square matrix (means number of row and column element is same n*n  matrix)    --------------------------------------
    
            // vector<vector<int>>result;
            // int m=matrix.size();
            // for(int i=0;i<m;i++){
            //    for(int j=0;j<i;j++){
            //     swap(matrix[i][j],matrix[j][i]);
            //    }
            // }
            // return matrix;
    
            // this code is for non square matrix means number of row and column is different ------
    
            int m=matrix.size();
            int n=matrix[0].size();
            vector<vector<int>>result(n,vector<int>(m));
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    result[j][i]=matrix[i][j];
                }
            }
            return result;
        }
    };

// isomarphic string-----------------------------------------------------------------------------------------------------------------------------------

class Solution {
    public:
        bool isIsomorphic(string s, string t) {
        //     unordered_map<char,int>mp1,mp2;
        //     if(s.size()!=t.size())return false;
        //     for(auto it:s){
        //         mp1[it]++;
        //     }
        //     for(auto it:t){
        //         mp2[it]++;
        //     }
        //     for(int i=0;i<s.size();i++){
        //   if(mp1[s[i]]==mp2[t[i]]) return true;
        //     }
        //   return false;
                 unordered_map<char,char>mp1;
                 unordered_map<char,char>mp2;
                 int n=s.size();
                 for(int i=0;i<n;i++){
                    char ch1=s[i];
                    char ch2=t[i];
                    if(mp1.find(ch1)!=mp1.end()&&mp1[ch1]!=ch2 || mp2.find(ch2)!=mp2.end()&&mp2[ch2]!=ch1){
                        return false;
                    }
                    mp1[ch1]=ch2;
                    mp2[ch2]=ch1;
                 }
                 return true;
    
    
        }
    };

    // 1408. String Matching in an Array-----------------------------------------------------------------------------------------------------------------------------------

    // Input: words = ["mass","as","hero","superhero"]
    // Output: ["as","hero"]
    // Explanation: "as" is substring of "mass" and "hero" is substring of "superhero".
    // ["hero","as"] is also a valid answer.

    class Solution {
        public:
            vector<string> stringMatching(vector<string>& words) {
                vector<string>result;
                for(int i=0;i<words.size();i++){
                    for(int j=0;j<words.size();j++){
                        if(i!=j&& words[j].find(words[i])!=string::npos){
                            result.push_back(words[i]);
                            break;
                        }
                    }
                }
                return result;
            }
        };

        // 2085. Count Common Words With One Occurrence-----------------------------------------------------------------------------------------------------------------------------------

        // Input: words1 = ["leetcode","is","amazing","as","is"], words2 = ["amazing","leetcode","is"]
// Output: 2

        class o1 {
            public:
                int countWords(vector<string>& words1, vector<string>& words2) {
                    unordered_map<string,int>mp1,mp2;
                    int count =0;
                    for(auto it:words1){
                        mp1[it]++;
                    }
                     for(auto it:words2){
                        mp2[it]++;
                    }
                    for(auto it:mp1){
                        if(mp1.find(it.first)!=mp2.end()){
                             if(it.second==1 && mp2[it.first]==1){
                                count+=1;
                            }
                        }
                    }
                    return count;
            
                }
            };


            int main(){
                int n,m;
                cin>>n>>m;
                vector<string>words(n);
                for(int i=0;i<n;i++){
                   cin>>words[i];
                }
                vector<string>words2(m);
                for(int i=0;i<m;i++){
                       cin>>words2[i];
                }
             o1 obj1;
                int maxcount=obj1.countWords(words,words2);
                cout<<maxcount<<endl;
                return 0;
            }


































































































        