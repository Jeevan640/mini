# include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{	int n;
	cout<<"ENTER THE NUMBER OF PROCESS\n";
	cin>>n;
	int temp=0;
	double priority[n];
	int process[n],burst[n],arrival[n],waiting[n];

	for (int i=0;i<n;i++)
	{
		process[i]=i+1;
		priority[i]=0;
	}
	
	cout<<"ENTER THE BURST TIMES FOR "<<n<<"PROCESSES";
	
	
	for (int i=0;i<n;i++)
	{
		cin>>burst[i];
	}
	cout<<endl;
}
