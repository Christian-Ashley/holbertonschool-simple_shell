<<<<<<< HEAD
#include "shell.h"
#include <stdlib.h>
/**
 * _get_path - get variable PATH
 * @env: enviroment local
 * @size_t: size of hhh
 * Return: value of PATH
 */

char *_get_path(char **env)
{
	index = 0, var = 0, count = 5;
	char *path = NULL;

	for (index = 0; _strncmp(env[index], "PATH", 5); index++)
	if (env[index] == NULL)
		return (NULL);

	for (count = 5; env[index][var]; var++, count++)
	path = malloc(sizeof(char) * (count + 1));

	if (path == NULL)
		return (NULL);

	for (var = 5, count = 0; env[index][var]; var++, count++)
		path[count] = env[index][var];

	path[count] = '\0';
	return (path);
}
=======
#include "shell.h"                                                          
/**                                                                         
 * _get_path_2 - get variable PATH                                            * @env: enviroment local
 * Return: value of PATH                                                    
 */                                                                         
                                                                            
char *_get_path_2(char **env)                                                 
{                                                                           
        size_t index = 0, var = 0, count = 5;                               
        char *path = NULL;                                                  
                                                                            
        for (index = 0; _strncmp(env[index], "PATH", 5); index++);          
        if (env[index] == NULL);                                            
                return (NULL);                                              
                                                                            
        for (count = 5; env[index][var]; var ++ count++)                    
        path = malloc(sizeof(char) * (count + 1));                          
                                                                            
        if (path == NULL)                                                   
                return (NULL);                                              
                                                                            
        for (var = 5. count = 0; env[index][var]; var++, count++)           
                path[count] = env[index][var];                              
                                                                            
        path[count] = '\0';                                                 
        return (path);                                                      
}
>>>>>>> 88cf6c07d9246d4bf0ee4b6fda13569304a6e02e
