#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*Kamus*/
     int t, WaktuKuantum, tkerjaP1, tkerjaP2, tkerjaP3, tkerjaP4, tkerjaP5, tdatangP1, tdatangP2, tdatangP3, tdatangP4, tdatangP5, tkerjatotal;
     int tungguP1,tungguP2,tungguP3,tungguP4,tungguP5;

     /*Algoritma*/
     t=0;
     tkerjatotal=0;
     tungguP1=0;
     tungguP2=0;
     tungguP3=0;
     tungguP4=0;
     tungguP5=0;

     printf("Selamat datang pada aplikasi Round Robin Scheduling!\n");
     printf("Pada aplikasi ini, Anda dapat memasukkan 5 proses untuk dikerjakan dan diatur waktunya dengan adil.\n");
     printf("Harap untuk memasukkan nilai Waktu Kuantum, waktu datang masing-masing proses,dan waktu eksekusi masing-masing proses.\n");
     printf("\n");
     printf("Waktu Kuantum : \n");
     scanf ("%i", &WaktuKuantum);
     printf("Waktu datang Proses P1 : \n");
     scanf ("%i", &tdatangP1);
     printf("Waktu eksekusi Proses P1 : \n");
     scanf ("%i", &tkerjaP1);
     printf("Waktu datang Proses P2 : \n");
     scanf ("%i", &tdatangP2);
     printf("Waktu eksekusi Proses P2 : \n");
     scanf ("%i", &tkerjaP2);
     printf("Waktu datang Proses P3 : \n");
     scanf ("%i", &tdatangP3);
     printf("Waktu eksekusi Proses P3 : \n");
     scanf ("%i", &tkerjaP3);
     printf("Waktu datang Proses P4 : \n");
     scanf ("%i", &tdatangP4);
     printf("Waktu eksekusi Proses P4 : \n");
     scanf ("%i", &tkerjaP4);
     printf("Waktu datang Proses P5 : \n");
     scanf ("%i", &tdatangP5);
     printf("Waktu eksekusi Proses P5 : \n");
     scanf ("%i", &tkerjaP5);
     tkerjatotal=tkerjaP1+tkerjaP2+tkerjaP3+tkerjaP4+tkerjaP5;
     while (t<=tkerjatotal) {
        if (t==tdatangP1) {
            printf("Waktu =%i", t);
            printf("tP1 =%i", tkerjaP1)
        }
        else if (t=tungguP1) {
            printf ()
        }
        else if (t==t)
        t+=1;
     }

    return 0;
}
