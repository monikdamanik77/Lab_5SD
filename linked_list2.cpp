#include <iostream>
#include <cstdlib>
using namespace std;

struct node
{
    int roll;
    char name[50];
    int age;
    node *next;
};

node *create_list();

int main()
{
    node *head;

    head = create_list();
}

node *create_list()
{
    int k, n;
    node *p, *head;

    printf("\n How many elements to enter?");
    scanf("%d", &n);

    for (k = 0; k < n; k++)
    {
        if (k == 0) {
            head = (node *) malloc(sizeof(node));
            p = head;
        }
        else {
            p->next = (node *) malloc(sizeof(node));
            p = p->next;
        }

        scanf("%d %s %d", &p->roll, p->name, &p->age);
    }

    p->next = NULL;
    return(head);
    
    
}