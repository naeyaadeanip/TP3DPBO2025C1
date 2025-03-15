import java.util.ArrayList;
import java.util.List;

public class Main{
    public static void main(String[] args){
        UnitKerja unitkerja1 = new UnitKerja("Unit Keuangan", "U001", "Pak Away");
        unitkerja1.addTim("Tim Audit", 5);
        unitkerja1.addTim("Tim Administrasi", 7);

        UnitKerja unitkerja2 = new UnitKerja("Unit Teknologi", "U002", "Pak Yudi");
        unitkerja2.addTim("Tim Pengembangan", 10);
        unitkerja2.addTim("Tim Jaringan", 8);

        List<Administrasi> listadm = new ArrayList<>();
        Administrasi hafsah = new Administrasi();
        hafsah.setNIK("123456");
        hafsah.setNama("Hafsah");
        hafsah.setJenisKelamin("Perempuan");
        hafsah.setNIP("T005");
        hafsah.setJabatan("Administrasi");
        hafsah.setUnit(unitkerja1);
        hafsah.setBagian("Bagian Keuangan");
        hafsah.setTugas("Mengelola anggaran");
        listadm.add(hafsah);

        List<TeknisiIT> listtek = new ArrayList<>();
        TeknisiIT klara = new TeknisiIT();
        klara.setNIK("654321");
        klara.setNama("Klara");
        klara.setJenisKelamin("Perempuan");
        klara.setNIP("T006");
        klara.setJabatan("Teknisi IT");
        klara.setUnit(unitkerja2);
        klara.setKeahlian("Jaringan Komputer");
        klara.setSistemYgDikelola("Sistem Keamanan");
        listtek.add(klara);

        System.out.println("--------------------- LIST ADMINISTRASI ---------------------");
        int jumlah = 1;
        for(Administrasi i : listadm){
            System.out.println(jumlah + ". NIK: " + i.getNIK());
            System.out.println("   Nama: " + i.getNama());
            System.out.println("   Jenis Kelamin: " + i.getJenisKelamin());
            System.out.println("   NIP: " + i.getNIP());
            System.out.println("   Jabatan: " + i.getJabatan());
            System.out.println("   Unit Kerja: " + i.getUnit().getNamaUnit());
            System.out.println("   Bagian: " + i.getBagian());
            System.out.println("   Tugas: " + i.getTugas());
            for(Tim j : i.getUnit().getListTim()){
                System.out.println("   - " + j.getNamaTim() + ", " + j.getJumlahTim() + " orang");
            }
            jumlah++;
        }

        System.out.println();
        System.out.println("--------------------- LIST TEKNISI IT ---------------------");
        jumlah = 1;
        for(TeknisiIT k : listtek){
            System.out.println(jumlah + ". NIK: " + k.getNIK());
            System.out.println("   Nama: " + k.getNama());
            System.out.println("   Jenis Kelamin: " + k.getJenisKelamin());
            System.out.println("   NIP: " + k.getNIP());
            System.out.println("   Jabatan: " + k.getJabatan());
            System.out.println("   Unit Kerja: " + k.getUnit().getNamaUnit());
            System.out.println("   Keahlian: " + k.getKeahlian());
            System.out.println("   Sistem yang dikelola: " + k.getSistemYgDikelola());
            for(Tim j : k.getUnit().getListTim()){
                System.out.println("   - " + j.getNamaTim() + ", " + j.getJumlahTim() + " orang");
            }
            jumlah++;
        }
    }
}