#include <stdio.h>
#include <stdlib.h>

// Estrutura para representar um nó da lista de adjacências
struct AdjListNode {
    int dest;
    struct AdjListNode* next;
};

// Estrutura para representar a lista de adjacências
struct AdjList {
    struct AdjListNode* head;
};

// Estrutura para representar o grafo
struct Graph {
    int V;
    struct AdjList* array;
};

// Função para criar um novo nó da lista de adjacências
struct AdjListNode* newAdjListNode(int dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

// Função para criar um grafo com V vértices
struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;
    return graph;
}

// Função para adicionar uma aresta ao grafo
void addEdge(struct Graph* graph, int src, int dest) {
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;
}

// Função auxiliar para realizar a busca em profundidade
void DFSUtil(struct Graph* graph, int v, int* visited) {
    visited[v] = 1;
    printf("%d ", v);

    struct AdjListNode* temp = graph->array[v].head;
    while (temp != NULL) {
        int adjVertex = temp->dest;
        if (!visited[adjVertex])
            DFSUtil(graph, adjVertex, visited);
        temp = temp->next;
    }
}

// Função principal para realizar a busca em profundidade
void DFS(struct Graph* graph, int startVertex) {
    int* visited = (int*)calloc(graph->V, sizeof(int));
    DFSUtil(graph, startVertex, visited);
    free(visited);
}

// Função principal
int main() {
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    printf("Busca em Profundidade a partir do vértice 0: ");
    DFS(graph, 0);

    return 0;
}