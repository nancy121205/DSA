#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size (only odd)"<<endl;
    cin>>n;
    int m=n/2;
    n=n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=m; i>=1; i--){
        for(int j=1; j<=m-i+1; j++){
            cout<<"  ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}