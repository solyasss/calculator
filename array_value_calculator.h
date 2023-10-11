#include <iostream>
#include <string>
using namespace std;

class array_value_calculator
{
    int rows;
    int cols;

public:
    array_value_calculator(int r, int c);
    int do_calc(const string array[4][4]);
};
