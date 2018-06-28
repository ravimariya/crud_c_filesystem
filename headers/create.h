#ifndef CREATE_H_
#define CREATE_H_
void create(FILE *fptr, const char *file_name, char *name)
{
  fptr = fopen(file_name, "a");
  if(fptr == NULL){
    printf("Error with file\n");
    return;
  }
  fprintf(fptr, "%s\n", name);
  fclose(fptr);
  printf("User Inserted Successfully.\n");
}
#endif
