#include <stdio.h>
void box(size_t i, size_t j, size_t k)
{
    if (i > 0)
    {
        if (j > 0)
        {
            printf("* ");
            box(i, j - 1, k);
        }
        else
        {
            printf("\n");
            box(i - 1, k, k);
        }
    }
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    box(n,n,n);
    return 0;
}