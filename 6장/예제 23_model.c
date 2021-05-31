#include <stdio.h>
//#include <string.h>

#define STR_MAX    100

int main(void)
{
    char str1[STR_MAX]="Good morning? ";
    char str2[STR_MAX]="HaHaHa!";
    char buffString[STR_MAX];
    
    /** strlen test **/
    printf("length of \"%s\": %d \n", str1, strlen(str1));
    printf("length of \"%s\": %d \n", str2, strlen(str2));

    /** strcpy test **/
    strcpy(buffString, str1);
    printf("copy string: \"%s\" \n", buffString);

    /** strcat test **/
    strcat(buffString, str2);
    printf("concat string: \"%s\" \n", buffString);
    
    /** strcmp test **/
    printf("cmp str1, str1: %d \n", strcmp(str1, str1) );
    printf("cmp str2, str2: %d \n", strcmp(str2, str2) );
    printf("cmp str1, str2: %d \n", strcmp(str1, str2) );
    printf("cmp str2, str1: %d \n", strcmp(str2, str1) );
    return 0;
}
