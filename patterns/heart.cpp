#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size(only numbers like 5,9,13,17,21,25... etc)"<<endl;
    cin>>size;

if(size==5){       //only for size 5
    for(int i=1;i<=size/4; i++){            //upper part
            for(int j=size/4; j>i-1; j--){
                cout<<"  ";
            }
            for(int k=1; k<=2*i-1; k++){
                cout<<"* ";
            }
            for(int l=2*(size/4); l>2*i-1; l--){
                cout<<"  ";
            }
            for(int m=1; m<=2*i-1; m++){
                cout<<"* ";
            }
            cout<<endl;
    }
}

else{
    for(int i=1;i<=size/4; i++){        //upper part for sizes > 5
        int x=size/9;
            for(int j=size/4; j>i-1; j--){
                cout<<"  ";
            }
            for(int k=1; k<=2*i-1; k++){
                if(i<=x){
                    cout<<"  ";
                }
                else{
                    cout<<"* ";
                }
            }
            for(int l=2*(size/4); l>2*i-1; l--){
                cout<<"  ";
            }
            for(int m=1; m<=2*i-1; m++){
                if(i<=x){
                    cout<<"  ";
                }
                else{
                    cout<<"* ";
                }
            }
            cout<<endl;
    }
}

    for(int i=1;i<=size;i++){                   //to improve shape
        cout<<"* ";
    }
    cout<<endl;

    if(size!=5){
        for(int i=1;i<=size;i++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0; i<size/2+1; i++){              //lower part for all sizes
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=size-2*i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}