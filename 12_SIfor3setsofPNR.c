// Write a program in C to calculate the simple interest for 3 sets of P, N and R.
#include <stdio.h>
int main()
{
    float p, n, r, si;
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\nSet %d\n", i);
        printf("Enter Principal (P): ");
        scanf("%f", &p);
        printf("Enter Time in years (N): ");
        scanf("%f", &n);
        printf("Enter Rate of interest (R): ");
        scanf("%f", &r);
        si = (p * n * r) / 100;
        printf("Simple Interest = %.2f\n", si);
    }
    return 0;
}