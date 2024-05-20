#include<iostream>
using namespace std;
int main(){
    int num=0;
    int rows;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    cout<<endl;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            num++;
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}