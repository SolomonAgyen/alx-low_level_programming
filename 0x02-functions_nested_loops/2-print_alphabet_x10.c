#include "main.h"

void print_alphabet_x10(void) {
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++) {
        write(1, &ch, 1);
    }
    write(1, "\n", 1);
}

int main(void) {
    int i;
    for (i = 0; i < 10; i++) {
        print_alphabet_x10();
    }
    return 0;
}
