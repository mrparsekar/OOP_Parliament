 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
import java.util.ArrayList;
import java.util.List;

public class LokSabha {
    public List<MemberOfParliament> members = new ArrayList<>();

    public void addMember(MemberOfParliament member) {
        members.add(member);
    }

    public List<MemberOfParliament> getMembers() {
        return members;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder("Lok Sabha Members:\n");
        for (MemberOfParliament member : members) {
            sb.append(member.toString()).append("\n");
        }
        return sb.toString();
    }
}
