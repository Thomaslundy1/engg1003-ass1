#include <stdio.h>

  int main()
{
    char option;
    int ms1, key;
  printf (" Encrypt as rotation or substitution cypher?:\n ");
   printf("\t1 for rotation\n \t2 for substitution\n");
    scanf("%c", &option);
    
   switch (option)
    {
        case'1': //rotation cipher
        printf ("What message to encrypt as a rotation: ");
        scanf("%c", &ms1);
        printf ("Please enter key for encryption: ");
        scanf("%c", &key);
        break;
        
        case'2': //substitution cipher
        printf ("What message to encrypt as a substitution: ");
        break;
        
        case'3': //rotation cypher deencryption
       
        case'4': //rotation cypher deencryption
        
 
        default:
        printf ("Error!");
        break;
   }
  return 0;
}
