#include <stdio.h>
#include <stdlib.h>
#include <math.h>  /* para usar o INFINITY */
#include "../include/grafo.h"

// Implemente as funções da biblioteca de grafos (grafo.h e grafo.c).
// Utilize o programa principal abaixo para ir testando cada uma das funções
// criadas. (descomente apenas o que for testar)

int main() {
    int n, dig, i;
    Grafo g;
    ListaDeVertices caminho;
    n = 17;
    dig = 0;
    int origem = 0;
    int destino = 12;
    CriarGrafo (&g, n, dig);

    /* INSIRA AS ARESTAS DO SEU GRAFO AQUI */

    ExibirGrafo(g);
    printf ("Busca em profundidade: \n");
    // DFS(g, origem, destino, &caminho);
    // for (i=0; i < caminho.nVertices-1; i++)
    //     printf("%c -> ",caminho.vertices[i]+65);
    // printf ("%c\n\n",caminho.vertices[i]+65);
    return 0;
}
