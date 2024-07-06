#include <stdio.h>
int main()
{
    int arr[10]; //= {2, 5, 7, 2, 9, 4, 3};
    for(int i = 0; i<10; i++) {
        scanf("%d", &arr[i]);
    }
    int size = 10;
    int pos;
    int element;
    int choice;
    printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
    scanf("%d", &choice);
    while (choice)
    {
        switch (choice)
        {
        case 1: // insert at pos
            printf("enter element: ");
            scanf("%d", &element);
            printf("enter position: ");
            scanf("%d", &pos);
            for (int i = size - 1; i > pos - 1; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = element;
            printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
            scanf("%d", &choice);
            break;

        case 2: // delete at pos
            printf("enter position: ");
            scanf("%d", &pos);
            for (int i = pos - 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
            scanf("%d", &choice);
            break;

        case 3: // rm dublicate
            for (int i = 0; i < size-2; i++)
            {
                for (int j = 0; j < size-1; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        arr[j] = arr[j + 1];
                    }
                }
            }
            printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
            scanf("%d", &choice);
            break;

        case 4:
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
            scanf("%d", &choice);
            break;
        default:
            printf("enter valid choice");
            printf("enter choice 1-insert, 2-delete, 3-rmduplicate, 4-display : ");
            scanf("%d", &choice);
        }
            
    }
}