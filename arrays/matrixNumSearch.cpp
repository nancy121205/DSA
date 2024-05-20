#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row and col size"<<endl;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    int num;
    cout<<"Enter the no to search"<<endl;
    cin>>num;

    //initially we will keep our pointer at top right
    int r=0,c=col-1;
    int count=0;
    bool found=0;
    while(true){
        
        if(arr[r][c]==num){
            cout<<"Found at "<<r<<","<<c<<endl;
            found=1;
            break;
        }
        else{
            if(num>arr[r][c]){
                ++r;
            }
            else{
                --c;
            }
        }
        
        ++count;
        if(count>row*col && found==0){
            cout<<"Not found !"<<endl;
            break;
        }
        
    }
    return 0;
}