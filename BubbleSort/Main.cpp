#include <iostream>

using std::cout;
using std::endl;

void bubbleSort(int arr[], int length);

int main()
{
    int a[] = {1,3,5,6,9};
    int length = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, length);
    for (int i=0; i < length-1; i++) {
        cout << a[i];
        if (i < length-2) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}

void bubbleSort(int arr[], int length)
{
    for (int i=0; i < length -1; i++) {
        for (int j=0; j < length -1; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}