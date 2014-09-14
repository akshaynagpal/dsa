#include<iostream>
#include<conio.h>

using namespace std;
int a[20][20],r[20],n;

void dfs(int v)
{
	int i;
	r[v]=1;

	for(i=1;i<=n;i++)
	{
		if(a[v][i] && !r[i])
		{
			cout<<v<<" -> "<<i<<"\n";
			dfs(i);
		}
	}
}

int main()
{
	int i,j,n,count=0;
	
	cout<<"Enter no. of vertices\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		r[i]=0;
		for(int j=1;j<=n;j++)
		a[i][j]=0;
	}
	
	cout<<"Enter graph data in matrix form\n";

	for(i=1;i<=n;i++)
	{
		cout<<"vertex"<<i<<"\n";
		
		for(int j=1;j<=n;j++)
	     {
			cin>>a[i][j];
	     }
	}
	dfs(1);
	cout<<"\n";
	for(i=1;i<=n;i++)
	{
		if(r[i])
		count++;
	}
	if(count==n)
	cout<<"Graph is connected";
	else
	cout<<"Graph is disconnected";
	return 0;
	getch();
}
