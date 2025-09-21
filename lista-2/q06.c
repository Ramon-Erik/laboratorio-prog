#include <stdio.h>

int main() {
    char confirmar;
    int voto = 0, renata = 0, paulo = 0, nulo = 0, branco = 0, total = 0;

    while (1) {
        printf("\nVote:\n5-Paulo\n7-Renata\nVoto: ");
        scanf("%d", &voto);

        if (voto >= 0) {
            printf("Deseja mesmo votar em %d? (y)... ", voto);
            scanf(" %c", &confirmar);

            if (confirmar == 'y') {
                switch (voto) {
                case 5:
                    paulo++;
                    break;
                case 7:
                    renata++;
                    break;
                case 0:
                    branco++;
                    break;
                default:
                    nulo++;
                    break;
                }
                total++;
            }
        } else {
            break;
        }
    }

    printf("\nTotal de votos: %d\n", total);
    if (total) {
        printf("Paulo: %d -> %.1f%%\n", paulo, ((float) paulo / total) * 100);
        printf("Renata: %d -> %.1f%%\n", renata, ((float) renata / total) * 100);
        printf("Branco: %d -> %.1f%%\n", branco, ((float) branco / total) * 100);
        printf("Nulos: %d -> %.1f%%\n", nulo, ((float) nulo / total) * 100);
    }
    return 0;
}