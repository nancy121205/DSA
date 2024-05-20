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

    cout<<"Spiral matrix : "<<endl;

    int row_st=0;
    int row_nd=row-1;
    int col_st=0;
    int col_nd=col-1;

    int count=0;                        //count is total no of elements 

    while(count<row*col){
        
        if(count<row*col){
            for(int i=col_st; i<=col_nd; i++){
                cout<<arr[row_st][i]<<" ";
                ++count;
            }
        }
        
        if(count<row*col){
            for(int i=row_st+1; i<row_nd; i++){
                cout<<arr[i][col_nd]<<" ";
                ++count;
            }
        }

        if(count<row*col){
            for(int i=col_nd; i>=col_st; i--){
                cout<<arr[row_nd][i]<<" ";
                ++count;
            }
        }

        if(count<row*col){
            for(int i=row_nd-1; i>row_st; i--){
                cout<<arr[i][col_st]<<" ";
                ++count;
            }
        }

        ++row_st;
        --row_nd;
        ++col_st;
        --col_nd;
    }

    return 0;
}