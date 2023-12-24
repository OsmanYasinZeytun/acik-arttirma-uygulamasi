#include <stdio.h>
#include <stdlib.h>

// Ekin Ali Karahan 1230505045 || Osman Yasin Zeytun 1230505030


typedef struct {
    float oncekiTeklif;
    float teklif;
    int tur;
} Artirma;

int main(int argc, char *argv[]) {
    Artirma artirma;
    artirma.oncekiTeklif = -1;
    artirma.tur = 0;
    char c;

    printf ("1969 model Ford Mustang Boss 429 acik artirmasina hos geldiniz\n");

    for (artirma.tur = 1 ;; artirma.tur++) {
        printf("\n %d. teklif (Bin Dolar) : \n \n", artirma.tur);

                            if (scanf("%f", &artirma.teklif) != 1) {
                                  printf("\n Yanlis deger, lutfen bir sayi giriniz! \n");
                                    while ((c = getchar()) != '\n' && c != EOF)
                                   ;
                                   continue;
                                                        }
	            //Yukarýdaki kod bölümü kullanýcýnýn sayý yerine harf girince uyarýlmasýný saðlar
                            
                            if (artirma.teklif < 249.9) {
                            printf("\n Minimum teklif degeri 250.000 Dolardir\n");
                            continue;                            
							}
                            
                             
        if (artirma.teklif < artirma.oncekiTeklif) {
            printf("\nKazanan %.1f Bin Dolar'lik teklifin sahibi oluyor\n", artirma.oncekiTeklif);
            break;
        }

        artirma.oncekiTeklif = artirma.teklif ;
    }

    return 0;
}
