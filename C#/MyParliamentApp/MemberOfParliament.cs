 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
using System.Collections.Generic;
public class MemberOfParliament
{
    private string name;
    private string position;
    private string party;

    public MemberOfParliament(string name, string position, string party)
    {
        this.name = name;
        this.position = position;
        this.party = party;
    }

    public override string ToString()
    {
        return $"Name: {name} Position: {position} Party: {party}";
    }
}
