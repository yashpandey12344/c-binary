 #include<bits/stdc++.h>
 using namespace std;

//  print string abcabcabc*******************************************************************************************************************************88

 string prints(string &s,int n){
    string ans="";
    for(int i=0;i<n;i++){
        ans+=s;
    }
    return ans;
 }

// int main(){
//     int n;
//     string s;
//     cin>>n;
//     cin>>s;
//     // string ans= "";
   
//     // cout<<ans<<endl;
//     cout<<prints(s,n)<<endl;
//     return 0;

// }

// print highest nimber of occourence of particular string*******************************************************************************************************************************88

// abcdd  output d

// if (condition1) {
    // ye chalega
// }
// else if (condition2) {
    // ye tab chalega jab condition1 false ho
// }

string occ(string&s){
    unordered_map<char,int>mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int maxfrq=0;
    string most="";
    int freqcount=0;
     for(auto it:mpp){
       
        if(it.second>maxfrq){
            maxfrq=it.second;
          most=it.first;
          freqcount=1;
        }else if(it.second==maxfrq){
            freqcount++;
        }
     }
     if(freqcount>1){
        return "0";
     }
      string final="";
      final+=most;
     return final;
}

int main(){
    string s;
    cin>>s;
    cout<<occ(s)<<endl;

}



























