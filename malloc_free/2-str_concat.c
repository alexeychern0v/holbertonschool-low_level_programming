char *str_concat(char *s1, char *s2)
{
	int size1, size2, sizeall = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
	{
		return (s1 = "");
	}
	if (s2 == NULL)
	{
		return (s2 = "");
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	sizeall = size1 + size2;
	s = malloc(sizeall * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
