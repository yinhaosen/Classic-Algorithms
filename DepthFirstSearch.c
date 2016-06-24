#include <stdio.h>
#include "MatrixGraph.h"

void DepthFSearch(MatrixGraph G,int v,int visited[])
/* 连通图G以v为初始顶点的深度优先遍历 */
{
    int w;
    printf("%c ",G.Vertices.list[v]);
    visited[v]=1;
    w=GetFirstVex(G,v);
    
    while(w != -1)
    {
      if(! visited[w])
        DepthFSearch(G,w,visited);
      w=GetNextVex(G,v,w);
    }
    
}


void DepthFSearch2(MatrixGraph G)
/* 非连通图G的深度优先遍历，只需将每一个顶点都作为初始顶点进行一次深度优先遍历 */
{
  int i;
  int *visited=(int *)malloc(sizeof(int) * G.Vertices.size);
  
  for(i=0; i<G.Vertices.size; i++)
    visited[i]=0;
    
  for(i=0; i<G.Vertices.size; i++)
    if(! visited[w])
      DepthFSearch(G,i,visited);
  free(visited):
  
}
  
  


