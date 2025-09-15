#ifndef ARRAYMANAGER_H
#define ARRAYMANAGER_H
#include <iostream>
using namespace std;
class ArrayManager
{
    private:
    int arr[10];
    int size;

public:
    ArrayManager()
    {
        size = 0;
    }

    void insertEnd(int value)
    {
        arr[size++] = value;
        display();
    }

    void insertAt(int pos, int value)
     {
        if (pos < 0 || pos > size)
            {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = size; i > pos; i--)
            {
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        size++;
        display();
    }

    void removeEnd()
    {
        if (size == 0)
            {
            cout << "Array is empty!" << endl;
            return;
        }
        size--;
        display();
    }

    void removeAt(int pos)
    {
        if (pos < 0 || pos >= size)
            {
            cout << "Invalid position!" << endl;
            return;
        }
        for (int i = pos; i < size - 1; i++)
            {
            arr[i] = arr[i + 1];
        }
        size--;
        display();
    }

    void search(int value) {
        for (int i = 0; i < size; i++)
            {
            if (arr[i] == value) {
                cout << "Element found at index " << i << endl;
                return;
            }
        }
        cout << "Element not found!" << endl;
    }

    void editAt(int pos, int newValue)
    {
        if (pos < 0 || pos >= size)
            {
            cout << "Invalid position!" << endl;
            return;
        }
        arr[pos] = newValue;
        display();
    }

    void display() {
        if (size == 0)
            {
            cout << "Array is empty!" << endl;
            return;
        }
        cout << "Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " "<<endl;
        }
        cout << endl;
    }


};

#endif // ARRAYMANAGER_H
