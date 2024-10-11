"""
Name:Shreyash Parsekar
Roll No:44
Batch-3
MCA-Part-1
"""
class MemberOfParliament:
    def __init__(self, name, position, party):
        self.name = name
        self.position = position
        self.party = party

    def __str__(self):
        return f"Name: {self.name}, Position: {self.position}, Party: {self.party}"


class PresidentOfIndia:
    def __init__(self, name):
        self.name = name

    def __str__(self):
        return f"President of India: {self.name}"


class RajyaSabha:
    def __init__(self):
        self.members = []

    def add_member(self, member):
        self.members.append(member)

    def __str__(self):
        if not self.members:
            return "Rajya Sabha Members: None"
        return "Rajya Sabha Members:\n" + "\n".join(str(member) for member in self.members)


class LokSabha:
    def __init__(self):
        self.members = []

    def add_member(self, member):
        self.members.append(member)

    def __str__(self):
        if not self.members:
            return "Lok Sabha Members: None"
        return "Lok Sabha Members:\n" + "\n".join(str(member) for member in self.members)


class ParliamentOfIndia:
    def __init__(self, president, rajya_sabha, lok_sabha):
        self.president = president
        self.rajya_sabha = rajya_sabha
        self.lok_sabha = lok_sabha

    def __str__(self):
        return f"{self.president}\n{self.rajya_sabha}\n{self.lok_sabha}"


def main():
    rajya_sabha = RajyaSabha()
    lok_sabha = LokSabha()
    president = PresidentOfIndia(None)

    while True:
        print("\nMenu:")
        print("1. Add a member to Rajya Sabha")
        print("2. Add a member to Lok Sabha")
        print("3. Add President")
        print("4. Show Parliament Details")
        print("5. Exit")
        choice = input("Enter your choice: ")

        if choice == '1':
            name = input("Enter Member Name: ")
            position = input("Enter Position: ")
            party = input("Enter Party: ")
            rajya_sabha.add_member(MemberOfParliament(name, position, party))
            print("Member added to Rajya Sabha.")

        elif choice == '2':
            name = input("Enter Member Name: ")
            position = input("Enter Position: ")
            party = input("Enter Party: ")
            lok_sabha.add_member(MemberOfParliament(name, position, party))
            print("Member added to Lok Sabha.")

        elif choice == '3':
            name = input("Enter President Name: ")
            president = PresidentOfIndia(name)

        elif choice == '4':
            parliament = ParliamentOfIndia(president, rajya_sabha, lok_sabha)
            if not rajya_sabha.members and not lok_sabha.members:
                print("Please Add Members to Lok Sabha & Rajya Sabha!")
            else:
                print(parliament)

        elif choice == '5':
            print("Exiting...")
            break

        else:
            print("Invalid choice. Please try again.")


if __name__ == "__main__":
    main()
