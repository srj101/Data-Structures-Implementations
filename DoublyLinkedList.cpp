#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
	node* prev;
};
class d_list
{
private:
	node* head;
	node* GetNewNode(int n)
	{
		node* newNode = new node();
		newNode->data = n;
		newNode->next = NULL;
		newNode->prev = NULL;
		return newNode;
	}
public:
	d_list()
	{
		head = NULL;
	}
	void InsertAtHead(int n)
	{
		node* temp = GetNewNode(n);
		if (head == NULL)
		{
			head = temp;
			return;
		}
		head->prev = temp;
		temp->next = head;
		head = temp;
	}
	void print()
	{
		node* t = head;
		cout << "Forward: ";
		while (t!=NULL)
		{
			cout << t->data << " ";
			t = t->next;
		}
		cout << "\n";
	}
	void print_reverse()
	{
		node* t = head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		//reverse
		cout << "reverse: ";
		while (t != NULL)
		{
			cout << t->data << " ";
			t = t->prev;
		}
		cout << "\n";
	}
};

int main()
{
	d_list l;     //object from class doubly list
	l.InsertAtHead(1);
	l.InsertAtHead(2);    //function insert at beginning
	l.InsertAtHead(3);
	l.print();             //List should print: 3 2 1
	l.print_reverse();     //List should print: 1 2 3
	return 0;
}