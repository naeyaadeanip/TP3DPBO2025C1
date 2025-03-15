//Bagian, Tugas

public class Administrasi extends Tendik{
    private String Bagian;
    private String Tugas;

    public Administrasi(){
        setNIK("");
        setNama("");
        setJenisKelamin("");
        setNIP("");
        setJabatan("");
        this.Bagian = "";
        this.Tugas = "";
    }

    public Administrasi(String nik, String nama, String jk, String nip, String jabatan, String bagian, String tugas, UnitKerja unit){
        setNIK(nik);
        setNama(nama);
        setJenisKelamin(jk);
        setNIP(nip);
        setJabatan(jabatan);
        setUnit(unit);
        this.Bagian = bagian;
        this.Tugas = tugas;
    }

    //setter
    public void setBagian(String nik){
        this.Bagian = nik;
    }

    public void setTugas(String nik){
        this.Tugas = nik;
    }

    //getter
    public String getBagian(){
        return this.Bagian;
    }

    public String getTugas(){
        return this.Tugas;
    }
}