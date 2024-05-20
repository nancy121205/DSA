#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cin.ignore();           //we write this to ignore the enter character(\n), which compiler takes in the buffer
                            //aur fir ye andar aa jata hai getline use karne me
                            //we can also write ho wmany characters to ignore, for eg -ignore(3)
    char arr[n+1];
    cout<<"Enter array : "<<endl;
    cin.getline(arr,n);
    cout<<"Largest word : ";
    int count=0, maxCount=0;
    int start=0;
    for(int i=0;i<n+1;i++){
        
        if(arr[i]==' ' || arr[i]=='\0'){
            if(count>maxCount){
                maxCount=count;
                start=i-count;
            }
            count=0;
        }
        else{
            ++count;
        }
    }
    for(int j=0; j<maxCount; j++){
        cout<<arr[start];
        ++start;
    }
    return 0;
}