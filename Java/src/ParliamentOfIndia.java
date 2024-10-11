 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
public class ParliamentOfIndia {
    private PresidentOfIndia president;
    private RajyaSabha rajyaSabha;
    private LokSabha lokSabha;

    public ParliamentOfIndia(PresidentOfIndia president, RajyaSabha rajyaSabha, LokSabha lokSabha) {
        this.president = president;
        this.rajyaSabha = rajyaSabha;
        this.lokSabha = lokSabha;
    }

    @Override
    public String toString() {
        return president.toString() + "\n" + rajyaSabha.toString() + "\n" + lokSabha.toString();
    }
}
