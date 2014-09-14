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
ABOUT DEPTH FIRST SEARCH
Depth-first search (DFS) is an algorithm for traversing or searching tree or 
graph data structures. One starts at the root (selecting some arbitrary node
as the root in the case of a graph) and explores as far as possible along 
each branch before backtracking.
*/

//header files
#include<iostream>
#include<conio.h>

using namespace std;
int a[20][20],r[20],n;

//depth first search function
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
		if(r[i]) //checking if all vertices are reachable from every vertex
		count++;
	}
	if(count==n)
	cout<<"Graph is connected";
	else
	cout<<"Graph is disconnected";	
	getch();
	return 0;
}
