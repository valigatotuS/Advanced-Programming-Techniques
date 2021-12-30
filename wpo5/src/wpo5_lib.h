/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#ifndef WPO5_LIB_H
#define WPO5_LIB_H

#include <stdio.h>
#include <math.h>
#include <stdint.h>

typedef struct node_    node_t;
typedef struct path_    path_t;
void                    AddPathOnce(node_t* a, node_t* b, int distance);
void                    AddPath(node_t* a, node_t* b, int distance);
void                    NodeMarkBestPath(node_t* node, path_t* m);
void                    NodesList(node_t** nodes);
int                     DijkstraNodeDistance(node_t* node);
void                    DijkstraNodes(node_t** nodes);
void                    DijkstraSolution(node_t* node, int* shortest_d);
void                    Dijkstra();

#endif