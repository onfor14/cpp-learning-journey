//Maximum number among two integers using functions
#include<bits/stdc++.h>
using namespace std;
void MAX(int a, int b)
{
    if(a>b)
        cout<<a<<" is greatest"<<endl;
    else    
        cout<<b<<" is greatest"<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    MAX(a,b);
}