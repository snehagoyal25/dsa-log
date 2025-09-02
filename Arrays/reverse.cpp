// An array can be reversed using two ways 
// Using extra space
// Without using extra space 


// using extra space = meaning an extra array is maded that is copyArr which is using space. 

// #include<iostream>
// using namespace std;

// void printArr(int *arr,int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }
// int main(){
//     int arr[]= {5,4,3,9,2};
//     int n = sizeof(arr) / sizeof(int);

//     // int copyArr[n] // for making new copy array of same size but this is not supporting so need to do dynamic allocation 
//     int *copyArr= new int[n]; // original size array // dynamic allocation.
//     for(int i=0;i<n;i++){
//         int j=n-i-1;
//         copyArr[i]=arr[j];
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=copyArr[i];
//     }

//     printArr(arr,n);

//     return 0;
// }

// space complexity = It is the relation between the input size(that is the array size) and the extra space that is required by the program
// space complexity -> O(n) 
// Time complexity -> O(n)

// We have optimized version in which we can make our space complexity less by making it O(1) =  Without using extra space
// Time complexity will remain same but in this case half loop is running .

// This is 2 pointer approach. 

#include<iostream>
using namespace std;

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}
int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end= n-1;
    while(start<end){
        //swapping
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // instead of above 3 lines , in cpp we have a swap function which can do the same 
        // swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArr(arr,n);
    return 0;
}
