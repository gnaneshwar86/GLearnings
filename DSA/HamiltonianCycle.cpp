#include<iostream>
using namespace std ;
  
void printSolution(int path[],int V);

bool isSafe(int v, bool graph[][50], int path[], int pos)
{
 
    if (graph [ path[pos-1] ][ v ] == 0)
        return false;
 
    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;
  
    return true;
}

bool hamCycleUtil(bool graph[50][50], int path[], int pos,int V)
{
   
    if (pos == V)
    {
        
        if ( graph[ path[pos-1] ][ path[0] ] == 1 )
           return true;
        else
          return false;
    }
  
    
    for (int v = 1; v < V; v++)
    {
        
        if (isSafe(v, graph, path, pos))
        {
            path[pos] = v;
  
            
            if (hamCycleUtil (graph, path, pos+1,V) == true)
                return true;
  
            
            path[pos] = -1;
        }
    }
  
   
    return false;
}

bool hamCycle(bool graph[][50],int V)
{
    int *path = new int[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;
  
    
    path[0] = 0;
    if ( hamCycleUtil(graph, path, 1,V) == false )
    {
        cout<<"Hamiltonian path does not exist";
        return false;
    }
  
    printSolution(path,V);
    return true;
}
  

void printSolution(int path[],int V)
{
   
    for (int i = 0; i < V; i++)
        cout<<path[i]<<" ";
  
    cout<<path[0];
    
}

int main()
{
   
  
    bool graph[50][50];
    int V;
    cin>>V;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cin>>graph[i][j];
        }
    }
    hamCycle(graph,V);
  
    return 0;
}