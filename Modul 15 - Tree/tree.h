#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

using namespace std;
#include <iostream>

#define info(p) p->info
#define right(p) p->right
#define left(p) p->left
#define root(L) L.root

typedef int infotype;
typedef struct ElmTree *adrNode;

struct ElmTree{
    infotype info;
    adrNode right;
    adrNode left;
};

struct tree{
    adrNode root;
};

adrNode newNode(infotype x);
adrNode findNode(adrNode root, infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printDescendant(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);

#endif // TREE_H_INCLUDED
