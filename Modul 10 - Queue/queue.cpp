#include "queue.h"

address alokasi_1302223074(infotype info){
    address p = new elmQ;
    info(p) = info;
    next(p) = Nil;
    return p;
};
address findElmt_1302223074(queue Q, infotype num){
    address p;
    bool found;

    p =head(Q);
    found = false;

    while(p != Nil && found == false){
        if(info(p)== num){
            found = true;
        } else{
            p = next(p);
        }
    }
    return p;
};
bool queueEmpty_1302223074(queue Q){
    if(head(Q) == Nil){
        return true;
    } else{
        return false;
    }
};
void createQueue_1302223074(queue &Q){
    head(Q) = Nil;
};
void dealokasi_1302223074(address P){
    delete P;
};
void enQueue_1302223074(queue &Q, address p){
    if(queueEmpty_1302223074(Q)){
        head(Q) = p;
        tail(Q) = p;
    } else {
        next(tail(Q)) = p;
        tail(Q) = p;
    }
};
void deQueue_1302223074(queue &Q, address p){
    if(queueEmpty_1302223074(Q)){
        cout << "Queue kosong" << endl;
    } else if(next(head(Q)) == Nil){
        p = head(Q);
        head(Q) = Nil;
        dealokasi_1302223074(p);
    }else{
        p = head(Q);
        head(Q) = next(p);
        next(p) = Nil;
    }
};
void printInfo_1302223074(queue Q){
    address p;
    int i = 1;

    p = head(Q);
    if(p == Nil){
        cout << "Quueue kosong" << endl;
    } else {
        while(p!= Nil){
            cout << "antrian ke-" << i << " : " << info(p) << endl;
            p = next(p);
            i++;
        }
    }
};
int nbOfElm(queue Q){
    int numOfElmt = 0;
    address p;
    p = head(Q);
    while(p!= Nil){
        numOfElmt++;
        p = next(p);
    }
    return numOfElmt;
};

void ganjilGenap_1302223074(queue &Q, queue &Qganjil, queue &Qgenap){
    infotype x;
    address p,q;
    q = head(Q);
    while(!queueEmpty_1302223074(Q)){
        if(info(q) % 2 == 0){
            x=info(head(Q));
            p = alokasi_1302223074(x);
            enQueue_1302223074(Qgenap, p);
            deQueue_1302223074(Q, p);
            q = head(Q);
        } else {
            x=info(head(Q));
            p = alokasi_1302223074(x);
            enQueue_1302223074(Qganjil, p);
            deQueue_1302223074(Q, p);
            q = head(Q);
        }
    }
    cout << "Queue Utama" << endl;
    printInfo_1302223074(Q);
    cout << endl;

    cout << "Queue Ganjil" << endl;
    printInfo_1302223074(Qganjil);
    cout << endl;

    cout << "Queue Genap" << endl;
    printInfo_1302223074(Qgenap);
    cout << endl;

};
