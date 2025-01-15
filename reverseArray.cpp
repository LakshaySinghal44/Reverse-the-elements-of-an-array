#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    int arr[20];
    cout << "No. of elements: " << endl;
    cin >> n;
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr,n);
    printArray(arr,n);
    
}
