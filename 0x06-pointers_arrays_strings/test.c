#include <stdio.h>

int main(void)
{
	char *p[98];
	int n;
	char n[98] = "Sfgfghfgfgf";

	p[0] = &n[0];
	p = "some of";
	
	printf("%p\n", p[0]);
	printf("%p\n", &n[0]);
	
	for (n = 0; n != '\0'; n++)
	printf("%s", n);

	return (0);
}
