#include "Sort.h"

namespace
{
    void sorting(int* c, int before, int after)
    {
        if (before == after)
            return;
        int between = (before + after) / 2;
        sorting(c, before, between);
        sorting(c, between + 1, after);
        int first = before;
        int second = between + 1;
        int* middle = new int[after - before + 1];

        for (int i = 0; i < after - before + 1; i++)
        {
            if ((second > after) || ((first <= between) && (c[first] < c[second])))
            {
                middle[i] = c[first];
                first++;
            }
            else
            {
                middle[i] = c[second];
                second++;
            }
        }

        for (int i = 0; i < after - before + 1; i++)
            c[before + i] = middle[i];
        delete[] middle;
    }
}
namespace sort
{
    void sort(int* c, int dim)
    {
        sorting(c, 0, dim - 1);
    }
}