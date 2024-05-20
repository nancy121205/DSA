#include<iostream>
using namespace std;
int main(){
    //a record breaking day is the one which is greater than all previous values && also greater than the following day
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int days=0, maxNo=arr[0];

    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        else if(i==n-1){
            if(arr[i]>maxNo){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        else{
            if(arr[i]>maxNo && arr[i]>arr[i+1]){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        maxNo=max(maxNo,arr[i]);
    }
    cout<<"Number of record breaking days : "<<days;
    return 0;
}