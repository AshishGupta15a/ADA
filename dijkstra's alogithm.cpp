#include <stdio.h>
#include <stdlib.h>
#define V 10
int minDistance(int dist[], int visited[], int n) 
{
    int min = INT_MAX, min_index;   
    for (int v = 0; v < n; v++) 
	{
        if (!visited[v] && dist[v] <= min) 
		{
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}
void printSolution(int dist[], int n) 
{
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < n; i++)
        printf("%d \t %d\n", i, dist[i]);
}
void dijkstra(int graph[V][V], int source, int n) 
{
    int dist[V];
    int visited[V];
    for (int i = 0; i < n; i++) 
	{
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[source] = 0;
    for (int count = 0; count < n - 1; count++)
	{
        int u = minDistance(dist, visited, n);
        visited[u] = 1;
        for (int v = 0; v < n; v++) 
		{
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) 
			{
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    printSolution(dist, n);
}
int main() 
{
    int n; 
    printf("Name:Ashish Gupta");
    printf("\nEnrollment No:A2305221299");
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    int graph[V][V];
    printf("Please enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            scanf("%d", &graph[i][j]);
        }
    }
    int source;
    printf("Please enter the source vertex: ");
    scanf("%d", &source);
    dijkstra(graph, source, n);
    return 0;
}

