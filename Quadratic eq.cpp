#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,root1,root2,d;
	cout<<"enter the three coefficents: \n";
	cin>>a>>b>>c;
	if(a==0)
	cout<<"value of a should not be zero\n";
	else
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			root1=(-b+sqrt(d))/(2*a);
			root2=(-b-sqrt(d))/(2*a);
			cout<<"roots are real and unequal\n";
			cout<<"root 1 ="<<root1<<"root 2 ="<<root2;
		}
		else if(d==0)
		{
			root1=-b/(2*a);
			cout<<"roots are real and equal\n";
			cout<<"root = "<<root1;
		}
		else
		cout<<"roots are complex \n";
	}
	return 0;
}
