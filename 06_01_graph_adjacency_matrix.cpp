//graph using adjacency matrix
/*
Consider the graph and input m nodes and n edges and (a,b) node
and create this graph using an Adjacency matrix
and then show all the edges that exist in the graph.

Input format:
Line 1: No of nodes
Line 2: No of edges
input edges between node
a b (if there is edge between node a and b)

Output format:
the matrix
*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j, nodes, edges;
    cin>>nodes;
    cin>>edges;

    int matrix[nodes+1][nodes+1];
    //initialize the matrix by 0
    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<=nodes;j++)
        {
            matrix[i][j]=0;
        }
    }
    // enter the input
    for(i=1;i<=edges;i++)
    {
        cin>>a>>b;
        matrix[a][b]=1;
    }
    //print out the matrix
    cout<<"The adjacency matrix is:"<<endl;
    for(i=1;i<=nodes;i++)
    {
        for(j=1;j<=nodes;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
