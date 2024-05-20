#include<iostream>
using namespace std;
int main(){

    int size;
    cout<<"Enter size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int uns;
    for(int i=1;i<size;i++){
        uns=i;  //assume 1st ele is sorted and start with second, insert element in sorted array at correct position from unsorted array
        for(int j=0;j<i;j++){
            if(arr[uns]<arr[uns-1]){
                int temp=arr[uns];
                arr[uns]=arr[uns-1];
                arr[uns-1]=temp;
                --uns;
            }
        }
    }

    cout<<"Sorted array ; ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}