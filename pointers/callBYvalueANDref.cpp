#include <iostream>
using namespace std;

void swapv(int p, int q){
    int temp = p;
    p=q;
    q=temp;
}

void swapr(int *p, int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

int main(){
    int a=10,b=20;
    swapv(a,b);
    cout<<a<<" "<<b<<endl;
    swapr(&a, &b);
    cout<<a<<" "<<b<<endl<<endl;;
    
    a=10,b=20;
    cout<<a<<" "<<b<<endl;
    int *aptr=&a, *bptr=&b;
    swapr(aptr, bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}
