#include<iostream>
using namespace std;
int main(){
    int height, width;
    cout<<"Enter the height and width of rhombus / parallelogram "<<endl;
    cin>>height>>width;
    for(int i=1; i<=height; i++){
        for(int j=1; j<=height-i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=width; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}