#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
}Node, *NodePtr;

int main ()
{
    void printList(NodePtr);
    NodePtr addInPlace(NodePtr, int);
    NodePtr makeNode(int);
    int n;
    NodePtr top, np, last;
    top = NULL;
    
    if (scanf("%d", &n) !=1) n = 0;
    while (n != 0)
    {
        np = makeNode(n); // Creates a new node container
        np -> next = top;
        top = np;

        if (top == NULL) top = np; // Set top as first node
        else last -> next = np; // Set last -> next for other nodes
        last = np; // Update last to new node
        if (scanf("%d", &n) !=1) n = 0; 
    }
    printList(top);
} // End of main

// Prints a node and moves on to the next one and repeats
void printList(NodePtr np)
{
    while(np != NULL)
    {
        printf("%d\n", np -> num);
        np = np -> next;
    }
} // End of printList

// Making the node
NodePtr makeNode(int n)
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    np -> num = n;
    np -> next = NULL;
    return np;
}

NodePtr addInPlace(NodePtr top, int n){

    NodePtr np, curr, prev, makenode(int);

    np = makeNode(n);
    prev = NULL;
    curr = top;
    while(curr !=NULL && n > curr->num){
        prev = curr;
        curr = curr-> next;
    }
    if (prev == NULL){/// new number must be added at the top
        np -> next = top;
        return top; /// the top of the list has changed to the new node
    }
    np -> next = curr;
    prev -> next = np;
    return np; //

}// end of addInplace