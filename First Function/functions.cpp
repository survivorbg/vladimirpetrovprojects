#include <string>

void f1_max(std::string i1, std::string i2, std::string &o1)
{
    if (i1 > i2)
    {
        o1 = i1;
    }
    else
    {
        o1 = i2;
    }
}

int f2_max(int i1, int i2)
{
    if (i1 > i2)
    {
        return i1;
    }
    else
    {
        return i2;
    }
    
}