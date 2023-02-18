#include<iostream>
#include<string>
using namespace std;
void get_info(string &name,string &ID,int &age)
{
     cout<<"Please enter your name: ";
    cin >> name;
    cout<<"Please enter your ID: ";
    cin >>ID;
    cout<<"Please enter your age: ";
    cin >> age;
}
int main(){
    cout<< "The first visual studio in Linux system"<<endl;
    string name,ID;
    int age;
   get_info(name,ID,age);
   cout<<"HELLO "<<name<<" ,Welcome to Linux system."<<endl;
   cout<<"Please check your information correctness."<<endl;
   cout<<"Your ID is "<<ID<<"."<<endl;
   cout<< "And your age is "<<age<<"."<<endl;
    return 0;
}