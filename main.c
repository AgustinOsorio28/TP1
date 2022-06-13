#include <stdio.h>
#include <ctype.h>



int main(){
    char caracter;
    int bol;
    while ((caracter=getchar ()) != EOF )
    {
        if(isdigit(caracter))
        {
          	bol= 1;
        }
        else 
        {
          	bol =0;
        }
        if (islower(caracter) && bol==0  ) 
        {
            putchar(caracter = toupper(caracter));
        }
        else if (bol==0)
		{
			putchar(caracter = tolower(caracter));
		} 
    }
}


// Agustin Osorio K2002
