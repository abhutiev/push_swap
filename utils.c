#include "push_swap.h"

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
