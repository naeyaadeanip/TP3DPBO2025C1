//NIK, Nama, JenisKelamin

class Manusia{
    private String NIK;
    private String Nama;
    private String JenisKelamin;

    Manusia(){
        this.NIK = "";
        this.Nama = "";
        this.JenisKelamin = "";
    };

    Manusia(String NIK, String Nama, String JenisKelamin){
        this.NIK = NIK;
        this.Nama = Nama;
        this.JenisKelamin = JenisKelamin;
    }

    //setter
    void setNIK(String NIK){
        this.NIK = NIK;
    }
    void setNama(String Nama){
        this.Nama = Nama;
    }
    void setJenisKelamin(String JenisKelamin){
        this.JenisKelamin = JenisKelamin;
    }

    //getter
    String getNIK(){
        return this.NIK;
    }
    String getNama(){
        return this.Nama;
    }
    String getJenisKelamin(){
        return this.JenisKelamin;
    }
}