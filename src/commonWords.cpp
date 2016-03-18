/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
int comapare(char *a, char *b, int p, int q)
{
	int i = 0;
	if (p != q)
	{
		//printf("in compare - returnn -1 ");
		return -1;

	}
	else{

		for (i = 0; i<p; i++)
		{
			if (a[i] != b[i])
				return -1;
		}
		//printf("in compare ");
		if (p>0 && q>0)
			return 1;
	}
	
}
char** commonWords(char *str1, char *str2) {
	char **out = (char**)malloc(sizeof(char));

	int i = 0, j = 0, k = 0, p = 0, q = 0, l = 0, c = 0;
	if (str1 != NULL&&str2 != NULL)
	{
		for (i = 0; str1[i] != '\0'; i++)
		{
			p = 0;
			char *temp1 = (char*)malloc(sizeof(char));

			while (str1[i] != ' '&& str1[i] != '\0')
			{
				temp1[p] = str1[i];
				p++;
				i++;
			}

			for (j = 0; str2[j] != '\0'; j++)
			{
				k = 0;
				q = 0;
				char *temp2 = (char*)malloc(sizeof(char));
				while (str2[j] != ' ' && str2[j] != '\0')
				{
					temp2[q] = str2[j];
					q++;
					j++;
				}

				k = comapare(temp1, temp2, p, q);

				if (k == 1)
				{
					c = -1;
					out[l] = temp1;
					l++;
				}
				if (str2[j] == '\0')
					break;

			}
			if (str1[i] == '\0')
				break;
		}


		out[l] = '\0';
		l++;
		if (c != -1)
			return NULL;

		return out;
	}
	else
	{

		return NULL;
	}

}