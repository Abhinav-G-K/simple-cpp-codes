#include<iostream>
using namespace std;
int fact(int);
int main () 
{
int f, n;
cout<<"Enter any number: ";
cin>>n;
f=fact(n);
cout<<"\n Factorial : "<<f<<endl;
}
int fact(int n)
{
if(n==1)
return(1);
else
{
return(n*fact(n-1));
}
}
