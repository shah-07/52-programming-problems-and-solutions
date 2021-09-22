#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, length;
    char t[100];
    scanf("%d", &n);
    int ara[n];


    for(i = 0; i < n; i++) {
       scanf("%s", &t);
       length = strlen(t);
       if(0 <= length && length <= 100) {
            if(t[length-1] % 2 == 0) {
                ara[i] = 0;
            }
            else {
                ara[i] = 1;
            }
       }

    }

    for(i = 0; i < n; i++) {
        if(ara[i] == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }
    return 0;

}
