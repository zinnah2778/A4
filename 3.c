#include <stdio.h>
int main()

{
    int a, n;

    printf("Please enter all even numbers till:\n");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    a=2;

    while(a<=n)
    {
        printf("%d ",a);

        a+= 2;
    }

    return 0;
}
