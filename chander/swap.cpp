#include<iostream>
using namespace std;
main ()
{
int a,b,temp;
cout<<"enter a,b values";
cin>>a>>b;
cout<<"before swapping values"<<a<<b<<endl;
temp=a;
a=b;
b=temp;
cout<<"\n after swapping"<<a<<"\n"<<b<<endl;
}

