 /*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
using System;
using System.Collections.Generic;

// Creating the President of India
RajyaSabha rajyaSabha = new RajyaSabha();
LokSabha lokSabha = new LokSabha();
PresidentOfIndia? president = new PresidentOfIndia(null); // Initialize with nullable type

while (true)
{
    Console.WriteLine("\nMenu:");
    Console.WriteLine("1. Add a member to Rajya Sabha");
    Console.WriteLine("2. Add a member to Lok Sabha");
    Console.WriteLine("3. Add President");
    Console.WriteLine("4. Show Parliament Details");
    Console.WriteLine("5. Exit");
    Console.Write("Enter your choice: ");

    if (!int.TryParse(Console.ReadLine(), out int choice))
    {
        Console.WriteLine("Invalid input. Please enter a number.");
        continue;
    }

    switch (choice)
    {
        case 1:
            Console.Write("Enter Member Name: ");
            string? nameRajyaSabha = Console.ReadLine();
            Console.Write("Enter Position: ");
            string? positionRajyaSabha = Console.ReadLine();
            Console.Write("Enter Party: ");
            string? partyRajyaSabha = Console.ReadLine();
            if (nameRajyaSabha == null || positionRajyaSabha == null || partyRajyaSabha == null)
            {
                Console.WriteLine("Input cannot be null.");
                break;
            }
            rajyaSabha.AddMember(new MemberOfParliament(nameRajyaSabha, positionRajyaSabha, partyRajyaSabha));
            Console.WriteLine("Member added to Rajya Sabha.");
            break;

        case 2:
            Console.Write("Enter Member Name: ");
            string? nameLokSabha = Console.ReadLine();
            Console.Write("Enter Position: ");
            string? positionLokSabha = Console.ReadLine();
            Console.Write("Enter Party: ");
            string? partyLokSabha = Console.ReadLine();
            if (nameLokSabha == null || positionLokSabha == null || partyLokSabha == null)
            {
                Console.WriteLine("Input cannot be null.");
                break;
            }
            lokSabha.AddMember(new MemberOfParliament(nameLokSabha, positionLokSabha, partyLokSabha));
            Console.WriteLine("Member added to Lok Sabha.");
            break;

        case 3:
            Console.Write("Enter President Name: ");
            string? namePresident = Console.ReadLine();
            if (namePresident == null)
            {
                Console.WriteLine("Input cannot be null.");
                break;
            }
            president = new PresidentOfIndia(namePresident);
            break;

        case 4:
            ParliamentOfIndia parliament = new ParliamentOfIndia(president, rajyaSabha, lokSabha);
            if (rajyaSabha.GetMembers().Count == 0 && lokSabha.GetMembers().Count == 0)
            {
                Console.WriteLine("Please add members to Lok Sabha & Rajya Sabha!");
            }
            else
            {
                Console.WriteLine(parliament.ToString());
            }
            break;

        case 5:
            Console.WriteLine("Exiting...");
            return;

        default:
            Console.WriteLine("Invalid choice. Please try again.");
            break;
    }
}
