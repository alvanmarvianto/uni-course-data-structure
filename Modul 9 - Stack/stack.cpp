#include "stack.h"

void createStack_1302223074(Stack &S){
    top(S)=-1;
}

bool isEmpty_1302223074(Stack S){
    if (top(S)==-1){
        return true;
    }
    return false;
}

bool isFull_1302223074(Stack S){
    if (top(S)==15){
        return true;
    }
    return false;
}

void push_1302223074(Stack &S, infotype X){
    if (!isFull_1302223074(S)){
        top(S)++;
        info(S)[top(S)]=X;
    }
}

infotype pop_1302223074(Stack &S){
    infotype X = info(S)[top(S)];
    top(S)--;
    return X;
}

void printInfo_1302223074(Stack S){
    for (int i = top(S);i>-1;i--){
        cout << info(S)[i] << " ";
    }
    cout << endl;
}
