#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter sorted elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to search"<<endl;
    cin>>num;
    int position=-1;
    int min=0;
    int max=n;
    while(position==-1){
        int mid=(min+max)/2;
        
        if(arr[mid]==num){
            position=mid;
            break;
        }

        else if(mid==0||mid==n-1){
            break;
        }

        else{
            if(arr[mid]<num){
                min=mid;
            }
            else{
                max=mid;
            }
        }
    }
    
    if(position==-1){
        cout<<"Number not found!";
    }
    else{
        cout<<"Number found at : "<<position;
    }
    

    return 0;
}