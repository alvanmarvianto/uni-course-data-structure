#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

#define top(S) S.top
#define info(S) S.info

typedef char infotype;

struct Stack{
    infotype info[15];
    int top;
};

void createStack_1302223074(Stack &S);
bool isEmpty_1302223074(Stack S);
bool isFull_1302223074(Stack S);
void push_1302223074(Stack &S, infotype X);
void printInfo_1302223074(Stack S);
infotype pop_1302223074(Stack &S);

#endif // STACK_H_INCLUDED
