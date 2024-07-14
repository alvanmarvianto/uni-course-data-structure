#include "stack.h"
int main()
{
    Stack A,B,C;
    infotype input;
    createStack_1302223074(A);
    createStack_1302223074(B);
    createStack_1302223074(C);
    cin >> input;
    while (input!='.'){
        push_1302223074(A,input);
        cin >> input;
    }
    C=A;

    //output stack awal
    while (!isEmpty_1302223074(A)){
        push_1302223074(B,pop_1302223074(A));
    }
    printInfo_1302223074(B);

    //output J A Y A
    for (int i = 0;i<4;i++){
        push_1302223074(A,pop_1302223074(C));
    }
    printInfo_1302223074(A);

}
