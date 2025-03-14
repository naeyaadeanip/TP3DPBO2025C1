//NamaTim, JumlahTim

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tim{
    private:
        string NamaTim;
        int JumlahTim;
    
    public:
        Tim(){
            NamaTim = "";
            JumlahTim = 0;
        };
        Tim(string nama, int jumlah){
            NamaTim = nama;
            JumlahTim = jumlah;
        }

        //setter
        void setNamaTim(string nama){
            NamaTim = nama;
        }
        void setJumlahTim(int jumlah){
            JumlahTim = jumlah;
        }

        //getter
        string getNamaTim(){
            return NamaTim;
        }
        int getJumlahTim(){
            return JumlahTim;
        }
        ~Tim(){
        }
};