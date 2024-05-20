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

    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){

            int temp=arr[j][i];
            arr[j][i]=arr[i][j];
            arr[i][j]=temp;
            
        }
    }
    cout<<"Transpose : "<<endl;
    for(int i=0; i<col; i++){           //col and row will be reversed, so loop me bhi changes
        for(int j=0; j<row; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}