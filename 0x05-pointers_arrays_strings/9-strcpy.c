#include "main.h"
#include <stdio.h>

/**
* _strcpy - a function that copies the string pointed to by src
* @dest: copy to destination.
* @src: copy from source.
* Return: the pointer to destination
*/
char *_strcpy(char *dest, char *src)
{
int count = 0;
while (count >= 0)
{
*(dest + count) = *(src + count);
if (*(src + count) == '\0')
break;
count++;
}
return (dest);
}
