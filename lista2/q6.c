// Importar as bibliotecas
#include <stdio.h>

int main() {

    // Definir as variaveis (nulo, votosrenata, votospaulo)
    int nulo = 0, VotosRenata = 0, VotosPaulo = 0;

    // Criar o laco de repeticao
    while (1) {
        char conf;
        int v;

        // Ler a votacao
        printf("[5] Paulo\n"
                "[7] Renata\n"
                "[0] Nulo\n"
                "Voto: ");
        scanf("%d", &v);

        // Condicional para voto negativo e quebrar o laco
        if (v < 0) {
            break;

        } else {
            // Confirmar a votacao
            printf("Confirmar [s/n]: ");
            scanf(" %c", &conf);

            if (conf == 'n') {
                printf("Vote novamente...\n");
                continue;

            } else {
                // Incrementar o voto - usar o switch
                switch (v) {
                    case 5:
                        VotosPaulo++;
                        break;

                    case 7:
                        VotosRenata++;
                        break;

                    case 0:
                        nulo++;
                        break;

                    default:
                        printf("O valor digitado nao corresponde a nenhum candidato. Vote novamente!\n");


                }

            }

        }


    }
    // Exibir a apuracao da urna
    printf("Votos nulos: %d\n", nulo);
    printf("Votos Renata: %d\n", VotosRenata);
    printf("Votos Paulo: %d\n", VotosPaulo);
          
    // Condicional para decidir o vencedor
    printf("Resultado: %s", (VotosPaulo>VotosRenata)?"Paulo.":(VotosPaulo<VotosRenata)?"Renata.":"Empate.");

    return 0;   

}