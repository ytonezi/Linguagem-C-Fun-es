#include<stdio.h>
#include<stdlib.h>

void Ordena_ins_direta(float v[], int tam)// modelo Sort numeros e char
{
   int aux, i, j;
   for (i=1; i<tam; i++)
   {
	 aux=v[i];
	 j=i-1;
	 while ((j>=0) && (aux<v[j]))
	 {
		v[j+1] = v[j];   // deslocando
		j--;
	 }
	 v[j+1]=aux;  // inserindo
   }
}

float media (float vetor_nota [])
{
	int i;
	float med=0, soma=0;
	
	for (i=0; i<=2; i++)
	{
		soma += vetor_nota[i];
	}
	
	return(soma/3);
}

void CarregaVetor (float vetor_nota [])
{
	int i, z=1;
	for (i=0; i<=2; i++, z++)
	{
		printf("Digite a %d nota do vetor: ", z);
		scanf("%f", & vetor_nota[i]);
	}
}

main()
{
	int i, t=3;
	float vetor_nota[3];
	CarregaVetor(vetor_nota);
	printf("\n A media dessas notas e: %0.2f", media(vetor_nota));
	system("pause > null");
	Ordena_ins_direta(vetor_nota, t);
	for (i=0; i<=2; i++)
	{
		printf("Ordencao: %0.2f", (vetor_nota[i]));
	}
	
}