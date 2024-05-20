#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num, no_of_digits=0, an=0;
    cout<<"Enter the number to check if armstrong no or not"<<endl;
    cin>>num;
    int num1=num, num2=num;
    if(num==0){
        cout<<"Enter a valid no"<<endl;
    }
    else{
        while(num1!=0)
        {
            num1/=10;
            no_of_digits++;
        }
        while(num2!=0){
            int n=num2%10;
            an = an + pow(n,no_of_digits);
            num2/=10;
        }
        cout<<endl;
        if(num==an){
            cout<<an<<endl;
            cout<<"It is an armstrong no"<<endl;
        }
        else{
            cout<<an<<endl;
            cout<<"It is not an armstrong no"<<endl;
        }
    }
    return 0;
}