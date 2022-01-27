#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*Kamus*/
     int t;
     int WaktuKuantum;
     int tkerjaP1;
     int tkerjaP2;
     int tkerjaP3;
     int tkerjaP4;
     int tkerjaP5;
     int tdatangP1;
     int tdatangP2;
     int tdatangP3;
     int tdatangP4;
     int tdatangP5;
     int tungguP1;
     int tungguP2;
     int tungguP3;
     int tungguP4;
     int tungguP5;
     int tkerjatotal;

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
     printf("WaktuKuantum : \n");
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

    return 0;
}
