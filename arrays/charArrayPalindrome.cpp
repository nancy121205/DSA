#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size : "<<endl;
    cin>>size;
    char arr[size+1];
    cout<<"Enter array : "<<endl;
    cin>>arr;
    bool found=1;
    for(int i=0; i<size/2; i++){
        if(arr[i]!=arr[size-1-i]){
            cout<<"Not palindrome "<<endl;
            found=0;
            break;
        }
    }
    
    if(found){
        cout<<"It is a palindrome"<<endl;
    }
    return 0;
}