#include<iostream>
#include<cstdio>
using namespace std;
	struct emp
	{
	int code;
	char name[10];
	float pay;
	int da;
	int hra;
	int pf;
	};
int main()
{
	emp e1;
	cout<<"\n Enter the emp code : ";
	cin>>e1.code;
	cout<<"\n Enter the name : ";
	cin>>e1.name;
	cout<<"\n Enter the pay : ";
	cin>>e1.pay;
	cout<<"\n Enter the da : ";
	cin>>e1.da;
	cout<<"\n Enter the hra : ";
	cin>>e1.hra;
	cout<<"\n Enter the pf : ";
	cin>>e1.pf;
	int net;
	net=e1.pay+e1.da+e1.hra+e1.pf;
	cout<<"\n Net Salary = "<<net<<endl;
	return 0;
}
