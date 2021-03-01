/**
 * Ristinolla peli, jonka tein junamatkalla
 * @author Juho Järvi
 * @version 1.0 1.3.2021
 */

#include <stdio.h>

/**
 * Taulun tulostus funktio
 * @param taulu taulu, joka sisältää x ja o merkit tulostusta varten
 */
void taulunTulostus(char taulu[][3]) {
        int sarake, rivi;
    for ( sarake = 0; sarake < 3; sarake++ )
        {
            for ( rivi = 0; rivi < 3; rivi++ )
            {
                if(taulu[sarake][rivi]){
                    printf( "|%c", taulu[sarake][rivi] );
                }else{
                    printf("| ");                         
                }
            }
            printf("|\n");
        }
}

/**
 * Paaohjelma kysyy pelaajalta kumman merkin haluaa laittaa ja koordinaatit paikaille taulusta
 */
int main(void) {

    char peli[3][3] = {{0}};
    int vuoro = 0,sarake,rivi;
    char merkki;

    while (vuoro <= 9) {
        printf("Syötä (x) tai (o): \n");
        scanf("%c", &merkki);
        getchar();
        printf("valitse sarake (1-3): \n");
        scanf("%d", &sarake);
        getchar();
        printf("valitse rivi (1-3): \n");
        scanf("%d", &rivi);
        getchar();
        peli[sarake][rivi] = merkki;
        taulunTulostus(peli);
    }

    return 0;
}