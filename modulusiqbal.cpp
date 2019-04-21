#include <iostream>
using namespace::std;
double mds (int nilai,int a){
    if(a==0)
        {return (nilai%a);}
    else
        if(a==nilai)
        {return (0);}
    else
        {return (nilai%a);}}
main(){
    float nilai1,nilai2;
    cout<<"imput angka bilangan ke 1 :"
    ;cin>>nilai1;
    cout<<"imput angka bilangan ke 2 :"
    ;cin>>nilai2;
    cout<<"hasil nilai modulus : ";
    cout<<mds(nilai1,nilai2);
    }
