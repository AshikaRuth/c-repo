#include<iostream>

using namespace std;

int main()
{
	int n=5;
	for(int i=0;i<n;i++)
	{
			int k=0;
			while(k!=(2*i))
			{
			cout<<"*";
		k++;
}
for (int j=i;j<n;j++)
{
	cout<<"*";
}
cout<<endl;
}
return 0;
}