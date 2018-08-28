#include<iostream>
using namespace std;
int main()
{
	int l,b,r,h,op;
	float area;
	const float pi=3.14;
	cout<<"\n Select the shape";
	cout<<"\n 1.Rectangle \n 2.Cicle \n 3.Triangle"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
		cout<<"\n Enter Length : ";
		cin>>l;
		cout<<"\n Enter Breadth : ";
		cin>>b;
		area=l*b;
		cout<<"\n Area = "<<area<<endl;
		break;
		case 2:
		cout<<"\n Enter Radius : ";
		cin>>r;
		area=pi*r*r;
		cout<<"\n Area = "<<area<<endl;
		break;
		case 3:
		cout<<"\n Enter Height : ";
		cin>>h;
		cout<<"\n Enter Base : ";
		cin>>b;
		area=.5*h*b;
		cout<<"\n Area = "<<area<<endl;
		break;
		default:
		cout<<"\n invalid"<<endl;
		break;
	}
	return 0;
}
		 
