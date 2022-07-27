#pragma once
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <crtdbg.h>

typedef int element;

typedef struct node
{
	element data;
	struct node* next;
} NODE;
typedef struct queue
{
	NODE* begin;
	size_t size;
} QUEUE;

void q_construct(QUEUE**);
void q_destruct(QUEUE**);

bool q_empty(QUEUE*);
size_t q_size(QUEUE*);

void q_push(QUEUE*, element);
element q_pop(QUEUE*);
void q_clear(QUEUE*);