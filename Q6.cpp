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

void insert(linked* &head,linked* &tail,int data){

    if(head == NULL){

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

void print(linked* head){

    while (head != NULL){
        
        cout<<head->data<<"->";
        head = head->next;

    }
    
    cout<<"X";
}

linked* func(int x,linked* &head){

    linked* temp=NULL;
    linked* rear=NULL;
    temp = head;
    for(int i=1;i<=x;i++){

        head = head->next;

    }

    linked* XX = NULL;
    linked* C = NULL;

    XX = head;
    while(head != NULL){
        insert(C,rear,head->data);
        head = head->next;
    }

    head = temp;

    while (head != XX){

        insert(C,rear,head->data);
        head = head->next;

    }
    cout<<endl;
    print(C);
    
}

int main(){

    linked *tail = NULL;
    linked *A = NULL;
    linked* C = NULL;
    int x,y;
    cin>>x;
    y = x;
    insert(A,tail,10);
    insert(A,tail,20);
    insert(A,tail,30);    
    insert(A,tail,40);
    insert(A,tail,50);
    insert(A,tail,60);
    print(A);
    func(x,A);
    cout<<endl;
    
}