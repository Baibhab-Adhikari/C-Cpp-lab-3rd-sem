#include <iostream>
#include <string>

using namespace std;

int main()
{
    double numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw string("Cannot divide by zero");
        }
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const string &msg)
    {
        cerr << "Error: " << msg << endl;
    }

    return 0;
}