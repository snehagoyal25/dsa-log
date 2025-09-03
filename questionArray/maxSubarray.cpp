// Maximum subarray sum = need to find the sum of the maximum array-> can be done in 3 ways
// Tricky when there is a negative number in the array. 
// Brute force =  the simple approach 
// optimized 
// kadane's algorithm

#include<iostream>
using namespace std;

void maxSubarraySum(int *arr,int n){
    int maxSum = INT_MIN; // we should not initialize the value of maxSum as it can be less than 0.
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currentSum = 0 ;
            for(int i=start;i<=end;i++){
                currentSum += arr[i];
            }
            cout<<currentSum<<",";
            maxSum = max(maxSum,currentSum); // In cpp their is function (max) which compares two values 
            // In this case it will compare the currentSum of every subarray to maxSum and will give the maxSubarray.
        }
        cout<<endl;
    }
    cout<<"Maximum subarray sum : "<<maxSum<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxSubarraySum(arr,n);
    return 0;
}

// time complexity = O(n^3); // Three loops are there .
// INT_MIN  and  INT_MAX  are predefined macros in cpp.