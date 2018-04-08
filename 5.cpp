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
	
	
	for(int i=0;i<n;i++)
	{
		int pos=i;
		for(int j=i+1;j<n;j++)
		{
			if(burst[j]<burst[pos])
				pos=j;
		}
		temp=burst[i];
		burst[i]=burst[pos];
		burst[pos]=temp;
		
		temp=process[i];
		process[i]=process[pos];
		process[pos]=temp;
	 
	 
	}// cout<<"PROCESS "<<process[0]<<" HAS "<<waiting[0]<<"secs WAITING TIME"<<endl;
	 waiting[0]=0,priority[0]=0;
	 cout<<"PROCESS ID "<<process[0]<<" HAS SUCCESSFULLY EXECUTED"<<endl;
	for(int i=1;i<n;i++)
	{
	
	for(int k=i;k<n;k++)
	 {
	 	waiting[k]=0;
	 	for(int j=0;j<k;j++)
	 	{
		 
	 	waiting[k]+=burst[j];
	 	
	 }//cout<<"PROCESS "<<process[k]<<" HAS "<<waiting[k]<<"secs WAITING TIME"<<endl;
	
	 }
	 cout<<endl;
	 for(int l=i;l<n;l++)
	 {
	 	priority[l]=0;
	 	double z=((double)waiting[l]/(double)burst[l]);
	 	priority[l]=1+z;
	 	cout<<"PROCESS ID "<<process[l]<<" HAS PRIORITY "<<priority[l]<<endl;
	 }
	 cout<<endl;

}}
