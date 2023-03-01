#include "main.h"                                                                                                                    
                                                                                                                                     
/**                                                                                                                                  
 * _strncpy - Copies at most an inputted number                                                                                      
 *            of bytes from string src into dest.                                                                                    
 * @dest: The buffer storing the string copy.                                                                                        
 * @src: The source string.                                                                                                          
 * @n: The maximum number of bytes to copied from src.                                                                               
 *                                                                                                                                   
 * Return: A pointer to the resulting string dest.                                                                                   
 */ 

char *_strncpy(char *dest, char *src, int n)
{
	int number = 0, srcLength = 0;

	while (src[number++])
		srclength++;
	for (number = 0; src[number] && number < n; index++)
		dest[number] = src[number];

	for (number = srcLength; number < n; number++)
		dest[number] = '\0';

	return (dest);
}
