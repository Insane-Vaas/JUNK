#include<iostream>
using namespace std;
int j;

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

void print(linked* head,int x){

    while(head != NULL){

        if(x==head->data){

            j++;

        }
        
        cout<<head->data<<"->";
        head = head->next;

    }
    cout<"X";
}



int main(){

    linked* A = NULL;
    linked* head,*tail;
    head = tail = NULL;
    int x;
    cin>>x;
    insert(A,tail,1);
    insert(A,tail,2);
    insert(A,tail,3);
    insert(A,tail,3);
    insert(A,tail,4);
    insert(A,tail,5);
    insert(A,tail,6);
    insert(A,tail,6);
    insert(A,tail,2);
    insert(A,tail,7);
    insert(A,tail,8);
    insert(A,tail,6);
    insert(A,tail,9);
    insert(A,tail,10);
    insert(A,tail,9);
    print(A,x);
    cout<<endl;
    cout<<j;


}