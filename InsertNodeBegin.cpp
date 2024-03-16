#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;
void Insert(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node* temp = head;
    cout <<"List is: ";
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    Node* head = NULL;
    cout <<"Hw mny num to insrt.?:- ";
    int n,i,x;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout <<"Ent Num: ";
        cin >> x;
        Insert(x);
        Print();
    }
}