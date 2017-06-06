#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

typedef struct tree {
	int data;
	struct tree *left;
	struct tree *right;
} Item;

class TreeValue {
public:
	int height;
	int sum;
	TreeValue()
	{
		height = 0;
		sum = 0;
	}
};

void AddNode(int data, tree **node) {

	if (*node == NULL) {
		*node = (tree*) calloc(1, sizeof(tree));
		(*node)->data = data;
		(*node)->left = (*node)->right = NULL;
	}

	else {
		if (data < (*node)->data)
			AddNode(data, &(*node)->left);
		else if (data > (*node)->data)
			AddNode(data, &(*node)->right);
	}
}

TreeValue MaxLenght(tree *node) {
	TreeValue lpath;
	TreeValue rpath;
	TreeValue null;

	if (node == NULL) {
		return null;
	}

	else {
		lpath = MaxLenght(node->left);
		rpath = MaxLenght(node->right);

		if (lpath.height > rpath.height) {
			++lpath.height;
			lpath.sum += node->data;
			return lpath;
		}

		else {
			++rpath.height;
			rpath.sum += node->data;
			return rpath;
		}
	}
}

void LeftOrder(tree *node) {
	if (node->left)
		LeftOrder(node->left);

	printf("%d ", node->data);

	if (node->right)
		LeftOrder(node->right);
}

int main() {

	setlocale(LC_ALL, "Russian");

	Item *root = NULL;

	TreeValue value;

	int data;

	while (true) {
		scanf("%d", &data);

		if (data == 0)
			break;

		AddNode(data, &root);
	}

	if (root != NULL)
		LeftOrder(root);

	value = MaxLenght(root);

	printf("\nМаксимальная длина: %d\nСумма узлов этой ветви: %d", value.height, value.sum);

	_getch();
	return 0;
}
