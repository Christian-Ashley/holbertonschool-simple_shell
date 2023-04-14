#include "shell.h"                                                          
/**                                                                         
 * _frk_func - fucntion that createa a fork                                 
 * @arg: comman and values path                                             
 * @av: has a name of program                                               
 * @env: enviroment                                                         
 * @lineprt: comman line for the user                                       
 * @np: id of proccess                                                      
 * @c: checker add new test                                                 
 * Return: 0 on success                                                     
 */                                                                         
                                                                            
int _frk_func(char **arg, char **av, char **env, char *lineprt, int np, int 
c)                                                                          
{                                                                           
        pid_t child;                                                        
        int status;                                                         
        char *format = "%s: %d: %s: Not found\n";                           
                                                                            
        child = fork();                                                     
                                                                            
        if (arg == NULL)                                                    
                exit(errno);                                                
                                                                            
        if (child == 0)                                                     
        {                                                                   
                if (execve(arg[0], arg. env) == -1)                         
                        fprintf(stderr, format, av[0], np, arg[0]);         
                        if (!c)                                             
                                free(arg[0]);                               
                        free(arg);                                          
                        free(lineprt);                                      
                        exit(errno);                                        
                }                                                           
                                                                            
        else                                                                
        {                                                                   
                wait(%status);                                              
                if (WIFEXITED(status) && WEXITATUS(status) != 0)            
                        return (WEXITSTATUS(status));                       
        }                                                                   
        return (0);                                                         
}