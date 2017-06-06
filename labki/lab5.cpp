#include <iostream.h>
#include<ctype.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct node
{
	int element;
	node *left;
	node *right;
	int height;
};

 typedef struct node *nodeptr;

class bstree
{
	public:
		void insert(int,nodeptr &);
		void find(int,nodeptr &);
		nodeptr findmin(nodeptr);
		nodeptr findmax(nodeptr);
		int bsheight(nodeptr);
		nodeptr srl(nodeptr &);
		nodeptr drl(nodeptr &);
		nodeptr srr(nodeptr &);
		nodeptr drr(nodeptr &);
		int max(int,int);
		int nonodes(nodeptr);
};


void bstree::insert(int x,nodeptr &p)
{
	if (p == NULL)
	{
		p = new node;
		p->element = x;
		p->left=NULL;
		p->right = NULL;
		p->height=0;
		if (p==NULL)
		{
			cout<<"Out of Space\n"<<endl;
		}
	}
	else
	{
		if (x<p->element)
		{
			insert(x,p->left);
			if ((bsheight(p->left) - bsheight(p->right))==2)
			{
				if (x < p->left->element)
				{
					p=srl(p);
				}
				else
				{
					p = drl(p);
				}
			}
		}
		else if (x>p->element)
		{
			insert(x,p->right);
			if ((bsheight(p->right) - bsheight(p->left))==2)
			{
				if (x > p->right->element)
				{
					p=srr(p);
				}
				else
				{
					p = drr(p);
				}
			}
		}
		else
		{
			cout<<"Элемет существует\n"<<endl;
		}
}

int m,n,d;
m=bsheight(p->left);
n=bsheight(p->right);
d=max(m,n);
p->height = d + 1;
}


nodeptr bstree::findmin(nodeptr p)
{
	if (p==NULL)
	{
		cout<<"В дереве нет элементов\n"<<endl;
		return p;
	}
	else
	{
		while(p->left !=NULL)
		{
			p=p->left;
			//return p;
		}
		return p;
	}
}

nodeptr bstree::findmax(nodeptr p)
{
	if (p==NULL)
	{
		cout<<"В дереве нет элементов\n"<<endl;
		return p;
	}
	else
	{
		while(p->right !=NULL)
		{
			p=p->right;
			//return p;
		}
		return p;
	}
}


void bstree::find(int x,nodeptr &p)
{
	if (p==NULL)
	{
		cout<<"такого элемента нет\n"<<endl;
	}
	else
	{
		if (x < p->element)
		{
			find(x,p->left);
		}
		else
		{
			if (x>p->element)
			{
				find(x,p->right);
			}
			else
			{
				cout<<"Элемент, который вы искали есть в дереве!\n"<<endl;
			}
		}
	}
}



int bstree::max(int value1, int value2)
{
	return ((value1 > value2) ? value1 : value2);
}
int bstree::bsheight(nodeptr p)
{
	int t;
	if (p == NULL)
	{
		return -1;
	}
	else
	{
		t = p->height;
		return t;
	}
}

nodeptr bstree:: srl(nodeptr &p1)
{
	nodeptr p2;
	p2 = p1->left;
	p1->left = p2->right;
	p2->right = p1;
	p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
	p2->height = max(bsheight(p2->left),p1->height) + 1;
	return p2;
}
nodeptr bstree:: srr(nodeptr &p1)
{
	nodeptr p2;
	p2 = p1->right;
	p1->right = p2->left;
	p2->left = p1;
	p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
	p2->height = max(p1->height,bsheight(p2->right)) + 1;
	return p2;
}
nodeptr bstree:: drl(nodeptr &p1)
{
	p1->left=srr(p1->left);
	return srl(p1);
}
nodeptr bstree::drr(nodeptr &p1)
{
	p1->right = srl(p1->right);
	return srr(p1);
}

int bstree::nonodes(nodeptr p)
{
	int count=0;
	if (p!=NULL)
	{
		nonodes(p->left);
		nonodes(p->right);
		count++;
	}
	return count;
}

int main()
{
	nodeptr root,root1,min,max;
	int a,choice,findele,delele;
	char ch='y';
	bstree bst;

	root = NULL;
	root1=NULL;
	cout<<"\n\t\t\t\tАВЛ Дерево"<<endl;

	do
	{
		cout<<"\t\t::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<" 1 Вставить новый узел"<<endl;
		cout<<"2 Найти минимальный элемент"<<endl;
		cout<<"3 Найти максимальный элемент"<<endl;
		cout<<"4 Поиск по значению"<<endl;
		cout<<"5 Показать высоту дерева"<<endl;
		cout<<"0 Выход"<<endl;
		cout<<"\t\t::::::::::::::::::::::::::::::::::::::::::::::::\n"<<endl;

		cin>>choice;

		switch(choice)
		{
			case 1:
				cout<<"\n\t\tДобавление нового узла"<<endl;
				cout<<"Введите элемент: ";
				cin>>a;
				bst.insert(a,root);
				cout<<"\nэлемент добавлен\n"<<endl;
				break;
			case 2:
				if (root !=NULL)
				{
					min=bst.findmin(root);
					cout<<"\nМинимальный элемент: "<<min->element<<endl;
				}
				break;
			case 3:
				if (root !=NULL)
				{
					max=bst.findmax(root);
					cout<<"\nМаксимальный элемент: "<<max->element<<endl;
				}
				break;
			case 4:
				cout<<"\nВведите нужный элемент: ";
				cin>>findele;
				if (root != NULL)
				{
					bst.find(findele,root);
				}
				break;
			case 5:
				cout<<"\n\t\tВЫСОТА\n"<<endl;
				cout<<"Tвысота: "<<bst.bsheight(root)<<endl;

				break;
			case 0:
				cout<<"\n\tПОКА!!!\n"<<endl;
				break;
			default:
				cout<<"Неправильный ввод\n"<<endl;
				break;
		}
	}while(choice != 0);
  getch();
	return 0;
}
