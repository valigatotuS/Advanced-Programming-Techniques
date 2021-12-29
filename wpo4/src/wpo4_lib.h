/*
    By: @vq
    Created: 2021/12/28 by vq
*/

#ifndef WPO4_LIB_H
#define WPO4_LIB_H


#include <stdio.h>
#include <stdlib.h>

struct sq   {char* data; uint MAX_CAPACITY; uint current_index;};
void        Push(struct sq* stack_p, char e);
char        Pop(struct sq* stack_p);
void        Enqueue(struct sq* queue_p, char e); // #define Enqueue Push
char        Dequeue(struct sq* queue_p);
struct rb   {char* data; uint MAX_CAPACITY; uint read_index; uint write_index;};
void        Write(struct rb* rbuffer_p, char e);
char        Read(struct rb* rbuffer_p);


#endif