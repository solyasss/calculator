#include <iostream>
#include <string>
using namespace std;


class array_value_exception : public exception
{
protected:
    string text;

public:
    array_value_exception(const string &a) : text(a) {}
    string get_message() const
    {
        return text;
    }
};

class array_size_exception : public array_value_exception
{
public:
    array_size_exception(const string &a) : array_value_exception(a) {}
};

class array_data_exception : public array_value_exception
{
public:
    array_data_exception(const string &a) : array_value_exception(a) {}
};

