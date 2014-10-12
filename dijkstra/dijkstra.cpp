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
