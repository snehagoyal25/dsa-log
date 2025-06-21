// We have memory location as a hexadecimal numbers which are from 0 to 9 and a to f -> total 16 decimals are there .


// evrytime you run this code , it will give different address as a is a local variable.

// #include<iostream>
// using namespace std ;
// int main(){
//     int a = 10;
//     cout<< &a<<endl;
//     return 0;
// }

// This will give same address when you run the code as a variable is defined globally.

// #include<iostream>
// using namespace std ;
// int a = 10 ;
// int main(){
//     cout<< &a<<endl;
//     return 0;
// }


// Pointers => A special variable that stores address of another variable .
// int *ptr = &a;
// float *ptr = &b;
// char *ptr = &c;
// int ** ptr2 = &ptr;

// Pointers take 8 bytes of memory space even it is a integer or float .

// #include<iostream>
// using namespace std;
// int main (){
//     int a = 6;
//     float pi =3.14;
//     int *ptr =&a;
//     float *ptr2 = &pi;
//     cout<<&a<<" = "<<ptr<<endl;   // 0xe970fffdcc = 0xe970fffdcc
//     cout<<&pi<<" = "<<ptr2<<endl; // 0xe970fffdc8 = 0xe970fffdc8

//     int **pptr = &ptr;
//     // stores address of pointer to pointer 
//     cout<<pptr<<" = "<<&ptr<<endl; // 0xe970fffdc0 = 0xe970fffdc0 

//     cout<<sizeof(ptr)<<endl;  // 8 bytes
//     cout<<sizeof(ptr2)<<endl; // 8 bytes
//     return 0;
// }

// Dereference operator = Gets the value of the variable pointed by any pointer. 
// * operator lets us directly access and modify the value of variable 

// #include<iostream>
// using namespace std;
// int main(){
//     int  a = 10;
//     int *ptr = &a;

//     cout<<ptr<<endl;   // 0xe63efffaa4
//     cout<<*ptr<<endl;  // 10
//     cout<<*(&a)<<endl; // 10
//     // can change the value also 

//     *ptr = 20;
//     cout<<a<<endl; // 20
//     return 0;
// }

// Null pointer 
// We assign NULL value to a pointer to show that it  doesnot point to any location .
// Dereferencing Null pointer is not possible as it results in the error . It is called as segmentation fault 

// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr;
//     cout<<ptr<<endl; // any garbage address will print out 

     // If assigning null then 0 will be print out as address
//     int *ptr2 = NULL;
//     cout<<ptr2<<endl;

//     // Dereferencing : code execution is stopped after this 
//     cout<<*ptr2<<endl;
//     cout<<"Hey thereee"; // not printed .
//     return 0;
// }


// Passing Arguments .