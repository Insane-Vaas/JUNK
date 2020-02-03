#include<iostream>
using namespace std;

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

        linked* n = new linked(data);

        head = n;

    }

    else{

        linked* n = new linked(data);
        n->next = head;
        head = n;

    }

}

void insertend(linked* &head,linked* &tail,int data){

    if(head ==NULL){

        linked* n = new linked(data);

        head = n;
        tail = n;

    }

    else{

        linked* n = new linked(data);
        tail->next = n;
        tail = n;

    }



}

void print(linked *head){

    while(head!=NULL){

        cout<<head->data<<"->";
        head = head->next;

    }

    cout<<"X";


}

linked* func(linked *head){

    linked *B,*tail;
    B = tail = NULL;
    while(head != NULL){

        if(head->data%2 ==0){

            insert(B,head->data);

        }
        else
        {
            insertend(B,tail,head->data);
        }

    }

    print(B);

}



int main(){

    linked *A,*tail;

    A = tail = NULL;

    insertend(A,tail,17);
    insertend(A,tail,15);
    insertend(A,tail,8);
    insertend(A,tail,12);
    insertend(A,tail,10);
    insertend(A,tail,5);
    insertend(A,tail,4);
    insertend(A,tail,1);
    insertend(A,tail,7);
    insertend(A,tail,6);
    print(A);

    func(A);

}