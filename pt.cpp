#include<iostream>
using namespace std;
int main () 
{
	int i,cnt=0,n;
	char *str;
	cout<<"\n Enter the STR size : ";
	cin>>n;
	str=new char[n];
	cout<<"\n Enter the STR : ";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		cnt++;
		}

	}
	cout<<"\n No of vowels : "<<cnt<<endl;
	delete str;
	return 0;
}
