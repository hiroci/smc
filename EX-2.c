#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char array[100];
    char arrayUpper[100];
    char arrayLower[100];
    
    printf("String: ");
    scanf("%[^\n]s", &array);

    for(int i = 0; i < 100; i++)
    {
        arrayUpper[i] = toupper( array[i]);
        arrayLower[i] = tolower( array[i]);
    }

    printf("String uppercase: %s\n",arrayUpper);
    printf("String lowercase: %s",arrayLower);
}
