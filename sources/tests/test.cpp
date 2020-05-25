#include <gtest/gtest.h>
#include "../Sort.h"

TEST(sorting, both)
{
    const int dim = 7;
    int sequence1[dim] = {5, 3, 1, 0, -1, -3, -5};
    int sequence2[dim] = {-5, -3, -1, 0, 1, 3, 5};
    sort::sort(sequence1, dim);
    for (int k = 0; k < dim; k++)
    {
        ASSERT_EQ(sequence2[k], sequence1[k]);
    }
}

TEST(sorting, odd)
{
    const int dim = 3;
    int sequence1[dim] = {7, 9, 5};
    int sequence2[dim] = {5, 7, 9};
    sort::sort(sequence1, dim);
    for (int k = 0; k < dim; k++)
    {
        ASSERT_EQ(sequence2[k], sequence1[k]);
    }
}

TEST(sorting, same)
{
    const int dim = 4;
    int sequence1[dim] = {4, 4, 4, 4};
    sort::sort(sequence1, dim);
    for (int k = 1; k < dim; k++)
    {
        ASSERT_EQ(sequence1[k-1], sequence1[k]);
    }
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return  RUN_ALL_TESTS();
}