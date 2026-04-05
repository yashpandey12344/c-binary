 #include<bits/stdc++.h>
 using namespace std;


 //  sum of digits of a number------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
int num={123};
int temp=num;
while(num>0){
     int digit=num%10;
     int sum=sum+digit;
     num=num/10;
}

 // find the smallest and largest element in an array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//  1st  methode

sort(nums.begin(),nums.end());//O(nlogn)--tc
int max=nums.front();
int min=nums.back();

// 2nd  methode

int max=arr[0];
int min=arr[0];

for(int i=1;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }

}

// third methode

int a;
cin>>a; // read  first element

int min=a,max=a;
for(int i=1;i<n;i++){
    cin>>a;
    if(a>max){
        max=a;
    }
    if(a<min){
        min=a;
    }
}

// find the second largest number in an array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int largest=INT_MIN;
int  slargest=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];

    }else if(arr[i]>slargest&&arr[i]!=largest){
        slargest=arr[i];
    }

}

// find the factorial of a number------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int n, fact=1;
if(n<0)cout<<"no fact";
for(int i=1;i<n;i++){
    fact*=i;
}

// Reverse a string --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

string str="yash pandey";
int n=str.size()-1;
int left=0;
int right=n-1;
while(left<right){
      char temp=str[left];
      str[left]=str[right];
      str[right]=temp;
      left++;
      right--;

}

//  finding the missing number in an array --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// sum of all number present in array ko minus karenge sum of all natural number from 1 to n

for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
int totalsum=(n+1)*(n+2)/2;
int missing=totalsum-sum;

// 2nd methode using xor

int xor_full=0;
int xor_arr=0;
for(int i=1;i<n+1;i++){
    xor_full^=i;
}
for(int i=0;i<n;i++){
    xor_arr^=arr[i];
}
int missing=xor_full^xor_arr;

// remove duplicate element in array and return the size of nwe unique array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int removedupl(vector<int>&nums,int n){
    int i=0;
    if(n==0)return 0;
    for(int j=1;j<n;j++){
        if(v[i]!=v[j]){
            i++;
            v[j]=v[i];
        }
    }
    return i+1;
}

// If space is priority → use sort + in-place method--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// If order must be preserved → use unordered_set (can't reduce space)
vector<int>remove(vector<int>&v,int n){
    unordered_set<int>seen;
    vector<int>result;
    for(int x:v){
        if(seen.find(x)==seen.end()){
              seen.insert(x);
              result.push_back(x);
        }
    }
    return result;
}

// // check whether a number is even or odd--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(){
int n;
cout<<"enter no"<<endl;
cin>>n;
if(n%2==0)cout<<"even";
else cout<<"odd";
return 0;
}

// merge two sorted array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
vector<int>merged;
vector<int>mergetwoarr(vector<int>&a,vector<int>&b){
    int i=0;int j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<=b[j]){
         merged.push_back(a[i]);
         i++;
        }else{
            merged.push_back(b[j]);
            j++;

        }
    }
    while(i<a.size()){
        merged.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        merged.push_back(b[j]);
        j++;
    }
    return merged;
}

//  generating the Fibonacci series -----------------------------------------------------------------------------------------------------

int n;
// cin>>n;
int a=0,b=1;

for(int i=1;i<n;i++){
    int c=a+b;
    a=b;
    b=c;
}

// famous solution------------------------

int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}

// a number into its binary form,-----------------------------------------------------------------------------------------------------

 cout << "Binary number is: " << bitset<32>(n) << endl; 

// array ka maximum element dhoondhne ke liye hai.-----------------------------------------------------------------------------------------------------
// 

int max=arr[0];
for(int i=1;i<n;i++){
      if(arr[i]>max){
        max=arr[i];
      }
      cout<<max<<endl;

}

//  find the minimum element in an array using C++.-----------------------------------------------------------------------------------------------------

int mini=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<mini){
        mini=arr[i];
    }
    cout<<mini<<endl;
}

// Check if a Number is Palindrome.---------------------------------------------------------------------------------------------------------------------------------------------------------------

int n;
int temp=n;
int reversenum=0;
while(temp>0){
      int remainder=temp%10;
      reversenum=reversenum*10+remainder;
      temp=temp/10;
}
if(n==reversenum){
    cout<<"palindrome"<<endl;

}else{
    cout<<"not palidrome"<<endl;
}
//  2nd methode-------------------------------------------------------------------------------------------------------
// using two pointer we can solve to converting the string ---------------------------------------------------------------------------------------------------------------------------------------------------------------

string s=to_string(n);
int left=0;
int right=s.length()-1;
bool ispalidrome=true;
while(left<right){
    if(s[left]!=s[right]){
       ispalidrome=false;
       break; 
    }
    left++;
    right--;

}

if(ispalidrome){
    cout<<"palidr"<<endl;
}else{
    cout<<"notpalidr"<<endl;
}

// 3rd methode

bool ispali(string s){
    int left=0;
int right=s.size()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// / C++ Code: Reverse a Number --------------------------------------------------------------------

int reversenu=0;
int n;
int remainder=n%10;
reversenu=reversenu*10+remainder;
n=n/10;

// using recursion--------------------------------------------------------------------

int reversnum(int n,int rev=0){
    if(n==0){
        return rev;
    }
    int remainder=n%10;
    rev=rev*10+remainder;
    return reversnum(n/10,rev);
}

// C++ Code: Count Characters (Ignoring Spaces)---------------------------------------------------------------------------------------------------------------------------------------------------------------

string str="yash pandey";
int count=0;
for(int i=0;i<str.size();i++){
    if(str[i]!=' '){
        count++;
    }

}
cout<<count;

// sum of even and odd indexed elements in an array---------------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int even=0,odd=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        even+=arr[i];
    }else{
        odd+=arr[i];
    }

}

// / Prints the multiplication table of a number n from 1 to 10,

// Calculates the sum of all those products.---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int sum=0;
for(int i=1;i<n;i++){
  int val=n*i;
  cout<<val<<' ';
  sum+=val;
 
}
 cout<<sum<<endl;

// print all even numbers first and odd numbers afterward---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<endl;
    }
}
for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<endl;
    }
}

// minimum element at the front and the maximum at the end---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// using sortng
 sort(nums.begin(),nums.end());
 cout<<nums[0]<<endl;
 cout<<nums[n-1]<<endl;

// All positive numbers to the front
// All negative numbers to the end--------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int left=0;
int right=n-1;
while(left<right){
    while(arr[left]>=0&&left<right){
        left++;
    }
    while(arr[right]<=0&&left<right){
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
    }
}

// Time Complexity	O(n)
// Space Complexity	O(1)

// Swap Two Numbers Without Temp Variable-------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

a=a+b;
b=a-b;
a=a-b;

// using xor--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

a=a^b;
b=a^b;
a=a^b;

// Method	Time Complexity	Space Complexity	Overflow Risk	Order Preserved
// Addition–Subtraction	O(1)	O(1)	✅ Yes	❌ Not needed
// XOR Method	O(1)	O(1)	❌ No	❌ Not needed


































































 