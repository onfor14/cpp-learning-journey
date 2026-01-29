//In this program I will be setting a speed limit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    const int MAX_SPEED = 60;
    while(true){
        cout<<"\nEnter the Speed: (0) to exit: ";
        cin>>s;
        if(s==0)
            break;
        else if(s<=60)
            cout<<"Perfect Speed: 60KMPH";
        else if(s>60)
            cout<<"Warning: Please Slow Down";
        
    }
}