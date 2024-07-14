#ifndef GRAF_H_INCLUDED
#define GRAF_H_INCLUDED

#include <iostream>
using namespace std;

#define idVertex(v) v->id
#define nextVertex(v) v->nextVertex
#define firstVertex(G) G.firstVertex
#define vertex1(v) v->vertex_1
#define vertex2(v) v->vertex_2
#define nextEdge(v) v->nextEdge

typedef struct vertex *adrVertex;
typedef struct edge *adrEdge;

struct vertex{
    char id;
    adrVertex nextVertex;
};

struct edge{
    adrVertex vertex_1;
    adrVertex vertex_2;
    adrEdge nextEdge;
};

struct graph{
    adrVertex firstVertex;
};

struct listOfEdge{
    adrEdge firstEdge;
};

void createVertex(char newVertexID, vertex &v);
void initGraph(graph &G);
void addVertex(graph &G, char newVertexID);
void buildGraph(graph &G);
void printVertex(graph &G);

#endif // GRAF_H_INCLUDED
