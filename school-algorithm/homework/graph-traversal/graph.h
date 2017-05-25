/* Graph implementation header file.
 *
 *  201101328 B.A. Sunghwan Park
 *
 *  Graph struct and basic functions are supported.
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 26


/* Graph struct
 *
 * This graph is an undirected graph.
 * Also this supports weight graph.
 *
 * *Attributes
 *   nVertices : number of vertices in a Graph
 *   nEdged    : number of edges in a Graph
 *   vertex    : Vertex array
 *   edge      : Edge array(2D array)
 */
typedef struct _Graph {
    int nVertices;
    int nEdges;
    int vertex[MAX_VERTICES];
    int edge[MAX_VERTICES][MAX_VERTICES];
} Graph;

// Function declarations
int get_index(char v);
void init_graph(Graph *g);
void insertVertex(Graph *g, char v);
void insertEdge(Graph *g, char v1, char v2, int weight);
void printGraph(Graph *g);


/* get_index function
 *
 * This test uses alphabet character for vertex's names
 * So I made a helper function that changes name to index.
 * Only uppercase characters are possible in this test.
 * 'A' -> 0, 'C' -> 2, so on..
 */
int get_index(char v) {
    return v - 'A';
}

/* init_graph
 *
 * Initialize the graph.
 */
void init_graph(Graph *g) {
    int i, j;
    g->nVertices = 0;
    g->nEdges = 0;

    for(i = 0; i < MAX_VERTICES; i++) {
        g->vertex[i] = 0;
        for(j = 0; j < MAX_VERTICES; j++) {
            g->edge[i][j] = 0;
        }
    }
}

/* insertVertex
 *
 * Insert a vetex into a graph.
 * It only accepts 'uppercase' english alphabet char.
 */
void insertVertex(Graph *g, char v) {
    int index = get_index(v);
    if(g->vertex[index] == 1) {
        printf("Vertex already exists.");
        return;
    }
    g->vertex[index] = 1;
    g->nVertices += 1;
}

/* insertEdge
 *
 * Insert an edge into a graph.
 * 2 vertices' names are needed. Also uppercase alphabets.
 * Also You should input weight of an edge.
 */
void insertEdge(Graph *g, char v1, char v2, int weight) {
    int index1 = get_index(v1);
    int index2 = get_index(v2);
    if(g->vertex[index1] == 0 || g->vertex[index2] == 0) {
        printf("At least one vertex doesn't exist.\n");
        return;
    }
    if(g->edge[index1][index2] != 0) {
	printf("Edge already exsits.\n");
	return;
    }
    g->edge[index1][index2] = weight;
    g->edge[index2][index1] = weight;
    g->nEdges += 1;
}

/* printGraph
 *
 * Print the graph's vertices and edges.
 */
void printGraph(Graph *g) {
    int i, j;
    int count;

    // Vertex section
    printf("\n  V(G) = { ");
    count = 1;
    for(i = 0; i < MAX_VERTICES; i++) {
        if(g->vertex[i] != 0) {
            if(count < g->nVertices) {
                printf("%c, ", i+'A');
            }
            else {
                printf("%c }", i+'A');
            }
            count++;
        }
    }

    // Edge section
    printf("\n  E(G) = { ");
    count = 1;
    for(i = 0; i < MAX_VERTICES; i++) {
        for(j = 0; j < MAX_VERTICES; j++) {
            if(g->edge[i][j] != 0 && i <= j) {
                if(count < g->nEdges) {
                    printf("(%c,%c), ", i+'A', j+'A');
                }
                else {
                    printf("(%c,%c) }", i+'A', j+'A');
                }
                count++;
            }
        }
    }
    printf("\n\n");
}
