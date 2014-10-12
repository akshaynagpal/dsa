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
were unvisited, and so on till the goal is reached.
*/

#include<iostream>

using namespace std;

int cost[12][12];

void dijkstra(int source, int cost[][12],int n);

int main()
{
    int n,i,j;

    //entering cost adjacency matrix and no. of vertices
    cout<<"Enter the no. of vertices."<<"\t";
    cin>>n;
    cout<<"Enter the cost adjacency matrix"<<endl;
    cout<<"0 for self | -1 for infinity | weight for adjacent(1 to 999)"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==-1)
                cost[i][j]=9999;
        }
    }

    dijkstra(0,cost,n);
}
void dijkstra(int source, int cost[][12],int n)
{
    int i,j,k;
    bool S[12];
    int dist[12];
    int min;
    //initializing S and dist[] for every vertex
    for(i=0;i<n;i++)
    {
        S[i]=false;
        dist[i]=cost[source][i];
    }
    S[source]=0;
    dist[source]=0;


    for(i=1;i<n;i++)
    {
        //finding minimum distance from source vertex
        for(min=999,j=0;j<n;j++)
        {
            if(S[j]==false && dist[j]<min)
                min=j;
        }
        //include min in S
        S[min]=true;

        for(k=0;k<n;k++)
        {
            if(cost[min][k]>0 && cost[min][k]<9999 && S[k]==false)
            {
                //update distances
                if(dist[k]>(dist[min]+cost[min][k]))
                    dist[k]=dist[min]+cost[min][k];
            }
        }
    }

    //result output
    for(int i=0;i<n;i++)
        {
            cout<<i<<" -> "<<dist[i]<<endl;
        }
}


/*     -----------OUTPUT-----------------------

Enter the no. of vertices.      5
Enter the cost adjacency matrix
0 for self | -1 for infinity | weight for adjacent(1 to 999)
0
10
30
-1
50
-1
0
-1
20
-1
-1
-1
0
10
30
-1
-1
-1
0
-1
-1
-1
-1
-1
0
0 -> 0
1 -> 10
2 -> 30
3 -> 30
4 -> 50

Process returned 0 (0x0)   execution time : 91.437 s

*/
