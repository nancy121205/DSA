#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=arr[0];
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
        cout<<"Max till a["<<i<<"] is : "<<maxNo<<endl;
    }
    return 0;
}