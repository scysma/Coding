char *ft_strcpy(char *dest, char *src)
{
	int	i;	// i = index = indice di scorrimento

	i = 0;
	while (src[i])	// fintanto che src esiste nel punto i
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; //prima di uscire dal while dest si trova alla casella successiva all'ultimo carattere, cui aggiungo il termine nullo perche' il ciclo while non mi permette di copiarlo (si ferma prima nella source)
	return (dest);
}
