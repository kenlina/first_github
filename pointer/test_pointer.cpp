#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a=10;
    p=&a;

    cout<<"a  is "<< a <<endl;
    cout<<"&a is "<< &a <<endl;
    cout<<"p  is "<< p <<endl;
    cout<<"*p is "<< *p <<endl;
    cout<<"&p is "<< &p <<endl;
    cout<<endl;
    cout<<"*++p="<<*++p<<endl;;
    cout<<"after *++p"<<endl<<endl;

    cout<<"a  is "<< a <<endl;
    cout<<"&a is "<< &a <<endl;
    cout<<"p  is "<< p <<endl;
    cout<<"*p is "<< *p <<endl;
    cout<<"&p is "<< &p <<endl;
    

    return 0;
}