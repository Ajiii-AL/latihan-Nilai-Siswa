#include <stdio.h>


int main(){

    int nilai, kehadiran, tugas;

    printf("====================== \n");
    printf("masukan nilai anda :");
    scanf("%d", &nilai);

    printf("masukan kehadiran anda :");
    scanf("%d", &kehadiran);

    printf("masukan tugas anda :");
    scanf("%d", &tugas);

    if(nilai < 0 || nilai > 100){
        printf("Nilai tidak valid \n");

    }else{
        if(kehadiran < 75){
            printf("Anda tidak lulus karena kehadiran kurang dari 75%% \n");

        }else{
            if(tugas >= 60){
                printf("Selamat anda lulus \n");

            }else{
                printf("Anda tidak lulus karena nilai tugas kurang dari 60 \n");
            }

        }

    }

    printf("nilai anda : %d\n", nilai);
    printf("kehadiran anda : %d\n", kehadiran);
    printf("tugas anda : %d\n", tugas);

    return 0;
}
