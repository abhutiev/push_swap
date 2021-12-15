#ifndef PUSH_SWAP_PUSH_SWAP_H
#define PUSH_SWAP_PUSH_SWAP_H

#define NUMBER_OF_ARGUMENTS 2

struct s_stack {
	int    *numbers;
	size_t size;
} t_stack;

#define WRONG_NUMBER_OF_ARGUMENTS 1
#define INVALID_INPUT_DATA 2

int validate_input_stack(char *stack);
int validate_input_data(int number_of_arguments, char **argv);

size_t custom_strlen(char *str);
char *custom_strdup(char *orig);
int is_digit(char c);
void* log_error(char* error_message);

#endif
