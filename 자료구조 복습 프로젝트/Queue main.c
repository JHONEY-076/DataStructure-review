#include "Queue.h"
// main source code

void queue_test()
{
	QUEUE* queue = NULL;

	q_construct(&queue);

	q_push(queue, 1);
	q_push(queue, 2);
	q_push(queue, 3);
	q_push(queue, 4);

	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));

	q_push(queue, 1);
	q_push(queue, 2);
	q_push(queue, 3);
	q_push(queue, 4);

	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));
	printf("%d\n", q_pop(queue));

	q_destruct(&queue);

	printf("\n\nCHECK\n\n");
}

int main()
{

	_CrtDumpMemoryLeaks();
}