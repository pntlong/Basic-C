#include <stdio.h>

int main ()
{
    int ar[100];
    int n, i;
    scanf ("%d", &n);
    int sum = 0;
    for (i=0;i<=n;i++)
    {
        scanf ("%d", &ar[i]);
        sum = sum + ar[i];
    }
    printf ("%d", sum);
    return 0;
}
