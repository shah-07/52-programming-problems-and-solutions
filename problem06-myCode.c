#include <stdio.h>

int main()
{
    int i, T, N, LSD, MSD, remainder;
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        scanf("%d", &N);
        remainder = N;
        LSD = N % 10;
        while(remainder != 0){
            MSD = remainder % 10;
            remainder = remainder / 10;
        }
        printf("Sum = %d\n", LSD + MSD);
    }

    return 0;
}
/*OUTPUT **
1
12345
Sum = 6
****/
