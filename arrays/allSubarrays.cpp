#include <iostream>
using namespace std;
int main(){

    int size;
    cout<<"Enter size"<<endl;
    cin>>size;

    cout<<"Enter elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"All subarrays : "<<endl;

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}