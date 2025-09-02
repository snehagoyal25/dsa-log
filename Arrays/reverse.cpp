// An array can be reversed using two ways 
// Using extra space
// Without using extra space 


// using extra space = meaning an extra array is maded that is copyArr which is using space. 
#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[]= {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);

    // int copyArr[n] // for making new copy array of same size but this is not supporting so need to do dynamic allocation 
    int *copyArr= new int[n]; // original size array // dynamic allocation.
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[i]=arr[j];
    }

    for(int i=0;i<n;i++){
        arr[i]=copyArr[i];
    }

    printArr(arr,n);

    return 0;
}