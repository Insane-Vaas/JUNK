#include <iostream>
#include<iomanip>
#include <string>

using namespace std;

class NodeType{
public:
	int info;
	int column;
	NodeType *next;	
public:
	NodeType(){
		info = 0;
		column = 0;
		next = NULL;
	}
};

class LinkedList{
public:
	NodeType * head;
	NodeType * tail;	

public:
	LinkedList();
	~LinkedList();
	void insertAtBeginning(int column, int value);
	void insertAtEnd(int column, int value);
	void insertItemAt(int column, int value);
	void insertRow(NodeType *other);
};

LinkedList::LinkedList(){
	head = NULL;
	tail = NULL;
}


LinkedList::~LinkedList(){
	NodeType * current = head;
	while (current != NULL){
		current = current->next;
		delete head;
		head = current;
	}
	head = NULL;
	tail = NULL;
}

void LinkedList::insertAtBeginning(int column, int value){
	
	NodeType * newNode = new NodeType;
	newNode->info = value;
	newNode->column = column;

	if (head == NULL){
		head = tail = newNode;
	}						
	else{
		newNode->next = head;					
		head = newNode;						
	}
}

void LinkedList::insertAtEnd(int column, int value){
		
	NodeType * newNode = new NodeType;
	newNode->column = column;
	newNode->info = value;

	
	if (head == NULL)
		head = tail = newNode;
	else{
		tail->next = newNode;
		tail = newNode;
	}

}

void LinkedList::insertItemAt(int column, int value){
			
	if (head == NULL || head->column > column){
		insertAtBeginning(column, value);

	}
	
	else if (tail->column < column){
		insertAtEnd(column, value);

	}

	else{
		
		NodeType * prevNode = head;

		while (prevNode->column < column && prevNode != NULL){
			
			if (prevNode->next->column > column)
				
				break;
			prevNode = prevNode->next;
		}

		
		if (prevNode->column == column){
			
			prevNode->info = value;
		}
		
		else {
			
			NodeType * newNode = new NodeType;
			newNode->info = value;
			newNode->column = column;
			newNode->next = prevNode->next;
			prevNode->next = newNode;
		}

	}
}


void LinkedList::insertRow(NodeType *other){
	
	while (other != NULL){
		insertAtEnd(other->column, other->info);
		other = other->next;
	}
}

class SM{
public:
	LinkedList *linkedList;
	int n, m;

public:
	SM(int rows, int columns);
	~SM();
	void readElements();
	void printMatrix();
	void addSM(SM &other);
};

SM::SM(int rows, int columns){	
	n = rows;
	m = columns;
	linkedList = new LinkedList[n];
}
	
SM::~SM(){	
	delete[] linkedList;
}

void SM::readElements(){

	int row=1, column=1, value=1;
	int count = 1;
	do{
		cout << "Data (" << count << ") >> ";
		cin >> row;
		cin >> column;
		cin >> value;
		
		if (row == 0 && column == 0 && value == 0)
			break;

		if (row >= n ){
			cout << "\nInvalid data found!\nThe maximum number of row is " << n << "! Please enter a valid number of row!\n" << endl;
		}
		
		else if (column >= m){
			cout << "\nInvalid data found!\nThe maximum number of column is " << m << "! Please enter a valid number of column!\n" << endl;
		}

		else{
			count++;			
			linkedList[row].insertItemAt(column, value);
		}

	} while ((row != 0 || column != 0 || value != 0));
	
	cout << endl;
}

void SM::printMatrix(){
	
	for (int i = 0; i < n; i++){
		
		cout << setw(7);
		NodeType *current = linkedList[i].head;		
		
		for (int j = 0; j < m; j++){		
			
			if (current != NULL){			
				if (current->column == j){					
					cout << current->info << setw(7) ;					
					current = current->next;
				}
				else
					cout << "0" << setw(7);
			}
			else{
				cout << "0" << setw(7);
			}
		}		
		cout << endl;
	}
}



int main(){	
	int n, m;
	
	do{
		cout << "Please enter the number of row(s) and column(s) for the matrix " << endl;
		cout << "Row(s) >> ";
		cin >> n;
		cout << "Column(s) >> ";
		cin >> m;
		cout << "\n" << endl;

		if (n <= 0 || m <= 0)
			cout << "The number of row and column must be more than zero!\n" << endl;;
	} while (n <= 0 || m <= 0);
    SM sm = SM(n, m);

	cout << "Matrix:" << endl;
	sm.printMatrix();
	cout << endl;
}