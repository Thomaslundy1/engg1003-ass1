#include <stdio.h>

  int main()
{
   printf ("\t What would you like to do?:\n ");
   printf("\t 1. Rotation cypher encription\n");
   printf("\t 2. Substitution cypher encryption\n");
   printf("\t 3. Rotation cypher decryption\n");
   printf("\t 4. Substitution cypher decryption\n");
   printf("Please enter number in front of prefferred option:\n ");
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
       
        case'4': //substitution cypher deencryption
        
 
        default:
        printf ("Error!");
        break;
   }
  return 0;
}
