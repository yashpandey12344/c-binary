// Basic Conceptual Questions
// 1. Stack kya hota hai?
// Stack ek linear data structure hai jo LIFO (Last In, First Out) principle pe kaam karta hai. Jo element last mein insert hota hai, wahi pehle remove hota hai.

// 2. Stack ka working principle kya hai (LIFO)?
// LIFO: Last In, First Out

// 3. Stack aur Queue mein difference
// Feature	Stack	Queue
// Order	LIFO	FIFO
// Insertion	Top (push)	Rear (enqueue)
// Deletion	Top (pop)	Front (dequeue)

// 4. Stack ke real-life applications
// Browser back/forward navigation
// Undo feature in text editors
// Call stack in recursion
// Expression evaluation (Infix/Postfix)
// Syntax parsing in compilers
#include<bits/stdc++.h>
using namespace std;

//  array-based implementation of a stack using a class in C++-------------------------------------------------------------------------------------------------------------------------------------------------------------

class Stack{
   
    int *arr;
    int size;
    int top;
    public:
    Stack(){
         size=1000;
        arr=new int[size];
        top=-1;
    }
    void push(int x){
        top+=1;
        arr[top]=x;

    }
    int pop(){
        int x=arr[top];
        top-=1;
        return x;

    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top+1;
    }

};
// int main(){
//     Stack s;
//     s.push(4);
// }

// implementation of stack using linked list -----------------------------------------------------------------------------------------------------------------------------------------------------------------------

struct Node{
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=nullptr;
    }

};

class Stack{
    Node* topnode;
    public:
    Stack(){
      topnode=nullptr;
    }
    void push(int x){
        Node* newnode=new Node(x);
        // This line creates a new node dynamically in the heap using new.
// The constructor Node(x) stores the data x in the node, and sets next to nullptr
        newnode->next=topnode;
        topnode=newnode;
    }
    int pop(){
        if(isempty()){
            return -1;
        }
        int x=topnode->data;
        Node* temp=topnode;
        topnode=topnode->next;
        delete temp;
        return x;

    }
    bool isempty(){
        return topnode==nullptr;
    }
    int top(){
        if(isempty()){
            return -1;
        }
        return topnode->data;
    }
  int size(){
    Node*temp=topnode;
    int count=0;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
  }
};

// implementation of stack using 2 queue =--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Stack{
  queue<int>q1,q2;
  public:
  void push(int x){
    q1.push(x);
  }
  void pop(){
    while(q1.size()>1){
        q2.push(q1.front());
        q1.pop(); 
    }
    q1.pop();
    swap(q1,q2);
  }
  int top(){
    while(q1.size()>1){
        q2.push(q1.front());
        q1.pop();
    }
    int temp=q1.front();
    q2.push(temp);
    q1.pop();
    swap(q1,q2);
    return temp;
  }
  int size(){
    return q1.size();
  }
  bool isempty(){
    return q1.empty();
  }
};

// implementation of stack using 1 queue =--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Stack{
    queue<int>q;
    public:
    void push(int x){
        q.push(x);
        int n=q.size();
      for(int i=0;i<n-1;i++){
        q.push(q.front());
        q.pop();
      }

    }
    void pop(){
      q.pop();
    }
    int top(){
       return  q.front();
    }
    int size(){
        return q.size();
    }
    bool isempty(){
        return q.empty();
    }
};

// implementation of queue using array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Queue{
    int *arr;
    int size;
    int frontIndex;
    int rearIndex;
    public:
    Queue(int n){
        size=n;
        arr=new int[size];
        frontIndex=0;
         rearIndex=0;

    }
    void push(int x){
          if(rearIndex==size){
            cout<<"oveflow";
          }
          arr[rearIndex]=x;
          rearIndex++;
    }
    void pop(){
        if(empty()){
            cout<<"underflow";
        }
        frontIndex++;
    }
    int front(){
        if(empty()){

        }
        return arr[frontIndex];
    }
    bool empty(){
        return frontIndex==rearIndex;
    }
    int getsize(){
        return rearIndex-frontIndex;
    }
};

// implementation of queue using linked list--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 class Queue{
    Node *frontnode;
    Node* rearnode;
    public:
    Queue(){
        frontnode=nullptr;
        rearnode=nullptr;
    }
void push(int x){
      Node* newnode=new Node(x);
      rearnode->next=newnode;
      rearnode=newnode; 
}
void pop(){
    Node* temp=frontnode;
    frontnode=frontnode->next;
    delete temp;
}
bool empty(){
    return frontnode==nullptr;
}
};


// implementation of queue using 2 stack --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Queue{
    stack<int>s1,s2;
    public:
    void push(int x){
        s1.push(x);
    }
    void pop(){
        if(empty()){
            cout<<"nothing";
        }
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
    int front(){
        if(s2.empty()){
           while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
           }

        }
        return s2.top();
    }
    bool empty(){
        return s1.empty()&& s2.empty();
    }
    int size(){
        return s1.size()+s2.size();
    }
};

// implementation of queue using 1 stack --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class Queue{
    stack<int>s;
    public:
    void push(int x){
        s.push(x);
    }
    int pop(){
        if(s.empty()){
            return -1;
        }
        int topelement=s.top();
        s.pop();
        if(s.empty()){
            return topelement;
        }
        int frontelement=pop();
        s.push(topelement);
        return frontelement;
    }
};

// Design a min-stack (getMin in O(1))--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class minsto{
    stack<int>st;
    stack<int>minst;
    public:
    void push(int x){
        st.push(x);
        if(minst.empty()||x<=minst.top()){
   minst.push(x);
        }
    }
    void pop(){
       int topval=st.top();
       st.pop();
       if(topval==minst.top()){
        minst.pop();
       }
    }
    int gemin(){
        if(minst.empty())return -1;
        return minst.top();
    }
};

// The min stack must track every occurrence of the current minimum — not just strictly smaller values.

// If you only used <, duplicates of the minimum would not be recorded.

// When popping, you might remove the only entry in minSt even though there’s still another copy of the
//  minimum left in the main stack.


// application question of stack and queue --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// reverse a string using stack--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

string reve(string s){
     stack<char>st;
     for(char ch:s){
        st.push(ch);
     }
     string newre="";
     while(!st.empty()){
        newre+=st.top();
        st.pop();
     }
     return newre;
}

// Balanced Parentheses Check--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

bool  isvalid(string s){
    stack<char>st;
      for(char c:s){
        if(c=='('||c=='{'||c=='['){
           st.push(c);
        }else{
            if(st.empty())return ;
            char top=st.top();
            st.pop();
            if((c==')'&& top!='(')||
            (c=='}'&& top!='{')
            ||(c==']'&&top!='['))return false;
        }
      }
      return st.empty();
}

// next greater eleemnt--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// same previous grater ki tarah hai bus linit i=n-1 se i>=0;i--
vector<int>nextgre(vector<int>&nums1,vector<int>&nums2){
    stack<int>st;
    vector<int>ans;
    unordered_map<int,int>umap;
    int n=nums2.size();
    for(int i=n-1;i>=0;i--){
        int ele=nums2[i];
        while(!st.empty()&&st.top()<=ele){
            st.pop();
        }
        int res=(st.empty()?-1:st.top());
        umap[ele]=res;
        for(auto x:nums1){
         ans.push_back(umap[ele]);
        }
    }
    return ans;
}

// next greater element 2--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 
vector<int>next2(vector<int>&nums){
    stack<int>st;
    int n=nums.size();
    vector<int>ans(n,-1);
    for(int i=2*n-1;i>=0;i--){
        int ele=nums[i%n];
        while(!st.empty()&& st.top()<=ele){
            st.pop();
        }
        if(!st.empty()){
            ans[i%n]=st.top();
        }
        st.push(ele);
    }
    return ans;
}
// tc---4n

// previous smaller element--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//  [4,5,2,10,8]=i/p
// [-1,4,-1,2,2]=o/p
vector<int>smallele(vector<int>&nums){
    stack<int>st;
    int n=nums.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        int ele=nums[i];
        while(!st.empty()&& st.top()>=ele){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(ele);
    }
    return ans;
}

// previous greater element--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 
vector<int>prevele(vector<int>&nums){
    stack<int>st;
    int n=nums.size();
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++){
        int ele=nums[i];
        while(!st.empty()&& st.top()<=ele){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(ele);
    }
    return ans;
}

// stock span problem--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//आज के stock price से पीछे के कितने consecutive दिन (including today) तक price less than or equal to today's price रहा है?"
class stockspan{
    stack<pair<int,int>>st;
    
    public:
    stockspan(){
         
    }
   
    int getspam(int price){
        int span=1;
        while(!st.empty()&& st.top().first<=price){
            span+=st.top().second;
            st.pop();
        }
        
       
        st.push({price,span});
        
        return span;
    }
   
};

// sliding window maximum--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

vector<int>slide(vector<int>&nums,int k){
    deque<int>dq;
    int n=nums.size();
    vector<int>result;
    for(int i=0;i<n;i++){
    while(!dq.empty()&& dq.front()<=i-k){
         dq.pop_front();
    }
    while(!dq.empty()&& nums[i]>nums[dq.back()] ){
            dq.push_front(i);
    }
    dq.push_back(i);
    if(i>=k-1){
        result.push_back(nums[dq.front()]);
    }
}
return result;
}







stack<int>st;
int n=nums.size();
vector<int>res(n,-1);
for(int i=0;i<n;i++){
    int ele=nums[i];
    while(!st.empty()&& nums[i]<=st.top()){
        st.pop();

    }
    
    st.push(ele);
}












































// Tier 1 — Most Common (Asked Very Frequently)
// Balanced Parentheses / Valid Brackets
// Check if a string of ()[]{} is valid using a stack.

// Concept: push opening brackets, pop on matching closing bracket.

// Time: O(n).

// Next Greater Element (or Next Smaller Element)
// For each element, find the next element greater than it.

// Concept: Monotonic stack to process in O(n).

// Time: O(n) instead of O(n²).

// Min Stack (getMin in O(1))
// Design a stack supporting min() in constant time.

// Concept: Use auxiliary stack or store pairs (value, minSoFar).

// Stock Span Problem
// Find number of consecutive days stock price ≤ today’s price.

// Concept: Monotonic decreasing stack.

// Time: O(n).

// Largest Rectangle in Histogram
// Find largest rectangle area in a histogram.

// Concept: Monotonic increasing stack to find nearest smaller elements.

// Time: O(n).

// Tier 2 — Common in Product-Based Interviews
// Evaluate Postfix / Prefix Expression
// Evaluate mathematical expressions using a stack.

// Concept: Push operands, pop on operator.

// Infix to Postfix/Prefix Conversion
// Convert expressions using stack for operators and precedence.

// Implement a Queue using Stacks / Stack using Queues (functional problems)
// Checks your ability to apply DS transformations quickly.

// First Non-Repeating Character in a Stream
// Use queue + hashmap to track frequency and order.

// Concept: Maintain FIFO order while checking counts.

// Sliding Window Maximum / Minimum
// Find max/min in every k-sized window using deque.

// Concept: Monotonic deque.

// Time: O(n).

// Tier 3 — Less Frequent but Good to Know
// Celebrity Problem
// Find celebrity using stack by eliminating non-celebrities.

// Concept: Pop two candidates, eliminate one each step.

// Time: O(n).

// Trap Rainwater / Container With Most Water
// Calculate trapped water using stack or two-pointer method.

// Implement LRU Cache
// Use doubly linked list + hashmap (queue-like behavior).

// Generate Binary Numbers Using Queue
// Generate 1,10,11,100,... up to n using BFS-style queue.

// Simplify Directory Path
// Given a string like "/a/../b/", simplify using a stack.

// Summary by Frequency
// Tier 1 (Must know) → Balanced Parentheses, Next Greater Element, Min Stack, Stock Span, Histogram Rectangle.

// Tier 2 (Very useful) → Postfix/Prefix eval, Infix conversion, Queue/Stack implementation problems, Non-Repeating Character, Sliding Window Max.

// Tier 3 (Bonus) → Celebrity, Rainwater Trapping, LRU Cache, Generate Binary Numbers, Path Simplification.










// Most Frequently Asked (Tier 1)
// Implement a stack using an array

// Implement a stack using a linked list

// Implement a queue using an array (or circular array)

// Implement a queue using a linked list

// Implement a stack using two queues

// Implement a queue using two stacks

// (These are very common in service-based companies, entry-level rounds, and interviews where they test fundamentals.)

// Moderately Frequent (Tier 2)
// Implement a stack using one queue

// Implement a queue using one stack and recursion

// Design a min-stack (getMin in O(1))

// Implement a circular queue (fixed size) using array

// (These appear in product-based company interviews or where they expect you to optimize.)

// Less Frequent but Sometimes Asked (Tier 3)
// Implement multiple stacks in one array (e.g., 2 stacks)

// Implement K stacks in a single array (advanced memory management)

// Design a deque using array or linked list

// Explain amortized analysis for queue using two stacks

// (Rare, but good to know if you’re preparing for high-level interviews or competitive coding.)

// Key takeaway
// Tier 1 (1–6) → must be 100% confident

// Tier 2 (7–10) → good to know, especially for product companies

// Tier 3 (11–14) → rarely asked, but impressive if you can discuss them

// Do you want me to make a quick cheat sheet (one-line approach for each) so you can revise all 14 in under 2 minutes?









// Ask ChatGPT
