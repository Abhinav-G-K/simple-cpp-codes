#include<iostream>
using namespace std;
int main () 
{
	int n,src,i,j;
	cout<<"\n Enter the number of std : ";
	cin>>n;
	int ad[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n Enter the roll number of stds : ";
		cin>>ad[i];
	}
	cout<<"\n Enter the roll number to be searched : ";
	cin>>src;
	for(j=0;j<n;j++)
	{
		if(ad[j]==src)
		{
		cout<<"Number found at: "<<j+1<<endl;
		return 0;
	}
}
cout<<"\n Not Found"<<endl;
return 0;
}
