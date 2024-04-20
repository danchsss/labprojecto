#include <stdio.h> 

int lr1(void)
{
    float P, A, B, C, t1, t2;
    printf("A=");
    scanf("%f", &A);
    printf("B=");
    scanf("%f", &B);
    printf("C=");
    scanf("%f", &C);
    t1=A+B*B;
    t2=C-A;
    if(t2==0)
    {
        printf("деление на ноль\n");
        return -1;
    }
    P = t1/t2;
    printf("P=%f", P);

    return 0;
}
