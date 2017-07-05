#include <string.h>
int test_mystrlenp2(const char* str)
{
	if (strlen(str) == mystrlen(str))
	{
		write(1,"Vrai!\n",6);
	}
	else
	{
		write(1,"FAUX\n",5);
	}
}

void test_mystrlen(void)
{
	test_mystrlenp2("yayaya");
	test_mystrlenp2("sqkdjfhkqsjdbfmkqzjshbf");
	test_mystrlenp2("");
	test_mystrlenp2("354sdfsdfsdf54");
	test_mystrlenp2("lalalalal");
	test_mystrlenp2("ichliebedich");
	test_mystrlenp2("ich liebe dich");
}

int test_myputcharp2(const char c)
{
	write(1,"putchar a écris ",17);
	write(1,&c,1);
	write(1," alors que myputchar a écris " ,30);
	myputchar(c);
	write(1,"\n",1);
}

void test_myputchar(void)
{
	test_myputcharp2('c');
	test_myputcharp2('f');
	test_myputcharp2('4');
	test_myputcharp2('6');
	test_myputcharp2('q');
}

void test_mystrnewp2(int size)
{
	int i;
	i = 0;
	char* str= mystrnew(size);
	if (str[i] != 0)
	{
		write(1,"FAUX",4);
	}
	else
	{
		while( str[i] == 0)
		{
			i++;

		}
	}
	write(1,"Vrai!\n",6);

}

void test_mystrnew(void)
{
	test_mystrnewp2(6);
	test_mystrnewp2(9);
	test_mystrnewp2(13);
	test_mystrnewp2(0);
}


char* test_mystrdupp2(const char *str)
{
	char* r;
	r = mystrdup(str);
	int i;
	i = 0;

	while (str[i] == r[i])
	{ 
		if (str[i] == 0 || r[i] == 0)
		{
			int x = str[i];
			int z = r[i];

			if(x-z == 0)
			{
				write(1,"Vrai\n",5);
			}
			else
			{
				write(1,"FAUX\n",5);
			}
		}
		i = i+1;
	}


}


void test_mystrdup(void)
{
	test_mystrdupp2("lalala");
	test_mystrdupp2("qsdmkjfhqmksj");
	test_mystrdupp2("123");
	test_mystrdupp2(" ");

}


int main (void)
{
	test_mystrlen();
	test_myputchar();
	test_mystrnew();
	test_mystrdup();
	return(0);
}

