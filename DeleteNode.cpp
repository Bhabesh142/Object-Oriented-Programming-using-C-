#include <iostream>
using namespace std;
struct Node
{
        int data;
        Node* next;
};
Node* head;
void Insert(int data)
{
        Node* temp = new Node();
        temp->data = data;
        temp->next = NULL;
        if(head == NULL)
                head = temp;
        else
        {
                Node* temp1 = head;
                while(temp1->next != NULL)
                {
                        temp1 = temp1->next;
                }
                temp1->next = temp;
        }
        return;
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
void Delete(int n)
{
        Node* temp1 = head;
        if(n == 1)
        {
                head = temp1->next;
				delete(temp1);
                return;
        }
        int i;
        for(i=0;i<n-2;i++)
        {
                temp1 = temp1->next;
        }
        Node* temp2 =temp1->next;
        temp1->next = temp2->next;
        delete(temp2);
}
int main()
{
        Node* head = NULL;
        Insert(2);
        Insert(4);
        Insert(6);
        Insert(5);
        Print();
        int n;
        cout << "Ent a positn: ";
        cin >> n;
        Delete(n);
        Print();
}