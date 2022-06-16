#include <stdio.h>
#include <string.h>

void abertura() {
	printf("*************************\n");
	printf("====> JOGO DA FORCA <====\n");
	printf("*************************\n\n");
}

int main(){

    int teste = 1, jogada = 0;
    char palavraSecreta[40], chutes[26], letra;
    sprintf(palavraSecreta, "PARALELEPIPEDO");

    abertura();

    do{
       for(int i = 0; i < strlen(palavraSecreta); i++){

        int acertou = 0;

        if(chutes[jogada] == palavraSecreta[i]){
            printf("%c ", palavraSecreta[i]);
        } else {
            printf("_ ");
        }


       }
        printf("\n");
        printf("\n");
        printf("Digite uma letra: ");
        scanf(" %c", &letra);


    }while(teste = 1);

return 0;
}
