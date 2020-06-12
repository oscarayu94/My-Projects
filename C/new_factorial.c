/*
** EPITECH PROJECT, 2018
** naruto
** File description:
** naruto
*/

int	factorial(int nb)
{
	  int     i = 1;
        int     tmp;
	int     tmp2;

        if (nb <= 0 || nb > 12)
                return (0);
	if (nb == 1 || nb == 2)
                return (nb);
        else{
                tmp = nb * (nb - i);
                i++;
                tmp2 = tmp * (nb - i);
                while (i != nb - 1){
                        i++;
                        tmp2 = tmp2 * (nb - i);
		}
	}
        return (tmp2);
}
