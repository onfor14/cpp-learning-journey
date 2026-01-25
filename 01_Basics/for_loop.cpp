//In This I will be writing some basic for loop programs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Printing numbers from 0 to 10
    for(int i=0;i<=10;i++){
        cout<<i;
        if(i!=10)
            cout<<",";
    }
    //Printing even numbers from 0 to 20
    cout<<endl;
    for(int i=0;i<=20;i++){
        if(i%2==0){
            cout<<i;
            if(i!=20)
                cout<<",";
        }
    }
    //Printing numbers in reverse from 10 to 0
    cout<<endl;
    for(int i=10;i>=0;i--){
        cout<<i;
        if(i!=0)
            cout<<",";
    }
    //Printing Sum of First N natural numbers
    cout<<endl;
    int n, sum=0;
    cout<<"Enter N: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
    //Multiplication Table
    cout<<endl;
    int m;
    cout<<"Enter Number for its Multiplication Table: ";
    cin>>m;
    for(int i =1;i<=10;i++){
        cout<<i*m;
        if(i!=m)
            cout<<",";
    }

}