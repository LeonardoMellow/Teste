include <stdio.h>

int main(int argc, char **argv){

  //FILE *ofp;                                                                                           
  char tmp[10], *m;
  int str;

  //ofp = fopen("dados.txt", "r");                                                                       

  fgets(tmp, 10, stdin);
  //fscanf(ofp, "%d", &str);                                                                            \
                                                                                                         

  printf("string: %s \n", tmp);
  sscanf(tmp, "%d", &str);

  printf("integer: %d \n", str);

  //  fclose(ofp);                                                                                       
  return 0;
}
