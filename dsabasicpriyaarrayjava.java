
import java.util.*;

// finding the missing number in an array-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int sum=0;
    int[]arr=new int[n];
    for(int i=0;i<n;i++){
        arr[i]=sc.nextInt();
        sum+=arr[i];
    }
        int total=(n+1)*(n+2)/2;
        System.out.println(total-sum);
    
class basicarrayjava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int xorFull = 0, xorArr = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            xorArr ^= arr[i];
        }

        for (int i = 1; i <= n + 1; i++) {
            xorFull ^= i;
        }

        int missing = xorFull ^ xorArr;
        System.out.println("Missing number: " + missing);
    }
}

// Reverse a string --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class basicarrayjava{
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        char[] ch=s.toCharArray();
        int left=0;
        int right=ch.length-1;
        while(left<right){
            char temp=ch[left];
            ch[left]=ch[right];
            ch[right]=temp;
            left++;
            right--;

        }
        System.out.println(new String(ch));
    }
}



class basicarrayjava{
         public static void main(String [] args){
            Scanner sc =new Scanner(System.in);
            String s=sc.nextLine();
            System.out.println(new Stringbuilder(s).reverse())
         }
}
tc---o(n) sc  o(n)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ 

// find the factorial of a number------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class basicarrayjava {

    public static void main(String[] args) {
        int fact = 1;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        System.out.println("fact" + fact);
    }
}

// max  and min value of an array------------------------------------------------------------------------------------------------------
    public static void main(String []args){
         int [] arr={1,3,244,555};
         int min=arr[0],max=arr[0];
         for(int i=0;i<arr.length;i++){
            int n=arr[i];
            if(n<min)min=n;
            if(n>max)max=n;
         }
         System.out.println("lar"+max+"small"+min);
    }
}
// find the second largest number in an array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class basicarrayjava{
    public static void main(String []args){
        int []arr={1,233,432,432,434,434};
        int lar=Integer.MIN_VALUE, slar=Integer.MIN_VALUE;
        for(int n:arr){
           if(n>lar){slar=lar;
            lar=n;
        }else if(n>slar && n!=lar)
        {
        slar=n; 
        }
        }
        System.out.println("slar"+slar);
    }
}

// check even or odd number---------------------------------------------------------------------------------------------------------------------------
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    if(n==0){
        System.out.println("invalid");
    }else if(n%2==0){
        System.out.println("even");
    }else{
        System.out.println("odd");
    }
    
// remove duplicate element in array and return the size of nwe unique array--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
static int dupli(int []nums,int n){
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
    public static void main(String []args){
        int []arr={1,2,2,3,3,4,5};
        int n=arr.length;
        int newsiz=dupli(arr,n);
        System.out.println("newsize "+newsiz);
        
    }
    
import java.util.*;

class RemoveDuplicate {
    static ArrayList<Integer> remove(ArrayList<Integer> v, int n) {
        HashSet<Integer> seen = new HashSet<>();
        ArrayList<Integer> result = new ArrayList<>();

        for (int x : v) {
            if (!seen.contains(x)) {
                seen.add(x);
                result.add(x);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        ArrayList<Integer> v = new ArrayList<>(Arrays.asList(1, 2, 2, 3, 4, 4, 5));
        ArrayList<Integer> ans = remove(v, v.size());
        System.out.println(ans);
    }
}
// merge two sorted array------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class M{
  static ArrayList<Integer> m(ArrayList<Integer>a,ArrayList<Integer>b){
    ArrayList<Integer>r=new ArrayList<>();int i=0,j=0;
    while(i<a.size()&&j<b.size())r.add(a.get(i)<=b.get(j)?a.get(i++):b.get(j++));
    while(i<a.size())r.add(a.get(i++));
    while(j<b.size())r.add(b.get(j++));
    return r;
  }
  public static void main(String[]x){
    System.out.println(m(new ArrayList<>(Arrays.asList(1,3,5)),
                         new ArrayList<>(Arrays.asList(2,4,6))));
  }
}

//  generating the Fibonacci series -----------------------------------------------------------------------------------------------------
public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=0,b=1,c;
        System.out.println("dkkod"+a+b);
        
        for(int i=2;i<n;i++){
          c=a+b;
          System.out.println(c);
          a=b;
          b=c;
         
        }
// famous solution-------------------------------------------------------------------------------------------------------------------------------------
static int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
    public static void main(String[] args) {
        int n = 7;  // example
        for (int i = 0; i < n; i++)
            System.out.print(fib(i) + " ");
    }
//  find the minimum element in an array using java-----------------------------------------------------------------------------------------------------
public static void main(String[]args){
    int []arr={1,2,3,47,2};
    int n=arr.length;
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    System.out.println(min);
}
// array ka maximum element dhoondhne ke liye hai.-----------------------------------------------------------------------------------------------------
 public static void main(String[]args){
         int []arr={2,44,33,567,3};
         int n=arr.length;
         int max=Integer.MIN_VALUE;
         for(int i=0;i<n;i++){
             if(arr[i]>max){
                 max=arr[i];
             }
         }
         System.out.println(max);
     } 

//  Check if a Number is Palindrome.---------------------------------------------------------------------------------------------------------------------------------------------------------------
public static void main(String[]args){
           Scanner sc=new Scanner(System.in);
           int n=sc.nextInt();
           int temp=n;
           int reversenum=0;
           while(temp>0){
               int remainder=temp%10;
               reversenum=reversenum*10+remainder;
               temp=temp/10;
           }
           if(n==reversenum){
               System.out.println("num is palidrome");
           }else{
               System.out.println("Num is not palidome");
           }
       } 
//   2nd methode-------------------------------------------------------------------------------------------------------
// using two pointer we can solve to converting the string -----------------------------------------------------------------------------------------------------------------------------------------------------------   
 public static void main(String[]args){
        Scanner sk=new Scanner(System.in);
        int n=sk.nextInt();
        String s=Integer.toString(n);
        int left=0;
        int right=s.length()-1;
        boolean ispali=true;
        while(left<right){
            if(s.charAt(left)!=s.charAt(right)){
                ispali=false;
                break;
            }
            left++;
            right--;
        }
        if(ispali){
            System.out.println("palidrome hai");
        }else{
            System.out.println("plai nahi hai");
        }
        
    }
    

// String palidrome ka code-------------------------------------------------------------------------------------------------------------------------------------------------------------------
static boolean  ispali(String s){
      int left=0;
      int right=s.length()-1;
      while(left<right){
          if(s.charAt(left)!=s.charAt(right)){
              return false;
          }
          left++;
          right--;
      }
      return true;
  }
  public static void main(String[]args){
      Scanner sk=new Scanner(System.in);
      String s=sk.nextLine();
      if(ispali(s)){
          System.out.println("pali hai");
      }else{
          System.out.println("pali nahi hai");
      }
  }
// / java Code: Reverse a Number --------------------------------------------------------------------
public static void main(String[]args){
      Scanner sk=new Scanner(System.in);
      int n=sk.nextInt();
      int reversenum=0;
      int temp=n;
      while(temp>0){
          int remainder=temp%10;
          reversenum=reversenum*10+remainder;
          temp=temp/10;
      }
      System.out.println(reversenum);
  }
// using recursion--------------------------------------------------------------------
static int revers(int n,int rev){
      if(n==0)return rev;
      int remainder=n%10;
      rev=rev*10+remainder;
      return revers(n/10,rev);
  }
  public static void main(String []args){
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
       
      int result=revers(n,0);
      System.out.println(result);
  }
// java Code: Count Characters (Ignoring Spaces)---------------------------------------------------------------------------------------------------------------------------------------------------------------
public static void main(String[]args){
       int count=0;
       String s="yash pandey";
       for(int i=0;i<s.length();i++){
           if(s.charAt(i)!=' '){
               count++;
           }
       }
       System.out.println(count);
   }
// sum of even and odd indexed elements in an array---------------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  public static void main(String []args){
    int []arr={1,2,4,56,34};
    int n=arr.length;
    int evensum=0,oddsum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            evensum+=arr[i];
        }else{
            oddsum+=arr[i];
        }
    }
    System.out.println("even"+evensum+"djjd"+oddsum);
  }

// Calculates the sum of all those products.---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Calculates the sum of all those products.---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
public static void main(String[]args){
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int sum=0;
      for(int i=1;i<=10;i++){
          int val=n*i;
          System.out.print(val+" ");
          sum+=val;
      }
      System.out.println("sum is "+sum);
  }
// print all even numbers first and odd numbers afterward---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  public static void main(String []args){
      Scanner sc=new Scanner(System.in);
      int[]arr={1,23,45,3,4,56};
      for(int i=0;i<arr.length;i++){
          if(arr[i]%2==0){
              System.out.print(arr[i]+" ,");
      }
      }
      for(int i=0;i<arr.length;i++){
          if(arr[i]%2!=0){
              System.out.print(","+arr[i]);
          }
      }
  }
// minimum element at the front and the maximum at the end---------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
using sortng
  public static void main(String[]args){
      int []arr={1,4,3,55,6};
      Arrays.sort(arr);
      System.out.println("minimum"+arr[0]);
      System.out.println("maximum"+arr[arr.length-1]);
  }
// All positive numbers to the front
// All negative numbers to the end--------------------)------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 public static void main(String[] args) {
        // System.out.println("Try programiz.pro");
        int []arr={-1,4,-56,4};
        int n=arr.length;
        int left=0;
        int right=n-1;
        while(arr[left]<arr[right]){
            while(arr[left]>0&&arr[left]<arr[right]){
                left++;
            }
            while(arr[right]<0&& arr[left]<arr[right]){
                right--;
            }
            while(arr[left]<arr[right]){
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
            }
        }
        for(int x:arr){
        System.out.print(x+",");
    }
    }
// prime number 1 to 30 ke beach mai-----------------------------------------------------------------------------------------------------------------------------------------------------
    static boolean isprime(int n){
        if(n<2)return false;
        if(n==2)return true;
        if(n%2==0)return false;
        for(int i=3;i<=Math.sqrt(n);i=i+2){
            if(n%i==0)return false;
        }
        return true;
    }
    public static void main(String[] args) {
        // System.out.println("Try programiz.pro");
        // Scanner sc=new Scanner(System.in);
        // int n=sc.nextInt();
        for(int i=0;i<30;i++){
            if(isprime(i)){
                System.out.print(i+" ");
            }
        }
        
    }
// check armstrong number hai ya nahi-------------------------------------------------------------------------------------------------------------------------------------
Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ori,rem;
        int res=0;
        ori=n;
        while(n!=0){
            rem=n%10;
            res+=rem*rem*rem;
            n=n/10;
        }
        if(res==ori){
            System.out.println("arm");
        }else{
           System.out.println("not"); 
        }
        
    } 
// remove duplicates in array ----------------------------------------------------------------------------------------------------------------------
public static void main(String []args){
    int[]args={1,3,4,3,4};
    Set<Integer>st=new LinkedHashSet<>();
    for(int x:st)st.add(x);
    System.out.println(st);
}

// check if arrayis sorted or not------------------------------------------------------------------------------------------------------------------------------
static boolean issor(int []arr){
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }


















































