#include <stdio.h>
#include <math.h>

int main() {
    int n, k, i, j, squareRoot, arrIndex, divided, arr[10];
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%d", &k);
        squareRoot = sqrt(k);
        printf("case %d: ", i);
        for(j = 1, arrIndex = 0; j <= squareRoot; j++) {
            //printf("%d %d %d\n", j, squareRoot, k);
            if(k % j == 0) {
                divided = k / j;
                //printf("j = %d, divided = %d\n", j, divided);
                //arr[arrIndex] = j;
                //arr[arrIndex + 1] = divided;
                //arrIndex = arrIndex + 2;
                printf("%d %d ", j, divided);
            }
        }
        printf("\n");
        //arr[arrIndex] = -1;
    }
    for(i = 0; arr[i] != -1; i++) {
        //printf("%d\n", arr[i]);
    }
}
