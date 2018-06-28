#include <string.h>
#ifndef DESTROY_H_
#define DESTROY_H_
  void destroy(FILE *fptr, const char *file_name, char *delete_name)
  {
    FILE *fptr_out;
    char name[10];
    fptr = fopen(file_name, "r");
    fptr_out = fopen("users_new.txt", "w");

     if(fptr == NULL){
      printf("Error with file\n");
      return;
    }
    while(fscanf(fptr, "%s", name) != EOF)
    { 
      if(strcmp(name, delete_name) != 0){
        fprintf(fptr_out, "%s\n", name);
      }
    }
    fclose(fptr);
    fclose(fptr_out);
    rename("users_new.txt", file_name);
    printf("User Deleted Successfully.\n");
  }
#endif
