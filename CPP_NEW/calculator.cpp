#include <iostream>
#include <cmath>
using namespace std;

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"  // Windows
#else
    #define CLEAR_SCREEN "clear" // Linux/macOS
#endif

void menu() {
    cout << "___The Calculator___" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Square Root (√)" << endl;
    cout << "6. Power (^)" << endl;
    cout << "7. Factorial (!)" << endl;
    cout << "8. Exit" << endl;
    cout << "============================" << endl;
}

long long factorial(int num) {
    if (num < 0) {
        cout << "Error! Factorial of a negative number is not allowed." << endl;
        return -1;
    }
    long long fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;  
    }
    return fact;
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
            cout << "Enter Number: ";
            cin >> num1;
            if (num1 >= 0)
            {
                result = sqrt(num1);
                cout << "Result: " << result << endl;
            }
            else cout << "Error! negative number not allowed." << endl;
        }
        else if (choice == 6) {
            cout << "Base: ";
            cin >> num1;
            cout << "Exponent: ";
            cin >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
        }
        else if (choice == 7) {
            cout << "Enter an integer: ";
            int num;
            cin >> num;
            long long FactResult = factorial(num);
            if (FactResult != -1)
            {
                cout << "Result: " << FactResult << endl;
            }
        }
        else if (choice == 8) cout << "Exiting calculator :(" << endl;
        else cout << "Invalid number.. Try again" << endl;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
        cout << "\nPress Enter to continue...";
        cin.get();  
        system(CLEAR_SCREEN);
    } while (choice != 8);

    return 0;
}