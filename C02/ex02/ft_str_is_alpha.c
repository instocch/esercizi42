#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && \
		   (str[i] < 'a' || str[i] > 'z'))
		{
			   return (0);
		}
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
		int risultato;

		risultato = ft_str_is_alpha(argv[1]);
	    printf("%d\n", risultato);
}


