//NIK, Nama, JenisKelamin
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Manusia{
    private:
        string NIK;
        string Nama;
        string JenisKelamin;
    
    public:
        Manusia(){
            NIK = "";
            Nama = "";
            JenisKelamin = "";
        };
        Manusia(string nik, string nama, string jk){
            NIK = nik;
            Nama = nama;
            JenisKelamin = jk;
        }

        //setter
        void setNIK(string nik){
            NIK = nik;
        }
        void setNama(string nama){
            Nama = nama;
        }
        void setJenisKelamin(string jk){
            JenisKelamin = jk;
        }

        //getter
        string getNIK(){
            return NIK;
        }
        string getNama(){
            return Nama;
        }
        string getJenisKelamin(){
            return JenisKelamin;
        }
        ~Manusia(){
        }
    
};

