#include <iostream>
using namespace std;
void inputArray(int *arr, int size)
{
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
}

void doubArray(int *arr, int size)
{
    cout << "Doubled array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        *(arr + i) = *(arr + i) * 2;
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];  
    inputArray(arr, size);

    
    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    doubArray(arr, size);

    return 0;
}
