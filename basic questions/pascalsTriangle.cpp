#include<iostream>
using namespace std;

int fact(int o){
    int fact=1;
    for(int i=1; i<=o; i++){
        fact *= i;
    }
    return fact;
}

int ncr(int x, int y){
    return fact(x)/(fact(x-y)*fact(y));
}

int main(){
    int n;
    cout<<"Enter the no of rows ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int space=1; space<n-i; space++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}