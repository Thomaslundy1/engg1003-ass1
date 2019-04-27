#include <stdio.h>

  int main()
{
    char option;
    int key, n;
    char  ms1[1024];
    char x;	  
   printf ("\t What would you like to do?:\n ");
   printf("\t 1. Rotation cypher encryption\n");
   printf("\t 2. Substitution cypher encryption\n");
   printf("\t 3. Rotation cypher decryption\n");
   printf("\t 4. Substitution cypher decryption\n");
   printf("Please enter number in front of prefferred option:\n ");
    scanf("%c", &option);
   switch (option)
    {
        case'1': //rotation cipher
        printf ("What message to encrypt as a rotation: ");
        scanf("%s", &ms1);
        printf ("Please enter key for encryption: ");
        scanf("%d", &key);
        for(n = 0; n < 1024 && ms1[n] != '\0'; n++)
       {
      x = ms1[n];

      if (x >= 'a' && x <= 'z')
	{
	  x = x + key;

	  if (x > 'z')
	    {
	      x = x - 26;
	    }

	  ms1[n] = x;
	}
      else if (x >= 'A' && x <= 'Z')
	{
	  x = x + key;

	  if (x > 'Z')
	    {
	      x = x - 26;
	    }

	  ms1[n] = x;
	}
        }
        
       
       
       printf("The message is: %s . ", ms1);
        break;
        
        case'2': //substitution cipher
        printf ("What message to encrypt as a substitution: ");
        break;
        
        case'3': //rotation cypher deencryption
        /*rotation cypher decription is the same as encryption except
        for the changing of adding the key to subtracting the key */
        printf ("What message to decrypt as a rotation:\n ");
        scanf("%s", &ms1);
        printf ("Please enter key for decryption: ");
        scanf("%d", &key);
        for(n = 0; n < 1024 && ms1[n] != '\0'; n++)
        
            {
      x = ms1[n];

      if (x >= 'a' && x <= 'z')
	{
	  x = x - key;

	  if (x < 'a')
	    {
	      x = x + 26;
	    }

	  ms1[n] = x;
	}
      else if (x >= 'A' && x <= 'Z')
	{
	  x = x - key;

	  if (x < 'A')
	    {
	      x = x + 26;
	    }

	  ms1[n] = x;
	}
    }
        printf ("Decrypted message is: %s . ", ms1);
       
        case'4': //substitution cypher deencryption
        
 
        default:
        printf ("Error!");
        break;
   }
  return 0;
}
