#include<iostream>
using namespace std;
main()
{
int n,r,rev=0;
cout<<"enter n values";
cin>>n;
while(n>0);
{
r=n%10
rev=rev*10+r
n=n/10;
}
cout<<"reverse of a number"<<rev;

