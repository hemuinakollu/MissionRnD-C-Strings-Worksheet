/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/
int power(int a, int b){
	int i = 0, sum = 1;
	for (i = 1; i <= b; i++)
	{
		sum = sum*a;

	}
	return sum;

}
#include <stdio.h>


void number_to_str(float number, char *str,int afterdecimal){
	int i = 0, x = 0,a=0,n=0,k=0;
	float y = 0;
	
	if (number < 0)
	{
		str[i] = '-';
		i++;
		number = (-1)*number;
	}
	
		x = (int)number;
		n = x;
		while (n > 0)
		{
			a = a * 10;
			a = a + n % 10;
			n = n / 10;
		}
		while (a > 0)
		{
			str[i] = (a % 10)+48;
			i++;
			a = a / 10;
		}
		if ((number - x) > 0)
		{
			str[i] = '.';
			i++;
			 y= (number-x)*power(10, afterdecimal);
			 x = (int)y;
			 n = x;
			while (n > 0)
			{
				a = a * 10;
				a = a + n % 10;
				n = n / 10;
			}
			while (a > 0)
			{
				str[i] = (a % 10) + 48;
				i++;
				a = a / 10;
			}
			
		}

		}

	
	
	

