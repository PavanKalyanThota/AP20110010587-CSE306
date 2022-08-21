
#include<stdio.h>
#include<stdlib.h>
void main(){
    int state= 0;
    int i = 0;
    char input[20];
    printf("Enter input string =");
    scanf("%s",&input);
    for(int i=0; input[i] != '\0'; i++){
        switch (state){
            case 0: if(input[i]=='a')
                    state=1;
                    else if(input[i]=='b')
                    state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 1: if(input[i]=='a')
                     state=0;
                     else if(input[i]=='b')
                     state=2;
                     else
                     {
                         printf("Invalid token");
                         exit(0);
                     }
                     break;
            case 2: if(input[i]=='a')
                    state=3;
                    else if(input[i]=='b')
                    state=1;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 3: if(input[i]=='a')
                    state=2;
                    else if(input[i]=='b')
                    state=0;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
        }
    }
        if(state==0)
           printf("string is accepted");
        else
          printf("String is not accepted");
}
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
        