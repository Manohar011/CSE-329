#include<iostream>
using namespace std;
 main()
{
	int a[]={3,8,806,93,2};
	int i;
	int n = sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<n;i++)
	{
		
		if(a[i]>a[i+1] && a[i]>a[i-1])
	
		{
			cout<<a[i]<<endl;
		}
		
		
	}
}
