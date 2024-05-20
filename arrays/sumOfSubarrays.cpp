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

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];

            cout<<"The sum of subarray (";
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<") is : "<<sum<<endl;
            
        }
    }
    return 0;
}