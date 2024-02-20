#include<iostream>
using namespace std;
main()
{
	int a[]={1,4,3,25,5,3};
	int i;
	int n=sizeof(a)/sizeof(a[0]);
	int temp[];
	
	for(i=0;i<n;i++)
	{
		temp[i]=a[n];
		a[i+1]=a[i];
		a[i]=temp[i];
	}
	cout<<a[i];
}
