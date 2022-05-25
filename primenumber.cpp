#include<iostream>

using namespace std;

int main()
{
	int n,i;
	cout<<"Enter no. to check prime:";
	cin>>n;

	for(int i=2;i<n/2;i++)
	{
		cout<<i<<endl;
		if((n%i==0))
		{
			cout<<"Not Prime"<<endl;
		break;
	}
}
if(i==n/2)
{
	cout<<"Is a PrimeNu"<<endl;
		return 0;
}
}