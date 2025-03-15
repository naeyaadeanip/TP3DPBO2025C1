//NIP, Jabatan, UnitKerja

public class Tendik extends Manusia{
    private String NIP;
    private String Jabatan;
    private UnitKerja Unit;

    public Tendik(){
        setNIK("");
        setNama("");
        setJenisKelamin("");
        this.NIP = "";
        this.Jabatan = "";
    }

    public Tendik(String nik, String nama, String jk, String nip, String jabatan, UnitKerja unit){
        setNIK(nik);
        setNama(nama);
        setJenisKelamin(jk);
        this.NIP = nip;
        this.Jabatan = jabatan;
        this.Unit = unit;
    }

    // Setter
    public void setNIP(String nik){
        this.NIP = nik;
    }

    public void setJabatan(String nik){
        this.Jabatan = nik;
    }

    public void setUnit(UnitKerja nik){
        this.Unit = nik;
    }

    // Getter
    public String getNIP(){
        return this.NIP;
    }

    public String getJabatan(){
        return this.Jabatan;
    }

    public UnitKerja getUnit(){
        return this.Unit;
    }
}