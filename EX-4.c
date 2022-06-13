#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* mesToString(int mes);

char *strMes[] = {
        "janeiro", "fevereiro", "março", 
        "abril", "maio", "junho", 
        "julho", "agosto", "setembro", 
        "outubro", "novembro", "dezembro"
    };

int main(int argc, char const *argv[])
{
    char input[15];
    int day, month, year;
    printf("Data (DD/MM/YYYY): ");
    scanf("%2d/%2d/%4d", &day, &month, &year);

    printf("%02d de %s de %04d\n", day, mesToString(month), year);
    
    return 0;
}

char* mesToString(int mes)  {
	
    char* string = "";

	string = strMes[mes - 1];
    return string;
}