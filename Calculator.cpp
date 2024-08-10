#include <iostream>
using namespace std;
// calculator 
// A mathematical operation between two numbers
int main() {
    double num1, num2;
    char operation;
    char choice;
    do {
        // Prompt the user to enter two numbers
        cout << "Enter the first number: ";
        cin >> num1;

        // Prompt the user to select an operation
        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter the second number: ";
        cin >> num2;

        // Perform the selected operation
        switch(operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        // Ask the user if they want to perform another calculation
        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    // Display thank you message when the user chooses to exit
    cout << "Thank you for using the calculator. Goodbye!" << endl;

    return 0;
}