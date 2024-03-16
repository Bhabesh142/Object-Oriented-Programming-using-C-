#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* head;
Node* Insert(Node* head,int x)
{
    Node* temp = new Node();
    temp->data = x;
    if(head != NULL)
    temp->next = head;
    head = temp;
    return head;
}
void Print(Node* head)
{
    cout <<"List is: ";
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout <<"\n";
}
int main()
{
    Node* head = NULL;
    cout <<"Hw mny num to insrt.?:- ";
    int n,i,x;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout <<"Ent num: ";
        cin >> x;
        head = Insert(head,x);
        Print(head);
    }
}