 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
using System.Collections.Generic;
public class ParliamentOfIndia
{
    private PresidentOfIndia president;
    private RajyaSabha rajyaSabha;
    private LokSabha lokSabha;

    public ParliamentOfIndia(PresidentOfIndia president, RajyaSabha rajyaSabha, LokSabha lokSabha)
    {
        this.president = president;
        this.rajyaSabha = rajyaSabha;
        this.lokSabha = lokSabha;
    }

    public override string ToString()
    {
        return president.ToString() + "\n" + rajyaSabha.ToString() + "\n" + lokSabha.ToString();
    }
}
