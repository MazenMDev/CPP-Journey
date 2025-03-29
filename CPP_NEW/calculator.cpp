#include <iostream>
using namespace std;

void menu() {
    cout << "___The Calculator___" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "============================" << endl;
}

int main() {
    int choice;
    double num1, num2, result;
    do
    {
        cout << endl;
        menu();
        cout << "Enter the operation: ";
        cin >> choice;
        if (choice > 0 && choice < 5)
        {
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;
            switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                else cout << "Error! Division by zero is not allowed." << endl;
                break;  
            }
        }
        else if (choice == 5) {
            cout << "Exiting calculator :(" << endl;
        }
        else cout << "Invalid number.. Try again" << endl;
        cout << "\033[2J\033[H";
    } while (choice != 5);

    return 0;
}