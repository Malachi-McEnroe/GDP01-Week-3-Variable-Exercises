#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

int question5();
int question6();
int question7();
int question8();
int question9();
int question10();
int question11();
int question12();

int main(int argc, const char* argv[])
{
    if (argc < 2) { return 0; }

    if (strcmp(argv[1], "5") == 0) { return question5(); }
    else if (strcmp(argv[1], "6") == 0) { return question6(); }
    else if (strcmp(argv[1], "7") == 0) { return question7(); }
    else if (strcmp(argv[1], "8") == 0) { return question8(); }
    else if (strcmp(argv[1], "9") == 0) { return question9(); }
    else if (strcmp(argv[1], "10") == 0) { return question10(); }
    else if (strcmp(argv[1], "11") == 0) { return question11(); }
    else if (strcmp(argv[1], "12") == 0) { return question12(); }

    return 0;
}

int question5()
{
    double num, result;

    cout << "Enter a real number: ";
    cin >> num;

    result = num * num * num;

    cout << num << " ^ 3 = " << result << endl;

    return 0;
}

int question6()
{
    const float PI = 3.14;
    float radius, area, circ;

    cout << "Enter the radius of a circle: ";
    cin >> radius;

    area = PI * (radius * radius);
    circ = 2 * PI * radius;

    cout << "The area of a circle with radius " << radius << " is = " << area << endl;
    cout << "The circmference of a circle with radius " << radius << " is = " << circ << endl;

    return 0;
}

int question7()
{
    float avg;
    float currentNum;
    float total = 0.0f;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> currentNum;

        total += currentNum;
    }

    avg = total / 5;

    cout << "The average of these numbers i: " << avg << endl;

    return 0;
}

int question8()
{
    float num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is larger than " << num2 << endl;
    }
    else if (num2 > num1)
    {
        cout << num2 << " is larger than " << num1 << endl;
    }
    else
    {
        cout << num1 << " is equal to " << num2 << endl;
    }

    return 0;
}

int question9()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even" << endl;
    }
    else
    {
        cout << num << " is odd" << endl;
    }

    return 0;
}

int question10()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 16)
    {
        cout << "You are eligble to drive" << endl;
    }
    else
    {
        cout << "You are not eligible to drive" << endl;
    }

    return 0;
}

int question11()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is a leap year" << endl;
    }
    else
    {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}

int question12()
{
    char isStudent;
    int age;
    int price = 15; // Default price

    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you a student (y/n): ";
    cin >> isStudent;

    if (age < 16 || isStudent == 'y')
    {
        price = 10;
    }

    cout << "Ticket price is $" << price << endl;

    return 0;
}

