// In Binary search the array must be sorted.

#include<iostream>
using namespace std;

int binSearch(int *arr,int n,int key){
    int start=0 ,end = n-1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid; // key found if value of mid is equal to the key needed. 
        }
        else if(arr[mid]<key){ // need to search in second half 
            start = mid+1;
        }
        else{ // need to search in first half
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);

    cout<<binSearch(arr,n,12);
    cout<<binSearch(arr,n,44); // will return -1
    return 0;
}

// Time and space complexity 
// Time complxity - relation b/w input size(here is n)  and no. of operation(how many times id the loop running).
// O(log n) = This is good time complexity as compared to linear search 