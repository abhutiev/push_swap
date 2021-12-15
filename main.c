#include "push_swap.h"
#include "unistd.h"
#include "stdlib.h"

t_stack *init_stack(char *input) {
	t_stack *stack;

	stack = malloc(sizeof(t_stack));

	return stack;
}

void destroy_stack(t_stack *stack) {
	free(stack);
}

int main(int argc, char **argv) {
	int error = validate_input_data(argc, argv);
	if (error) {
		return error;
	}
	t_stack *stack = init_stack(argv[1])


	destroy_stack(stack);
}