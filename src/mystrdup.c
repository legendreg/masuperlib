#include<stdlib.h>
char* mystrdup(const char* str)
{
	char* str2;
	int len;
	len = mystrlen(str) + 1;
	str2 =(char*)malloc(sizeof(char)*len);
	if(str2 == NULL)
	{
		return (NULL);
	}
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}	

	str2[len - 1] = '\0';
	return(str2);
} 
