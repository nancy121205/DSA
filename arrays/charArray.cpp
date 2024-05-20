#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','p','p','l','e'};
    char barr[]={'a','p','p','l','e','\0'};
    char parr[]="apple";
    string s="yoink";
    cout<<arr<<endl;        //op -> appleapple
    cout<<barr<<endl;       //op -> apple
    cout<<parr<<" "<<parr[5]<<endl;       //op -> apple
    cout<<s<<" "<<s.length()<<endl;      //op -> yoink 5
    return 0;
}