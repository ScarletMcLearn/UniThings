#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include"QueueArray.cpp"
using namespace std;
#define white 0
#define gray 1
#define black 2
#define inf 32767
#define nil -1
class GraphTraversal{
    int graph[100][100];
    int tVertex;
    int color[100];
    int d[100];
    int pi[100];
public:
    void generateGraph()
    {
        int i,j;
        cout<<"Enter total no of Vertices"<<endl;
        cin>>tVertex;

        //srand(time(0));
        for(i=0;i<tVertex;i++)
        {
            for(j=0;j<tVertex;j++)
            {
              if(rand()%2)graph[i][j]=0;
              else graph[i][j]=1;
            }
        }

    }
    void displayGraph()
    {
        int i,j;
        for(i=0;i<tVertex;i++)
        {
            for(j=0;j<tVertex;j++)
            {
              cout<<graph[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void BFS(int graph[][100], int s, int tVertex)
    {
        int u,v;
        double x;
        for(u=0;u<tVertex;u++)
        {
           color[u]=white;
           d[u]=inf;
           pi[u]=nil;
        }

        color[s]=gray;
        d[s]=0;
        pi[s]=nil;

        Queue q(tVertex);
        q.Enqueue(s);

        while(!q.IsEmpty())
        {
           q.Dequeue(x);
           u=(int)x;
           cout<<u<<" ";
           for(v=0;v<tVertex;v++)
           {
               if(graph[u][v]==1)
               {
                   if(color[v]==white)
                   {
                       color[v]=gray;
                       d[v]=d[u]+1;
                       pi[v]=u;
                       q.Enqueue(v);
                   }
               }
           }
           color[u]=black;
           //cout<<u<<" ";
        }
    }
    void getPath(int f)
    {
        if(pi[f]==-1){ return; }
        getPath(pi[f]);
        cout<<pi[f]<<"->";
    }
    void generateBFSPath()
    {
        int s,f;
        cout<<"Enter source vertex:"<<endl;
        cin>>s;
        BFS(graph,s,tVertex);
        cout<<"\nEnter destination vertex:"<<endl;
        cin>>f;

        cout<<s<<" to "<<f<<" Path: ";
        getPath(f);
        cout<<f<<endl;
        //cout<<endl<<d[f];
    }
};

int main(void) {

    GraphTraversal obj;
    obj.generateGraph();
    obj.displayGraph();
    obj.generateBFSPath();


	return 0;
}


