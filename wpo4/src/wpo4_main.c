#include "wpo4_lib.h"

int main() {
    /*
        Comment/Uncomment desired code to test the functions 
    */

    #pragma region intro code

    /*1.1 Stacks*/ 

    // typedef struct{
    //     char data[16];
    //     uint MAX_CAPACITY;
    //     uint current_index;
    // } stack_t;

    // stack_t ss;

    /*1.2 Queues*/

    // typedef struct{
    //     char data[16];
    //     uint MAX_CAPACITY;
    //     uint current_index;
    // } queue_t;

    /*1.3 Circular Buffers*/

    // typedef struct{
    //     char data[16];
    //     uint MAX_CAPACITY;
    //     uint read_index;    // pointing to oldest 
    //     uint write_index;   // pointing to youngest
    // } ringbuffer_t

    #pragma endregion

    #pragma region exercise1

    /*Stack: Push & Pop*/

    // struct sq my_stack;
    // my_stack.MAX_CAPACITY = 16;
    // my_stack.data = (char*)malloc(my_stack.MAX_CAPACITY*sizeof(char)); 
    // my_stack.current_index = 0; 

    // Push(&my_stack, 'A'); 
    // Push(&my_stack, 'B');
    // Push(&my_stack, 'C');
    // printf("pop -%c-\n",Pop(&my_stack));
    // printf("top stack element -%c-\n", my_stack.data[my_stack.current_index-1]);
    // printf("bottom stack element -%c-\n", my_stack.data[0]);

    // free(my_stack.data);

    /*Queue: Enqueue & Dequeue*/

    // struct sq my_queue;
    // my_queue.MAX_CAPACITY = 16;
    // my_queue.current_index = 0;
    // my_queue.data = (char*)malloc(my_queue.MAX_CAPACITY*sizeof(char));

    // Enqueue(&my_queue, 'A');
    // Enqueue(&my_queue, 'B');
    // Enqueue(&my_queue, 'C');

    // printf("dequeue element -%c-\n",Dequeue(&my_queue));                                // oldest inserted -> A
    // printf("youngest queue element -%c-\n", my_queue.data[my_queue.current_index-1]);   // last inserted   -> C
    // printf("oldest queue element -%c-\n", my_queue.data[0]);                            // oldest in queue -> B

    // free(my_queue.data);

    /*Circularbuffer: Read & Write*/

    // struct rb my_rbuffer;
    // my_rbuffer.MAX_CAPACITY = 3;
    // my_rbuffer.data = (char*)malloc(my_rbuffer.MAX_CAPACITY*sizeof(char));
    // my_rbuffer.read_index = 0;
    // my_rbuffer.write_index = 1;

    // Write(&my_rbuffer, 'A');
    // Write(&my_rbuffer, 'B');
    // Write(&my_rbuffer, 'C');
    // printf("read rb: -%c-\n", Read(&my_rbuffer));
    // Write(&my_rbuffer, 'D');
    // printf("read rb: -%c-\n", Read(&my_rbuffer));
    // printf("read rb: -%c-\n", Read(&my_rbuffer));
    // printf("read rb: -%c-\n", Read(&my_rbuffer));
    // printf("read rb: -%c-\n", Read(&my_rbuffer)); // must print a warning message r_i=w_i

    #pragma endregion

    return 0;
}