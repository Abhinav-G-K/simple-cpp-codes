#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,n;
	cout<<"\n Enter the limit : ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	cout<<"\n Sum = "<<sum<<endl;
	return 0;
}
