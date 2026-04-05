 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
// 1. Reverse a string (without using built-in functions)----------------------------------------------------
// Brute: Build new string from end → TC O(n), SC O(n)// Better: Use stack to reverse → TC O(n), SC O(n) // Optimal: Two-pointer swap in-place → TC O(n), SC O(1)
string s;
int n=s.size();
int i=0;int j=n-1;
while(i<j){
   swap(s[i],s[j]);
   i++;
   j--;
}// tc=o(n)---------------------

// Q2. Check if a String is Palindrome-------------------------------------------------
int i=0,j=n-1;
bool ispal=true;
while(i<j){
    if(s[i]!=s[j]){
        ispal=false;
        break;
    }
    i++;j--;
}
// Brute: Reverse & compare → TC O(n), SC O(n)// Better: Recursive compare ends → TC O(n), SC O(n) Optimal: Two-pointer check → TC O(n), SC O(1)

// 🔹 Q3. Count Vowels, Consonants, Digits, Specials------------------------------------------------------------
int vowel=0,constant=0,digit=0,specials=0;
for(char ch:s){
    if(isdigit(ch)){
        digit++;
    }else if(isalpha(ch)){
        char x=tolower(ch);
        if(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u')vowel++;
        else  constant++;
    }else{
        specials++;
    }
}

// Q4: Find Frequency of Characters---------------------------------------------------------------------------------
unordered_map<char,int>freq;
for(char ch:s){
    freq[ch]++;
}
for(auto& ch:freq){
  cout<<ch.first<<"--"<<ch.second<<endl;
}//Brute: Nested loops → TC O(n²), SC O(1)//Better/Optimal: Hash map → TC O(n), SC O(n)

// 🔹 Q5: Remove Duplicates from String---------------------------------------------------------------------------------
string res="";
unordered_set<char>st;
for(char ch:s){
    if(st.find(ch)==st.end()){
        res+=ch;
        st.insert(ch);
    }
}
cout<<res;// Better/Optimal: Hash set → TC O(n), SC O(n)

// 🔹 Q6: Reverse Words in a String-------------------------------------------------------------------------------------
reverse(s.begin(),s.end());
int i=0;
int l=0;int r=0;
while(i<n){
    while(i<n && s[i]!=' '){
        s[r]=s[i];
        i++;
        r++;
    }
    if(l<r){
        reverse(s.begin()+l,s.begin()+r);
        s[r]=' ';
        r++;
        l=r;
    }
    i++;
}
s=s.substr(0,r-1);
cout<<s; // Time Complexity: O(n)  // Space Complexity: O(1)

// Q: Find the First Non-Repeating Character in a String-----------------------------------------------------------------------
unordered_map<char,int>freq;
for(char c:s){
    freq[c]++;
}
for(char c:s){
    if(freq[c]==1)return c;
}//  ORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
vector<int>freq(256,0);
for(char c:s)freq[(unsigned char)c]++; // for only lower case vector<int> freq(26, 0); freq[c - 'a']++;
//  for only upper case vector<int>freq(26,0);freq[c - 'A']++;
for(char c:s){
    if(freq[(unsigned char )c]==1)return c;
}//tc and sc is o(n) and o(1)

// Check if two strings are anagrams--------------------------------------------------------------------------------------------
// Input: s = "anagram", t = "nagaram Output: true
string t;
unordered_map<char,int>mpp1;
unordered_map<char,int>mpp2;
for(char c:s)mpp1[c]++;
for(char c:t)mpp2[c]++;
return mpp1==mpp2;//ORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR
if(s.size()!=t.size())return false;
vector<int>freqa(256,0);
for(int i=0;i<s.size();i++){
    freqa[(unsigned char)s[i]]++;
    freqa[(unsigned char)t[i]]++;
}
for(int count:freqa){
    if(count!=0)return false;
}   //  Optimal (array): O(n), O(1) ✅

// Q: Check if a string contains only digits-------------------------------------------------------------
bool onlydigit=false;
for(char c:s){
  if(!isdigit(c)){
    onlydigit=false;
    break;
  }
}
if(onlydigit)cout<<"contain only digit";

return 0;
 }


vector<string>repeatinwords(const string &sentence){
   unordered_map<string,int>freq;
   vector<string>result;
   stringstream ss(sentence);
   string word;
   while(ss>>word){
     freq[word]++;
   }
   for(auto &p:freq){
    if(p.second>1){
        result.push_back(p.first);
    }
   }
   return result;
}































