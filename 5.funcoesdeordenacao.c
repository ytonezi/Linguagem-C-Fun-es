void OrdenaNome(char v[][10], int tam)// modelo Sort string
{
   int i, j;
   char aux[10];
   for (i=1; i<tam; i++)
   {
	 strcpy(aux,v[i]);
	 j=i-1;
	 while ((j>=0) && (aux<v[j]))
	 {
		strcpy(v[j+1],v[j]);   // deslocando
		j--;
	 }
	 strcpy(v[j+1],aux);  // inserindo
   }
}
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