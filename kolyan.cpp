#include <iostream>
#include <string>

#include<stdlib.h>
using namespace std;




void Foo1(int *arr);
void Foo2(int *arr);
void Foo3(int *arr);
void Foo4(int *arr);
void foo5(int *arr);


void quickSortR(int* arr,
int SIZE);




struct Node
{
	int data;
	Node *next;
};

Node *head, *tail;

void PrintStruct()
{
	
	Node *tmp = head;
	
	while(tmp != NULL)
	{
		cout << tmp -> data << "\t";
		
		tmp = tmp -> next;
	}
	cout << endl << endl;
}

void AddTail()
{
	
	int a;
	
	Node *Four = new Node();
	
	cout << "set the data: ";
	
	cin >> a;
	Four -> data = a;
	
	tail -> next = Four;
	Four -> next = NULL;
	tail = Four;
	
}


int main()
{
	Node *First = New Node();
	Node *Second = new Node();
	Node *Third = new Node();
	
	
	First -> data = 10;
	First -> next = Second;
	
	Second -> data = 15;
	Second -> next = Third;
	
	
	
}
