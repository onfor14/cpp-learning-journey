//In this I will be taking the input of different variables and giving the output what the user have given
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    string bloodgroup;
    cout<<"Enter your";
    cout<<"\nName: "; getline(cin, name);
    cout<<"Age: "; cin>>age;
    cout<<"Height: "; cin>>height;
    cout<<"Blood Group: "; cin>>bloodgroup;
    cout<<"The Details You Entered are-";
    cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nHeight: "<<height<<"\nBloodgroup: "<<bloodgroup<<endl;
}