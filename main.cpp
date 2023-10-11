#include <iostream>
#include "array_value_calculator.h"
using namespace std;

int main()
{
    const int a = 4;
    const int b = 4;

    string array[a][b] = {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "10", "11", "12"},
        {"13", "14", "15", "16"}};

    array_value_calculator calc(a, b);
    int result = calc.do_calc(array);
    cout << "Result: " << result << endl;

    return 0;
}
