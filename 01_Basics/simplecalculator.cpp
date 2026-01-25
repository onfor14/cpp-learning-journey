//Simple Calculator Program
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    char sym;
    cout<<"Enter Operation: ";
    cin>>n1;
    cin>>sym;
    cin>>n2;
    if (sym=='+')
    {
        cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
    }
    else if(sym=='-'){
        cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;
    }
    else if(sym=='*'){
        cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
    }
    else if(sym=='/'){
        cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
    }
    else if(sym='%'){
        cout<<n1<<"%"<<n2<<"="<<n1/n2<<endl;
    }
}