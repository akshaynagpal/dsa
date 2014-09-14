/*
The MIT License (MIT)

Copyright (c) 2014 Akshay Nagpal twitter.com/akshay2626

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

/*
ABOUT BREADTH FIRST SEARCH
In graph theory, breadth-first search (BFS) is a strategy for searching in a graph 
when search is limited to essentially two operations: (a) visit and inspect a node
of a graph; (b) gain access to visit the nodes that neighbor the currently visited
node. The BFS begins at a root node and inspects all the neighboring nodes. Then 
for each of those neighbor nodes in turn, it inspects their neighbor nodes which
were unvisited, and so on.
*/

//header files
#include<iostream>
#include<conio.h>
using namespace std;
int a[20][20],q[20],n,i,j,f=0,r=-1,visited[20];

//breadth first search function
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
		cout<<i<<"\t"; //vertices that are reachable
		else
		cout<<"NA\t"; //vertices that are not reachable
	}
getch();
return 0;
}
