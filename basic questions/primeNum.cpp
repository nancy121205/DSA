#include <iostream>
using namespace std;

void prime(int x, int y){
    for(int i=x;i<=y;i++){
        
        if(i==1){
            continue; //skipping this iteration coz 1 is neither prime nor composite.
        }

        for(int j=2; j<=i; j++){
            if(j == i){
                cout<<i<<" ";
                break;
            }

            if(i%j == 0){
                break;
            }
        }

    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers to find prime numbers between them"<<endl;
    cin>>a>>b;
    prime(a,b);
    return 0;
}