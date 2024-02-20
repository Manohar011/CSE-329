#include<iostream>
using namespace std;
main()
{
int arr[]={10,20,30,40,50,60,70};//int a[10];
int n=sizeof(arr)/sizeof(arr[0]);
int d=2;
int temp[n];
int k=0;
cout<<"\nArray before rotation is"<<endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}
for(int i=d;i<n;i++)
{
temp[k]=arr[i];
k++;
}

for(int i=0;i<d;i++)
{
temp[k]=arr[i];
k++;
}
for(int i=0;i<n;i++)
arr[i]=temp[i];
cout<<"\nArray after rotation is"<<endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<"\t";
}

}
