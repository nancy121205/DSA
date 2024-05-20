#include <iostream>
using namespace std;

//smallest positive missing number eg- -9,-4,0,1,3,4   then missing +ve no : 2

int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    int arr[n];
    int maxs=1e6;
    bool check[maxs];

    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            check[arr[i]]=1;
        }
        else{
            check[arr[i]]=0;
        }
    }

    int ind=1;
    while(true){
        if(check[ind]==0){
            break;
        }
        ++ind;
    }
    cout<<"smallest positive missing no : "<<ind;
    return 0;
}