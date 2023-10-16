#include<iostream>
using namespace std;

main()
{
	int a[5];
	int i,cube;
	cout<<"Enter Array Element"<<endl;
	
	for(i=0;i<5;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	
	cout<<"Cube Of Array"<<endl;
	
	for(i=0;i<5;i++)
	{
		cube = a[i]*a[i]*a[i];
		a[i] = cube;
		cout<<a[i]<<endl;
	}
}