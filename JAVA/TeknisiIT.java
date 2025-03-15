//Keahlian, SistemYgDikelola

public class TeknisiIT extends Tendik{
    private String Keahlian;
    private String SistemYgDikelola;

    public TeknisiIT(){
        setNIK("");
        setNama("");
        setJenisKelamin("");
        setNIP("");
        setJabatan("");
        this.Keahlian = "";
        this.SistemYgDikelola = "";
    }

    public TeknisiIT(String nik, String nama, String jk, String nip, String jabatan, String keahlian, String sistem, UnitKerja unit){
        setNIK(nik);
        setNama(nama);
        setJenisKelamin(jk);
        setNIP(nip);
        setJabatan(jabatan);
        setUnit(unit);
        this.Keahlian = keahlian;
        this.SistemYgDikelola = sistem;
    }

    //setter
    public void setKeahlian(String nik){
        this.Keahlian = nik;
    }

    public void setSistemYgDikelola(String nik){
        this.SistemYgDikelola = nik;
    }

    //getter
    public String getKeahlian(){
        return this.Keahlian;
    }

    public String getSistemYgDikelola(){
        return this.SistemYgDikelola;
    }
}