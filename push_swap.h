#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#include "unistd.h"
#include "stdlib.h"

#define NUMBER_OF_ARGUMENTS 2

typedef struct s_stack {
	int    *numbers;
	size_t size;
} t_stack;

#define WRONG_NUMBER_OF_ARGUMENTS 1
#define INVALID_INPUT_DATA 2

char	**split(char *s, char c);
int	custom_atoi(char *str);
void destroy_splitted(char **arr);

void print_int(int n);
void print_char(char c);
void print_stacks(t_stack *a, t_stack *b);

t_stack *init_stack(char *input);
void destroy_stack(t_stack *stack);
t_stack *init_empty_stack(size_t size);


int validate_input_stack(char *stack);
int validate_input_data(int number_of_arguments, char **argv);

size_t custom_strlen(char *str);
char *custom_strdup(char *orig);
int is_digit(char c);
void log_error(char* error_message);
void log_action(char* action);

#endif
