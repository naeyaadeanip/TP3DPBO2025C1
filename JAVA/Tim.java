//NamaTim, JumlahTim

public class Tim{
    private String NamaTim;
    private int JumlahTim;

    public Tim(){
        this.NamaTim = "";
        this.JumlahTim = 0;
    }

    public Tim(String nama, int jumlah){
        this.NamaTim = nama;
        this.JumlahTim = jumlah;
    }

    //setter
    public void setNamaTim(String nama){
        this.NamaTim = nama;
    }

    public void setJumlahTim(int jumlah){
        this.JumlahTim = jumlah;
    }

    //getter
    public String getNamaTim(){
        return this.NamaTim;
    }

    public int getJumlahTim(){
        return this.JumlahTim;
    }
}