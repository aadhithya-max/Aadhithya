#include<iostreame>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

int main()
{
    node *strat = NULL, *head, *temp;
    int n, i, pos, value;
    cout << "enter number of node: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        temp = new node;
        cout << "enter data:" ;
        cin >> temp->data;
        temp->next = NULL;
        temp->prev = NULL;
        if (start == NULL)
        {
            start = temp;

        }
        else
        {
            head = start;
            while (head->next != NULL)
                head = head->next;
            head->next = temp;
            temp->prev = head;
        }
    } 
    temp = new node;
    cout << "enter value to insert at beginning: ";
    cin >> value;
    temp->data = value;
    temp->prev = NULL;
    temp->next = start;
    if(start != NULL)
        start->prev = temp;
    start = temp;
    temp = new node;
    cout << "enter value to insert at end: ";
    cin >> value;
    temp->data = value;
    temp->next = NULL;
    head = start;
    while (head->next != NULL)
        head = head->next;
    head->next = temp;
    temp->prev = head;
    cout << "enter position: ";
    cin >> pos;
    cout <<"enter value: ";
    cin >> value;
    temp = new node;
    temp->data = value;
    head = start;
    for(i = 1; i < pos - 1; i++)
    {
        if(head == NULL)
        {
            cout << "position out of range" << endl;
            return 0;
        }
        head = head->next;
    }


}