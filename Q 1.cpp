#include<iostream>
using namespace std;

class row{

    public:
    int r;
    row* left;
    row* down;

    row(int d){

        r = d;
        down = NULL;
        left = NULL;

    }

};

class element{

    public:
    row* left;
    row* down;

    public:
    int col;
    int value;
    element* next;

    element(int c,int d){

        col = c;
        value = d;
        next = NULL;

    }

};


void insert(row* &head,row* &down,element* &up,element* &tail,int r,int col){


    if(head == NULL){

        row* m = new row(r);
        head = m;
        down = n;
        while(row){

            insertcol(head,up,tail,col);

        }

    }
    else{

        row *m = new row(r);
        down->down = m;
        down = m;
        while(row){

            insert(down,up,tail,col);

        }

    }

}

void insertcol(row *up,element* &head,element* &tail,int col){

    if(head == NULL){
        int data;
        cout<<"Here :- ";
        cin>>data;
        element* n = new element(col,data);
        up->left = n;
        head = n;
        tail = n;

    }
    else{   
        int data;
        cout<<"Here :- ";
        cin>>data;
        element* n = new element(col,data);
        up->left = n;
        head = n;
        tail = n;
        
    }

}

void print(row* head,element *A){

    while(head != NULL){

        while(A != NULL){

            cout<<head->row;
            cout<<" "<<A->col<<" "<<A->value;


        }
        cout<<"X";
    }
    cout<<"X";

}

int main(){

    row *A,*down;
    A = down = NULL;

    element *B,*tail;
    B = tail = NULL;

    insert(A,down,B,tail,1,2);
    insert(A,down,B,tail,1,1);
    insert(A,down,B,tail,1,1);
    print(A,B);


}