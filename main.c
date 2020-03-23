#include <stdio.h>

void tower(int n, char from, char to, char aux, int k)
{
    if (n == 1)
    {
        printf("Move %s disc NO.%d from rod %c to rod %c.\n", (k%2 == 0)?"Blue":"Green", k, from, to);
        return;
    }

    tower(n-1, from, aux, to, k-1);
    tower(1, from, to, aux, k);
    tower(n-1, aux, to, from, k-1);
    return;

}

int main(void)
{
    int n;
    scanf("%d",&n);
    tower(n, 'A', 'B', 'C', n);
    return 0;
}
