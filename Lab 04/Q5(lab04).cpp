
#include<stdio.h>
int main ()
{ char character;
 printf("Enter theany number or alphabet :");
 scanf(" %c", & character);
 if (character>='a' && character<='z')
     printf("your character is small alphabet");
else if (character>='A' && character<='Z')
      printf("your character is Capital alphabet");
else if (character>='0' && character<='9')
      printf("your character is a digit");
else
     printf("Your character is a special charcter");
}
