#include<iostream>
using namespace std;
int main(){

    int r1,c1,r2,c2;
    cout<<"Enter the row and col size of m1"<<endl;
    cin>>r1>>c1;
    cout<<"Enter the row and col size of m1"<<endl;
    cin>>r2>>c2;

    int m1[r1][c1];
    int m2[r2][c2];

    cout<<"Enter the elements of 1st matrix"<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>m1[i][j];
        }
    }

    cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>m2[i][j];
        }
    }

    //for matrix multiplication of two matrices, of sizes r1*c1 and r2*c2, c1=r2, and multiplied matrix size would be r1*c2
    int m[r1][c2];
    int sum;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            sum=0;
            for(int k=0; k<c1; k++){
                sum+=m1[i][k]*m2[k][j];
            }
            m[i][j]=sum;
        }
    }

    cout<<"The result is : "<<endl;

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}