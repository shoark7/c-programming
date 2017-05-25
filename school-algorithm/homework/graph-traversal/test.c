/* Main test c file
 *
 *  201101328 B.A. Sunghwan Park
 *
 *  This file is for the assignment.
 */

#include <stdio.h>
#include <stdlib.h>
#include "graph_traversal.h"


int main(void) {
    Graph g;
    init_graph(&g);

    printf("\n  과제 6-1. 배열로 그래프 구현 201101328 박성환\n");

    insertVertex(&g, 'A');
    insertVertex(&g, 'B');
    insertVertex(&g, 'C');
    insertVertex(&g, 'D');
    insertVertex(&g, 'E');
    insertVertex(&g, 'F');

    insertEdge(&g, 'A', 'B', 1);
    insertEdge(&g, 'A', 'D', 1);
    insertEdge(&g, 'A', 'E', 1);
    insertEdge(&g, 'B', 'C', 1);
    insertEdge(&g, 'B', 'D', 1);
    insertEdge(&g, 'C', 'D', 1);
    insertEdge(&g, 'C', 'E', 1);
    insertEdge(&g, 'D', 'F', 1);
    insertEdge(&g, 'E', 'F', 1);

    printGraph(&g);

    printf("  Depth First Search   : ");
    depthFirstSearch(&g, 'A');

    printf("  Breadth First Search : ");
    breadthFirstSearch(&g, 'A');

    return 0;
}
