#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;

    int y =25;
    ptr= &y;
    cout<<*ptr<<endl; // output is 25

    // but it is not possible with array pointers.
    int arr[5];
    cout<<arr<<endl; // some address
    int y=23;
    // arr=&y;   // this shows error that array pointers cannot be override. 
    return 0;
}