#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
* op_add - adding both funtions
* @a: first number
* @b: second number
*
* Return: the sum of both numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}



/**
* op_sub - subtract both numbers
* @a: first number
* @b: second number
*
* Return: the result of both numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}



/**
* op_mul - muliply both numbers
* @a: first number
* @b: second number
*
* Returm: the result of both number 
*/
int op_mul(int a, int b)
{
	return (a * b);
}



/**
* op_div - divides both numbers
* @a: first number
* @b: second number
*
* Return: the result of both numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}



/**
* op_mod - mods both numbers
* @a: first number
* @b: second number
*
* Return: the remainder of the division 
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	return (a % b);
}

