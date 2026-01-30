//Taking input array and printing it
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10], i=0;
    cout<<"Enter array-10 integers:"<<endl;
    while(i<10)
    {
        cin>>a[i];
        i++;
    }
    cout<<"The Array List are: "<<endl;
    i=0;
    while(i<10)
    {
        cout<<a[i];
        if(i!=9)
            cout<<",";
        i++;
    }
}