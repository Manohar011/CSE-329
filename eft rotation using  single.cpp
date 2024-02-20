#include<iostream>
using namespace std;
main()
{
int arr[]={10,20,30,40,50,60,70};
int n=sizeof(arr)/sizeof(arr[0]);
int d=2;

int p=1;
while(p<=d)
{ int temp=arr[0];
for(int i=0;i<=n-1;i++)
arr[i]=arr[i+1];
arr[n-1]=temp;
p++;
}
cout<<"\nArray after rotation"<<endl;
for(int i=0;i<=n-1;i++)
{
cout<<arr[i]<<"\n";
}
}
