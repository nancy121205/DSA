#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int n1=n;

    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s,add=0;                //sum is user entered sum and add is our calculation
    cout<<"Enter sum"<<endl;
    cin>>s;

    int loop=(n*(n+1))/2;
    int i,j=0;
    int startindex,endindex;

    for(i=0;i<loop;i++){
        
        if(n1==0){
            ++j;
            n1=n-j;
            add=0;
            startindex=n-n1;
        }
        
        add=add+arr[n-n1];

        if(add==s){
            cout<<"Sum exists "<<endl;
            endindex=n-n1;
            cout<<"Starting index = "<<startindex<<" Ending index = "<<endindex;
            break;
        }

        if(i==loop-1 && add!=s){          //if its last iteration and sum not found 
            cout<<"Given sum doesnt exist !"<<endl;
            break;
        }

        --n1;
    }

    return 0;
}