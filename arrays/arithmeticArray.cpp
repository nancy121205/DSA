#include<iostream>
using namespace std;
int main(){
    //an arithmetic array is the longest subarray possible of the given array which has the same differnce between 2 consecutive elements
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int oldDiff,newDiff,length=2,maxLength=2;

    for(int i=1;i<n;i++){

        oldDiff=arr[i]-arr[i-1];
        newDiff=arr[i+1]-arr[i];

        if(oldDiff==newDiff){
            ++length;
        }

        else{
            
            if(length>maxLength){
                maxLength=length;
            }
            length=2;
        }

    }

    cout<<"Maximum length of arithmetic array is : "<<maxLength;

    return 0;
}