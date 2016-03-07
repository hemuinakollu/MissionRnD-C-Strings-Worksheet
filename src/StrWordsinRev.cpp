/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char *a,int b,int l)
{
	int i = b, j = l-1;
	char c;
	while(i <= j)
	{
		c = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = c;
		++i;
		--j;
	}

}
void str_words_in_rev(char *input, int len){
	int c = 0, i = 0, p = 0;
	if (input != NULL && len > 0)
	{
		for (i = 0; i<len; i++)
		{
			if (input[i] == ' ')
				c++;
		}

		if (c != 0)
		{
			reverse(input, 0, len);

			for (i = 0; i < len; i++)
			{
				p = i;
				while (1)
				{
					if (input[i] == ' '||i==len)
						break;
					i++;
				}
				reverse(input, p, i);
				while (i<len)
				{
					if (input[i] != ' ')
					{
						i--;
						break;
					}
					i++;

				}
				
				

			}
		}
	}
	
}
