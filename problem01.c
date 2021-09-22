#include <stdio.h>

int main()
{
    int i, n, t;
    scanf("%d", &t);
    int ara[t];

    for(i = 0; i < t; i++) {
        scanf("%d", &n);

        if(n % 2 == 0) {
            ara[i] = 0;
        }
        else {
            ara[i] = 1;
        }

    }
    for(i = 0; i < t; i++) {
        if(ara[i] == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    return 0;
}
