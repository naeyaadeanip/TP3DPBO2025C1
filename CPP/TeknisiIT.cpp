//Keahlian, SistemYgDikelola
#pragma once
#include <iostream>
#include <string>
#include "Tendik.cpp"

using namespace std;

class TeknisiIT : public Tendik{
    private:
        string Keahlian;
        string SistemYgDikelola;
    
    public:
        TeknisiIT(){
            setNIK("");
            setNama("");
            setJenisKelamin("");
            setNIP("");
            setJabatan("");
            Keahlian = "";
            SistemYgDikelola = "";
        };
        TeknisiIT(string nik, string nama, string jk, string nip, string jabatan, string keahlian, string sistem, UnitKerja unit){
            setNIK(nik);
            setNama(nama);
            setJenisKelamin(jk);
            setNIP(nip);
            setJabatan(jabatan);
            setUnit(unit);
            Keahlian = keahlian;
            SistemYgDikelola = sistem;
        }

        //setter
        void setKeahlian(string nik){
            Keahlian = nik;
        }
        void setSistemYgDikelola(string nik){
            SistemYgDikelola = nik;
        }

        //getter
        string getKeahlian(){
            return Keahlian;
        }
        string getSistemYgDikelola(){
            return SistemYgDikelola;
        }
        ~TeknisiIT(){
        }
};