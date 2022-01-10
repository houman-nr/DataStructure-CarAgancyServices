#include <iostream>
using namespace std;


struct node 
{
	int data;
	string agancyN;
	string serviesN;
	string subServiesN;
	struct node* next;
}*start;

node *create_Node(int inVal)
{
	struct node* f, s;

	f = new(struct node);
	if (f == NULL) 
	{
		cout << "not allowcated.";
		return 0;
	}
	else
	{
		f->data = inVal;
		f->next = NULL;
		return f;
	}

}

void insert_First(int inVal)
{
	struct node *f, *s;
	
	int x = inVal;
	
	f = create_Node(x);

	if (start == NULL)
	{
		start = f;
		start->next = NULL;
	}
	else
	{
		s = start;
		start = f;
		start->next = s;
	}
}

void insert_InPlcae(int inVal, int loc)
{
	struct node* f, * m, * l, * p;
	int count = 0;
	//f-> first -- m-> middle which will define inpute  -- l->last
	
	m = create_Node(inVal);
	p = start;

	while (p != NULL) {
		p = p->next;
		count++;
	}
	
	if (loc == 1) 
	{
		if (start == NULL)
		{
			start = m;
			start->next = NULL;
		}
		else
		{
			p = start;
			start = m;
			m->next = p;
		}
	}
	else if (count > 1 && loc <= count)
	{
		f = start;
		l = start;
		count = 0;
		for (int i = 1; i < loc; i++)
		{
			f = l;
			l = l->next;
		}
		f->next = m;
		m->next = l;
	}
}

void insert_last(int inVal)
{
	struct node* s, * f;
	int a;

	s = create_Node(inVal);
	f = start;
	while (f != NULL)
	{
		f = f->next;
	}
	
	
	s->next = NULL;
	f->next = s;
}

void delete_slct_node(int slctn)
{
	//struct node*
}

void show_List()
{
	struct node* a;
	if (start == NULL)
	{
		cout << "no linked list was created.";
	}
	a = start;
	cout << "Elements are:" << "\n";
	while (a != NULL)
	{
		cout << a->data << "/";
		a = a->next;
	}
	cout << "end.";
}


int main() 
{
	int x, y;
	x = 0;
	/*do
	{
		cin >> x;
		insert_First(x);
	} while (x != -1);
	show_List();*/

	while (1)
	{
		cout << "\n \n";
		cout << "1.add a number to the beginig of linked list. \n";
		cout << "2.To show the list that was created. \n";
		cout << "3.insert node beetwin two other nodes. \n";
		cout << "4.Exit \n";

		cin >> x;
		switch (x)
		{
		case 1:
			cout << " input :";
			cin >> y;
			insert_First(y);
			break;
		case 2:
			show_List();
			cout << "\n";
			break;
		case 3:
			cin >> y >> x;
			insert_InPlcae(y, x);
			break;
		case 4:
			exit(1);
			break;
		default:
			break;
		}
	}
}