/**
Author: Eddie Goynes
Task: This program traverses a linked lists and returns the value of the element n places from the end.
      The importance of this program revolves around the fact of using O(1) memory, O(n) time, and
      utilizing a two finger approach that gives us these characteristics. 
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node{
    int v;
    node *next;
};

node* create_list()
{
    int c;
    node *tmp = new node;
    node *head = tmp;
    while(cin >> c)
    {
        node *next = new node;
        tmp->v = c;
        tmp->next = next;
        tmp = next;
    }
    tmp = NULL;
    
    return head;
}

bool get_mth(node* head, int n)
{
    node* tmp = head;
    for(int i = 0; i < n; i++)
    {
        if(tmp->next == NULL)
        {
            cout << "NIL";
            return false;
        }
        tmp = tmp->next;
    }
    
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
        head = head->next;
    }
    cout << head->v;
    return true;
}

int main() {
    int n;
    //Get n from STDIN
    cin >> n;
    
    node *head = create_list();
    
    //Get the nth value from the end of the linked list.
    get_mth(head, n);
    
    return 0;
}
