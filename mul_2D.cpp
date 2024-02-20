#include<iostream>
using namespace std;
main()
{
	int a[2][2],b[2][2];
    int sum[2][2];
    int i,j;	
	
	cout<<"enter a elements"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<0;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"enter b elements"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<0;j++)
		{
			cin>>b[i][j];
			
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<0;j++)
		{
			sum[i][j]= a[i][j]+b[i][j];
			
		}
	}
	cout<<"add"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<0;j++)
		{
		cout<<sum[i][j]<<"\t";
			
		}
	}
}
