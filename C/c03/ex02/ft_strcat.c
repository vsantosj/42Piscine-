char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (desti[i] != '\0')
		i++;
	
	while (src[i] != '\0')
	{
			dest[i + j] = src[j];
			j++;
	}
	dest[i + j] = '\0';
	return (dest);

}
int	main()
{
	char dest[20] = "Hello";
	char src [] = "Word!";

	printf("%s"ft_strcat(dest,src));

	return (0);
}
