#include "array_value_calculator.h"
#include "array_value_exception.h"
#include <iostream>
using namespace std;

array_value_calculator::array_value_calculator(int r, int c) : rows(r), cols(c) {}

int array_value_calculator::do_calc(const string array[4][4])
{
    int sum = 0;
    try
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int value = 0;
                for (char a : array[i][j])
                {
                    if (a >= '0' && a <= '9')
                    {
                        value = value * 10 + (a - '0');
                        sum += value;
                    }
                    else
                    {
                        throw array_data_exception("Invalid data at position (" + to_string(i) + "," + to_string(j) + ")");
                    }
                }
            }
        }
    }
    catch (const array_data_exception &exception)
    {
        cout << "Data Exception: " << exception.get_message() << endl;
    }
    catch (const array_size_exception &exception)
    {
        cout << "Size Exception: " << exception.get_message() << endl;
    }
    return sum;
}
