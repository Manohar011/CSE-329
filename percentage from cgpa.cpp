#include<iostream>
using namespace std;
class percentage
{
double cgpa;
int mult_fact;
public:
percentage()//default constructor
{
mult_fact=10;
cout<<"\ndefault";
}
percentage(double c,int m=10)//parameterised
{cgpa=c;
mult_fact=m;
cout<<"\nParametrised";
}
void getinfo()
{
cout<<"\nenter your cgpa";
cin>>cgpa;
}
void display()
{
cout<<"\npercentage is "<<cgpa*mult_fact;
}
};
main()
{
percentage p1;//default
p1.getinfo();
p1.display();
percentage p2(8.8);//parameterised
p2.display();
percentage p3(7.8,9);

}
