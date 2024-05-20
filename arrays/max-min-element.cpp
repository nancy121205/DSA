#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;      //also can write arr[o]      //intmin is minimum int value possible in c++
    int minNo=INT_MAX;      //also can write arr[o]      //intmax is maximum int value possible in c++
    
    /*
    for(int i=0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        if(arr[i]<minNo){
            minNo=arr[i];
        }
        
    }*/

    for(int i=0;i<n;i++){           //another nethod
        maxNo=max(maxNo,arr[i]);    //predefined method - max(), min()
        minNo=min(minNo,arr[i]);
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    return 0;
}