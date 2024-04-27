#include "My_String.h"
void *My_memchr(const void *str, char c, unsigned long long n)
{
    if (str==NULL) return NULL;
    for (int i=0; i<n; i++)
    {
        if ((char)c==*(char *)str) break;
        str++;
    }
}
int My_memcmp(const void *str1, const void *str2, unsigned long long n){
   int compare=0;
   if (str1==NULL || str2==NULL){
    printf("ERROR NULL");
    return -1;
   }
   while(n--){
    if(*(char *)str1==*(char *)str2){
        continue;
    }
    else if(*(char *)str1>*(char *)str2){
        return 1;
        break;
    }
    else {
        return -1;
        break;
    }
   }
   return compare;
}
void *My_memcpy(void *dest, const void * src, unsigned long long n){
for (int i=0;i<n;i++){
    *(char *)dest++=*(char *)src++;
}
}
void *My_memmove(void *str1, const void *str2, unsigned long long n){
for (int i=0;i<n;i++){
    *(char *)str1++=*(char *)str2++;
}
}
void *My_memset(void *str, int c, unsigned long long n){
 for (int i=0;i<n;i++){
    *(char *)str++=(char) c;
}
}
char *My_strcat(char *dest, const char *src){
   if (dest== NULL || src==NULL){
        printf("ERROR NULL");
   }
   char *d=dest;
   while(*d){
    d++;
   }
   while(*src){
    *d++=*src++;
   }
   *d='\0';
   return dest;
}
char *My_strncat(char *dest, const char *src, unsigned long long n) {
    char *ptr=dest;
       if (dest== NULL || src==NULL){
        printf("ERROR NULL");
   }
while(*ptr){
    ptr++;
};
while(n--){
    *ptr++=*src++;
}
*ptr='\0';
return dest;
}
char *My_strchr(const char *str, int c){
    char *ptr=str;
while(*ptr){
 if(*ptr==(char)c) {
        return ptr;
        break;
}
ptr++;
}
return ptr;
}
 int My_strcmp(const char *str1, const char *str2){
 int flag=0;
   if (str1== NULL || str2==NULL){
        printf("ERROR NULL");
   }
   while(*str1 && *str2){
    if(*str1>*str2){
        flag=1;
        break;}
    else if(*str1<*str2){
        flag=-1;
        break;}
   }
   return flag;
 }
 char *My_strcpy(char *dest, const char *src){
     if (dest==NULL || src==NULL){
        printf("ERROR NULL");
     }
 char *ptr=dest;
 while(*src){
    *ptr++=*src++;
 }
 return ptr;
 }
char *My_strncpy(char *dest, const char *src, unsigned long long n){
   char *ptr=dest;
   while(n--){
    *ptr++=*src++;
   }
   return ptr;
}
unsigned long long My_strcspn(const char *str1, const char *str2){
const char *ptr=str1;
int flag=0;
for (int i=0;str1[i]!='\0';i++){
    for (int j=0;str2[j]!='\0';j++){
        if(str1[i]==str2[j] || str1[i]=='\0') {
        ptr=str1+i+1;
        flag=1;
        break;
    }}
    if (flag) break;
    ptr=str1+i+1;
}
return (ptr-str1);
}
char *My_strerror(int errnum){
 char *err_mess[5]={"No error","Null Error","Wrong Arguments","Input Error","Permission Denied"};
 char *ptr=errnum>4?err_mess[5]:err_mess[errnum];
 return ptr;
}
unsigned long long My_strlen(const char *str){
    const char *ptr=str;
   unsigned long long count=0;
    while(*ptr){
        count++;
        ptr++;
    }
    return count;
}
char *My_strpbrk(const char *str1, const char *str2){
char *ptr=NULL;
int flag=0;
for (int i=0;str1[i]!='\0';i++){
    for (int j=0;str2[j]!='\0';j++){
        if(str1[i]==str2[j]){
            flag=1;
            ptr=(str1+i);
            break;
        }
    }
    if (flag==1) break;
}
return ptr;
}
char *My_strrchr(const char *str, int c){
char *ptr=str;
char *out=str;
while(*ptr){
    if(*ptr==c) {
      out=ptr;
    }
      ptr++;

}
return out;
}
unsigned long long My_strspn(const char *str1, const char *str2){
    unsigned long long count=0;
    for (int j=0;str2[j]!='\0';j++){
            if(str1[j]!=str2[j]) break;
            count++;
}
return count;
}
char *My_strstr(const char *haystack, const char *needle){
    int flag=0;
    char *ptr=needle;
while(*haystack){
if (*haystack==*ptr){
  while(*ptr){
    char *start=haystack;
    ptr++;
 if (*ptr=='\0') {
        flag=1;
        return start;
}
  }
}
ptr=needle;
haystack++;
}
return NULL;
}
char *My_strtok(char *str, const char *delim){
static char *p=NULL;
if (str==NULL){
    str=p;
    if(str==NULL) return NULL;
}
str+=My_strspn(str,delim);
if(*str=='\0'){
    p=NULL;
    return p;
}
p=str+My_strcspn(str,delim);
if (*p!='\0'){
    *p='\0';
    p++;
}
else {
     p=NULL;
}
return str;
}
unsigned long long My_strxfrm(char *dest, const char *src, unsigned long long n){
My_strncpy(dest,src,n);
return My_strlen(dest);
}
