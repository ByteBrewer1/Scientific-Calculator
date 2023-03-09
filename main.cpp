#include<iostream>
#include<cmath>
using namespace std;

// Function declarations
double addition(double num1, double num2);
double subtraction(double num1, double num2);
double multiplication(double num1, double num2);
double division(double num1, double num2);
double power(double base, double exponent);
double square(double num);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double logarithm(double num);

void calculator(){
    // For Switch case
    cout << "Hello There!!" << endl;
    cout << "This is a Scientific Calculator" << endl;
    cout << "Select an operation to perform a simple calculation in C++ Calculator"  
        "\n1 = Addition"  
        "\n2 = Subtraction"  
        "\n3 = Multiplication"
        "\n4 = Division"  
        "\n5 = Power"
        "\n6 = Square"
        "\n7 = Sin"
        "\n8 = Cos"
        "\n9 = Tan"
        "\n10 = Log"  
        "\n11 = Exit" 
        "\n \n Make a choice: ";
    int z; cin >> z;

    // Perform calculation based on user's choice
    double num1, num2;
    switch(z){
        case 1: // Addition
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            cout << "Result: " << addition(num1, num2) << endl;
            break;
        case 2: // Subtraction
            cout << "Enter two numbers to subtract: ";
            cin >> num1 >> num2;
            cout << "Result: " << subtraction(num1, num2) << endl;
            break;
        case 3: // Multiplication
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            cout << "Result: " << multiplication(num1, num2) << endl;
            break;
        case 4: // Division
            cout << "Enter two numbers to divide: ";
            cin >> num1 >> num2;
            if(num2 == 0){
                cout << "Error: Division by zero" << endl;
            }
            else{
                cout << "Result: " << division(num1, num2) << endl;
            }
            break;
        case 5: // Power
            cout << "Enter a base and an exponent: ";
            cin >> num1 >> num2;
            cout << "Result: " << power(num1, num2) << endl;
            break;
        case 6: // Square
            cout << "Enter a number to square: ";
            cin >> num1;
            cout << "Result: " << square(num1) << endl;
            break;
        case 7: // Sine
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << sine(num1) << endl;
            break;
        case 8: // Cosine
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << cosine(num1) << endl;
            break;
        case 9: // Tangent
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Result: " << tangent(num1) << endl;
            break;
        case 10: // Logarithm
            cout << "Enter a positive number: ";
            cin >> num1;
            cout << "Result: " << logarithm(num1) << endl;
            break;
        case 11: // Exit
            cout << "Goodbye!" << endl;
            break;
        }
}

double addition(double num1, double num2){
    return num1 + num2;
}


double subtraction(double num1, double num2){
    return num1 - num2;
}

double multiplication(double num1, double num2){
    return num1 * num2;
}

double division(double num1, double num2){
    return num1 / num2;
}

double power(double base, double exponent){
    return pow(base, exponent);
}

double square(double num){
    return num * num;
}

double sine(double angle){
    return sin(angle);
}

double cosine(double angle){
    return cos(angle);
}

double tangent(double angle){
    return tan(angle);
}

double logarithm(double num){
    return log(num);
}


int main(){
    int i=0;
    for (; ; i++)
    {
        calculator();
        cout << "\n\n"  << endl;
    }
    return 0;
}
