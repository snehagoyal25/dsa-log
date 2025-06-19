
// Functions 
 
// #include<iostream>
// using namespace std;
// void greet(){                        // declaration 
//         cout<<"Hi function "<<endl;  // definition 
//     }
// void sum (int a ,int b){                 // a and b  are parameters 
//     cout<<"Sum is : "<<a+b<<endl;
   
// }
// int main(){
// greet();
// sum(3,5);  // 3 and 5 are arguments 
//     return 0;
// }

// int a; -> declare
// a = 10; -> assign

// Write a function to provide the product of two numbers .
// #include<iostream>
// using namespace std ;
// int product(int a,int b){
//     cout<<"Product is : "<<a*b<<endl;
//     return a*b;
// }
// int main(){
//     product(3,4);
//     return 0;
// }

// Write a function if the number is odd or even 
// #include<iostream>
// using namespace std;
// int evenodd(int n){
//     if(n%2==0){
//         cout<<n<<"is a even number "<<endl;
//     }
//     else{
//         cout<<n<<" is a odd number "<<endl;
//     }
//     return n;
// }
// int main(){
// evenodd(5);
// return 0;
// }


// Write a function to print factorial of a number , n 
// #include<iostream>
// using namespace std ;
// int factorialFunction(int n ){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//         // cout<<fact<<endl;
//     }
//     return fact;
// }
// int main (){
//     cout<<factorialFunction(3);
//     return 0;
// }


// Write a function to print if the number prime number . 
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if (n==1){
//         return false ; 
//     }

//     for(int i=2;i<n;i++){
//         if(n%i==0){   // non-prime numbers
//             return false ;
//         }
//     }
//     return true ;
// }
// int main(){
//     cout<<isPrime(7)<<endl; //1 -> true
//     cout<<isPrime(9)<<endl; //0 -> false 
//     return 0;
// }

// Function overloading 
// Multiple funtions with same name but different parameters .

// #include<iostream>
// using namespace std;

// int sum(int a,int b){
//     cout<<"sum = "<<a+b<<endl;
//     return a+b;
// }

// int sum (double a , double b){
//     cout<<"sum = "<<a+b<<endl;
//     return a+b;
// }

// int sum(int a,int b,int c){
//     cout<<"sum = "<<a+b+c<<endl;
//     return a+b+c;
// }
// int main(){

//     sum(5,6);
//     sum(1.5,2.5);
//     sum(2,3,4);
//     return 0;
// }
