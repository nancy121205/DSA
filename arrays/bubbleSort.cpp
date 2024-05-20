#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number of elements"<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter the numbers to arrange them in ascending order"<<endl;
    for(int i=0; i<num; i++){
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"The numbers you entered are : "<<endl;
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The numbers in ascending order by bubble sort are : "<<endl;

    for(int i= 0; i<num-1; i++){
        for(int j=0; j<num-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}