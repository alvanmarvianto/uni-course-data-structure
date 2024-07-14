#include "graf.h"

void createVertex(char newVertexID, adrVertex &v){
    v = new vertex;
    idVertex(v) = newVertexID;
    nextVertex(v) = NULL;
}

void initGraph(graph &G){
    firstVertex(G) = NULL;
}

void addVertex(graph &G, char newVertexID){
    adrVertex v;
    createVertex(newVertexID, v);
    if (firstVertex(G) == NULL){
        firstVertex(G) = v;
    } else {
        adrVertex P = firstVertex(G);
        while (nextVertex(P)!=NULL){
            P = nextVertex(P);
        }
        nextVertex(P) = v;
    }
}

void buildGraph(graph &G){
    bool isUnik = true;
    char newID;
    cout << "Masukkan vertex: ";
    cin >> newID;
    if (newID >= 'A' && newID <= 'Z'){
        adrVertex P;
        P = firstVertex(G);
        while (isUnik && P != NULL){
            if (newID == idVertex(P)){
                isUnik = false;
            }
            P = nextVertex(P);
        }
        if (isUnik){
            addVertex(G,newID);
            buildGraph(G);
        } else{
            buildGraph(G);
        }
    }
}

void printVertex(graph &G){
    if (firstVertex(G) == NULL){
        cout << "GRAF KOSONG";
    } else {
        adrVertex P = firstVertex(G);
        while (P!=NULL){
            cout << idVertex(P) << " ";
            P = nextVertex(P);
        }
    }
}
