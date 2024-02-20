#include<iostream>
using namespace std;
 main()
{
	int a[]={2,7,8,6,4,6,3,98,1};
	int i;
	int k;
	int n = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	   if ( a [ 0 ] < a [ i ] ) {  
      a[ 0 ] = a [ i ] ; 
	   
    }  
  
cout<<a[0];
  
  
}
