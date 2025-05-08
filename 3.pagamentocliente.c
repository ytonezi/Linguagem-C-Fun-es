#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void PosTela (int x, int y)
{
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

float gastocliente (float gasto)
{
    printf("Entre com o total gasto pelo cliente: ");
    scanf("%f", & gasto);

    return gasto;
}

float avista (float gasto)
{   
    float v = 0;
    v = gasto - (gasto * 0.10);
    return v;
}

float duasvezes (float gasto)
{
    float v = 0;
    v = gasto / 2;
    return v;
}

float tresadez (float gasto)
{
    float v = 0;
    v = gasto + (gasto * 0.03);
    return v;
}

int main()
{
    int parcelas;
    char resp;
    float gastototal, v;

    gastototal = gastocliente(gastototal);

    printf("Selecione a opcao de pagamento");
    printf("\n1- A Vista \n2- 2 Vezes \n3- 3 a 10 Vezes\n");
    fflush(stdin);
    resp = getchar();

    if (resp == '1')
    {
        printf("\nValor a ser pago: %0.2f", avista(gastototal));
    }
    else if (resp == '2')
    {
        printf("\nValor a ser pago: %0.2f", duasvezes(gastototal));
    }
    else if (resp == '3')
    {
        if (gastototal >= 100)
        {
            printf("Quantidade de Parcelas: ");
            scanf("%d", & parcelas);

            printf("\nValor a ser pago: %0.2f", tresadez(gastototal)/3);
        }
        else
        {
            printf("Forma de pagamento invalida");
        }
    }

    return 0;
}