#include <stdio.h>
#include <stdlib.h>
int a[10], n, val, i, pos;
void create();
void display();
void insert();
void delete();
void create();
void create()
{
    printf("Enter the size of array elements \t");
    scanf("%d", &n);
    printf("Enter the array eleents\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void display()
{
    printf("the array elemts are \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void insert()
{
    printf("Enter the position of the new element \t");
    scanf("%d", &pos);
    printf("Enter the element to be inserted \t");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
        ;
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;
    n = n + 1;
}
void delete()
{
    printf("Enter the position of the element to be deleted \t");
    val = a[pos];
    for (i = pos; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("The deleted element is %d", val);
}
int main()
{
    int choice;
    while (choice)
    {
        printf("\n\nMenu\n\n");
        printf("1.Create\n 2.display\n 3.insert\n 4.delete\n5.exit\n");
        printf("Enter the choice \t");
        scanf("%d", &choice);
        switch (choice)
        {
        case '1':
            create();
            break;
        case '2':
            display();
            break;
        case '3':
            insert();
            break;
        case '4':
            delete ();
            break;
        case '5':
            exit(0);
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }
    return 0;
}
