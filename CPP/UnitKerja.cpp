//NamaUnit, KodeUnit, KepalaUnit

#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Tim.cpp"

using namespace std;

class UnitKerja{
    private:
        string NamaUnit;
        string KodeUnit;
        string KepalaUnit;
        list<Tim> listTim;
    
    public:
        UnitKerja(){
            NamaUnit = "";
            KodeUnit = "";
            KepalaUnit = "";
        };
        UnitKerja(string nama, string kode, string kepala){
            NamaUnit = nama;
            KodeUnit = kode;
            KepalaUnit = kepala;
        }

        //setter
        void setNamaUnit(string nama){
            NamaUnit = nama;
        }
        void setKodeUnit(string kode){
            KodeUnit = kode;
        }
        void setKepalaUnit(string kepala){
            KepalaUnit = kepala;
        }
        void addTim(string nama, int jumlah){
            Tim temp;
            temp.setNamaTim(nama);
            temp.setJumlahTim(jumlah);
            listTim.push_back(temp);
        }

        //getter
        string getNamaUnit(){
            return NamaUnit;
        }
        string getKodeUnit(){
            return KodeUnit;
        }
        string getKepalaUnit(){
            return KepalaUnit;
        }
        list<Tim> getListTim(){
            return listTim;
        }
        ~UnitKerja(){
        }
};