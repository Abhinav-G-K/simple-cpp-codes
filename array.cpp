#include<iostream>
using namespace std;
int main () 
{
int n,i,sum=0;
float avg;
cout<<"\n Enter the size of the array : ";
cin>>n;
int val[n];
cout<<"\n Enter the numbers : ";
for(i=0;i<n;i++)
{
	cin>>val[i];
	sum=sum+val[i];
}
avg=sum/n;
cout<<"\n Avarage value : "<<avg;
cout<<"\n Numbers greater than Avarage value : ";
for(i=0;i<n;i++)
{
if(val[i]>avg)
cout<<val[i]<<endl;
}
return 0;
}
