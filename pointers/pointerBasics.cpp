#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *p = &a;
    cout<<*p<<endl;     //15
    cout<<p<<endl;      //f08
    p++;
    cout<<p<<endl;      //f0c       since int is 4 bytes 8 9 a b c
    p--;
    cout<<p<<endl;      //f08
    (*p)++;
    cout<<*p<<" "<<a<<endl;     //16 16
    *p = 90; 
    cout<<a<<endl;      //90


    cout<<p<<endl;      //f08
    cout<<p+1<<endl;    //f0c   //+1 karne se next index pe jayega, na ki next memory location, so it wont change from f08 to f09. It would be f08 to f0c
    cout<<p<<endl;      //f08

    p=p+1;              
    cout<<p<<endl;      //f0c
    return 0;
}