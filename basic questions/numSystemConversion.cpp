#include<iostream>
#include<cmath>
using namespace std;

//any type --> decimal  =  radix method 
//decimal --> any type  =  double dabble 

int binarytooctal(long n){
    int result=0,sum=0,i=0,j=0;
    while(n!=0){                        //binary to decimal by radix method
        int rem = n%10;
        sum += rem*pow(2,i);
        n/=10;
        i++;
    }
    while(sum!=0){                      //decimal to octal by double dabble
        int rem=sum%8;
        result = result+rem*pow(10,j);
        j++;
        sum/=8;
    }
    return result;
}

int binarytodecimal(long n){        //radix method
    int result=0,i=0;
    while(n!=0){
        int rem = n%10;
        result += rem*pow(2,i);
        n/=10;
        i++;
    }
    return result;
}

void binarytohex(long n){               //nancys method ^_^ (although lengthy TT)
    int i=0;
    long int num=n;
    while(num!=0){
        num=num/10000;
        ++i;
        cout<<endl;
    }
    if(i==0){
        cout<< 0;
    }
    else{
        int arr[i];                         //array coz of reverse order
        int l=0,dig1_in=0;
            while(n!=0){
                int sui=0;
                int dig1_in=n%10000;
                for(int k=0;k<4;k++){
                    int noi = dig1_in%10;
                    dig1_in = dig1_in/10;
                    sui = sui+ noi*pow(2,k);
                }
                arr[l] = sui;
                ++l;
                n=n/10000;     
            }
            char ch;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>9){
                ch=char(55+arr[j]);
                cout<<ch;
            }
            else{
                cout<<arr[j];
            }
        }
        
    }
}

long octaltobinary(long n){         
    long result=0,sum=0,i=0,j=0;
    while(n!=0){                    //octal to decimal by radix method
        int rem = n%10;
        sum += rem*pow(8,i);
        n/=10;
        ++i;
    }
    while(sum!=0){                      //decimal to binary by double dabble method
        int rem=sum%2;
        result = result+rem*pow(10,j);                                                                                                                                                                                                                                            
        ++j;
        sum/=2;
    }
    return result;
}

int octaltodecimal(long n){         //radix method
    int result=0, i=0;
    while(n!=0){  
        int rem = n%10;
        result += rem*pow(8,i);
        n/=10;
        ++i;
    }
    return result;
}

void octaltohex(long n){           
    int long result;
    int long res=octaltobinary(n);          //octal to binary 
    binarytohex(res);                       //binary to hex
}

long decimaltobinary(long n){        
    long result=0;
    int j=0;
    while(n!=0){                        //double dabble
        int rem=n%2;
        result = result+rem*pow(10,j);                                                                                                                                                                                                                                            
        ++j;
        n/=2;
    }
    return result;
}

int decimaltooctal(long n){         //double dabble
    int result=0, j=0;
    while(n!=0){                      
        int rem=n%8;
        result = result+rem*pow(10,j);
        j++;
        n/=8;
    }
    return result;
}

void decimaltohex(long int n){              
    long result=decimaltobinary(n);     //decimal to binary
    binarytohex(result);                //binary to hex
}

long hextobinary(string n){
    long result=0;
    int l=n.length();
    int x;
    int po=0;
    for(int i=l-1;i>=0;i--){            //hex to decimal
        char c=n[i];
        int j=c;
        if(j<58){
            j=j-48;
            x=decimaltobinary(j);       //decimal to binary
        }
        else{
            j=j-55;
            x=decimaltobinary(j);
        }
        result=result+x*pow(10000,po);
        ++po;
    }
    return result;
    
}

long hextooctal(string n){
    long yo=hextobinary(n);             //hex to binary
    long result=binarytooctal(yo);      //binary to octal
    return result;
}

long hextodecimal(string n){
    long yo=hextobinary(n);             //hex to binary
    long result=binarytodecimal(yo);    //binary to decimal
    return result;
}

int main(){
    int n;
    long num;
    string s;
    cout<<"MENU : \nBINARY TO OCTAL : 1 \nBINARY TO DECIMAL : 2 \nBINARY TO HEX : 3 \n"<<endl;
    cout<<"OCTAL TO BINARY : 4 \nOCTAL TO DECIMAL : 5 \nOCTAL TO HEX : 6 \n"<<endl;
    cout<<"DECIMAL TO BINARY : 7 \nDECIMAL TO OCTAL : 8 \nDECIMAL TO HEX : 9\n"<<endl;
    cout<<"HEX TO BINARY : 10 \nHEX TO OCTAL : 11 \nHEX TO DECIMAL : 12 \n"<<endl;
    cout<<"Enter the option no "<<endl;
    cin>>n;
    switch(n){
        case 1:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<binarytooctal(num);
        break;
        
        case 2:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<binarytodecimal(num);
        break;
        
        case 3:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : ";
        binarytohex(num);
        break;
        
        case 4:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<octaltobinary(num);
        break;
        
        case 5:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<octaltodecimal(num);
        break;
        
        case 6:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : ";
        octaltohex(num);
        break;
        
        case 7:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<decimaltobinary(num);
        break;
        
        case 8:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : "<<decimaltooctal(num);
        break;
        
        case 9:
        cout<<"Enter the number "<<endl;
        cin>>num;
        cout<<"The result is : ";
        decimaltohex(num);
        break;
        
        case 10:  
        cout<<"Enter the number "<<endl;
        cin>>s;
        cout<<"The result is : "<<hextobinary(s);
        break;
        
        case 11:
        cout<<"Enter the number "<<endl;
        cin>>s;
        cout<<"The result is : "<<hextooctal(s);
        break;
        
        case 12:
        cout<<"Enter the number "<<endl;
        cin>>s;
        cout<<"The result is : "<<hextodecimal(s);
        break;
    }
    return 0;
}      