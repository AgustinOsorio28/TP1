#include <stdio.h>
#include <ctype.h>



int main(){
    char caracter;
    while ((caracter=getchar ()) != '\n' )
       {
         
         if (islower(caracter)) 
          {
             caracter =toupper(caracter);
          }
         else {caracter =tolower(caracter);}
          if(isdigit(caracter))
          {
          caracter= 0;
          }
    
       putchar(caracter);
      
      }
}


// Agustin Osorio K2002