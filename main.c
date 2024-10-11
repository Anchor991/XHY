#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
<<<<<<< HEAD
 char name[255];
 printf("Enter your name: ");
 fgets(name, 255, stdin);
 name[strlen(name)-1] = '\0'; /* remove the newline at the end */
 printf("Hello %s!\n", name);
 printf("Hello %s!\n", name);
=======
 char first[255], last[255];
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 printf("Now enter your last name: ");
 gets(last); /* buffer overflow? what's that? */
 printf("Hello %s %s!\n", first, last);
>>>>>>> 47dc0519d6ab42b162c370b1d6d135780ad643b9
 return 0;
}
