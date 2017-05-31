#include <stdio.h>

Int main()
{
	char comando;
	int n1,n2,result;

	printf(“Digite a operação que deseja fazer”);
	scanf(“%c”, &comando);

	printf(“Digite os dois números da operação”);
	scanf(“%d %d”, &n1, &n2);

	if(comando == ‘+’)
	{
		result = n1 + n2;
		printf(“%d”, result);
	}	

	return 0;
}