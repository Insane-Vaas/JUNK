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

    while(head != NULL){

        cout<<head->data<<"->";
        head = head->next;

    }
    cout<<"X";

}

void func(int m,int n,linked* head){

    if(head == NULL){

        return;

    }

    while (head != NULL)
    {

        for(int i=0;i<m;i++){
        
        if(head!=NULL){
            cout<<head->data<<"->";
             head = head->next;
        }
        else
        {
            cout<<"X";
        }
    }

    for (int i = 0; i < n; i++){
        if(head != NULL){

             head = head->next;

        }
        else
        {
            cout<<"X";
        }
    }
        
    }

}

int main(){
    
    int m,n;
    cin>>m>>n;

    linked *head,*tail;
    head = tail = NULL;
    insert(head,tail,1);
    insert(head,tail,2);
    insert(head,tail,3);
    insert(head,tail,4);
    insert(head,tail,5);
    insert(head,tail,6);
    insert(head,tail,7);
    insert(head,tail,8);
    print(head);
    cout<<endl;
    func(m,n,head);

}