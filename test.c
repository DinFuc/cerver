#include <stdio.h>

typedef struct {
    char *ptr;
    size_t len;
} S;

int main(void) {
    S s = {
        .ptr = "a",
        .len = 1,
    };
    return 0;
}
