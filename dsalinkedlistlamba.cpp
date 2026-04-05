 #include<bits/stdc++.h>
 using namespace std;

// find middle of linked list -------------------------------------------------------------------------------

 int getmiddle(Node* head){
       Node* slow=head;
       Node* fast=head;
      while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
      }     
      return slow->data;
 }

//  find loop of linked list-------------------------------------------------------------------------------


bool getloop(Node* head){
    Node* slow=head;
    Node* fast= head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

// implementation of singly linked list-------------------------------------------------------------------------------------

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertathead(Node* &head,int value){
    Node* new_node=new Node(value);
    new_node->next=head;
    head=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}

// odd even linked list means first print odd indices node then print even indices node-----Leetcode328-------------------------------------------------------------------------------

Node* oddeven(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* odd=head;
    Node* even=head->next;
    Node* evenhead=head->next;
    while(even!=NULL&& even->next!=NULL){
        odd=odd->next->next;
        even=even->next-> next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=evenhead
    
}

// delete the middle node of linked  list -------------------------------------------------------------------------------


Node*  deletemiddle(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;

    if(head==NULL||head->next==NULL){
        return NULL;
    }
    while(fast!=NULL&& fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
   prev->next=slow->next;
    delete(slow);
    return head;
    
}

// delete the node  when head is not given 

void deleteNode(ListNode* node) {
    // Copy data from the next node
    node->val = node->next->val;

    // Save pointer to the next node
    ListNode* temp = node->next;

    // Skip the next node
    node->next = node->next->next;

    // Delete the skipped node
    delete temp;
}

// “You are guaranteed the node to delete is not the tail.”



// reverse the singly linked list -------------------------------------------------------------------------------

Node* reversesll(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

// find the intersection point of linked list------------leetcode 160-----------------------------------------------------

Node* interpointoftwoll(Node* headA,Node* headB){
    Node* temp1=headA;
    Node* temp2=headB;
    if(temp1==NULL && temp2==NULL)return NULL;
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1==temp2)return temp1;
        if(temp1==NULL)temp1=headB;
        if(temp2==NULL)temp2=headA;

    }
    return temp1;
}

// give extra character which is added-----------------------------------------------------

// #include <iostream>
// #include <unordered_map>
// using namespace std;

char findExtraChar_Hash(string s1, string s2) {
    unordered_map<char, int> freq;

    // Count characters in second string
    for (char c : s2)
        freq[c]++;

    // Subtract count using first string
    for (char c : s1)
        freq[c]--;

    // The character with count 1 is the extra one
    for (auto pair : freq) {
        if (pair.second == 1)
            return pair.first;
    }

    return '\0'; // fallback
}

// int main() {
//     string s1 = "abc";
//     string s2 = "adcb";

//     cout << "Extra character: " << findExtraChar_Hash(s1, s2) << endl;

//     return 0;
// }
// another approach is -----------------------------------------------------

char findExtraChar_Sum(string s1, string s2) {
    int sum1 = 0, sum2 = 0;
    for (char c : s1) sum1 += c;
    for (char c : s2) sum2 += c;
    return (char)(sum2 - sum1);
}

// another approach is -----------------------------------------------------using xor

// x ^ x = 0

// x ^ 0 = x            

char findExtraCharXOR(string s1, string s2) {
    char res = 0;

    for (char c : s1) res ^= c;
    for (char c : s2) res ^= c;

    return res;
}


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

    // optimal approach-------------------------------------------------------------------------------------------

    #include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {
    int cnt = 0;
    int el;

    // Phase 1: Find candidate
    for (int i = 0; i < v.size(); i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        } else if (v[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }

    // Phase 2: Verify candidate
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (v.size() / 2)) {
        return el;
    }

    return -1;
}

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


// At most 2 elements can appear more than n/3 times, so we track 2 candidate

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int count1 = 0, count2 = 0;
    int candidate1 = INT_MIN, candidate2 = INT_MIN;

    // Phase 1: Find candidates
    for (int num : nums) {
        if (num == candidate1) {
            count1++;
        } else if (num == candidate2) {
            count2++;
        } else if (count1 == 0) {
            candidate1 = num;
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = num;
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    // Phase 2: Verify the candidates
    count1 = 0, count2 = 0;
    for (int num : nums) {
        if (num == candidate1) count1++;
        else if (num == candidate2) count2++;
    }

    vector<int> result;
    if (count1 > n / 3) result.push_back(candidate1);
    if (count2 > n / 3) result.push_back(candidate2);

    return result;
}


int main(){
    // Node* n=new Node(19);
    // cout<<n->val<<' '<<n->next<<endl;
    Node*head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,5);
    display(head);
    return 0;
}

