#include <iostream>
using namespace std;
int main(){
    
    int rows;
    cout<<"Enter no of rows : "<<endl;
    cin>>rows;
    for(int i=rows; i>=1; i--){
        
        for(int k=1; k<=i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}