#include <iostream>
using namespace std;

int main(){
    int a,b,lcm;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int small = (a<b)?a:b;
    int large = (a>b)?a:b;

    for(int i=1; i<=small; i++){
        if( (large*i) % small ==0){
            lcm=large*i;
            break;
        }
    }
    cout<<"The lcm of "<<a<<" and "<<b<<" is "<<lcm;

    return 0;
}