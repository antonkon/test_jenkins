#include <stdio.h>

int check_mas(int a, int b, int c, int mas[3][3]) {

    if (a == 5) {
        return 2;
    }
    if (b == 1) {
        return 1;
    }

    return 0;
}

int main() {

    int mas[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    int ret;

    ret = check_mas(2, 1, 0, mas);

    printf("Ret: %d\n", ret);

    return 0;
}

