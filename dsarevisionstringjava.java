import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.*;



// String Palindrome code --------------------------------------------------------------------------------------------
String s="madadm";
        char[] ch=s.toCharArray();
        int left=0;
        int right=s.length()-1;
        boolean ispali=true;
        while(left<right){
            if(ch[left]!=ch[right]){
                ispali=false;
                break;
            }
            left++;
            right--;
        }
        if(ispali){
        System.out.println("pali");
        }else{
         System.out.println(" not pali");   
        }

public class dsarevisionstringjava {
       public static void main( String[]args){

    //        String s="Hello Word";
// count vowel and constant count -------------------------------------------------------------------------------------------------------------------------------------------------
        s=s.toLowerCase();
        int vow=0,cons=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch>='a'&& ch<='z'){
                if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                    vow++;
                }else{
                    cons++;
                }
            }
        }
        System.out.println("vow"+vow+"cons"+cons);
        
   
// length find karna without using length keyword-------------------------------------------------------------------------------------------------------------------------
        String s="Omsairam";
        int count =0;
        for(char ch:s.toCharArray()){ // string ko char array mai convert karta hai 
            count++;
        }
        System.out.println(count);
                 
// convert word into lowercase and uppercase---------------------------------------------------------------------------------------------------------------------------------------------  
        String s="Hello Word";
        StringBuilder res=new StringBuilder();
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch>='A'&& ch<='Z'){
                res.append((char)(ch+32));
            }else if(ch>='a'&& ch<='z'){
                res.append((char)(ch-32));
            }else{
                res.append(ch);
            }
        }
        System.out.println("tolower  "+res);

// count freq of each character-----------------------------------------------------------------------------------------------------------------------------------------------------------
String s="ssasscdfd";
        Map<Character,Integer> freq=new LinkedHashMap<>();
        for(char ck:s.toCharArray()){
            freq.put(ck,freq.getOrDefault(ck,0)+1);
        }
        for(char c:freq.keySet()){
            System.out.println(c+"-"+freq.get(c)+" ");
        }

//  string anagram-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        String s="anagram";
    String t="anagram";
    HashMap<Character,Integer>mp1=new HashMap<>();
    HashMap<Character,Integer>mp2=new HashMap<>();
    for(char ck:s.toCharArray()){
        mp1.put(ck,mp1.getOrDefault(ck,0)+1);
    }
    for(char cc:t.toCharArray()){
        mp2.put(cc,mp2.getOrDefault(cc,0)+1);
    }
    if(mp1.equals(mp2)){
        System.out.println("ana");
    }else{
        System.out.println("notana");
    }
//    remove duplicate character from string----------------------------------------------------------------------------------------------------------------------------------
      static String remo(String s){
        HashSet<Character> st=new HashSet<>();
        StringBuilder res=new StringBuilder();
        for(char ck:s.toCharArray()){
            if(!st.contains(ck)){
                res.append(ck);
                st.add(ck);
            }
        }
        return res.toString();
    }

    //  first non repeatin character in string--------------------------------------------------------------------------------------------------------------------------------------------------------
     static char nonre(String s){
        HashMap<Character,Integer>mp=new HashMap<>();
        for(char ck:s.toCharArray()){
            mp.put(ck,mp.getOrDefault(ck,0)+1);
        }
        for(char ch:s.toCharArray()){
            if(mp.get(ch)==1){
                return ch;
            }
        }
        return '_';
    }



       }
}












































1. String-Based Questions (Most Asked)

Reverse a string without using built-in functions.--------------------------------------

Check if two strings are anagrams.-------------------

Count frequency of each character in a string.---------------------------------------

Remove duplicate characters from a string.--------------------------

Find the first non-repeating character in a string.----------------------------

Check if a string is palindrome.----------------------------------

Find the number of vowels and consonants.-------------------------------------

Change the case of each character (upper ↔ lower).---------------------------------

Find the longest word in a sentence.

Check if two strings are rotations of each other (e.g. “abcd” → “cdab”).

🔹 2. Array-Based Questions

Find the maximum and minimum in an array.--------------------------------------

Find the second largest element in an array.----------------------

Remove duplicates from an array.-------------------------

Find the missing number in a sequence (1 to n).---------------------

Check if the array is sorted or not.---------------------

Sort an array of 0s, 1s, and 2s (Dutch National Flag Algorithm).

Find pairs of numbers whose sum equals a given target.

Reverse the array in-place.---------------------

Find the frequency of each element.-----------------

Move all zeros to the end of the array.

🔹 3. Number-Based (Logic & Math)

Check if a number is prime.-----------

Print Fibonacci series up to n terms.--------

Check if a number is Armstrong or not.------------

Find the factorial of a number (iterative & recursive).---------

Reverse a number.---------------

Check if a number is a palindrome.----------

Count the number of digits, even digits, odd digits.--

Find GCD (HCF) and LCM of two numbers.

Sum of digits of a number.+++-------------------

Check if a number is perfect or strong..


