#include <iostream>
using namespace std;

int main(){
    int column;
    cout<<"Enter the no of column"<<endl;
    cin>>column;
    for(int i=1; i<=3; i++){
        for(int j=1; j<=column; j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
