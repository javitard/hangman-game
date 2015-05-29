#include<stdio.h>
#include<string.h>
#include <cstdlib>

int main(int argc, char *argv[]) {
    char palabra[100],asteriscos[100];
    char letra;
    int longitud,i,inicial,resta=0,vidas=7;
    int gano=0;
   
    system("toilet -Fborder -Fgay Ahorcado");
    printf("Introduce una palabra:  ");
    gets(palabra);

    system("clear");
   
    longitud = 0;
    inicial = 0;
   
    do {
                system("clear");
				resta=0;
   
        if(inicial == 0) {
         for(i=0;i<strlen(palabra);i++) {
          if(palabra[i] == ' ') {
            asteriscos[i] = ' ';
             longitud++;
          }
          else {
             asteriscos[i] = '*';       
             longitud++;
          }
         }
        }
   
        inicial = 1;
       
       
         for(i=0;i<strlen(palabra);i++) {
                    if(palabra[i] == letra) {
             asteriscos[i] = letra;
              resta=1;
            }
          }
       
         if(resta == 0) {
           vidas = vidas - 1;
         }
       
        printf("\n");
       
        for(i=0;i<strlen(asteriscos);i++) {
         printf(" %c ",asteriscos[i]);
        }
       
        printf("\n");
       
        if(strcmp(palabra,asteriscos) == 0) {
            gano = 1;
            break;
        }
       
        printf("Vidas: %d",vidas);
        printf("\n");
       
        if (vidas==0) {
           break;
        }
     
        printf("Dime una letra: ");
        scanf("\n%c",&letra);      
    }
	
	while(vidas != 0);

    if(gano) {
                printf("\n\n");
        printf("Enhorabuena, has ganado.");
    }
    else {
                printf("\n\n");
        printf("Lo siento, has perdido");
    }
   
    printf("\n\n");
    return EXIT_SUCCESS;

} 

