#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int w, h;
        scanf("%d %d", &w, &h);

        if (w == h)
            printf("Square\n");
        else
            printf("Rectangle\n");
    }

    return 0;
}
