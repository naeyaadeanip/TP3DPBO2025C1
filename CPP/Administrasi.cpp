//Bagian, Tugas
#pragma once
#include <iostream>
#include <string>
#include "Tendik.cpp"

using namespace std;

class Administrasi : public Tendik{
    private:
        string Bagian;
        string Tugas;
    
    public:
        Administrasi(){
            setNIK("");
            setNama("");
            setJenisKelamin("");
            setNIP("");
            setJabatan("");
            Bagian = "";
            Tugas = "";
        };
        Administrasi(string nik, string nama, string jk, string nip, string jabatan, string bagian, string tugas, UnitKerja unit){
            setNIK(nik);
            setNama(nama);
            setJenisKelamin(jk);
            setNIP(nip);
            setJabatan(jabatan);
            setUnit(unit);
            Bagian = bagian;
            Tugas = tugas;
        }

        //setter
        void setBagian(string nik){
            Bagian = nik;
        }
        void setTugas(string nik){
            Tugas = nik;
        }

        //getter
        string getBagian(){
            return Bagian;
        }
        string getTugas(){
            return Tugas;
        }
        ~Administrasi(){
        }
};