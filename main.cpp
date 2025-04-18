#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

 
char ch;
int qnty, sum, opt, n, a;

// Function declarations

int burger();
int parathaRolls();
int shawarma();
int biryani();
int pizza();
int salad();
int drinks();
int desserts();
int snacks();
int seafood();
int soups();



int burger()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------BURGER------*" << endl;
        cout << "\t\t\t\tPress '1' Naga Chicken Burger ..............BDT:250" << endl;
        cout << "\t\t\t\tPress '2' BBQ Beef Burger ..................BDT:300" << endl;
        cout << "\t\t\t\tPress '3' Cheese Blast Burger ..............BDT:280" << endl;
        cout << "\t\t\t\tPress '4' Classic Smash Burger .............BDT:220" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '4')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Naga Chicken Burger"; sum = 250 * qnty; break;
            case '2': itemName = "BBQ Beef Burger"; sum = 300 * qnty; break;
            case '3': itemName = "Cheese Blast Burger"; sum = 280 * qnty; break;
            case '4': itemName = "Classic Smash Burger"; sum = 220 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum << endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n"; }
    }
}

int parathaRolls()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------PARATHA ROLLS------*" << endl;
        cout << "\t\t\t\tPress '1' Chicken Tikka Roll ..............BDT:180" << endl;
        cout << "\t\t\t\tPress '2' Beef Kebab Roll .................BDT:200" << endl;
        cout << "\t\t\t\tPress '3' Aloo Paratha Roll ...............BDT:150" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Chicken Tikka Roll"; sum = 180 * qnty; break;
            case '2': itemName = "Beef Kebab Roll"; sum = 200 * qnty; break;
            case '3': itemName = "Aloo Paratha Roll"; sum = 150 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum  << endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int shawarma()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------SHAWARMA------*" << endl;
        cout << "\t\t\t\tPress '1' Chicken Shawarma Wrap ...........BDT:220" << endl;
        cout << "\t\t\t\tPress '2' Beef Shawarma Wrap ..............BDT:250" << endl;
        cout << "\t\t\t\tPress '3' Spicy Naga Shawarma .............BDT:280" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Chicken Shawarma Wrap"; sum = 220 * qnty; break;
            case '2': itemName = "Beef Shawarma Wrap"; sum = 250 * qnty; break;
            case '3': itemName = "Spicy Naga Shawarma"; sum = 280 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum << endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int biryani()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------BIRYANI------*" << endl;
        cout << "\t\t\t\tPress '1' Chicken Tehari ..................BDT:180" << endl;
        cout << "\t\t\t\tPress '2' Beef Kacchi Biryani .............BDT:250" << endl;
        cout << "\t\t\t\tPress '3' Mutton Biryani ..................BDT:300" << endl;
        cout << "\t\t\t\tPress '4' Hyderabadi Biryani ..............BDT:280" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '4')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Chicken Tehari"; sum = 180 * qnty; break;
            case '2': itemName = "Beef Kacchi Biryani"; sum = 250 * qnty; break;
            case '3': itemName = "Mutton Biryani"; sum = 300 * qnty; break;
            case '4': itemName = "Hyderabadi Biryani"; sum = 280 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
          

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n"; }
    }
}

int pizza()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------PIZZA------*" << endl;
        cout << "\t\t\t\tPress '1' Chicken Tikka Pizza .............BDT:450" << endl;
        cout << "\t\t\t\tPress '2' Beef Pepperoni Pizza ............BDT:500" << endl;
        cout << "\t\t\t\tPress '3' Cheese Burst Pizza ..............BDT:480" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Chicken Tikka Pizza"; sum = 450 * qnty; break;
            case '2': itemName = "Beef Pepperoni Pizza"; sum = 500 * qnty; break;
            case '3': itemName = "Cheese Burst Pizza"; sum = 480 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int salad()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------SALAD------*" << endl;
        cout << "\t\t\t\tPress '1' Fattoush Salad ..................BDT:180" << endl;
        cout << "\t\t\t\tPress '2' Chicken Chatpati Salad ..........BDT:220" << endl;
        cout << "\t\t\t\tPress '3' Fresh Green Salad ...............BDT:150" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Fattoush Salad"; sum = 180 * qnty; break;
            case '2': itemName = "Chicken Chatpati Salad"; sum = 220 * qnty; break;
            case '3': itemName = "Fresh Green Salad"; sum = 150 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int drinks()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------DRINKS------*" << endl;
        cout << "\t\t\t\tPress '1' Borhani .........................BDT:80" << endl;
        cout << "\t\t\t\tPress '2' Lassi ...........................BDT:100" << endl;
        cout << "\t\t\t\tPress '3' Fresh Mango Juice ...............BDT:120" << endl;
        cout << "\t\t\t\tPress '4' Coca-Cola .......................BDT:50" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '4')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Borhani"; sum = 80 * qnty; break;
            case '2': itemName = "Lassi"; sum = 100 * qnty; break;
            case '3': itemName = "Fresh Mango Juice"; sum = 120 * qnty; break;
            case '4': itemName = "Coca-Cola"; sum = 50 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum << endl;
           

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n"; }
    }
}

int desserts()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------DESSERTS------*" << endl;
        cout << "\t\t\t\tPress '1' Roshogolla .....................BDT:80" << endl;
        cout << "\t\t\t\tPress '2' Mishti Doi ......................BDT:100" << endl;
        cout << "\t\t\t\tPress '3' Falooda .........................BDT:150" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Roshogolla"; sum = 80 * qnty; break;
            case '2': itemName = "Mishti Doi"; sum = 100 * qnty; break;
            case '3': itemName = "Falooda"; sum = 150 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int snacks()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------SNACKS------*" << endl;
        cout << "\t\t\t\tPress '1' Jhal Muri ......................BDT:50" << endl;
        cout << "\t\t\t\tPress '2' Chicken Fry ....................BDT:120" << endl;
        cout << "\t\t\t\tPress '3' Shingara .......................BDT:30" << endl;
        cout << "\t\t\t\tPress '4' Fuchka .........................BDT:60" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '4')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Jhal Muri"; sum = 50 * qnty; break;
            case '2': itemName = "Chicken Fry"; sum = 120 * qnty; break;
            case '3': itemName = "Shingara"; sum = 30 * qnty; break;
            case '4': itemName = "Fuchka"; sum = 60 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 4\n\n"; }
    }
}

int seafood()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------SEAFOOD------*" << endl;
        cout << "\t\t\t\tPress '1' Rui Machher Jhol ...............BDT:200" << endl;
        cout << "\t\t\t\tPress '2' Ilish Bhapa ....................BDT:350" << endl;
        cout << "\t\t\t\tPress '3' Chingri Malaikari ..............BDT:400" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Rui Machher Jhol"; sum = 200 * qnty; break;
            case '2': itemName = "Ilish Bhapa"; sum = 350 * qnty; break;
            case '3': itemName = "Chingri Malaikari"; sum = 400 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}

int soups()
{
    while (true)
    {
        cout << "\t\t\t\t\t    *------SOUPS------*" << endl;
        cout << "\t\t\t\tPress '1' Daal Soup ......................BDT:120" << endl;
        cout << "\t\t\t\tPress '2' Chicken Thai Soup ..............BDT:150" << endl;
        cout << "\t\t\t\tPress '3' Mutton Paya Soup ...............BDT:180" << endl;
        cout << "\t\t\t\tPress 'Backspace' To Go Back To Menu\n" << endl;
        cout << "Please select any option: ";

        ch = getch();
        a = ch;
        cout << endl;

        if (a >= '1' && a <= '3')
        {
            cout << "How much quantity do you want? ";
            cin >> qnty;
            cout << endl;

            string itemName;
            switch (a)
            {
            case '1': itemName = "Daal Soup"; sum = 120 * qnty; break;
            case '2': itemName = "Chicken Thai Soup"; sum = 150 * qnty; break;
            case '3': itemName = "Mutton Paya Soup"; sum = 180 * qnty; break;
            }
            cout << "You entered " << qnty << " " << itemName << "(s)" << endl;
            cout << "The bill is: " << sum <<  endl;
            

            cout << "If you want to go back to 'Main Menu' press 'Backspace' or any other key to continue" << endl;
            ch = getch();
            if (ch == 8) { system("cls"); return 0; }
        }
        else if (a == 8) { system("cls"); return 0; }
        else { system("cls"); cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 1 to 3\n\n"; }
    }
}








void signup() {
    string phoneNumber, username, password, existingPhone, existingUser, existingPass;

    cout << "Enter your Phone Number: ";
    cin >> phoneNumber;

    ifstream infile("users.txt");
    while (infile >> existingPhone >> ws && getline(infile, existingUser, '|') && infile >> existingPass) {
        if (existingPhone == phoneNumber) {
            cout << "Phone number already registered! Please use a different phone number.\n";
            return;
        }
    }
    infile.close();

    cin.ignore();  // Clear newline character
    cout << "Create a Username: ";
    getline(cin, username);

    cout << "Create a Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << phoneNumber << " " << username << "|" << password << endl;  // username can contain spaces
    file.close();

    cout << "Signup successful! You can now log in." << endl;
}

bool login() {
    string phoneNumber, password, storedPhone, storedUser, storedPass;

    cout << "Enter Phone Number: ";
    cin >> phoneNumber;
    cout << "Enter Password: ";
    cin >> password;

    ifstream file("users.txt");
    while (file >> storedPhone >> ws && getline(file, storedUser, '|') && file >> storedPass) {
        if (storedPhone == phoneNumber && storedPass == password) {
            cout << "Login successful!\n";
            return true;
        }
    }

    cout << "Invalid Phone Number or Password.\n";
    return false;
}



void startFoodOrderingSystem() {
    int choice;

    cout << "\n\t\t\t\t*--------FOOD ORDERING MANAGEMENT SYSTEM--------*\n\n";

    while (true) {
        cout << "\nWhat would you like to order?\n\n";
        cout << "\n\t\t\t\t\t  *----------MENU----------*\n" << endl;
        cout << "Press '1' BURGER" << endl;
        cout << "Press '2' PARATHA ROLLS" << endl;
        cout << "Press '3' SHAWARMA" << endl;
        cout << "Press '4' BIRYANI" << endl;
        cout << "Press '5' PIZZA" << endl;
        cout << "Press '6' SALAD" << endl;
        cout << "Press '7' DRINKS" << endl;
        cout << "Press '8' DESSERTS" << endl;
        cout << "Press '9' SNACKS" << endl;
        cout << "Press '10' SEAFOOD" << endl;
        cout << "Press '11' SOUPS" << endl;
        cout << "Press '0' LOGOUT" << endl;

        cout << "\nPlease enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 0) {
            cout << "Logging out...\n";
            break;
        }

        switch (choice) {
            case 1: burger(); break;
            case 2: parathaRolls(); break;
            case 3: shawarma(); break;
            case 4: biryani(); break;
            case 5: pizza(); break;
            case 6: salad(); break;
            case 7: drinks(); break;
            case 8: desserts(); break;
            case 9: snacks(); break;
            case 10: seafood(); break;
            case 11: soups(); break;
            default:
                system("cls");
                cout << "\n\t\t\t\tInvalid Input..!!! Please Enter a value between 0 to 11\n";
        }

        cout << "\nWould you like to place another order? (Y): ";
        cout << "\nFor logout press(N): ";
        char again;
        cin >> again;
        cin.ignore();
        if (again != 'Y' && again != 'y') {
            cout << "Logging out...\n";
            break;
        }

        system("cls");
    }

    cout << "Thank you for using our Food Ordering System! " << endl;
}

int main() {
    char choice;
    while (true) {
        cout << "\n\t\t\t\t*--------FOOD ORDERING MANAGEMENT SYSTEM--------*\n\n";
        cout << "\n1. Signup\n2. Login\n3. Exit\nChoose option: ";
        cin >> choice;

        if (choice == '1') {
            signup();
        } else if (choice == '2') {
            if (login()) {
                startFoodOrderingSystem();
            }
        } else if (choice == '3') {
            return 0;
        } else {
            cout << "Invalid choice .\n";
        }
    }

    return 0;
}
