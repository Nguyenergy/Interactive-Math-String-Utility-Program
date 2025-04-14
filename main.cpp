#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to calculate factorial using while loop
void factorialCalculator() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. Please enter a positive integer.\n";
        return;
    }

    unsigned long long factorial = 1;
    int i = 1;

    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << "\n";
}

// Function to print number pyramid using nested for loops
void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int space = 0; space < rows - i; ++space) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
}

// Function to sum even or odd numbers using do-while loop
void sumEvenOrOdd() {
    char choice;
    int limit;
    int sum = 0;
    int i = 1;

    cout << "Do you want to sum (E)ven or (O)dd numbers? ";
    cin >> choice;
    choice = tolower(choice);

    cout << "Enter the upper limit: ";
    cin >> limit;

    i = 1;
    do {
        if ((choice == 'e' && i % 2 == 0) || (choice == 'o' && i % 2 != 0)) {
            sum += i;
        }
        i++;
    } while (i <= limit);

    if (choice == 'e')
        cout << "Sum of even numbers up to " << limit << ": " << sum << "\n";
    else if (choice == 'o')
        cout << "Sum of odd numbers up to " << limit << ": " << sum << "\n";
    else
        cout << "Invalid choice. Please enter E or O.\n";
}

// Function to reverse a string using while loop
void reverseString() {
    string input;
    cout << "Enter a string: ";
    cin.ignore(); // To clear input buffer before getline
    getline(cin, input);

    string reversed = "";
    int i = input.length() - 1;

    while (i >= 0) {
        reversed += input[i];
        i--;
    }

    cout << "Reversed string: " << reversed << "\n";
}

// Main menu function
void showMenu() {
    cout << "\n========= Interactive Utility Program =========\n";
    cout << "1. Factorial Calculator\n";
    cout << "2. Number Pyramid\n";
    cout << "3. Sum of Even or Odd Numbers\n";
    cout << "4. Reverse a String\n";
    cout << "5. Exit\n";
    cout << "==============================================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumEvenOrOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                cout << "Goodbye! Thank you for using the program.\n";
                break;
            default:
                cout << "Invalid choice. Please select from 1 to 5.\n";
        }
    } while (choice != 5);

    return 0;
}
