#include <iostream>
using namespace std;

int main(){
    int a,b,gcd;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int min=(a<b)?a:b;

    for(int i=min; i>0; i--){
        if(a%i==0 && b%i==0){
            gcd = i;
            break;
        }
    }
    
    // while(a!=b){         //another method-here both a and b are the answers
    //     if(a>b){
    //         a=a-b;
    //     }
    //     else{
    //         b=b-a;
    //     }
    // }
    
    cout<<"The gcd of "<<a<<" and "<<b<<" is "<<gcd;
    return 0;
}
