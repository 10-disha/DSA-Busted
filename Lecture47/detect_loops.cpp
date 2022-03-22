#include <iostream>
#include <map>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }

        cout << "memory is free for node with data" << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    // 1st case assume kro ki list empty h
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // non-empty list
    else
    {
        // assuming that element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// to check whether LL contains loops or not, we will be using map for the same.

bool detectLoop(Node *head)
{

    if (head == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {

        // cycle is present
        if (visited[temp] == true)

        {
            cout << "present on element" << temp->data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

/* to check whether LL is circular or not

bool isCircularList(Node *head)
{

    // empty list
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
        return false;

    if (temp == head)
        return true;
} */

int main()
{
    Node *tail = NULL;

    // empty list me insert krna hai
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 1);
    print(tail);

    insertNode(tail, 1, 2);
    print(tail);

    insertNode(tail, 2, 7);
    print(tail);

    // if (isCircularList(tail))
    // {
    //     cout << "Linked List is circular in nature" << endl;
    // }

    // else
    // {
    //     cout << "Linked List is not circular in nature" << endl;
    // }

    if (detectLoop(tail))
    {
        cout << "loops present";
    }

    else
    {
        cout << "loops absent";
    }

    return 0;
}