#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>

using namespace std;
#define info(p) (p)->info
#define next(p) (p)->next
#define head(q) ((q).head)
#define tail(q) ((q).tail)
#define Nil NULL

typedef bool boolean;
typedef int infotype;
typedef struct elmQ *address;

struct elmQ{
    infotype info;
    address next;
};

struct queue {
    address head, tail;
};

address alokasi_1302223074(infotype info);
address findElmt_1302223074(queue Q, infotype num);
bool queueEmpty_1302223074(queue Q);
void createQueue_1302223074(queue &Q);
void dealokasi_1302223074(address P);
void enQueue_1302223074(queue &Q, address p);
void deQueue_1302223074(queue &Q, address p);
void printInfo_1302223074(queue Q);
int nbOfElm_1302223074(queue Q);
void ganjilGenap_1302223074(queue &Q, queue &Qganjil, queue &Qgenap);

#endif // QUEUE_H_INCLUDED
