#include <stdio.h>

/*imprime la tabla Fahrenheit-Celsius*/

int main()
{
	int fahr;

	for (fahr= 300; fahr != 0; fahr = fahr-20)
		printf("%3d%6.lf\n", fahr, (5.0/9.0)*(fahr-32));
	return(1);
}