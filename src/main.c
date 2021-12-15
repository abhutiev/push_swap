#include "../push_swap.h"

#include <stdio.h>

int main(int argc, char **argv) {
	int error = validate_input_data(argc, argv);
	if (error) {
		return error;
	}
	t_stack *stack = init_stack(argv[1]);

	t_stack *empty_stack = init_empty_stack(stack->size);
	print_stacks(stack, empty_stack);

	destroy_stack(stack);
}