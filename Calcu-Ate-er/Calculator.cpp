#include <iostream>
#include <cmath>
using namespace std;

double addition (double addend1, double addend2)
{
    double sum;
    sum = addend1 + addend2;
    return sum;
}

double subtraction (double minuend, double subtrahend)
{
    double difference;
    difference = minuend - subtrahend;
    return difference;
}

double division (double dividend, double divisor)
{
    double quotient;
    quotient = dividend / divisor;
    return quotient;
}

double multiplication (double multiplier, double multiplicand)
{
    double product;
    product = multiplier * multiplicand;
    return product;
}

double squareroot(double squarerootof)
{
    
    double result;
    result = sqrt(squarerootof);
    return result;
}

// Calcu-ATE-er by Rex G. <3

int main()
{
    cout << "Welcome to CC! Your Console Calculator.\n";
    cout << "Enter your First Number to start.";

    cout << R"(
      _____      _            _       _                  _____________________        
     / ____|    | |          | |     | |                |  _________________  |      
    | |     __ _| | ___ _   _| | __ _| |_ ___  _ __     | | HI           X. | |
    | |    / _` | |/ __| | | | |/ _` | __/ _ \| '__|    | |_________________| |
    | |___| (_| | | (__| |_| | | (_| | || (_) | |       |  ___ ___ ___   ___  |
     \_____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|       | | 7 | 8 | 9 | | + | |
                                                        | |___|___|___| |___| |
                                                        | | 4 | 5 | 6 | | - | |
                                                        | |___|___|___| |___| |
                                                        | | 1 | 2 | 3 | | x | |
                                                        | |___|___|___| |___| |
                                                        | | . | 0 | = | | / | |
                                                        | |___|___|___| |___| |
                                                        |_____________________|)" << endl;

    char choice;
    bool try_again = false;
    char square_choice;
    bool try_again_square = false;

    do 
    {
        cout << "*----------*-----------*----------*-----------*----------*-----------*----------*-----------*-----------*-----------*" << endl;
        
            double num1, num2;
            char operation;

            while (true)
            {
                cout << "Enter First Number:      " << "            ->    ";
                cin >> num1;
                if (cin.fail()) 
                {
                    cout << "Invalid input! Please enter a number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                else 
                {
                    break;
                }
            }

            while (true)
            {
                cout << "Enter Second Number:     " << "            ->    ";
                cin >> num2;
                if (cin.fail())
                {
                    cout << "Invalid input! Please enter a number." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                }
                else
                {
                    break;
                }
            }

        cout << "*----------*-----------*----------*-----------*----------*-----------*----------*-----------*-----------*-----------*" << endl;

            while (true)
            {
                cout << "Operators: \n";
                cout << "  Add          ==   [+]" <<
                '\n' << "  Subtract     ==   [-]" <<  
                '\n' << "  Divide       ==   [/]" << 
                '\n' << "  Multiply     ==   [*]" << 
                '\n' << "  Square root  ==   [s]" << '\n';
                cout << "Enter Operation:         " << "            ->    ";
                cin >> operation;
                if (operation == '+' || operation == '-' || operation == '*' || operation == '/' || operation == 's' || operation == 'S')
                {
                    break;
                }
                else
                {
                    cout << "Please choose valid operator" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            }

        cout << "*----------*-----------*----------*-----------*----------*-----------*----------*-----------*-----------*-----------*" << endl;
        
        switch (operation)
        {
            case '+':
              cout << "The Answer is:                      -->    " << addition(num1, num2) << "    <--" << endl;
                break;

            case '-':
              cout << "The Answer is:                      -->    " << subtraction(num1, num2) << "    <--" << endl;
               break;

            case '*':
              cout << "The Answer is:                      -->    " << multiplication(num1, num2) << "    <--" << endl;
             break;

            case '/':
              if (num2 != 0)
              {
                cout << "The Answer is:                      -->    " << division(num1, num2) << "    <--" << endl;
              }
              else
              {
                cout << "The Answer is:                      -->    Undefined" << "    <--" << endl;
              }
             break;

            case 's':
                  do
                  {
                        cout << "Find the Square root of what No.?: " << '\n'
                            << "  [A] First Number:  (" << num1 << ")" << '\n'
                            << "  [B] Second Number: (" << num2 << ")" << endl;
                        cout << "Enter Choice:         " << "               ->    ", cin >> square_choice;

        cout << "*----------*-----------*----------*-----------*----------*-----------*----------*-----------*-----------*-----------*" << endl;

                        if (square_choice == 'a' || square_choice == 'A')
                        {
                            cout << "The Answer is:                      -->    " << squareroot(num1) << "    <--" << endl;
                            try_again_square = true;
                        }
                        else if (square_choice == 'b' || square_choice == 'B')
                        {
                            cout << "The Answer is:                      -->    " << squareroot(num2) << "    <--" << endl;
                            try_again_square = true;
                        }
                        else
                        {
                            cout << "Invalid Input! Please enter 'A' or 'B'" << endl;
                        
                        }
                
                  } while (!try_again_square);
            break;

        default:
            cout << '\n' << "Invalid operator D : " << endl;
            break;
        }

        cout << "*----------*-----------*----------*-----------*----------*-----------*----------*-----------*-----------*-----------*" << endl;

        do 
        {
            cout << "Perform another operation? (y/n):    ->    ";
            cin >> choice;

            if (choice == 'Y' || choice == 'y') 
            {
                try_again = true;
            }
            else if (choice == 'N' || choice == 'n') 
            {
                try_again = true;
                cout << "Calculator has been closed." << endl;
            }
            else 
            {
                cout << "Invalid Input! Please enter 'y' or 'n'" << endl;
                try_again = false;
            }
        } while (!try_again);
        
        
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}