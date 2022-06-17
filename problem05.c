#include <stdio.h>

int main()
{
    int T, i, N, j;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        scanf("%d", &N);
        int multi = N * N;
        for(j = 1; j <= multi; j++){
            printf("*");
            if(j % N == 0){
                printf("\n");
            }
        }
    }

    return 0;
}
