#include <iostream>
#include <climits>
using namespace std;
int main(){

    //here max sum should be greater than zero

    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int maxSum=INT_MIN;
    int currSum=0;
    //kadane's algo
    for(int i=0;i<size;i++){
        currSum+=arr[i];
        if(currSum<=0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }

    // for(int i=0;i<size;i++){             //better solution
    //     int sum=0;
    //     for(int j=i;j<size;j++){
    //         sum+=arr[j];
    //         maxSum=max(maxSum,sum);
    //     }
    // }

    // for(int i=0;i<size;i++){             //brute force approach
    //     for(int j=i;j<size;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=arr[k];
    //         }
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    
    cout<<"Max Sum : "<<maxSum;
}