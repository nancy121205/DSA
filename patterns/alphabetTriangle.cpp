#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    for(int i=1; i<=row; i++){
        char ch='A';
        // for(int k=1; k<=row-i; k++){
        //     cout<<"  ";
        // }
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}