#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
    char array[100];
    
    printf("String: ");
    scanf("%[^\n]s", &array);

    for(int i = 0; i < 100; i++)
    {
        array[i] = toupper( array[i]);
    }

    printf("String: %s",array);
}
