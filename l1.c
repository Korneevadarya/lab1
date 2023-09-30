#include <studio.h>
#include <math.h>
int main(void)
{
    float a1,a2,a3;
    printf("Enter a1 -> ");
    scanf("%f", &a1);
    printf("Enter a2 -> ");
    scanf("%f", &a2);
    printf("Enter a3 -> ");
    scanf("%f", &a3);
    
    if (!a1 && !a2 && !a3)
        return 0;
    
    int s = a1 + a2 + a3;
    printf("summ",s);

    if (a1>a2 && a1>a3) 
        max = a1;
    if (a1<a2 && a1<a3) 
        min = a1;
    if (a2>a1 && a2>a3) 
        max = a2;
    if (a2<a1 && a1<a3) 
        min = a2;
    if (a3>a1 && a3>a2) 
        max = a3;
    if (a3<a1 && a3<a2) 
        min = a3;

    if (max%2=0)
    
}