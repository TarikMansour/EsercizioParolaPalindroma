#include <stdio.h>
#include <string.h>
#include <ctype.h> //libreria funz. to lower
void verificaPalindroma (char str[20], int cont, int ultimoElemento){
    char strPalindroma[20];
    int lung = strlen(str);
    ultimoElemento = ultimoElemento + lung; //serve per invertere la stringa 
    for (cont = 0; cont < lung; cont++)
    {
        int inversione = ultimoElemento - cont;
      *(strPalindroma+cont) = *(str + inversione); //inverto la stringa per verificare se è palindroma
    }
    int compare = strcmp(strPalindroma, str);
      if (compare == 0){ //se string compare ci ritorna 0 allora la stringa inversa è uguale alla originale
        printf("la stringa è palindroma \n");
       
      }
      else {
        printf("la stringa non è palindroma \n");
      }
      
}
int main()
{
    int i = 0, j = 0, lung, lung2, ultimoEl = -1;
    char str1[20], str2[20],strPalindroma[20]; 
   
    printf("Inserisci una stringa\n"); //inserimento
    scanf("%s", str1);
    lung = strlen(str1);
    for (int i = 0; i<lung; i++){ 
        str2[i] = tolower(str1[i]); //stringa a lettere minoscula per il controllo
        if (str2[i]< 97 || str2[i] > 177){ //controllo lettere 
            printf("inserire una stringa formata da solo lettere \n");
            break;
        }
    }
    verificaPalindroma(str2, i, ultimoEl); //invoco il metodo
    return 0;
}
