#include <iostream>
using namespace std;
int main(){
    
    int rows;
    cout<<"Enter no of rows : "<<endl;
    cin>>rows;
    cout<<endl;
    for(int i=1; i<=rows; i++){
        for(int j=0; j<i; j++){
            if((i+j)%2==1){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}