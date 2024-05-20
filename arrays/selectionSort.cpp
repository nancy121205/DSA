#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter the size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        
        for(int j=i;j<n;j++){            //find minimum of unsorted array and swap with beginning 
            if(arr[j] < arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp; 
            }
        }
    }
    
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}