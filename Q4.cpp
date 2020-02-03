#include<iostream>
using namespace std;
int j;
int a[10];
int b[10];
int sum,total;


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

void printA(linked* head){

    while(head != NULL){
        a[j] = head->data;
        j++;
        cout<<head->data<<"->";
        head = head->next;
    }

    cout<<"X"<<endl;

}

void printB(linked* head){

    while(head != NULL){
        b[j] = head->data;
        j++;
        cout<<head->data<<"->";
        head = head->next;
    }

    cout<<"X"<<endl;

}

void printC(linked* head){

    while(head != NULL){
        
        cout<<head->data<<"->";
        head = head->next;
    }

    cout<<"X"<<endl;

}


int func(int* a,int* b,int sum){

    sum = a[0]*10*10+a[1]*10+a[2] +b[0]*10*10+b[1]*10+b[2];
    total = sum;
    return sum;

}

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
void insertend(linked* &head,int data){

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



int main(){

    linked *tail = NULL;
    linked* A= NULL;
    linked* B = NULL;
    linked* C = NULL;

    insert(A,tail,5);
    insert(A,tail,6);
    insert(A,tail,3);
    j=0;
    printA(A);
    insert(B,tail,8);
    insert(B,tail,4);
    insert(B,tail,2);
    j=0;
    printB(B);
    cout<<func(a,b,sum);
    cout<<endl;
    for (int  i = 0; i < 4; i++)
    {
        insertend(C,total%10);
        total = total/10;
    }
    printC(C);
    
}