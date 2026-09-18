#include <iostream>
#include <cassert>

using namespace std;
bool isSorted(const int* arr, const int size);
void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
assert(result == true);
}
void testUnsortedArray()
{
    int arr[] = {1, 3, 2, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == false);
}
void testDuplicateValues()
{
    int arr[] = {1, 2, 2, 3, 4};

    bool result = isSorted(arr, 5);

    assert(result == true);
}
void testSingleElement()
{
    int arr[] = {10};

    bool result = isSorted(arr, 1);

    assert(result == true);
}
void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

void testNegativeValues()
{
    int arr[] = {-5, -3, -3, -1, 2};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

void testTwoElements()
{
    int arr[] = {2, 1};

    bool result = isSorted(arr, 2);

    assert(result == false);
}

void testAllEqual()
{
    int arr[] = {7, 7, 7, 7, 7};

    bool result = isSorted(arr, 5);

    assert(result == true);
}