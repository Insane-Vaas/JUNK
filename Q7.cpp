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

void insertfront(linked* &head,int data){

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

void print(linked* head){
    
    while(head != NULL){

        cout<<head->data<<"->";

        head = head->next;


    }
    cout<<"X";

}

linked* func(linked* head){
    linked* tail = NULL;
    linked* D = NULL;


    while (head != NULL)
    {
        insertfront(D,head->data);
        head = head->next;
    }
    cout<<endl;
    print(D);

}

int main(){

    linked *A,*B;
    A = B = NULL;

    insertfront(A,1);
    insertfront(A,2);
    insertfront(A,3);
    insertfront(A,4);
    insertfront(A,5);
    insertfront(A,6);
    insertfront(A,7);
    insertfront(A,8);
    insertfront(A,9);
    insertfront(A,10);
    print(A);
    B = func(A);
    cout<<endl;


}