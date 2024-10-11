/*
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
*/
#include <iostream>
#include "RajyaSabha.h"
#include "LokSabha.h"
#include "PresidentOfIndia.h"
#include "ParliamentOfIndia.h"

using namespace std;

int main() {
    RajyaSabha rajyaSabha;
    LokSabha lokSabha;
    PresidentOfIndia president("");

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add a member to Rajya Sabha\n";
        cout << "2. Add a member to Lok Sabha\n";
        cout << "3. Add President\n";
        cout << "4. Show Parliament Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Consume newline

        switch (choice) {
        case 1: {
            string name, position, party;
            cout << "Enter Member Name: ";
            getline(cin, name);
            cout << "Enter Position: ";
            getline(cin, position);
            cout << "Enter Party: ";
            getline(cin, party);
            rajyaSabha.addMember(MemberOfParliament(name, position, party));
            cout << "Member added to Rajya Sabha.\n";
            break;
        }
        case 2: {
            string name, position, party;
            cout << "Enter Member Name: ";
            getline(cin, name);
            cout << "Enter Position: ";
            getline(cin, position);
            cout << "Enter Party: ";
            getline(cin, party);
            lokSabha.addMember(MemberOfParliament(name, position, party));
            cout << "Member added to Lok Sabha.\n";
            break;
        }
        case 3: {
            string name;
            cout << "Enter President Name: ";
            getline(cin, name);
            president = PresidentOfIndia(name);
            break;
        }
        case 4: {
            if (rajyaSabha.members.empty() && lokSabha.members.empty()) {
                cout << "Please Add Members to Lok Sabha & Rajya Sabha!\n";
            } else {
                ParliamentOfIndia parliament(president, rajyaSabha, lokSabha);
                cout << parliament.toString();
            }
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 5);

    return 0;
}
