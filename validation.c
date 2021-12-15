#include "push_swap.h"

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