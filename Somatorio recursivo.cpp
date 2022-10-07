#include <stdio.h>
#include <stdlib.h>
int somatorio ( int n)
{	
	
	if(n==0)
	{
		return 0;
	}
	else if(n % 2==0)
	{
		return (n + somatorio(n-2));
	}
	else
	{
		n=n-1;
		return n+somatorio(n-2);
	}
	
	}		


int main()
{
	int n, soma;
	printf("Digite um Numero: ");
	scanf("%d", &n);
	soma = somatorio(n);
	printf("Resultado SOMATORIO : %d", soma);
	
}