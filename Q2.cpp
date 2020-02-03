#include<iostream>
using namespace std;

int j = 1;

class linked{

public:

    int data;
    linked* next;

    linked(int d){

        data = d;
        next = NULL;

    }

};

void insert(linked* &head,int data){

    if(head == NULL){

        linked *n = new linked(data);
        head = n;

    }
    else{

        linked* n = new linked(data);
        n->next = head;
        head = n;

    }
}

void print(linked* head){

    while(head!=NULL){

        cout<<head->data<<"-> ";
        head = head->next;


    }
    cout<<endl;

}

linked* merge(linked *A,linked *B){

    if(A == NULL){

        return B;

    }
    if(B == NULL){

        return A;

    }

    linked* C;

    if(j%2!=0){

        C = A;
        j++;
        C->next = merge(A->next,B);

    }

    else if(j%2 == 0)
    {
        C = B;
        j++;
        C->next = merge(A,B->next);
    }
    else{

        cout<<endl;

    }

    return C;
}


int main(){

    linked *A,*B,*C;
    A = B = C = NULL;

    insert(A,11);
    insert(A,13);
    insert(A,17);
    insert(A,7);
    insert(A,5);
    print(A);
    insert(B,6);
    insert(B,4);
    insert(B,2);
    insert(B,10);
    insert(B,12);
    print(B);
    cout<<endl;
    C = merge(A,B);
    cout<<"Merged Linkedlist:- ";
    print(C);

}