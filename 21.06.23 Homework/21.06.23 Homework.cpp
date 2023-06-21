#include <iostream>
using namespace std;

int main()
{   //Task 1
    int number, choice;
    cout << "Enter a number: ";
    cin >> number;

    do {
        cout << "Choose the operation: " "\n";
        cout << "1. Identify amount of digits on the number" "\n";
        cout << "2. calculate their sum" "\n";
        cout << "3. Count the arithmetic mean" "\n";
        cout << "4. Identify the amount of zeros in the number" "\n";
        cout << "5. quit" "\n";
        cin >> choice;

        int num = number;
        int counter = 0;
        int sum = 0;
        int zeros = 0;

        while (num != 0) {
            int digit = num % 10;
            counter++;
            sum += digit;
            if (digit == 0)
                zeros++;
            num /= 10;
        }

        switch (choice) {
        case 1:
            cout << "Amount of digits in the number: " << counter << "\n";
            break;
        case 2:
            cout << "Numbers sum: " << sum << "\n";
            break;
        case 3:
            cout << "Numbers arithmetic mean: " << (double)sum / counter << "\n";
            break;
        case 4:
            cout << " The amount of zeros in the number: " << zeros << "\n";
            break;
        case 5:
            cout << "quitting for the programm" "\n";
            break;
        default:
            cout << "Invalid chocie, try again!" "\n";
        }
    } while (choice != 5);


    //Task 2
    int board_size;
    cout << "Enter size of the board: ";
    cin >> board_size;

    for (int horiz = 0; horiz < 8; horiz++) {
        for (int i = 0; i < board_size; i++) {
            for (int vertical = 0; vertical < 8; vertical++) {
                for (int j = 0; j < board_size; j++) {
                    if ((horiz + vertical) % 2 == 0)
                        cout << "*";
                    else
                        cout << " ";
                }
            }
            cout << "\n";
        }
    }


    //Task 3
    const int items = 5;
    string menu_items[items] = { "Sparkling water", "Burger", "Omlette", "Cookie", "Maffin" };
    double prices[items] = { 1.50, 1.00, 2.50, 1.00, 3.00 };
    int people;
    double total = 0;

    cout << "Enter the number of people: ";
    cin >> people;

    for (int i = 0; i < people; i++) {
        cout << "Person " << i + 1 << ", please choose from the menu: " "\n";
        for (int j = 0; j < items; j++) {
            cout << j + 1 << ". " << menu_items[j] << " - $" << prices[j] << "\n";
        }
        int choice;
        do {
            cout << "Enter your choice (0 to finish): ";
            cin >> choice;
            if (choice > 0 && choice <= items) {
                total += prices[choice - 1];
            }
        } while (choice != 0);
    }

    cout << "The total order is $" << total << "\n";


    //Task 4
    for (int i = 0; i < 10; i++) {
        for (char c = 'A'; c <= 'J'; c++) {
            cout << c << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
