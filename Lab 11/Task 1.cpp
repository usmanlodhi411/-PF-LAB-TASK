#include <iostream>
using namespace std;
int main()
{
	float Marks[5];
	float sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter Number "<< i+1 <<": ";
		cin>>Marks[i];	
	}
	for(int i=0;i<5;i++)
	{
		sum+=Marks[i];
	}
	cout<<"\nSum of 5 Numbers: "<<sum;
	return 0;
}
