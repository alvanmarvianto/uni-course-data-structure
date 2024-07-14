#include "tree.h"

adrNode newNode(infotype x){
    adrNode P = new ElmTree;
    info(P) = x;
    right(P) = NULL;
    left(P) = NULL;
    return P;
}
adrNode findNode(adrNode root, infotype x){
    if(root == NULL){
        return NULL;
    }else if(info(root) == x){
        return root;
    }else{
        adrNode kiri = findNode(left(root), x);
        if (kiri != NULL){
                return kiri;
        }else{
            return findNode(right(root), x);
        }
    }
}

void insertNode(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else{
        if (info(root) < info(p)){
            insertNode(right(root), p);
        }else{
            insertNode(left(root), p);
        }
    }
}

void printPreOrder(adrNode root){
    if(root != NULL){
            cout << info(root) << " ";
            printPreOrder(left(root));
            printPreOrder(right(root));
    }
}

void printDescendant(adrNode root, infotype x){
    adrNode A = findNode(root, x);
    if(A != NULL){
        printPreOrder(left(A));
        printPreOrder(right(A));
    }
}

int sumNode(adrNode root){
    if(root != NULL){
        return info(root) + sumNode(left(root)) + sumNode(right(root));
    }else{
        return 0;
    }
}

int countLeaves(adrNode root){
    if(root == NULL){
            return 0;
    }else if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return countLeaves(right(root)) + countLeaves(left(root));
    }
}

int heightTree(adrNode root){
    int kanan, kiri;
    if(root == NULL){
        return 0;
    }else{
        kanan = heightTree(right(root));
        kiri = heightTree(left(root));
        if(kanan > kiri){
            return kiri + 1;
        }else{
            return kanan + 1;
        }
    }
}
