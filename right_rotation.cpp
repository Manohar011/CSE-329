#include<iostream>
using namespace std;
main()
{
	int a[] ={10,20,30,40,50,60,70};
	int n=sizeof(a)/sizeof(a[0]);
	int d =2;
	int p=1;
	int k;
	while(p<=d)
	{	
		for(int i=n;i>=1;i--)
	{ 
	int k=a[n-1];
			a[i+1]=a[i];
		}
		a[0]=k;
		p++;
	}
	cout<<"\nArray after rotation"<<endl;
	for(int i=n;i>=1;i--)
	{
		cout<<a[i]<<"\n";
	}
}
