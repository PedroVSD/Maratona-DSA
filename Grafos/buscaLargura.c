#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

typedef struct {
    int data[MAX_VERTICES];
    int front;
    int rear;
} Queue;

typedef struct {
    int vertices[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
} Graph;

void initGraph(Graph *graph, int numVertices) {
    graph->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph->vertices[i][j] = 0;
        }
    }
}

void addEdge(Graph *graph, int src, int dest) {
    graph->vertices[src][dest] = 1;
    graph->vertices[dest][src] = 1;
}

void breadthFirstSearch(Graph *graph, int startVertex) {
    int visited[MAX_VERTICES] = {0};
    Queue queue;
    queue.front = 0;
    queue.rear = -1;
    
    visited[startVertex] = 1;
    printf("Visited vertex: %d\n", startVertex);
    queue.data[++queue.rear] = startVertex;
    
    while (queue.front <= queue.rear) {
        int currentVertex = queue.data[queue.front++];
        
        for (int i = 0; i < graph->numVertices; i++) {
            if (graph->vertices[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = 1;
                printf("Visited vertex: %d\n", i);
                queue.data[++queue.rear] = i;
            }
        }
    }
}

int main() {
    Graph graph;
    int numVertices, numEdges, src, dest;
    
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    
    initGraph(&graph, numVertices);
    
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    
    for (int i = 0; i < numEdges; i++) {
        printf("Enter edge %d (source destination): ", i + 1);
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }
    
    int startVertex;
    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &startVertex);
    
    breadthFirstSearch(&graph, startVertex);
    
    return 0;
}