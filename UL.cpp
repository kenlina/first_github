#include<iostream>
using namespace std;
typedef unsigned int a;
 void mystery (int b){
        cout<<b<<endl;
    } 
typedef void (*func)(int);
int main(){
    
    a hide=-5;
    int a=37;
    cout<<hide<<"  "<<a<<endl;
   
    func foo;//相當於宣告void *foo(int);
    
    foo=&mystery;
    foo(3);
    mystery(500);
    return 0;
   

}