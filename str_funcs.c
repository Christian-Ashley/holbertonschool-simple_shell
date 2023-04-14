<<<<<<< HEAD
#include "shell.h"
/**
 * _strcat - concatenates two strings
 * @dest: string appened by src
 * @src: string appending dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *scr)
{
	int j, k;

	j = 0;
	k = 0;
	
	while (dest[j] != '\0')
	{
		++j;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		++j;
		++k;
	}
	dest[j] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: dest of string
 * @s2: scr of string
 *
 * Return: n
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
/**
 * _strcpy - copy string
 * @dest: address pointed to
 * @src: string being pointer to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		++k;
	}
	dest[k] = '\0';
	++k;
	return (dest);
}
/**
 * _strlen - function to return length of a string
 * @s: pointer to the string
 * Return: 0
 */
int _strlen(char *s)
{
	int k = 0;

	while (*(s + k) != '\0')
		++k;
	return (k);
}
/**
 * _strncmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * @n: number of characters
 * Return: differnce
 */
size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] = s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
}
=======
#ifndef SHELL_H                                                             
#define SHELL_H                                                             
#include <stdio.h>                                                          
#include <stdlib.h>                                                         
#include <unistd.h>                                                         
#include <sys/wait.h>                                                       
#include <sys/types.h>                                                      
#include <sys/stat.h>                                                       
#include <errno.h>                                                          
                                                                            
#define BUFFER_SIZE 1024                                                    
#define TOKEN_DELIMITERS " \t\r\n\a"                                        
                                                                            
extern char **environ;                                                      
                                                                            
/** command line functions **/                                              
char *_get_path(char **env);                                                
int _value_path(char **arg, char **env);                                    
char *_getline_command(void);                                               
void _getenv(char **env);                                                   
char **_get_token(char *lineprt);                                           
void _exit_comman(char **args, char *lineprt, int _exit);                   
int _frk_func(char **arg, char **av, char **env,                            
                char *lineprt, int np, int c);                              
/** string function **/                                                     
int _strcmp(char *s1, char *s2);                                            
size_t _strncmp(char *s1, char *s2, size_t n);                              
int _strlen(char *s);                                                       
char *_strcpy(char *dest, char *src);                                       
char *_strcat(char *dest, char *src);                                       
int _putchar(char c);                                                       
                                                                            
#endif
>>>>>>> 88cf6c07d9246d4bf0ee4b6fda13569304a6e02e
