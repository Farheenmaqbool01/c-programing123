
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[100],i,smallest,largest;
	double sum=0, avg;
	cout<<"enter the size of array";
	cin >> n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	{
		cin>> a[i];
	}
	for(i=0;i<n;i++)
	{
		sum +=a[i];
	}
    
	 for(i=1;i<n;i++)
	{
		if (a[0]>a[i])
		{
		a[0]=a[i];
	}
}
		 cout<< a[0]<<" is the smallest number:" <<endl;

	for(i=0;i<n;i++)
	{
		if (a[0]<a[i])
		{
		a[0]=a[i];
	   cout<< a[0]<<" is the largest  number:"<<endl;
	}
}
   avg=sum/n;
   cout<<"avg:" << avg <<endl;
   return 0;

}





	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

