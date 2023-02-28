#include <unistd.h>

void	ft_putstr(char *str)
{
	int bite;
	char *pntr;

	bite = 0;
	pntr = str;
	while(*pntr != '\0')
	{
		pntr++;
		bite++;
	}
	write(1, str, bite);
}

int main()
{
	char ciao[] = "hello";
	ft_putstr(ciao);
	return 0;
}



