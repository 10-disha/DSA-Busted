#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key)
{
    if (size == 0)
        return false;

    if (arr[0] == key)
    {
        return true;
    }

    else
    {
        bool remainingPart = isPresent(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main()
{
    int arr[] = {2, 33, 4, 5, 66};
    int size = 5;
    int key = 22;

    bool ans = isPresent(arr, size, key);

    if (ans)
    {
        cout << "element found." << endl;
    }

    else
    {
        cout << "element not found." << endl;
    }
}