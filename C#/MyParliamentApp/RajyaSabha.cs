 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
using System.Collections.Generic;

public class RajyaSabha
{
    private List<MemberOfParliament> members = new List<MemberOfParliament>();

    public void AddMember(MemberOfParliament member)
    {
        members.Add(member);
    }

    public List<MemberOfParliament> GetMembers()
    {
        return members;
    }

    public override string ToString()
    {
        var sb = new System.Text.StringBuilder("Rajya Sabha Members:\n");
        foreach (var member in members)
        {
            sb.AppendLine(member.ToString());
        }
        return sb.ToString();
    }
}
