#include <stdio.h>

int main(void)
{
    double num1, num2;

    fputs("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â: ", stdout);
    scanf("%lf %lf", &num1, &num2);
    
    printf("µ¡¼À °á°ú: %f \n", num1+num2);
    printf("»¬¼À °á°ú: %f \n", num1-num2);
    printf("°ö¼À °á°ú: %f \n", num1*num2);
    printf("³ª´°¼À °á°ú: %f \n", num1/num2);

    return 0;
}