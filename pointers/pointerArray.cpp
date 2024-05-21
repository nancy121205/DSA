#include <iostream>
using namespace std;
int main(){
    int arr[]={5,6,7};
    cout<<*arr<<endl;           //5

    int *ptr=arr;
    cout<<arr<<endl;            //3fc
    cout<<ptr<<endl;            //3fc

    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";        //5 6 7
        ptr++;
    }

    cout<<endl;
    //arr++;        not possible,since it is a constant pointer, it cant be changed
    
    for(int i=0;i<3;i++){
        cout<<*(arr + i)<<" ";        //5 6 7
    }

    return 0;
}