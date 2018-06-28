#include <stdio.h>
#include "headers/users.h"
#include "headers/create.h"
#include "headers/destroy.h"

void main()
{
  char name[10];
  int choice;
  FILE *fptr;
  const char FILE_NAME[10]="users.txt";

  do
  {
    printf("\nChoose any one of the option\n");
    printf("1. List All Users\n");
    printf("2. Insert User\n");
    printf("3. Destroy User\n");
    printf("4. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
        users(fptr, FILE_NAME);
        break;
      case 2:
        printf("\nEnter Your Name: ");
        scanf("%s", name);
        create(fptr, FILE_NAME, name);
        break;
      case 3:
        printf("\nEnter Name You want to delete: ");
        scanf("%s", name);
        destroy(fptr, FILE_NAME, name);
        break;
      default:
        return;
    }
  }
  while(choice < 4);
}