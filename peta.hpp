#ifndef PETA_H
#define PETA_H
#include "objek.hpp"

/**
 * @param n_peta menyatakan ukuran peta yang akan dinyatakan dalam matriks nxn
 * @result mengisi elemen ujung peta dengan x dan elemen tengah peta dengan -
 */
char** BuatPeta(int n_peta);

/**
 * @param peta menyatakan alamat dari matriks yang berisi peta
 * @param n_peta ukuran peta
 * @param node memasukkan objek ke dalam peta untuk ditampilkan
 * @result menampilkan peta dari sisi depan
 */
void PrintPeta(char** peta, int n_peta);

char** BuatPeta(int n_peta){
    // Buat baris yang berisi pointer ke elemen masing-masing baris
    char** peta = new char*[n_peta];
    // Isi masing-masing baris dengan elemen kolom. Alokasi memori random pointer ke memori statis
    for(int i=0; i<n_peta; i++){
        peta[i] = new char[n_peta];
    } 
    // Membuat arena KRPAI
    for(int i=0; i<n_peta ; i++) {
        for(int j = 0; j < n_peta ; j++){
            if(i == 0 || i == (n_peta - 1)){
                peta[i][j] = '-';
            }
            else if (j == 0 || j == (n_peta - 1)){
                peta[i][j] = '|';
            }
            else if ((j >= 4 && j <= 15) && i == 4){
                peta[i][j] = '-';
            }
            else if ((i >= 5 && i <= 8) && (j == 4 || j == 15) ){
                peta[i][j] = '|';
            }
            else if (i == 9){
                if ((j >= 4 && j <= 7)){
                    peta[i][j] = '-';
                }
                else if (j == 15){
                    peta[i][j] = '|';
                }
                else if (j == 12) {
                    peta[i][j] = '\\';
                }
                else {
                    peta[i][j] = ' ';
                }
            }
            else if (i == 10) {
                if (j == 13) {
                    peta[i][j] = '\\';
                }
                else if (j == 15) {
                    peta[i][j] = '|';
                }
                else {
                    peta[i][j] = ' ';
                }
            }
            else if (i == 11) {
                if (j == 14) {
                    peta[i][j] = '-';
                }
                else if (j == 15) {
                    peta[i][j] = '|';
                }
                else {
                    peta[i][j] = ' ';
                }
            }
            else if (i == 12 && j == 15) {
                peta[i][j] = '|';
            }
            else if (i == 13 && (j >= 4 && j<= 10)){
                peta[i][j] = '-';
            }
            else if (i == 14 || i == 15){
                if (j == 4) {
                    peta[i][j] = '|';
                }
                else if (i == 14 && j == 11) {
                    peta[i][j] = '\\';
                }
                else if (i == 15 && j == 12) {
                    peta[i][j] = '\\';
                }
                else {
                    peta[i][j] = ' ';
                }
            }
            else if (i == 16 && j == 13){
                peta[i][j] = '\\';
            }
            else if (i == 17 && j == 14) {
                peta[i][j] = '\\';
            }
            else if (i == 18 && j == 14) {
                peta[i][j] = '|';
            }
            else {
                peta[i][j] = ' ';
            }
        }
    }
    return peta;
}

void PrintPeta(char** peta, int n_peta, Node node){
    int x,y;
    x = node.getX();
    y = node.getY();
    for(int i = 0; i < n_peta; i++){
        for(int j = 0; j < n_peta ; j++){
            //cout << peta[i][j] << " ";
            if (j == x && i == y) {
                cout << "R" << " ";
            }
            else {
                cout << peta[i][j] << " ";
            }
        }
        cout << endl;
    }
}

#endif