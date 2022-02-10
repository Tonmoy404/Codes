#include<stdio.h>

int length(char *s){
    int i=0;
    while (*s!= '\0') {
    i++;
    s++;
  }
  return i;

}

int main() {
  char str[20], *pt;
  int i = 0;

  printf("Enter Any string : ");
  gets(str);

    int ans = length(str);
    printf("string length is: %d\n", ans);
  return 0;
}
