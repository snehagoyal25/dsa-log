// // Arrays are passesd by reference 
// // void printArr(int arr[]){...........} // same 
// // void printArr(int *arr){............} // same 

// #include<iostream>
// using namespace std ;

// void func(int arr[]){  // array as a pointer
//     arr[0] = 1000;
// }

// void func2(int *ptr[]){ // array as an argument 
//     ptr[0] = 1000;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<<arr<<endl; // print garbage hexadecimal value 
//     cout<<*arr<<endl; // 1 // arr[1]
//     cout<<*(arr+1)<<endl; // 2 // arr[2]

//     func(arr); // passing array name is eqvivalent to the pointer 
//     cout<<arr[0]<<endl; // 1000

//     func2(arr);
//     cout<<arr[0]<<endl; // 1000
//     return 0;
// }