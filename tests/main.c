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
	write(1,"\n\n",2);
}


int main (void)
{
	test_mystrlen();
	test_myputchar();
	return(0);
}

