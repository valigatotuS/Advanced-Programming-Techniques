/*
    By: @vq
    Created: 2021/12/30 by vq
*/

#include "wpo5_lib.h"


#define min(a,b) ((a<b)?a:b)
#define MAX_PATHS 10
#define INF 999999


typedef struct path_{
    node_t* node;
    int distance;
    unsigned int best;
} path_t;

typedef struct node_{
    int distance;
    char label[10];
    path_t paths[MAX_PATHS];
    unsigned int visited;
} node_t;

void AddPathOnce(node_t* a, node_t* b, int distance){
    path_t* path = a->paths;
    while(path->node)
        path++;
    path->node = b;
    path->distance = distance;
}

void AddPath(node_t* a, node_t* b, int distance){
    AddPathOnce(a,b, distance);
    AddPathOnce(b,a, distance);
}

void NodeMarkBestPath(node_t* node, path_t* m){
    path_t* p = node->paths;
    for(p=node->paths;p->node;p++)
        p->best = (p==m);
}

void NodesList(node_t** nodes){                         // printing shortest path calculations 
    node_t* n;
    while((n=*nodes)){
        printf("* %s [%d] %s\n", n->label, n->distance, n->visited ? "visited":"");
        for(path_t* p = n->paths; p->node; p++)
            printf(" --(%d)--> %s %s\n", p->distance, p->node->label, p->best ? "[BEST]":"");
        nodes++;
    }
}

int DijkstraNodeDistance(node_t* node){
    path_t* p;

    if(!(node->visited)){                                           // if not visited
        printf("DijkstraNodeDistance( %s )...\n", node->label);
        node->visited = 1;
        for(p=node->paths; p->node; p++){                           // loop through node paths
            int d = DijkstraNodeDistance(p->node) + p->distance;    
            if(d<(node->distance)){
                node->distance = d;
                NodeMarkBestPath(node, p);
            }
        }
        printf("DijkstraNodeDistance( %s ): %d\n", node->label, node->distance);
    }
    return node->distance;
}

void DijkstraSolution(node_t* node, int* shortest_d){   // printing shortest path & distance (thanks to mark)
    printf("%s[%d]", node->label, node->distance);
    path_t* p;
    for(p=node->paths; p->node; p++){
        if(p->best){
            *shortest_d += (p->distance);
            printf(" --(%d)--> ", p->distance);
            DijkstraSolution(p->node, shortest_d);
            break;
        }
    }
}

void Dijkstra(){
    node_t
            a = {distance:INF, label: "Antwerpen"},
            b = {distance:INF, label: "Brussel"},
            c = {distance:INF, label: "Charleroi"},
            d = {distance:INF, label: "Dinant"},
            e = {distance:INF, label: "Edingen"},
            f = {distance:0, label: "Fleurus"};

    AddPath(&f,&e, 7);
    AddPath(&e,&a, 2);
    AddPath(&a,&b, 3);
    AddPath(&b,&c, 2);
    AddPath(&c,&d, 12);
    AddPath(&a,&d, 5);
    AddPath(&d,&f, 2);

    node_t* nodes[] = {&a,&b,&c,&d,&e,&f,NULL};
    node_t* target = &b;

    int sd = 0;

    DijkstraNodeDistance(target);
    // NodesList(nodes);
    printf("Solution for %s: ", target->label);
    DijkstraSolution(target, &sd);         
    printf("\n shortest path distance equals: %i\n", sd);  
    printf("\n");
}

// void DijkstraNodes(node_t** nodes){
//     node_t* n;
//     while((n=*nodes)){
//         DijkstraNodeDistance(n);
//         nodes++;
//     }
// }