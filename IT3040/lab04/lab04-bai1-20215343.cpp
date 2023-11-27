#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node *prepend(Node *head, int data)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    Node *new_head = new Node(data);
    new_head->next = head;
    return new_head;
}

// print the list content on a line
void print(Node *head)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// return the new head of the reversed list
Node *reverse(Node *head)
{
    /*****************
    Nguyen Duy Dat - 20215343
    *****************/
    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

int main()
{
    int n, u;
    cin >> n;
    Node *head = NULL;
    for (int i = 0; i < n; ++i)
    {
        cin >> u;
        head = prepend(head, u);
    }

    cout << "Original list: ";
    print(head);

    head = reverse(head);

    cout << "Reversed list: ";
    print(head);

    return 0;
}