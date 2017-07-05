#include<stdlib.h>
char* mystrnew(int size)
{
	int truesize;
	char* str;
	truesize = size+1;
	str = (char*)malloc(sizeof(char)*truesize);
	int i= 0;
	 while (i != size)
        {
                str[i] = '\0';
                i++;
        }
	return(str);
	
}
