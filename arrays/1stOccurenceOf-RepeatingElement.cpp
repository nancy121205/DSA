#include<iostream>
using namespace std;

//1st occurenece of only positive integers

int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    int maxNo=-999999;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxNo=max(maxNo,arr[i]);
    }

    int copy[maxNo+1];  
    for(int i=0;i<maxNo+1;i++){
        copy[i]=-1;
    }
    
    int repeatingNo= -1;
    for(int i=0;i<n;i++){
        if(copy[arr[i]]==arr[i]){            //if there is already num present at the index, thus that no is repeating no
            repeatingNo=copy[arr[i]];
            break;
        }
        else{
            copy[arr[i]]=arr[i];            //creating an another array and storing numbers one by one of arr to copy, suppose at index 4, the number is 8, and 8 is also repeated at index 10, thus we can find out first occurence of number
        }
    }    

    if(repeatingNo==-1){
        cout<<"No repeating no found";
    }
    else{
        int index;
        for(int j=0;j<n;j++){
            if(arr[j]==repeatingNo){
                cout<<"First occurrence of "<<repeatingNo<<"(repeating no) found at index "<<j;
                break;
            }
        }
    }
return 0;
}