#include<iostream>
using namespace std;
void factors(int x){
        for(int i=1; i<=x; i++){
            if(x%i==0){
                cout<<i<<" ";
            }
        }
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    factors(num);
    return 0;
}