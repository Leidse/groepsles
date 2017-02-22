#include <stdio.h>
#include <string.h>
int bit;

int get_bit(char ch, int n) {
    for (int i = 0;i<8;i++) {
        if (i == n) {
            if (ch & 0x80) {
                bit = 1;
            } else {
                bit = 0;
            } 
        }ch <<=1;
    }
    return bit;
}

void bitprint(char ch) {
    for (int i = 0;i<8;i++) {
        if (ch & 0x80) { // check meest linkse bit
            putchar('1');
        } else {
            putchar('0');
        }
        ch <<=1; // schuif 1 positie naar links
    }
}


char verschuif_cyclisch(char ch, int n) {
    if (n > 0) {
        char ch1 = ch >> n;
        char ch2 = ch << (8 - n);
        ch = ch1 | ch2;
        
    }
    if (n < 0) {
        n = n * -1;
        char ch1 = ch << n;
        char ch2 = ch >> (8 - n);
        ch = ch1 | ch2;
    }
    return ch;
}


int main(void) {
    char ch = 7;
    int n = -6;
    bitprint(ch);
    printf("\n");
    printf("%d", get_bit(ch, n));
    printf("\n");
    bitprint(verschuif_cyclisch(ch, n));
}
