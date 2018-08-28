#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int n,s;
	cout<<"enter The Number : ";
	cin>>n;
	s=sum(n);
	cout<<"sum = "<<s<<endl;
}
int sum(int n)
{
	static int s;
	if(n)
	{
		s=s+n;
		sum(n-1);
	}
	return s;
}
