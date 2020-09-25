#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]) {

     unsigned char cryptedPass[] = "17gi4>=9"; //pass = 16ef0972

            printf("\n\nPASS: %s\n", cryptedPass);
            unsigned int length = (sizeof(cryptedPass)/sizeof(char)) - 1;
            printf("LENGTH: %d\n", length);

            for (int i=0;i<length;i++) {
                printf("LIGNE/i value: %d -> %d\n", i, cryptedPass[i]);
                printf("FINAL : %c, FINAL INTEGER: %d\n", (cryptedPass[i] - i), (cryptedPass[i] - i));
                cryptedPass[i] = cryptedPass[i] - i;
            }
            printf("\nDecrypted Pass : %s\n\n", cryptedPass);
    return 0;
}
