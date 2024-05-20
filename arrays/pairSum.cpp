#include<iostream>
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

    int sumP;
    cout<<"Enter sum of pair"<<endl;
    cin>>sumP;

    int i,j;
    bool found=0;
    
    /*O(n) order */{

        int a=0,b=size-1;
        while(arr[a]!=arr[b]){                //O(n) complexity, but works only for sorted elements
            
            if(arr[a]+arr[b]==sumP){
                found=1;
                break;
            }

            if(arr[a]+arr[b]>sumP)
                --b;
            else
                ++a;

        }

        if(found){
        cout<<"The numbers are : "<<arr[a]<<", "<<arr[b];
        }
        else{
            cout<<"Numbers not found!";
        }

    }



    // for(i=0;i<size-1;i++){               //brute force
    //     for(j=i+1;j<size;j++){
    //         if(sumP==arr[i]+arr[j]){
    //             found=1;
    //             break;
    //         }
    //     }
    //     if(found){
    //         break;
    //     }
    // }

    // if(found){
    // cout<<"The numbers are : "<<arr[i]<<", "<<arr[j];
    // }
    // else{
    //     cout<<"Numbers not found!";
    // }
    
    return 0;
}