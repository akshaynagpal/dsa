#include<iostream>
#include<conio.h>
using namespace std;
int a[20][20],q[20],n,i,j,f=0,r=-1,visited[20];

void bfs(int v)
{
	for(int i=1;i<=n;i++)
	{
		if(a[v][i] && !visited[i])
		{
			q[++r]=i;
		}
		if(f<=r)
		{

			visited[q[f]]=1;
			bfs(q[f++]);
		}
	}
}


int main()
{
	int v;
	cout<<"Enter no. of vertices\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		q[i]=0;
		visited[i]=0;

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
	cout<<"Enter starting vertex..\n";
	cin>>v;
	bfs(v);
	cout<<"The  nodes which are reachable are:\n";

	for(i=1;i<=n;i++)
	{
		if(visited[i])
		cout<<i<<"\t";
		else
		cout<<"NA\t";
	}
getch();
return 0;
}
