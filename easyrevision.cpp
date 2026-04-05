#include<bits/stdc++.h>
using namespace std;

// find gcd of array ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


int gcd(vector<int>nums){
    int ans=1;
    int i=0;
     int n=nums.size();
    int minval=nums[i];
        int maxval=nums[n-1];
      
   
    sort(nums.begin(),nums.end());
    for(int i=0;i<3000;i++){
        
    if(minval%i==0&&maxval%i==0){
        ans=max(ans,i);

    }
}
return ans;
}

//  sum of digits of a number------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// 1234 % 10 = 4 → sum = 0 + 4 = 4
// 123 % 10 = 3 → sum = 4 + 3 = 7
// 12 % 10 = 2 → sum = 7 + 2 = 9
// 1 % 10 = 1 → sum = 9 + 1 = 10

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num; // Store original number for printing later

    while (num > 0) {
        int digit = num % 10;  // Get last digit
        sum = sum + digit;     // Add digit to sum
        num = num / 10;        // Remove last digit
    }

    cout << "The sum of digits of " << temp << " is " << sum << endl;

    return 0;
}

// find the smallest and largest element in an array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];  // Assume first element is maximum
    int min = arr[0];  // Assume first element is minimum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if current element is smaller
        }
    }

    cout << "The maximum element is: " << max << endl;
    cout << "The minimum element is: " << min << endl;

    return 0;
}

// optimal O(n) and o(1) space 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    cin >> a; // read first element
    int mn = a, mx = a;

    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a > mx) mx = a;
        if (a < mn) mn = a;
    }

    cout << "Maximum: " << mx << endl;
    cout << "Minimum: " << mn << endl;

    return 0;
}

// in sorting it takes O(nlog n) tc 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 9, 1, 6};

    sort(nums.begin(), nums.end());  // Sort in ascending order

    cout << "Sorted array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    cout << "\nMinimum: " << nums.front();     // First element
    cout << "\nMaximum: " << nums.back();      // Last element

    return 0;
}

// find the second largest number in an array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <climits>  // For INT_MIN
using namespace std;

int main() {
    // Initialize the array
    int arr[] = {12, 34, 23, 56};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    int largest = INT_MIN;  // Set initial largest to the smallest possible integer
    int second = INT_MIN;   // Set initial second largest similarly

    // Traverse the array once
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // If current element is greater than the largest so far,
            // update second to current largest, and update largest
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] != largest) {
            // If current element is not equal to largest but greater than second largest,
            // update second largest
            second = arr[i];
        }
    }

    // If second is still INT_MIN, that means no valid second largest was found
    if (second == INT_MIN) {
        cout << "There is no second largest element (maybe all elements are equal)." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}

// find the factorial of a number------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;

    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    // Factorial is not defined for negative numbers
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    // Loop from 1 to n to calculate factorial
    for (int i = 1; i <= n; i++) {
        fact *= i;  // Multiply current value of i with fact
    }

    // Output the result
    cout << "The factorial of " << n << " is: " << fact << endl;

    return 0;
}

// Reverse a string --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "priya pandey";

    // Two-pointer approach: start from both ends
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Swap characters at left and right
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move pointers inward
        left++;
        right--;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

//  finding the missing number in an array --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// The sum of first n+1 natural numbers is:

// total=(n+1)(n+2)/2--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read number of elements in the array

    int arr[n];
    int sum = 0; // To store sum of all elements in the array

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
        sum += arr[i]; // Calculate actual sum
    }

    // Total sum of first (n+1) natural numbers
    int total = (n + 1) * (n + 2) / 2;

    // Missing number is the difference
    int missing = total - sum;

    cout << "Missing number is: " << missing << endl;

    return 0;
}

// ✅ Properties of XOR (^):
// a ^ a = 0 → same number XOR gives 0

// a ^ 0 = a → XOR with 0 gives the number itself

// XOR is commutative and associative:
// a ^ b ^ c = c ^ a ^ b (order doesn't matter)

// using xor--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3};   // Given array
    int n = sizeof(arr) / sizeof(arr[0]); // size = 2

    int xor_full = 0;
    int xor_arr = 0;

    // XOR of all numbers from 1 to n+1 (1 to 3)
    for (int i = 1; i <= n + 1; i++) {
        xor_full ^= i;  // xor_full = xor_full ^ i
    }

    // XOR of all elements in the array
    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];  // xor_arr = xor_arr ^ arr[i]
    }

    // Missing number is the XOR of both
    int missing = xor_full ^ xor_arr;

    cout << "Missing number is: " << missing << endl;

    return 0;
}

// 1 ^ 3	0001 ^ 0011	0010 → 2
// 1 ^ 2 ^ 3	0001 ^ 0010 ^ 0011 → 0000	0
// 0 ^ 2	0000 ^ 0010	0010 → 2

// Time Complexity	O(n)
// Space Complexity	O(1)

// remove duplicate element in array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int duplicate(vector<int>&v,int n){
         if(n==0)return 0;
         int i=0;
         for(int j=1;j<n;j++){
            if(v[j]!=v[i]){
                i++;
                v[i]=v[j];
            }
         }
         return i+1;
}

int main(){
    vector<int>vk;
    int n;
   cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vk.push_back(x);
    }
    int dup=duplicate(vk,n);
     for(int i=0;i<dup;i++){
        cout<<vk[i];
     }
     return 0;
}

// If space is priority → use sort + in-place method--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// If order must be preserved → use unordered_set (can't reduce space)

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& v) {
    unordered_set<int> seen;
    vector<int> result;

    for (int x : v) {
        if (seen.find(x) == seen.end()) {
            seen.insert(x);
            result.push_back(x);  // only push unique
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans = removeDuplicates(v);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

// check whether a number is even or odd--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "even number" << endl;
    } else {
        cout << "odd number" << endl;
    }

    return 0;
}

// merge two sorted array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> merged;

    // Merge both arrays in sorted order
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements
    while (i < a.size()) {
        merged.push_back(a[i++]);
    }
    while (j < b.size()) {
        merged.push_back(b[j++]);
    }

    return merged;
}

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    vector<int> merged = mergeSortedArrays(a, b);

    cout << "The merged sorted array: ";
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}

//  generating the Fibonacci series -----------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i < n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

// ex
// 0 1 1 2 3 5 8


// Famous solutio?? -----------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

// Recursive function to return nth Fibonacci number
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}

// Optimized recursion with unordered_map or array memo?-----------------------------------------------------------------------------------------------------


#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, int> memo;

int fib(int n) {
    if (n <= 1)
        return n;

    // If already computed, return it
    if (memo.find(n) != memo.end())
        return memo[n];

    // Otherwise, compute and store in map
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}

// a number into its binary form,-----------------------------------------------------------------------------------------------------

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Binary number is: " << bitset<32>(n) << endl;

    return 0;
}

//        binary = char(n % 2 + '0') + binary;
// 🧠 Yeh line thodi important hai, dhyan se samjho:

// n % 2: number ka remainder (0 ya 1) deta hai → binary digit

// + '0': integer ko character banata hai (e.g. 1 + '0' → '1')

// + binary: isse digit string ke beginning me add hota hai
// (kyunki binary right se left banta hai)

#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    string binary = "";
    if (n == 0) return "0";

    while (n > 0) {
        binary = char(n % 2 + '0') + binary;
        n = n / 2;
    }

    return binary;
}

int main() {
    int n;
    cin >> n;

    cout << "Binary number is: " << toBinary(n) << endl;

    return 0;
}

// array ka maximum element dhoondhne ke liye hai.-----------------------------------------------------------------------------------------------------
// 

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);

    // Input array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Assume first element is max
    int max = arr[0];

    // Traverse and update max
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The maximum element is: " << max << endl;

    return 0;
}

//  find the minimum element in an array using C++.-----------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;

    vector<int> arr(size);

    // Input array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Assume first element is minimum
    int min = arr[0];

    // Traverse and update min
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "The minimum element is: " << min << endl;

    return 0;
}


// #include <algorithm>  // for min_element
// cout << *min_element(arr.begin(), arr.end()) << endl;

// Check if a Number is Palindrome.---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // int remainder=0;
    int temp=n;
    int reversenum=0;
    while(temp>0){
        int  remainder=temp%10;
          reversenum=reversenum*10+remainder;
          temp=temp/10;
    }
    if(n==reversenum){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not plaidrome"<<endl;
    }
    return 0;
}

// Time Complexity	O(log n)
// Space Complexity	O(1)

// using two pointer we can solve to converting the string ---------------------------------------------------------------------------------------------------------------------------------------------------------------
int main(){


int n;
cin>>n;

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
    cout<<"palidronme"<<endl;
 }else{
    cout<<"not palid"<<endl;
 }
 return 0;

}

// ⏱ Time	O(log n)
// 🧠 Space	O(log n) --------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // Mismatch found
        }
        left++;
        right--;
    }

    return true; // No mismatch, it's a palindrome
}

int main() {
    string str;
    cin >> str;

    if (isPalindrome(str))
        cout << "palindrome" << endl;
    else
        cout << "not palindrome" << endl;

    return 0;
}


// C++ Code: Reverse a Number --------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n = 1234;
    int reverse = 0;

    while (n != 0) {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    cout << reverse << endl;

    return 0;
}

// using recursion--------------------------------------------------------------------


#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;

    int remainder = n % 10;
    rev = rev * 10 + remainder;

    return reverseNumber(n / 10, rev);
}

int main() {
    int n;
    cin >> n;

    int reversed = reverseNumber(n);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}

// C++ Code: Count Characters (Ignoring Spaces)---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "priya pandey";
    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ')
            count++;
    }

    cout << count << endl;

    return 0;
}

// sum of even and odd indexed elements in an array---------------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            even += arr[i];
        else
            odd += arr[i];
    }

    cout << "Even indexing sum: " << even << endl;
    cout << "Odd indexing sum: " << odd << endl;

    return 0;
}

// Prints the multiplication table of a number n from 1 to 10,

// Calculates the sum of all those products.---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        int val = n * i;
        cout << val << " ";
        sum += val;
    }

    cout << "\nsum: " << sum << endl;

    return 0;
}

// print all even numbers first and odd numbers afterward---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // number of elements

    vector<int> arr(n);
    
    // Input the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // First print even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }

    // Then print odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }

    return 0;
}

// minimum element at the front and the maximum at the end---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    int arr[] = {23, 34, 41, 4, 3, 2, 5, 12, 13, 16, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // ascending sort

    // Output the sorted array
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Optional: show explicitly the min and max
    cout << "\nMinimum element: " << arr[0] << endl;
    cout << "Maximum element: " << arr[n - 1] << endl;

    return 0;
}

// without sotring---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// if (maxIdx == 0) ...	Adjusts max index if it was overwritten by min
// swap(arr[n - 1], arr[maxIdx])	Moves max to the end of the array


#include <iostream>
using namespace std;

int main() {
    int arr[] = {23, 34, 41, 4, 3, 2, 5, 12, 13, 16, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Find min and max indexes
    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }

    // Step 2: Swap min to front
    swap(arr[0], arr[minIdx]);

    // ⚠️ If max was at index 0 originally, it's now at minIdx after swap
    if (maxIdx == 0) maxIdx = minIdx;

    // Step 3: Swap max to last
    swap(arr[n - 1], arr[maxIdx]);

    // Print the result
    cout << "Array after placing min at front and max at end:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time	O(n)
// Space	O(1)

// All positive numbers to the front
// All negative numbers to the end--------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, -2, -4, -6, 3, 4, 5, 6, -7, -8, -9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0, right = n - 1;

    while (left < right) {
        // Move left forward if positive
        while (arr[left] >= 0 && left < right)
            left++;

        // Move right backward if negative
        while (arr[right] < 0 && left < right)
            right--;

        // Swap negative at left with positive at right
        if (left < right)
            swap(arr[left], arr[right]);
    }

    // Print result
    cout << "Rearranged (pos front, neg end, no order): ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// Time Complexity	O(n)
// Space Complexity	O(1)

// Swap Two Numbers Without Temp Variable-------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Swap without third variable
    a = a + b;  // a = 30
    b = a - b;  // b = 10
    a = a - b;  // a = 20

    cout << "a => " << a << endl;
    cout << "b => " << b << endl;

    return 0;
}

// using xor--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a => " << a << endl;
    cout << "b => " << b << endl;

    return 0;
}

// Method	Time Complexity	Space Complexity	Overflow Risk	Order Preserved
// Addition–Subtraction	O(1)	O(1)	✅ Yes	❌ Not needed
// XOR Method	O(1)	O(1)	❌ No	❌ Not needed

































































