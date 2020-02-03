#include<iostream>
using namespace std;

int j = 0;

class linked{
public :

    int data;
    linked *next;


};

void print(linked* n){

    while(n != NULL){

        cout<<n->data<<" ";
        n = n->next;

    }

}

void sw(linked* n){

    while(n!= NULL){

        if(j%2 == 0){

            //int x;
            //x = n->data;

            swap(n,n->data);
            cout<<n->data<<" ";
            //cout<<x<<" ";
            n = n->next;

            //j = j+2;
            j++;
        }
        else{

            cout<<n->data<<" ";
            n = n->next;
            j++;
        }
    }
}

int main(){

    linked *A,*B,*C,*D,*E,*F,*G,*H;

    A = new linked();
    B = new linked();
    C = new linked();
    D = new linked();
    E = new linked();
    F = new linked();
    G = new linked();
    H = new linked();

    A->data = 1;
    A->next = B;

    B->data = 2;
    B->next = C;

    C->data = 3;
    C->next = D;

    D->data = 4;
    D->next = E;

    E->data = 5;
    E->next = F;

    F->data = 6;
    F->next = G;

    G->data = 7;
    G->next = H;

    H->data = 8;
    H->next = NULL;

    print(A);
    cout<<endl;
    sw(A);
}
