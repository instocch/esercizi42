int	ft_strlen(char *str)
{
	int len;
	char *pntr;

	len = 0;
	pntr = str;
	while(*pntr != '\0')
	{
		pntr++;
		len++;
	}
	return(len);
}

int main()
{
	char ciao[] = "ciaociao";
	ft_strlen(ciao);
}	
