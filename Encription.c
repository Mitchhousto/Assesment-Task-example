#include <stdio.h>

char Encription(char [],int k);	
char Decription(char [],int k);

int main()
{
	char msg[200];
	int choice,k=-1;
    
    printf("Enter message:");
    scanf("%s",msg);
    
    do{
    printf("\nPress 1 for Rotation encription \nPress 2 for Rotation decription\nPress 0 for exit\n");
    scanf("%d",&choice);
    switch(choice) {
        case 1:
        Encription(msg,k);
        break;
        case 2:
        Decription(msg,k);
        break;
        case 0:
        break;
        default:
        printf("\nplease enter valid choice\n");
        break;
    }
    }while(choice!=0);
    }
    
    

	
char Encription(char str[],int k)	

    {
        int i = 0;
        
        for(i=0;str[i] != '\0';i++)//For loop including an int i that will indicate the location. '\0' is white space indicator
        {
            if (str[i] >= 65 && str[i]<= 90) //if statment concluding if it is bwtewwn letter 'A' and letter 'Z' all in capitals
            {
                char ex = str[i]- 65 + 26; // So for example A is configured to number 26 as it is letter Ascii code 65
                ex = (ex+k) % 26;// ex = 26 then add the key (FOR EXAMPLE -1) this will create the number 25 then modulas(remiamder) of 26 = 25
                str[i] = ex + 65;// then 25 +65 = 90 which is ascii number for Z
            }
          
        
            
        }
    printf("%s\n", str);
	return str;
    }
    
char Decription(char str[],int k)
    
    {
        int i = 0;
        
        for(i=0;str[i] != '\0';i++)//For loop including an int i that will indicate the location. '\0' is white space indicator
        {
            if (str[i] >= 65 && str[i]<= 90) //if statment concluding if it is bwtewwn letter 'A' and letter 'Z' all in capitals
            {
                char ex = str[i]- 65 + 26; // So for example A is configured to number 26 as it is letter Ascii code 65
                ex = (ex-k) % 26;// ex = 26 then add the key (FOR EXAMPLE -1) this will create the number 25 then modulas(remiamder) of 26 = 25
                str[i] = ex + 65;// then 25 +65 = 90 which is ascii number for Z
            }
          
        
            
        }
    printf("%s\n", str);
	return str;
}