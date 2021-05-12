#ifndef MONTY_H
#define MONTY_H

/* Required headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Macro */
#define BUFFER_SIZE 1024
#define WRONG_USAGE 0
#define ACCESS_DENIED 1
#define INVALID_INSTRUCTION 2
#define ALLOCATION_FAILED 3
#define WRONG_ARGUMENT 4

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack);
} instruction_t;

/**
 * 
 * 
 * 
 */
typedef struct prm_s
{
	stack_t *stack;
	FILE *fileDescriptor;
	char *filename;
	char *functionName;
	char *buffer;
	unsigned int line_nb;
	int value;
} prm_t;

extern prm_t *data;

/* File management functions */
void fileRead();

/* Error handling functions */
void errorHandler(int errorID);
int isnumber(char *n);

/* Parsing management */
void parsingManager();

/* Function pointer */
void (*getFunc())(stack_t **stack);

/* Stack functions */
void push(stack_t **stack);
void pall(stack_t **stack);

/* Memory functions */
void freeStruct();
void free_list(stack_t *head);

/* Data management */
void initData();

/* String functions */
char *_strtok(char *str, char *sep, char **saveptr);
unsigned int _strspn(char *s1, char *s2);
unsigned int _strcspn(char *s1, char *s2);
char *_strchr(char *str, char c);

#endif /* MONTY_H */
