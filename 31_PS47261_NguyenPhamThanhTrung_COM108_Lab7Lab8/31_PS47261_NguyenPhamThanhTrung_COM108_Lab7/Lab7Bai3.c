#include <stdio.h>
#include <string.h>

int main () {
  int n = 5, m = 20;
  char s[n][m];
  char temp[100];
  // Input string
  for (int i = 0; i < n; i++) {
    printf("Nhap chuoi thu %d: ", i + 1);
    fgets(s[i], sizeof(s[i]), stdin);
    s[i][strcspn(s[i], "\n")] = '\0';
  }



  // Arrange string
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(s[i], s[j]) > 0) {
          strcpy(temp, s[i]);
          strcpy(s[i], s[j]);
          strcpy(s[j], temp);
      }
    }
  }

  // Output string
  printf("Danh sach cac chuoi:\n");
  for (int i = 0; i < n; i++) {
    printf("Chuoi thu %d: %s\n", i + 1, s[i]);
  }
  return 0;
}
