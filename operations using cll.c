#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

// Insert at Beginning
void insertBegin(int x)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;

    if(head == NULL)
    {
        head = tail = temp;
        temp->next = head;
    }
    else
    {
        temp->next = head;
        head = temp;
        tail->next = head;   // maintain circular link
    }
}

// Insert at End
void insertEnd(int x)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;

    if(head == NULL)
    {
        head = tail = temp;
        temp->next = head;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        tail->next = head;   // maintain circular link
    }
}

// Delete from Beginning
void deleteBegin()
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(head == tail)   // only one node
    {
        printf("Deleted: %d\n", head->data);
        free(head);
        head = tail = NULL;
    }
    else
    {
        struct Node *temp = head;
        printf("Deleted: %d\n", temp->data);
        head = head->next;
        tail->next = head;
        free(temp);
    }
}

// Delete from End
void deleteEnd()
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if(head == tail)   // only one node
    {
        printf("Deleted: %d\n", tail->data);
        free(tail);
        head = tail = NULL;
    }
    else
    {
        struct Node *temp = head;
        while(temp->next != tail)
            temp = temp->next;

        printf("Deleted: %d\n", tail->data);
        temp->next = head;
        free(tail);
        tail = temp;
    }
}

// Display
void display()
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    struct Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(Back to Head)\n");
}

int main()
{
    int choice, x;

    while(1)
    {
        printf("\n--- CLL(HEAD & TAIL) ---\n");
        printf("1. Insert Begin\n");
        printf("2. Insert End\n");
        printf("3. Delete Begin\n");
        printf("4. Delete End\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &x);
                insertBegin(x);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &x);
                insertEnd(x);
                break;

            case 3:
                deleteBegin();
                break;

            case 4:
                deleteEnd();
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}
