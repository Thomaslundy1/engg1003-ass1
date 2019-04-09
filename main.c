#include <stdio.h>

  int main()
{
  printf ("Encrypt as rotation or substitution cypher?:\n ");
   printf("1 for rotation, 2 for substitution:\n");
    scanf("%c", &option);
    
   switch (option)
    {
        case'1':
        printf ("What message to encrypt as a rotation: ");
        break;
        
        case'2':
        printf ("What message to encrypt as a rotation: ");
        break;
        
        default:
        printf ("Error!");
        break;
   }
  return 0;
}
