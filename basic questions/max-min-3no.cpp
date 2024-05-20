#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    int max = (a>b) ? ((a>c)?a:c) : ((b>c) ?b:c);
    int min = (a<b) ? ((a<c)?a:c) : ((b<c) ?b:c);
    cout<<"The max is : "<<max<<endl;
    cout<<"The min is : "<<min<<endl;
    return 0;
}