#include <bits/stdc++.h>
#include <iostream>
#include "Tendik.cpp"
#include "Manusia.cpp"
#include "Administrasi.cpp"
#include "TeknisiIT.cpp"
#include "UnitKerja.cpp"
#include "Tim.cpp"
#include <list>

using namespace std;

int main() {
    UnitKerja unitkerja1("Unit Keuangan", "U001", "Pak away");
    unitkerja1.addTim("Tim audit ", 5);
    unitkerja1.addTim("Tim Administrasi", 7);

    UnitKerja unitkerja2("Unit Teknologi", "U002", "pak yudi");
    unitkerja2.addTim("Tim Pengembangan", 10);
     unitkerja2.addTim("Tim Jaringan", 8);

    list<Administrasi> listadm;
    Administrasi hafsah;
    hafsah.setNIK("123456");
    hafsah.setNama("Hafsah");
     hafsah.setJenisKelamin("Perempuan");
     hafsah.setNIP("T005");
     hafsah.setJabatan("Administrasi");
     hafsah.setUnit(unitkerja1);
     hafsah.setBagian("Bagian Keuangan");
     hafsah.setTugas("Mengelola anggaran");
     listadm.push_back(hafsah);

     list<TeknisiIT> listtek;
     TeknisiIT klara;
     klara.setNIK("654321");
     klara.setNama("Klara");
     klara.setJenisKelamin("Perempuan");
     klara.setNIP("T006");
     klara.setJabatan("Teknisi IT");
     klara.setUnit(unitkerja2);
     klara.setKeahlian("Jaringan Komputer");
     klara.setSistemYgDikelola("Sistem Keamanan");
     listtek.push_back(klara);

    cout << "--------------------- LIST ADMINISTRASI ---------------------" << endl;
    int jumlah = 1;
    list<Administrasi>::iterator i;
    list<Tim>::iterator j;
    for(i = listadm.begin(); i != listadm.end(); i++){
        cout << jumlah << ". NIK: " << i->getNIK() << endl;
        cout << "   Nama: " << i->getNama() << endl;
        cout << "   Jenis Kelamin: " << i->getJenisKelamin() << endl;
        cout << "   NIP: " << i->getNIP() << endl;
        cout << "   Jabatan: " << i->getJabatan() << endl;
        cout << "   Unit Kerja: " << i->getUnit().getNamaUnit() << endl;
        cout << "   Bagian: " << i->getBagian() << endl;
        cout << "   Tugas: " << i->getTugas() << endl;
        list<Tim> listTim = i->getUnit().getListTim();
        for(j = listTim.begin(); j != listTim.end(); j++){
          cout << "   - " << j->getNamaTim() << ", " << j->getJumlahTim() << " orang" << endl;
        }
        jumlah++;
    }

    cout << endl
           << "--------------------- LIST TEKNISI IT ---------------------" << endl;
     list<TeknisiIT>::iterator k;
     jumlah = 1;
     for(k = listtek.begin(); k != listtek.end(); k++){
         cout << jumlah << ". NIK: " << k->getNIK() << endl;
         cout << "   Nama: " << k->getNama() << endl;
         cout << "   Jenis Kelamin: " << k->getJenisKelamin() << endl;
         cout << "   NIP: " << k->getNIP() << endl;
         cout << "   Jabatan: " << k->getJabatan() << endl;
         cout << "   Unit Kerja: " << k->getUnit().getNamaUnit() << endl;
         cout << "   Keahlian: " << k->getKeahlian() << endl;
         cout << "   Sistem yang dikelola: " << k->getSistemYgDikelola() << endl;
         list<Tim> listTim = k->getUnit().getListTim();
          for(j = listTim.begin(); j != listTim.end(); j++){
               cout << "   - " << j->getNamaTim() << ", " << j->getJumlahTim() << " orang" << endl;
        }
     }

    return 0;
}