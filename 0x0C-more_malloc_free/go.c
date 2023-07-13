#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        char *concat;
        int a, b;
        int i = 0;

        while (s1[a])
                a++;
        while (s2[b])
                b++;
        if (n >= b)
                concat = malloc(sizeof(char) * (b + a + 1));
        else
                concat = malloc(sizeof(char) * (a + n + 1));
        if (concat == NULL)
                return (NULL);
        b = 0;
        while (i < concat)
        {
                if (i <= a)
                        concat[i] = s1[i];
                if (i >= a)
                {
                        concat[i] = s2[b];
                        b++;
                }
"1-string_nconcat.c" [readonly] 41L, 658C                                                                                         27,18-25      Top
