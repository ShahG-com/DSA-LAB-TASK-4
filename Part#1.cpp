#include <iostream>
using namespace std;

int linearSearch (int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main ()
{
    int arr [10];
    int size;
    cout << "Enter the size of array: " << endl;
    cin>>size;
    for (int i=0; i<size; i++)
    {
        cout << "\n Enter the array element at index: " << i << " \t";
        cin>>arr[i];
    }
    size = sizeof(arr) / sizeof (arr [0]) ;
    int target;
    cout << "Enter the value to be search: " << "\t";
    cin>>target;
    int result = linearSearch (arr, size, target) ;
    if (result != -1)
    { cout << "Element " << target << " found at index " << result << endl; }
    else
    { cout << "Element " << target << " not found in the array" << endl; }
    return 0;
}