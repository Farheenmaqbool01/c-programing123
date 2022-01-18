
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,a[100];
	float mean,variance,sum=0,differ,sd,varsum=0;
	cout<<"enter the number";
	cin>> n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	{
	cin>> a[i];
}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	for(i=0;i<n;i++)
	{
		differ=a[i]-mean;
		varsum = (varsum + pow(differ,2));
	}
	variance=varsum/n;
	sd=sqrt(variance);
	cout<<"mean:"<< mean <<endl;
	cout<<"variance:"<< variance<<endl;
	cout<<"standard deviation:"<< sd << endl;
	return 0;
}
