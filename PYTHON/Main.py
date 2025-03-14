from Administrasi import Administrasi
from TeknisiIT import TeknisiIT
from UnitKerja import UnitKerja
from Tim import Tim

unitkerja1 = UnitKerja()
unitkerja1.setNamaUnit("Unit Keuangan")
unitkerja1.setKodeUnit("UK001")
unitkerja1.setKepalaUnit("pak yaya")
unitkerja1.addTim("Tim Keuangan", 5)
unitkerja1.addTim("Tim Audit", 3)

unitkerja2 = UnitKerja()
unitkerja2.setNamaUnit("Unit IT")
unitkerja2.setKodeUnit("UK002")
unitkerja2.setKepalaUnit("pak rizky")
unitkerja2.addTim("Tim Jaringan", 4)
unitkerja2.addTim("Tim Sistem", 6)

listadm = []
shizu = Administrasi()
shizu.setNIK("123")
shizu.setNama("Shizu")
shizu.setJenisKelamin("Perempuan")
shizu.setNIP("321")
shizu.setJabatan("Administrasi")
shizu.setUnitKerja(unitkerja1)
shizu.setBagian("Bagian Keuangan")
shizu.setTugas("Mengelola Anggaran")
listadm.append(shizu)

listtek = []
alifa = TeknisiIT()
alifa.setNIK("456")
alifa.setNama("Alifa")
alifa.setJenisKelamin("Perempuan")
alifa.setNIP("654")
alifa.setJabatan("Teknisi IT")
alifa.setUnitKerja(unitkerja2)
alifa.setKeahlian("Jaringan Komputer")
alifa.setSistem("Sistem Keamanan")
listtek.append(alifa)

print("-------------------- LIST ADMINISTRASI --------------------")
jumlah = 1
for adm in listadm:
    print(str(jumlah)+". NIK:", adm.getNIK())
    print("   Nama:", adm.getNama())
    print("   Jenis Kelamin:", adm.getJenisKelamin())
    print("   NIP:", adm.getNIP())
    print("   Jabatan:", adm.getJabatan())
    print("   Unit Kerja:", adm.getUnit().getNamaUnit())
    print("   Bagian:", adm.getBagian())
    print("   Tugas:", adm.getTugas())
    tim = 1
    for a in adm.getUnit().getTim():
        if tim == 1:
            print("   List Tim:" + str(tim) + ". " + a.getNamaTim() + ", " + str(a.getJumlahTim()) + " Orang")
        else:
            print("            " + str(tim) + ". " + a.getNamaTim() + ", " + str(a.getJumlahTim()) + " Orang")
        tim += 1

jumlah = 1
print("-------------------- LIST TEKNISI IT --------------------")
for tek in listtek:
    print(str(jumlah)+". NIK:", tek.getNIK())
    print("   Nama:", tek.getNama())
    print("   Jenis Kelamin:", tek.getJenisKelamin())
    print("   NIP:", tek.getNIP())
    print("   Jabatan:", tek.getJabatan())
    print("   Unit Kerja:", tek.getUnit().getNamaUnit())
    print("   Keahlian:", tek.getKeahlian())
    print("   Sistem:", tek.getSistem())
    tim = 1
    for a in tek.getUnit().getTim():
        if tim == 1:
            print("   List Tim:" + str(tim) + ". " + a.getNamaTim() + ", " + str(a.getJumlahTim()) + " Orang")
        else:
            print("            " + str(tim) + ". " + a.getNamaTim() + ", " + str(a.getJumlahTim()) + " Orang")
        tim += 1

jumlah += 1