#include <iostream>
using namespace std;
int main(){
  
    int a =7;
    int *ptr=&a;
    int **qtr= &ptr;

    cout<<*ptr<<endl;       //7
    cout<<ptr<<endl;        //20a

    cout<<&ptr<<endl;       //30a
    cout<<qtr<<endl;        //30a      

    cout<<qtr<<endl;        //30a      pointing ptr, value inside qtr ie. ptr ka address
    cout<<*qtr<<endl;       //20a      points data inside ptr, value inside ptr  ie. 2a00(a ka address)
    cout<<**qtr<<endl;      //7        points data inside a, value inside a is 7
    return 0;
}

/*
_____________________
| 2a00  |  a=7       |
| 3a00  |  ptr=2a00  |
| 4a00  |  qtr=3a00  |
|_______|____________|

*/