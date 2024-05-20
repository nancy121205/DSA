#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number to search"<<endl;
    cin>>num;
    int position=-1;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at "<<position+1;
    }
    
    return 0;
}