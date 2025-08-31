//array is 2,4,6,8,10,12,14,16 and we need to search for key = 10 . 
// in this array can be sorted as well unsorted 
// return index on which the key is present 
#include<iostream>
using namespace std ;

int linearSearch(int *arr, int n, int key){
 for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
 }
 return -1;
}

int main(){
    int arr[]={0,2,4,6,8,10,12};
    int n = sizeof(arr)/sizeof(int);

    cout<< linearSearch(arr,n,10);
    return 0;
}

// Time complexity = It is the relation between the input size(that is the array size) and the number of operation performed.
//O(n) -> as i increases the operation also increases that is in the linear fashion