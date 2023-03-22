#include "main.h"
 /**
  * _abs-its is where it enters
  *
  * @a: parameter
  *
  * Return: a if successful
  */
int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else
	{
		a = a;
	}
	return (a);
}
