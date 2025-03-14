//NIP, Jabatan, UnitKerja
#pragma once
#include <iostream>
#include <string>
#include "Manusia.cpp"
#include "UnitKerja.cpp"

using namespace std;

class Tendik : public Manusia{
    private:
        string NIP;
        string Jabatan;
        UnitKerja Unit;
    
    public:
        Tendik(){
            setNIK("");
            setNama("");
            setJenisKelamin("");
            NIP = "";
            Jabatan = "";
        };
        Tendik(string nik, string nama, string jk, string nip, string jabatan, UnitKerja unit){
            setNIK(nik);
            setNama(nama);
            setJenisKelamin(jk);
            NIP = nip;
            Jabatan = jabatan;
            Unit = unit;
        }

        //setter
        void setNIP(string nik){
            NIP = nik;
        }
        void setJabatan(string nik){
            Jabatan = nik;
        }
        void setUnit(UnitKerja nik){
            Unit = nik;
        }

        //getter
        string getNIP(){
            return NIP;
        }
        string getJabatan(){
            return Jabatan;
        }
        UnitKerja getUnit(){
            return Unit;
        }
        ~Tendik(){
        }
};