/* Binary tree in C
 *
 * 2017/03/20. Sunghwan Park. All rights are not reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>


// Node struct definition.
typedef struct _Node{
	char data;
	struct _Node *left;
	struct _Node *right;
} Node;


// Function delcarations for the tree.
Node *createNode(char, Node*, Node*);
void in_order(Node*);
void pre_order(Node*);
void post_order(Node*);


// Entry point function."
int main(void)
{
	Node *k = createNode('K', NULL, NULL);
	Node *g = createNode('G', NULL, k);
	Node *f = createNode('F', NULL, NULL);
	Node *c = createNode('C', f, g);

	Node *h = createNode('H', NULL, NULL);
	Node *d = createNode('D', h, NULL);
	Node *i = createNode('I', NULL, NULL);
	Node *j = createNode('J', NULL, NULL);
	Node *e = createNode('E', i, j);
	Node *b = createNode('B', d, e);

	Node *a = createNode('A', b, c);

	printf("Pre-order  result : ");
	pre_order(a);

	printf("\nIn-order  result  : ");
	in_order(a);

	printf("\nPost-order result : ");
	post_order(a);
	printf("\n");

	return 0;
}


// Function definitions
Node *createNode(char data, Node *left, Node *right) {
	Node *p = (Node*)malloc(sizeof(Node));
	p->data = data;
	p->left = left;
	p->right = right;

	return p;
}

void pre_order(Node *p) {
	if (p == NULL) return;

	printf("%c ", p->data);
	pre_order(p->left);
	pre_order(p->right);
}

void in_order(Node *p) {
	if (p == NULL) return;

	in_order(p->left);
	printf("%c ", p->data);
	in_order(p->right);
}

void post_order(Node *p) {
	if (p == NULL) return;

	post_order(p->left);
	post_order(p->right);
	printf("%c ", p->data);
}
