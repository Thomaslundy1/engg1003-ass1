#include <stdio.h>

  int main()
{
    char option;
    int key, n, i;
    char  ms1[1024];
    char x;	 
    char str[1024];
   printf("\t What would you like to do?:\n ");
   printf("\t 1. Rotation cypher encryption\n");
   printf("\t 2. Substitution cypher encryption\n");
   printf("\t 3. Rotation cypher decryption\n");
   printf("\t 4. Substitution cypher decryption\n");
   printf("Please enter number in front of prefferred option:\n ");
    scanf("%c", &option);
   switch (option){
    {
        case'1': //rotation cipher
        printf ("What message to encrypt as a rotation: ");
        scanf("%s", &ms1);
        printf ("Please enter key for encryption: ");
        scanf("%d", &key);
        for(n = 0; n < 1024 && ms1[n] != '\0'; n++) // moving along the string
        {
        x = ms1[n];

        if (x >= 'a' && x <= 'z') //To switch back to a if going over z
	    {
	    x = x + key;

	    if (x > 'z')
	    {
	      x = x - 26;
	    }

	    ms1[n] = x;
	    }
        else if (x >= 'A' && x <= 'Z') //to switch back to A if going over Z
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
        scanf("%s", &str);
    
    
        for (i = 0; str[i]!='\0'; i++) { //making everything uppercase
        if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
         if (str[i] == 32)
         i++;
        }
        }
        for(i=0; str[i] != '\0'; i++ ){ //giving the key as the keyboard layout from left to right
        switch(str[i]){
        case(32):
            break;
        case('A'):
            str[i]='Q';
            break;  
        case('B'):
            str[i]='W';
            break;
        case('C'):
            str[i]='E';
            break;
        case('D'):
            str[i]='R';
            break;
        case('E'):
            str[i]='T';
            break;
        case('F'):
            str[i]='Y';
            break;
        case('G'):
            str[i]='U';
            break;
        case('H'):
            str[i]='I';
            break;
        case('I'):
            str[i]='O';
            break;
        case('J'):
            str[i]='P';
            break;
        case('K'):
            str[i]='A';
            break;
        case('L'):
            str[i]='S';
            break;
        case('M'):
            str[i]='D';
            break;
        case('N'):
            str[i]='F';
            break;
        case('O'):
            str[i]='G';
            break;
        case('P'):
            str[i]='H';
            break;
        case('Q'):
            str[i]='J';
            break;
        case('R'):
            str[i]='K';
            break;  
        case('S'):
            str[i]='L';
            break;
        case('T'):
            str[i]='Z';
            break;
        case('U'):
            str[i]='X';
            break;
        case('V'):
            str[i]='C';
            break;
        case('W'):
            str[i]='V';
            break;
        case('X'):
            str[i]='B';
            break;
        case('Y'):
            str[i]='N';
            break;
        case('Z'):
            str[i]='M';
            break;
        }

            }
    
        printf("The message is: %s",str);
        return 0;
        break;
        
        }
       
        
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

        if (x >= 'a' && x <= 'z') //moves to z if going below a
	    {
	    x = x - key;

	    if (x < 'a')
	    {
	      x = x + 26;
	    }

	    ms1[n] = x;
	    }
        else if (x >= 'A' && x <= 'Z') //moves back to Z if going below A
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
               
        printf("Enter something to be decrypted: ");
        scanf("%s", &str);
        
        for (i = 0; str[i]!='\0'; i++) { //making it upper case
        if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
         if (str[i] == 32)
         i++;
        }
        }
        for(i=0; str[i] != '\0'; i++ ){ //moving along the string
        switch(str[i]){
        case(32):
            break;
        case('Q'):
            str[i]='A';
            break;  
        case('W'):
            str[i]='B';
            break;
        case('E'):
            str[i]='C';
            break;
        case('R'):
            str[i]='D';
            break;
        case('T'):
            str[i]='E';
            break;
        case('Y'):
            str[i]='F';
            break;
        case('U'):
            str[i]='G';
            break;
        case('I'):
            str[i]='H';
            break;
        case('O'):
            str[i]='I';
            break;
        case('P'):
            str[i]='J';
            break;
        case('A'):
            str[i]='K';
            break;
        case('S'):
            str[i]='L';
            break;
        case('D'):
            str[i]='M';
            break;
        case('F'):
            str[i]='N';
            break;
        case('G'):
            str[i]='O';
            break;
        case('H'):
            str[i]='P';
            break;
        case('J'):
            str[i]='Q';
            break;
        case('K'):
            str[i]='R';
            break;  
        case('L'):
            str[i]='S';
            break;
        case('Z'):
            str[i]='T';
            break;
        case('X'):
            str[i]='U';
            break;
        case('C'):
            str[i]='V';
            break;
        case('V'):
            str[i]='W';
            break;
        case('B'):
            str[i]='X';
            break;
        case('N'):
            str[i]='Y';
            break;
        case('M'):
            str[i]='Z';
            break;
        }
            
        printf("The message is: %s",str);
        return 0;
        break;
        }
        default:
        printf ("Error!");
        break;
        }
        
        return 0;
        }
         
