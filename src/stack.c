#include "../push_swap.h"

static t_stack *fill_stack(char **input) {
	t_stack *stack = (t_stack *)malloc(sizeof(t_stack));

	for (stack->size = 0; input[stack->size]; stack->size++) {}

	stack->numbers = (int *)malloc(stack->size * sizeof(int));
	for (int i = 0; i < stack->size; i++) {
		stack->numbers[i] = custom_atoi(input[i]);
	}

	return stack;
}

t_stack *init_stack(char *input) {
	char **splitted_input = split(input, ' ');
	t_stack *stack = fill_stack(splitted_input);
	destroy_splitted(splitted_input);
	return stack;
}

t_stack *init_empty_stack(size_t size) {
	t_stack *stack= (t_stack *)calloc(1, sizeof(t_stack));
	stack->numbers = (int *)calloc(stack->size, sizeof(int));
	stack->size = size;
	for (int i = 0; i < stack->size; i++) {
		stack->numbers[i] = 0;
	}
	return stack;
}

void destroy_stack(t_stack *stack) {
	free(stack->numbers);
	free(stack);
}

void print_stacks(t_stack *a, t_stack *b) {
	for (int i = 0; i < a->size; i++) {
		print_int(a->numbers[i]);
		print_char(' ');
		print_int(b->numbers[i]);
		print_char('\n');
	}
}

void swap_stack(t_stack *stack) {
	if (stack->size < 2) {
		return;
	}
	int b = stack->numbers[stack->size - 1];
	stack->numbers[stack->size - 1] = stack->numbers[stack->size - 2];
	stack->numbers[stack->size - 2] = b;
}

void sa(t_stack *stack) {
	log_action("sa");
	swap_stack(stack);
}

void sa(t_stack *stack) {
	log_action("sa");
	swap_stack(stack);
}