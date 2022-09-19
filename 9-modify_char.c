#include <stdio.h>

/**
 * modify_my_char_var - solve me
 *
 * Return: nothing
 */
void modify_my_char(char *cc, char ccc)
{
	*cc =  'o';
	ccc = 'l';

}

/**
 * main - solve me
 *
 * Return: ALways 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	modify_my_char_var(p, c);
	return (0);
}
