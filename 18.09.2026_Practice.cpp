#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

std::string getAnsiColor(int textColor, int bgColor) {
    int fgCode = 90 + textColor;
    int bgCode = 100 + bgColor;  
    return "\033[" + std::to_string(fgCode) + ";" + std::to_string(bgCode) + "m";
}

int main()
{
    /* Task 1

    int number;

    cout << "Enter number: \n";


    cin >> number;

    if (number % 2 == 0) {
        cout << "Number is even. \n";
    }
    else {
        cout << "Number is odd. \n";
    }
    */


    /* Task 2

    int num1, num2;

    cout << "Enter first number: \n";
    cout << "Enter second number: \n";

    cin >> num1 >> num2;

    if (num1 < num2) {
        cout << num1;
        cout << "First number is smaller.";
    }
    else {
        cout << num2;
        cout << "Second number is smaller.";

    }

    */

    /* Task 3

    int num;

    cout << "Enter number: \n";

    cin >> num;

    if (num == 0) {
        cout << "Number is 0. \n";
    }
    else if (num > 0) {
        cout << "Number is positive. \n";
    }

    else if (num < 0) {
        cout << "Number is negative. \n";
    }

    */

    /* Task 4

        int num1, num2;

    cout << "Enter first number: \n";
    cout << "Enter second number: \n";

    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "Numbers are the same. \n";
    }

    else if (num1 < num2) {
        cout << num1 << "," << num1 + 1 << "," << num2;
    }

    else {
        cout << num2 << "," << num1-1 << "," << num1 - 1 << num1;
    }

    */

    /* Task 5

    int num1, num2, num3, num4, num5;

    cout << "Enter 5 marks: \n";

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1, num2, num3, num4, num5 % 5 >= 4) {
        cout << "You are admitted.\n";
    }

    else {
        cout << "You are not admitted.\n";
    }

    */

    /* Task 6

    int num;

    cout << "Enter number: \n";

    cin >> num;

    if (num % 2 == 0) {
        num = num * 3;
    }

    else {
        num = num % 2;
    }

    cout << num;

    */

    /* Task 7 

    int num1, num2;
    char  arithmetic_operation;
    cout << "Enter first number: \n";
    cin >> num1;
    cout << "Enter second number: \n";

    cin >> num2;

    cout << "Choose the arithmetic operation (+,-,*,/,%)";

    cin >> arithmetic_operation;


    if (arithmetic_operation == '/') {
        if (num1 == 0 || num2 == 0) {
            cout << "You can't divide by 0.\n";
        }
        else {
            cout << num1 << ' ' << '/' << ' ' << num2 << ' ' << '=' << ' ' << (num1 / num2);
        }
    }

    else if (arithmetic_operation == '+') {
        cout << num1 <<  ' ' << '+' << ' ' << num2 << ' ' << '=' << ' ' << (num1 + num2);
    }

    else if (arithmetic_operation == '-') {
        cout << num1 << ' ' << '-' << ' ' << num2 << ' ' << '=' << ' ' << (num1 - num2);
    }

    else if (arithmetic_operation == '*') {
        cout << num1 << ' ' << '*' << ' ' << num2 << ' ' << '=' << ' ' << (num1 * num2);
    }

    else if (arithmetic_operation == '%') {
        cout << num1 << ' ' << '%' << ' ' << num2 << ' ' << '=' << ' ' << (num1 % num2);
    }

    else {
        cout << "Incorrect number. \n";
    }

    */


    /* Task 8 


    int num1, num2; 

    cout << "Enter number: \n";

    cin >> num1;

    cout << "Enter power of number: \n";

    cin >> num2;

    if (num2 == 0) {
        cout << 1;
    }

    else if (num2 == 1) {
        cout << num1;
    }

    else if (num2 == 2) {
        cout << num1 * num1;
    }

    else if (num2 == 3) {
        cout << num1 * num1 * num1;
    }

    else if (num2 == 4) {
        cout << num1 * num1 * num1 * num1;
    }

    else if (num2 == 5) {
        cout << num1 * num1 * num1 * num1 * num1;
    }

    else if (num2 == 6) {
        cout << num1 * num1 * num1 * num1 * num1 * num1;
    }

    else if (num2 == 7) {
        cout << num1 * num1 * num1 * num1 * num1 * num1 * num1;
    }

    else {
        cout << "Incorrect number.\n";
    }

    */

    /* Additional task */
    
    #define RESET   "\033[0m"
    #define BLACK   "\033[30m"  
    #define RED     "\033[31m"      
    #define GREEN   "\033[32m"    
    #define YELLOW  "\033[33m"     
    #define BLUE    "\033[34m"      
    #define WHITE   "\033[37m"

    #define BG_BLACK       "\033[40m"
    #define BG_RED         "\033[41m"
    #define BG_GREEN       "\033[42m"
    #define BG_YELLOW      "\033[43m"
    #define BG_BLUE        "\033[44m"
    #define BG_WHITE       "\033[47m"

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);

    cout << "1 - Red\n2 - Green\n3 - Yellow\n4 - Blue\n5 - White\n6 - Black\n";

    int text_color, background;

    cout << "Enter number for text color: \n";
    cin >> text_color;

    cout << "Enter number for background color: \n";
    cin >> background;

    if (text_color == 1) {
        cout << RED;
    }
    else if (text_color == 2) {
        cout << GREEN;
    }
    else if (text_color == 3) { cout << YELLOW; }
    else if (text_color == 4) { cout << BLUE; }
    else if (text_color == 5) { cout << WHITE; }
    else if (text_color == 6) { cout << BLACK; }

    if (background == 1) { 
        cout << BG_RED; 
    }
    else if (background == 2) { 
        cout << BG_GREEN; 
    }
    else if (background == 3) {
        cout << BG_YELLOW; 
    }
    else if (background == 4) {
        cout << BG_BLUE; 
    }
    else if (background == 5) {
        cout << BG_WHITE; 
    }
    else if (background == 6) {
        cout << BG_BLACK; 
    }
}