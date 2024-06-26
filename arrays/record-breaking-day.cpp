/*

    Isyana is given the number of visitors at her local theme park on N consecutive
    days. The number of visitors on the i-th day is Vi
    . A day is record breaking if it
    satisfies both of the following conditions:
    ● The number of visitors on the day is strictly larger than the number of
    visitors on each of the previous days.
    ● Either it is the last day, or the number of visitors on the day is strictly larger
    than the number of visitors on the following day.
    Note that the very first day could be a record breaking day!
    Please help Isyana find out the number of record breaking days.
    
    Input
    The first line of the input gives the number of test cases, T. T test cases follow.
    Each test case begins with a line containing the integer N. The second line
    contains N integers. The i-th integer is Vi.
    
    Output
    For each test case, output one line containing Case #x: y, where x is the test case
    number (starting from 1) and y is the number of record breaking days.
    
    Constraints
    Time limit: 20 seconds per test set.
    
    Memory limit: 1GB.
    1 ≤ T ≤ 100.
    0 ≤ Vi ≤ 2 × 10^5
    
    Test set 1
    1 ≤ N ≤ 1000.
    
    Test set 2
    1 ≤ N ≤ 2 × 10^5 for at most 10 test cases.
    For the remaining cases, 1 ≤ N ≤ 1000.

*/

#include<iostream>
using namespace std;
int main(){
    //a record breaking day is the one which is greater than all previous values && also greater than the following day
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int days=0, maxNo=arr[0];

    for(int i=0;i<n;i++){               //O(n)
        if(i==0){
            if(arr[i]>arr[i+1]){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        else if(i==n-1){
            if(arr[i]>maxNo){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        else{
            if(arr[i]>maxNo && arr[i]>arr[i+1]){
                days++;
                cout<<arr[i]<<endl;
            }
        }
        maxNo=max(maxNo,arr[i]);
    }
    cout<<"Number of record breaking days : "<<days;
    return 0;
}
