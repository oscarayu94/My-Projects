#include <stdio.h>

#define LOWER	0	//Limite inferior de la tabla
#define UPPER	300	//Limite superior
#define STEP	20	//Tamano del incremento

/* Imprime la tabla Fahrenheit-Celsius*/

int main()
{
	int fahr;

	for (fahr=LOWER; fahr <= UPPER; fahr =fahr +STEP)
		printf("%3d%6.lf\n",fahr,(5.0/9.0)*(fahr-32));
	return(1);
}
