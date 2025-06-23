// Data structures are ways for arranging data .

// Arrays : linear collection of same type of elements that are sorted together in contiguous memory spaces.
// creating an array : 3 ways 
// int marks[50];
// int marks[50] = {1,2,3};
// int marks[] = {1,2,3};

#include<iostream>
using namespace std;
int main (){
    int marks[50];
    cout<<marks[1]<<endl; // 0
    cout<<marks[2]<<endl; // 0 or garbage value 
    cout<<marks[50]<<endl; // garbage value as index does not exists.

    int mark[50] = {1,2,3};
    cout<<mark[0]<<endl;  // 1
    cout<<mark[1]<<endl;  // 2 
    cout<<mark[2]<<endl;  // 3
    cout<<mark[3]<<endl;  // 0

    int markss[] = {1,2,3};
    cout<<markss[0]<<endl;  //1 
    cout<<markss[1]<<endl;  //2
    cout<<markss[2]<<endl;  //3
    cout<<markss[3]<<endl;  // garbage value 
    return 0;
}

// Output in an array 
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,2,3,4,5};
    int n = sizeof(array)/sizeof(int);

for(int i=0;i<=n-1 ;i++){
    cout<<array[i]<<endl;
}
    return 0;
}

// Input in an array. 
#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    // int arr[n]; // giving error but running so we will do dynamic memory allocation .
     int *arr = new int[n];
    int n =sizeof(arr)/sizeof(int);
    cout<<"Enter values of array : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}