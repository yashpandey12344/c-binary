
#include<bits/stdc++.h>>
using namespace std;


class Node{
    public:
    int val;
    Node* next;
    Node(int data){
     val=data;
     next=NULL;
    }

};

void insertatHead(Node* &head, int value){
     Node* newnode=new Node(value);
     newnode->next=head;
     head=newnode;

}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<'->';
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(cur!=NULL&& curr->next!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;

}

Node* deletemiddle(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node*  prev=NULL;
    while(fast!=NULL&& fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
     
     prev->next=slow->next;
     delete(slow);
     return head;
}

unordered_map<int,int>mpp;
for(int i=0;i<n;i++){
    int rem=target-nums[i];
    if(mpp.find(rem)!=mpp.end()){
        return {mpp[rem],i};
    }
    mpp[nums[i]]=i;

}

int nonzero=0;
for(int i=0;i<n;i++){
    if(nums[i]!=0){
        swap(nums[i],nums[nonzero]);
        nonzero++;
    }

}
int n=nums.size();
int left=0;
int right=n-1;
while(left<=right){
    int mid=left+(right-left)/2;
    if(nums[mid]==target){
        return mid;
    }else if(nums[mid]<target){
         left=mid+1;
    }else{
        right=mid-1;
    }

}


int left=0;int right=n-1;
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


for(int i=0;i<str.size();i++){
    if(str[i]!=' '){
        count++;

    }
    return count;
}

int reversenum=0;

  int   rem=num%10;
  revsenum=reversenum*10+rem;
  num=num/10;


int left=0;
int right=num.size()-1;
while(left<right){
    if(nums[left]!=nums[right]){
        return false;
    }
    left++;
    right--;
}
int mini=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]<mini){
        mini=arr[i];
    }
    cout<<arr[i]<<endl;
}

while(i<a.size()&& j<b.size()){
    if(a[i]<=b[j]){
        merged.push_back(a[i]);
        i++;
    }else {
        merged.push_back(b[j]);
        j++;
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

int left=0;
int right=str.size()-1;

while(left<right){
    char temp=str[left];
    str[left]=str[right];
    str[right]=str[left];
    left++;
    right--;
}

int larg=INT_MIN;
int slar=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>larg){
        slar=lar;
        lar=arr[i];
    }else if(arr[i]>slar&& arr[i]!=lar){
        slar=arr[i];
    }
}

int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }else if(arr[i]<min){
        min=arr[i];
    }
}

int digit=num%10;
sum+=digit;
num=num/10;


int xor_full=0;
int xor_arr=0;
for(auto n:num){
    xor_arr^=n;
}

a=a+b;
b=a-b;
a=a-b;


a=a^b;
b=a^b;
a=a^b;












