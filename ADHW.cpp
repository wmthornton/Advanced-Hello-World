#include <stdio.h>
#include <iostream>

using namespace std;

// This function is used to output text that is passed to it by whatever function calls it. It takes a
// string as a parameter and outputs it to the console using cout. cout is used because it is a standard
// output stream and is not platform dependent.
void text(string input) {
    string output = input;
    cout << output;
}

// This function performs basic mathematical operations on two supplied integers. It takes two integers
// and the desired operand as paramenters and returns the result of the operation. Does not show remainders
// or check for division by zero. Also does not return a decimal value. WILL return a negative number.
int math() {
    long int math_input1 = 0;
    long int math_input2 = 0;

    string operand = "";

    long int result = 0;
    

    cout << "First number: ";
    cin >> math_input1;  
    cout << "Operand: ";
    cin >> operand;
    cout << "Second number: ";
    cin >> math_input2;

    if (operand == "+") {
        result = math_input1 + math_input2;
        cout << result << endl;
    } else {
        if (operand == "-") {
            result = math_input1 - math_input2;
            cout << result << endl;
        } else {
            if (operand == "*") {
                result = math_input1 * math_input2;
                cout << result << endl;
        } else {
            if (operand == "/") {
                result = math_input1 / math_input2;
                cout << result << endl;
            }
            }
        }
    }

    return 0;
}

// The main function is the entry point of the program. In this case, the main function passes a string to
// the text function for output to the console. The string passed to the text function must include the
// newline character or other formatting to be displayed correctly.
int main() {

    string greeting = "Hello World!\n";
    text(greeting);

    string input1 = "Let's do some math.....\n";
    text(input1);

    math();

    string input2 = "Your calculations are complete. Have a great day!\n";
    text(input2);
    
    return 0;
}