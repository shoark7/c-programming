## 알고리즘 3주차 과제 - 이진 트리 구현하기

#### 201101328 경영학과 박성환
#### 2017/03/20 제출



### 1. C로 구현하기

먼저 이진트리를 C로 구현한다.

"""c
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


# 출력 결과
>>> Pre-order  result : A B D H E I J C F G K 
>>> In-order  result  : H D B I E J A F C G K 
>>> Post-order result : H D I J E B F K G C A 
"""
`Node *p = (Node*)malloc(sizeof(Node));` 이것만 얻어가도 좋은 수확인 것 같다.  
Node만큼 메모리를 동적 할당해서 그 노드의 포인터를 얻는다. 

<br><br>

### 파이썬으로 구현하기

같은 트리를 파이썬으로 구현한다.

```python
"""Binary tree algorithm in class way

Last post was bianry tree in list way.
Now this time I use class Node and class Tree.
It would be more systematic I think and I recommend this instead of last one.

Start date : 2017/03/20
End date   : 2017/03/20
"""

class Node:
    """Node for the binary tree."""
    def __init__(self, data, left=None, right=None):
        """Initialize node.
        :input:
            data  : (required)Value of the node.
            left  : Left child of the node.
            right : right child of the node.
        :return: None
        """

        self.right = right
        self.left = left
        self.data = data

    def __repr__(self):
        """String formatted print of the node."""
        print("Value of this node is", self.data)


class Binary_tree:
    """Binary tree with class.

    This tree has no node collections but only a root node indicator and ordering algorithms.
    With given root node, it can execute
                            1. pre order,
                            2. in order,
                            3. post order ordering.
    """

    def __init__(self):
        self.root = None

    def __repr__(self):
        if not self.root:
            print("Root is not set. You should set root for ordering.")

        print("Binary_tree object with root node value {}".format(self.root.data))

    def set_root(self, node):
        """Tree must have root node to execute ordering.
        :input:
            node : Node type instance. If the given node is not Node type, error occurs.
        :return:
            None. Just set root node.
        """
        if not isinstance(node, Node):
            raise TypeError("Root must be Node type.")

        self.root = node

    def pre_order_search(self, node=None):
        """Pre order algorithm.
        :input:
            node : It must be Node type.
        :return:
            None. Just print elements. You can override to do other jobs.
        """
        if node is None:
            return

        print(node.data, end=' ')
        self.pre_order_search(node.left)
        self.pre_order_search(node.right)

    def in_order_search(self, node=None):
        """In order algorithm.
        :input:
            node : It must be Node type.
        :return:
            None. Just print elements. You can override to do other jobs.
        """
        if node is None:
            return

        self.in_order_search(node.left)
        print(node.data, end=' ')
        self.in_order_search(node.right)

    def post_order_search(self, node=None):
        """Post order algorithm.
        :input:
            node : It must be Node type.
        :return:
            None. Just print elements. You can override to do other jobs.
        """
        if node is None:
            return

        self.post_order_search(node.left)
        self.post_order_search(node.right)
        print(node.data, end=' ')


# Test code

if __name__ == '__main__':

    f = Node('F')
    e = Node('E')
    c = Node('C', e, f)
    d = Node('D')
    b = Node('B', d)
    a = Node('A', b, c)

    tree = Binary_tree()

    tree.set_root(a)

    print("pre order search")
    tree.pre_order_search(tree.root)

    print("\nin order search")
    tree.in_order_search(tree.root)

    print("\npost order search")
    tree.post_order_search(tree.root)
    print()
```

여기서 Binary_tree 클래스는 노드들의 집합체가 단순히 함수만 가진 래퍼? 느낌이다.  
뭔가 마음이 안 드는데 어떻게 해야 할까??
