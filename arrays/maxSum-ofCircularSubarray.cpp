#include<iostream>
#include <climits>
using namespace std;
int main(){

    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter elements"<<endl;
    int arr[size];
    int totalSum=0;

    for(int i=0;i<size;i++){
        cin>>arr[i];
        totalSum+=arr[i];
        arr[i]=(-1)*arr[i];

    }

    int currSum=0;
    int nonWrap=INT_MIN;

    for(int i=0;i<size;i++){            //kadane's algo for nonWrap elements
        currSum+=arr[i];
        if(currSum<=0){
            currSum=0;
        }
        nonWrap=max(nonWrap,currSum);
    }

    int sum=totalSum + nonWrap;
    cout<<"Max circular array Sum : "<<sum;

    return 0;
}