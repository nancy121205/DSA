#include <iostream>
using namespace std;

int main(){

    int x,trying;
    cout<<"Enter"<<endl;
    cin>>x;
    trying = (x==9||x==5); //trying will be 0 if x is anything other than 9 or 5 because of OR operation and it will be 1 if its either 9 or 5
    cout<<"now "<<trying; 
    return 0;
}