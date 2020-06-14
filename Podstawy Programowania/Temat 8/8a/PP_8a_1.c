#include <stdio.h>

int main(){
  FILE *file_ptr;
  file_ptr = fopen("new_file.txt","w+");
  if(file_ptr!=0){
    printf("File has been created");
  }
  else{
    printf("File has not been created");
  }
  fwrite(arr, sizeof(arr), 1, file_ptr);
}
