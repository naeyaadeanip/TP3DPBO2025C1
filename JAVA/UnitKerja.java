//NamaUnit, KodeUnit, KepalaUnit
import java.util.ArrayList;
import java.util.List;

public class UnitKerja{
    private String NamaUnit;
    private String KodeUnit;
    private String KepalaUnit;
    private List<Tim> listTim;

    public UnitKerja(){
        this.NamaUnit = "";
        this.KodeUnit = "";
        this.KepalaUnit = "";
        this.listTim = new ArrayList<>();
    }

    public UnitKerja(String nama, String kode, String kepala){
        this.NamaUnit = nama;
        this.KodeUnit = kode;
        this.KepalaUnit = kepala;
        this.listTim = new ArrayList<>();
    }

    //setter
    public void setNamaUnit(String nama){
        this.NamaUnit = nama;
    }

    public void setKodeUnit(String kode){
        this.KodeUnit = kode;
    }

    public void setKepalaUnit(String kepala){
        this.KepalaUnit = kepala;
    }

    public void addTim(String nama, int jumlah){
        Tim temp = new Tim();
        temp.setNamaTim(nama);
        temp.setJumlahTim(jumlah);
        listTim.add(temp);
    }

    //getter
    public String getNamaUnit(){
        return this.NamaUnit;
    }

    public String getKodeUnit(){
        return this.KodeUnit;
    }

    public String getKepalaUnit(){
        return this.KepalaUnit;
    }

    public List<Tim> getListTim(){
        return this.listTim;
    }
}