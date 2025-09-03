// Print subarrays -> Subarray is continupus part of an array. 
// Subsequence -> It can contain non-continuous part of an array.-> but there is condition that the element which is coming first in the given array will come first only 
// for eg : arr= 1,2,3,4,5 -> it could be 135 not 153.

#include<iostream>
using namespace std;

void printSubarrays(int *arr,int n){
    for(int start=0;start<n;start++){ // values will go from 0 to 4   // will run n times
        for(int end=start;end<n;end++){             // will run n times
            // cout<<"("<<start<<","<<end<<")"<<" ";
            for(int i= start;i<=end;i++){    // will run n times 
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    printSubarrays(arr,n);
    return 0;
}

// so time complexity will be O(n^3).
// By using string the time complexity can be better which is 0(n^2).