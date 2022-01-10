#include <iostream>
#include <conio.h> 
using namespace std;

//main services nodes are made down here 
struct node 
{
	int expense;
	string serviesN;
	string note2Agancy;
	struct node* nextService;
	struct node* subServies;
}*start;




node *create_Node(int inVal, string serviceName, string note)
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
		f->serviesN = serviceName;
		f->note2Agancy = note;
		f->expense = inVal;
		f->nextService = NULL;
		return f;
	}

}

void insert_First(int inVal, string serviceName, string note)
{
	struct node *f, *s;
	
	int x = inVal;
	string y = serviceName;
	string z = note;

	
	f = create_Node(x, y, z);

	if (start == NULL)
	{
		start = f;
		start->nextService = NULL;
		start->subServies = NULL;
	}
	else
	{
		s = start;
		start = f;
		start->subServies = NULL;
		start->nextService = s;
	}
}


//--------------------------------------------------------------//
//void insert_InPlcae(int inVal, int loc)
//{
//	struct node* f, * m, * l, * p;
//	int count = 0;
//	//f-> first -- m-> middle which will define inpute  -- l->last
//	
//	m = create_Node(inVal);
//	p = start;
//
//	while (p != NULL) {
//		p = p->next;
//		count++;
//	}
//	
//	if (loc == 1) 
//	{
//		if (start == NULL)
//		{
//			start = m;
//			start->next = NULL;
//		}
//		else
//		{
//			p = start;
//			start = m;
//			m->next = p;
//		}
//	}
//	else if (count > 1 && loc <= count)
//	{
//		f = start;
//		l = start;
//		count = 0;
//		for (int i = 1; i < loc; i++)
//		{
//			f = l;
//			l = l->next;
//		}
//		f->next = m;
//		m->next = l;
//	}
//}

//---------------------------------------------------------//
//void insert_last(int inVal)
//{
//	struct node* s, * f;
//	int a;
//
//	s = create_Node(inVal);
//	f = start;
//	while (f != NULL)
//	{
//		f = f->next;
//	}
//	
//	
//	s->next = NULL;
//	f->next = s;
//}

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
		cout << a->expense << "/";
		a = a->nextService;
	}
	cout << "end.";
}




struct subservice
{
	struct node* subservice;
	string subServiceName;
}*subSer;


int main() 
{
	cout << "wellcome to this bullshit data structure homework -________-" << endl;
	_getch();
	for (int i = 0; i < 12; i++)
	{
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
		cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	}


	string input_action;
	cin >> input_action;
	char* input= new char[120];
	_getch();
	for (int i = 0; input[i] == '-'; i++)
	{
		input[i] = _getch();
	}
	for (int i = 0; i < 119; i++)
	{
		if (input[i] == '<')
		{
			for (int j = 0; j < i; j++)
			{
				cout << input[j];
			}
		}
	}



	/*int x, y;
	x = 0;

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
		case 4:
			exit(1);
			break;
		default:
			break;
		}
	}*/
}