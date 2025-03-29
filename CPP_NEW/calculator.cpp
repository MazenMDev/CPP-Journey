#include <iostream>
using namespace std;

void menu(){



}

int main(){
    int choice;
    int num1,num2,result;
    menu()
    do
    {
        if (choice > 0 && choice < 5)
        {
            switch (choice)
            {
            case 1:
            result = num1 + num2;
                break;
            case 2:
            result = num1 - num2;
                break;
            case 3:
            result = num1 * num2;
                break;
            case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
            }
                break;
            }
        }
        else if(choice == 5){
        break;
        }
    } while (choice != 5);
}