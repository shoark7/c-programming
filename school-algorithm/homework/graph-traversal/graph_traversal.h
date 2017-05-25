/* Graph traversal functions header file
 *
 *   201101328 B.A. Sunghwan Park
 *
 * This file implements DFS and BFS traversal functions.
 * DFS : Density First Search
 * BFS : Breadth First Search
 *
 * Also stack data type for DFS is implemented.
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#define MAX_SIZE 100


/* Stack Part
 *
 * This basic stack in list is for DFS.
 * It has push, pop, init_stack, is_stack_empty functions.
 */
typedef struct _Stack {
    int items[MAX_SIZE];
    int top;
    int max_size;
} Stack;

void init_stack(Stack *s) {
    s->max_size = MAX_SIZE;
    s->top = 0;
}

void push(Stack *s, int n) {
    if(s->top >= s->max_size) {
        printf("Don't push me so hard..\n");
        return;
    }
    s->items[s->top++] = n;
}

int pop(Stack *s) {
    int value;
    if(s->top <= 0) {
        printf("I have nothing to give you..\n");
        return -1;
    }
    value = s->items[--s->top];
    return value;
}

int is_stack_empty(Stack *s) {
    return (s->top == 0)? 1 : 0;
}


// DFS graph traversal function
void depthFirstSearch(Graph *g, char v) {
    int visited[MAX_VERTICES];
    int index = get_index(v);
    int value;
    int i;
    Stack s;
    init_stack(&s);
    push(&s, index);

    for(i = 0; i < MAX_VERTICES; i++) {
        visited[i] = 0;
    }

    while(!is_stack_empty(&s)) {
        value = pop(&s);
        if(visited[value] == 0) {
            visited[value] = 1;
            printf("%c ", value+'A');
            for(i = MAX_VERTICES - 1; i >= 0; i--) {
                if(g->edge[value][i] != 0) push(&s, i);
            }
        }
    }
    printf("\n");
}


// Queue Part
/*
 * This queue is for BFS.
 * I use circular buffer data type.
 * Queue supports init_queue, enqueue, dequeue, is_queue_empty functions.
 */

typedef struct circular_buffer {
    int head;
    int tail;
    int items[MAX_SIZE];
    int max_size;
    int length;
} Queue;

void init_queue(Queue *q) {
    q->head = 0;
    q->tail = 0;
    q->max_size = MAX_SIZE;
    q->length = 0;
}

void enqueue(Queue *q, int n) {
    if(q->length == q->max_size) {
        return;
    }
    q->items[q->tail++] = n;
    q->tail %= q->max_size;
    q->length++;
}

int dequeue(Queue *q) {
    if(q->length == 0) {
        return -1;
    }
    int value;
    value = q->items[q->head++];
    q->head %= q->max_size;
    q->length--;
    return value;
}

int is_queue_empty(Queue *q) {
    return (q->length == 0) ? 1 : 0;
}


// BFS graph traversal function
void breadthFirstSearch(Graph *g, char v) {
    Queue q;
    init_queue(&q);
    int value = get_index(v);
    int visited[MAX_VERTICES];
    int i;

    for(i = 0; i < MAX_VERTICES; i++) {
        visited[i] = 0;
    }
    enqueue(&q, value);

    while(!is_queue_empty(&q)) {
        value = dequeue(&q);
        if(visited[value] == 0) {
            visited[value] = 1;
            printf("%c ", value+'A');
            for(i = 0; i < MAX_VERTICES; i++) {
                if(g->edge[value][i] != 0) enqueue(&q, i);
            }
        }
    }
    printf("\n\n");
}
