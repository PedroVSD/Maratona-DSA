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

    // Cria um array de listas de adjacências
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));

    // Inicializa cada lista de adjacências como vazia
    for (int i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

// Função para adicionar uma aresta ao grafo direcionado
void addEdge(struct Graph* graph, int src, int dest) {
    // Adiciona uma aresta do src para o dest
    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    // Se o grafo não for direcionado, descomente as linhas abaixo para adicionar uma aresta do dest para o src também
    /*
    newNode = newAdjListNode(src);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
    */
}

// Função para imprimir a representação do grafo por lista de adjacências
void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->V; ++v) {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("Lista de adjacências do vértice %d: ", v);
        while (pCrawl) {
            printf("%d -> ", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int V = 5; // Número de vértices do grafo
    struct Graph* graph = createGraph(V);

    // Adiciona as arestas do grafo
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // Imprime a representação do grafo por lista de adjacências
    printGraph(graph);

    return 0;
}