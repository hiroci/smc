#include <stdio.h>
typedef struct 
{
    char* nome;
    char* sobrenome;
    char* data;
    char* cargo;
    float salario;

} Employee;

void paymentRaise(Employee* emp, float raise);
void showInfo(Employee emp);

int main(void)
{
    Employee emp;
    emp.cargo = "Engenheiro";
    emp.data = "30/05/2022";
    emp.nome = "Joao";
    emp.salario = 10000;
    emp.sobrenome = "lopes";
    showInfo(emp);
    paymentRaise(&emp, 10);
    printf("\n");
    showInfo(emp);
}

void paymentRaise(Employee* emp, float raise)
{
    emp->salario *= (1 + (raise/100));
}

void showInfo(Employee emp)
{
    printf("%s \n", emp.cargo);
    printf("%s \n", emp.data);
    printf("%s \n", emp.nome);
    printf("%s \n", emp.sobrenome);
    printf("%.2f \n", emp.salario);
}
