//Calculator using Functions Program
#include<bits/stdc++.h>
using namespace std;
void add(int a, int b);
void sub(int a, int b);
void mult(int a, int b);
void divi(int a, int b);
int main()
{
    int a,b,choice;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: add(a,b);
                break;
        case 2: sub(a,b);
                break;
        case 3: mult(a,b);
                break;
        case 4: divi(a,b);
                break;
        default: cout<<"Invalid Choice";
    }
}
void add(int a, int b){
    cout<<"Addition of "<<a<<" and "<<b<<" is = "<<a+b<<endl;
}
void sub(int a, int b){
    cout<<"Subtraction of "<<a<<" and "<<b<<" is = "<<a-b<<endl;
}
void mult(int a, int b){
    cout<<"Multiplication of "<<a<<" and "<<b<<" is = "<<a*b<<endl;
}
void divi(int a, int b){
    float result = (float)a/b;
    cout<<"Division of "<<a<<" and "<<b<<" is = "<<result<<endl;
}