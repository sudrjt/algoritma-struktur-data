#include <stdio.h>
#include <conio.h>

int main() {
    int a = 3, b = 2, c = 1, bil;

    printf("Bil-A | Bil-B | Bil-C\n");
    printf("---------------------\n");

    for (int bil = 1; bil <= 10; ++bil) {
        a += b;
        b += c;
        c += 2;

        printf("%d\t| %d\t| %d\n", a, b, c);
        
        if (c == 13) {
            break;
        }
    }

    getch();
}
