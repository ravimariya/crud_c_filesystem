#ifndef USERS_H_
#define USERS_H_
  void users(FILE *fptr, const char *file_name)
  {
    char name[10];
    fptr = fopen(file_name, "r");
     if(fptr == NULL){
      printf("Error with file\n");
      return;
    }
    while(fscanf(fptr, "%s", name) != EOF)
    {
        printf("%s\n", name);
    }
    fclose(fptr);
  }
#endif
