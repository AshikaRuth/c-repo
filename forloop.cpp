#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a=5;
	int d=2;
	int an=0;
	int sn=0;
	for( int i=1;i<=n;i++)
	{
		an=a+((i-1)*d);
		cout<<"Term"<<i<<"="<<an<<endl;
		sn=sn+an;
	}
	cout<<"Sum="<<sn<<endl;
	return 0;
	}	
