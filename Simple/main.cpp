#include <iostream>
#include<ArrayManager.h>
using namespace std;

int main()
{
 ArrayManager manager;
    int choice, value, pos;

    while (true)
        {
        cout << " Array Manager Menu "<<endl;
        cout << "1. Insert at End "<<endl;
        cout << "2. Insert at Position"<<endl;
        cout << "3. Remove from End "<<endl;
        cout << "4. Remove from Position "<<endl;
        cout << "5. Search Element"<<endl;
        cout << "6. Edit Element"<<endl;
        cout << "7. Display Array "<<endl;
        cout << "8. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value: "<<endl;
            cin >> value;
            manager.insertEnd(value);
            break;
        case 2:
            cout << "Enter position and value: "<<endl;
            cin >> pos >> value;
            manager.insertAt(pos, value);
            break;
        case 3:
            manager.removeEnd();
            break;
        case 4:
            cout << "Enter position: "<<endl;
            cin >> pos;
            manager.removeAt(pos);
            break;
        case 5:
            cout << "Enter value to search: "<<endl;
            cin >> value;
            manager.search(value);
            break;
        case 6:
            cout << "Enter position and new value: "<<endl;
            cin >> pos >> value;
            manager.editAt(pos, value);
            break;
        case 7:
            manager.display();
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }
}
