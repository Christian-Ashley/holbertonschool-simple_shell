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