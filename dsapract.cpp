#include<bits/stdc++.h>
using namespace std;

// int main(){int n;

//     cin>>n;
//     int ans=0;
//     while(n>0){
        
//         int digit=n%10;
//         ans=ans*10+digit;
//     n=n/10;
//     }
//   cout<<ans<<endl;
// }
// int main(){
// string str="yash pandey";
// int n=str.size();
// int i=0;
// int j=n-1;
// while(i<j){
//     char temp=str[i];
//     str[i]=str[j];
//     str[j]=temp;
//     i++;
//     j--;

// }
// cout<<str<<endl;
// }
// int left=0;
// int right=n-1;
// while(left<right){
//     int mid=left+(right-left)/2;
//     if(nums[mid]==target){
//         return mid;
//     }else if(nums[mid]<target){
//         left=mid+1;
//     }else{
//         right=mid-1;
//     }
// }

// bool isprime(int n){
//     if(n<2)return false;
//     if(n==2)return true;
//     if(n%2==0)return false;
//     for(int i=3;i<=sqrt(n);i++){
//         if(n%i==0)return false;
//     }
//     return true;
// }

// int main(){
//     int count=0;
//     int num=2;
//     while(count<30){
//         if(isprime(num)){
//             cout<<num<<" ";
//             count++;
//         }
//         num++;
//     }
//     return 0;
// }

class node{
    public:
     int val;
     node* next;
     node(int data){
        val=data;
        next=NULL;
     }
};
// node* reverse(node* head){
//     node* next=NULL;
//     node* curr=head;
//     node* prev=NULL;
//     while(curr!=NULL){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }
node* deleteli(node* head){
      node* prev=NULL;
      node* slow=head;
      node* fast=head;
      while(fast!=NULL&& fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
      }
      prev->next=slow->next;
      delete(slow);
      return head;
}

void print(node* head){
    node* curr=head;
    while(curr!=NULL){
        cout<<curr->val;
        curr=curr->next;
    }
    cout<<endl;
}

int main(){
    node* curr=new node(1);
     curr->next=new node(2);
     curr->next->next=new node(3);
     cout<<"curr linkli"<<endl;
     print(curr);
    //  head=reverse(head);
    curr=deleteli(curr);
     cout<<"after redvcxdf"<<endl;
     print(curr);
     

}


// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// Node* reverse(Node* head){
//     Node* curr=head;
//     Node* prev=NULL;
//     Node* next=NULL;
//     while(curr!=NULL  ){
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;

// }
// void printlist(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val;
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* head=new Node(1);
//     head->next=new Node(2);
//     head->next->next=new Node(3);
//     printlist(head);
//     head=reverse(head);
//     printlist(head);
// }























