
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
#include<iostream>
using namespace std;
int evenodd(int n){
    if(n%2==0){
        cout<<n<<"is a even number "<<endl;
    }
    else{
        cout<<n<<" is a odd number "<<endl;
    }
    return n;
}
int main(){
evenodd(5);
return 0;
}