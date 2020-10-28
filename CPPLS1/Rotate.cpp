#include "Rotate.h"

void Rotate::Execute(Operation_data data)
{
	string value = Pop_stack(data.stack_);


    data.stack_.push_back(crypt(value));
}


std::string Rotate::crypt(std::string a)
{
    int z = a.length(), i = 0;
    for (i = 0; i <= (z); i++)
    {
        if (a[i] < 91 && a[i] > 64)
        {
            if (a[i] < 78)
                a[i] = a[i] + 13;
            else
                a[i] = a[i] - 13;
        }
        if (a[i] < 123 && a[i] > 96)
        {
            if (a[i] < 110)
                a[i] = a[i] + 13;
            else
                a[i] = a[i] - 13;
        }
    }
    return a;
}