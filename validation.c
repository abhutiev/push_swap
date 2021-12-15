#include "push_swap.h"

int validate_input_stack(char *stack) {
	for (int i = 0; stack[i]; i++) {
		if (stack[i] != ' ' && !is_digit(stack[i])) {
			log_error("Invalid characters in input stack\n");
			return INVALID_INPUT_DATA;
		}
	}
	return 0;
}

int validate_input_data(int number_of_arguments, char **argv) {
	if (number_of_arguments != NUMBER_OF_ARGUMENTS) {
		log_error("Wrong number of arguments\n");
		return WRONG_NUMBER_OF_ARGUMENTS;
	}

	char *stack = argv[1];
	int valid = validate_input_stack(stack);

	return valid;
}