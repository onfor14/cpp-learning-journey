//In this I will be writing some examples for while loop
//1.Printing numbers from 1 to 10
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=1;
    cout<<"Numbers from 1 to 10----->";
    while(n<=10){
        cout<<n;
        if(n!=10)
            cout<<",";
        n++;
    }
    //Printing even numbers from 1 to 20
    n=1;
    cout<<endl;
    cout<<"Even Numbers from 1 to 20----->";
    while(n<=20){
        if(n%2==0)
        {
            cout<<n;
            if(n!=20)
                cout<<",";
        }n++;
    }
    //Printing numbers in reverse from 10 to 1
    n=10;
    cout<<endl;
    cout<<"Numbers from 10 to 1----->";
    while(n>=1){
        cout<<n;
        if(n!=1)
            cout<<",";
        n--;
    }
    //Printing Sum of N natural numbers
    cout<<endl;
    int sum =0, i=1;
    cout<<"Enter N: ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum;
    //Printing Multiplication Table
    cout<<endl;
    i=1;
    cout<<"Enter the needed Multiplication Table: ";
    cin>>n;
    while(i<=10){
        cout<<i*n;
        if(i!=n)
            cout<<",";
        i++;
    }

}

