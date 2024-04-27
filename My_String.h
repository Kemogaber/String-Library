#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *My_memchr(const void *str, char c, unsigned long long n);
int My_memcmp(const void *str1, const void *str2, unsigned long long n);
void *My_memcpy(void *dest, const void * src, unsigned long long n);
void *My_memmove(void *str1, const void *str2, unsigned long long n);
void *My_memset(void *str, int c, unsigned long long n);
char *My_strcat(char *dest, const char *src);
char *My_strncat(char *dest, const char *src, unsigned long long n);
char *My_strchr(const char *str, int c);
int My_strcmp(const char *str1, const char *str2);
char *My_strcpy(char *dest, const char *src);
char *My_strncpy(char *dest, const char *src, unsigned long long n);
unsigned long long My_strcspn(const char *str1, const char *str2);
char *My_strerror(int errnum);
unsigned long long My_strlen(const char *str);
char *My_strpbrk(const char *str1, const char *str2);
char *My_strrchr(const char *str, int c);
unsigned long long My_strspn(const char *str1, const char *str2);
char *My_strstr(const char *haystack, const char *needle);
char *My_strtok(char *str, const char *delim);
unsigned long long My_strxfrm(char *dest, const char *src, unsigned long long n);
