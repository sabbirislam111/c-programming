#include<string.h>
#include<stdbool.h>


int main() {

  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    int counter[n];
    for (int i = 0; i < n; i++) {
      int a;
      scanf("%d", &a);
      counter[a]++;
    }
    bool found = false;
    for (int i = 0; i < n; i++) {
      if (counter[i] >= 3) {
        found = true;
        printf("%d", counter[i]);
        break;
      }
    }
    if (!found) {
      printf("-1");
    }
  }
  return 0;
}
