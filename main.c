#include "push_swap.h"
#include "unistd.h"
#include "stdlib.h"

size_t custom_strlen(char *str) {
	for (int i = 0; str[i]; i++) {}
	return i;
}

char *custom_strdup(char *orig) {
	char *copy = (char *)malloc(custom_strlen(orig));
	if copy == NULL {
		return NULL;
	}
	for (int i = 0; orig[i]; i++) {
		copy[i] = orig[i];
	}
	copy[i] = '\0';
	return copy;
}

int is_digit(char c) {
	return c > 47 && c < 58;
}

void* log_error(char* error_message) {
	write(2, error_message, custom_strlen(error_message));
}

int validate_input_stack(char *stack) {
	for (int i = 0; argument[i]; i++) {
		if (stack[i] != ' ' && !is_digit(stack[i])) {
			log_error("Invalid characters in input stack");
			return INVALID_INPUT_DATA;
		}
	}
	return 0;
}

int validate_input_data(int number_of_arguments, char **argv) {
	if (number_of_arguments != NUMBER_OF_ARGUMENTS) {
		log_error("Wrong number of arguments");
		return WRONG_NUMBER_OF_ARGUMENTS
	}

	stack := argv[1];
	int valid = validate_input_data(stack);

	return valid;
}

char *init_stack(char **input) {
	return custom_strdup(input[1]);
}

void destroy_stack(char *stack) {
	free(stack);
}

int main(int argc, char **argv) {
	int error = validate_input_data(argc, argv);
	if (error) {
		return error;
	}

	char *stack = init_stack(argv);

	destroy_stack(stack);
}