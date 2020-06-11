#include "Sort.h"

namespace
{
    void sorting(int* array, int before, int after)
    {
        if (before == after)
            return;
        int between = (before + after) / 2;
        sorting(array, before, between);
        sorting(array, between + 1, after);
        int first = before;
        int second = between + 1;
        int* middle = new int[after - before + 1];

        for (int i = 0; i < after - before + 1; i++)
        {
            if ((second > after) || ((first <= between) && (array[first] < array[second])))
            {
                middle[i] = array[first];
                first++;
            }
            else
            {
                middle[i] = array[second];
                second++;
            }
        }

        for (int i = 0; i < after - before + 1; i++)
            array[before + i] = middle[i];
        delete[] middle;
    }
}
namespace sort
{
    void sort(int* array, int size)
    {
        sorting(array, 0, size - 1);
    }
}
