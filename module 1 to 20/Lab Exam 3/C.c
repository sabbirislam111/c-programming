#include <stdio.h>
#include <string.h>

int main() {
    int bead;
    scanf("%d", &bead);

    char how_meny_bead[bead];
    scanf("%s", &how_meny_bead);

    int need = 0;
    char test_bead = how_meny_bead[0];
    for (int i = 1; i < strlen(how_meny_bead); i++) {
        if (test_bead != how_meny_bead[i]) {
            test_bead = how_meny_bead[i];
            continue;
        }
        else {
            need++;
        }
    }

    printf("%d", need);
    return 0;
}
