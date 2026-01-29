//Here I will be writing a program to find out if the given integer is even or odd using functions
#include<bits/stdc++.h>
using namespace std;
void eo(int n)
{
    if(n%2==0)
        cout<<"The Given Number is Even";
    else    
        cout<<"The Given Number is Odd";
}
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    eo(n);
}