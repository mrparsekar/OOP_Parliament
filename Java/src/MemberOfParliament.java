 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
public class MemberOfParliament {
    private String name;
    private String position;
    private String party;

    public MemberOfParliament(String name, String position, String party) {
        this.name = name;
        this.position = position;
        this.party = party;
    }

    @Override
    public String toString() {
        return String.format("Name:"+name+" Position:"+position+" Party:"+party);
    }
}
