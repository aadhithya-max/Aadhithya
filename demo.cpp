include "array.cpp"

int main()
{
    char repeat;
    int choice;
    int pos, element, l, u;
    array<int> arr;
    

    do
    {
        cout << "1. Create array" << endl;
        cout << "2. Insert at end" << endl;
        cout << "3. Insert at beginning" << endl;
        cout << "4. Insert at position" << endl;
        cout << "5. Delete at end" << endl;
        cout << "6. Delete at beginning" << endl;
        cout << "7. Delete at position" << endl;
        cout << "8. Display array" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                arr.create();
                break;
            case 2:
                cout << "Enter the element to insert at end: ";
                cin >> element;
                arr.insertatend(element);
                break;
            case 3:
                cout << "Enter the element to insert at beginning: ";
                cin >> element;
                arr.insertatbeginning(element);
                break;
            case 4:
                cout << "Enter the position and element to insert: ";
                cin >> pos >> element;
                arr.intertatposition(pos, element);
                break;
            case 5:
                arr.deleteatend();
                break;
            case 6:
                arr.deleteatbeginning();
                break;
            case 7:
                cout << "Enter the position to delete: ";
                cin >> pos;
                arr.deleteatposition(pos);
                break;
            case 8:
                cout << arr;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> repeat;
    }
    
}