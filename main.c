#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]) {

    int mch;
    int cnt = 1;

    while(cnt == 1) {

    printf("\n1- Encrypt | 2- Decrypt | 3- Quit\n\n");
    scanf("%d", &mch);

        if (mch == 1) {
            unsigned char decryptedPass[] = "16ef0972"; //pass = 17gi4>=9

            printf("\n\nPASS: %s\n", decryptedPass);
            unsigned int length = (sizeof(decryptedPass)/sizeof(char)) - 1;
            printf("LENGTH: %d\n", length);

            for (int i=0;i<length;i++) {
                printf("LIGNE/i value: %d -> %d\n", i, decryptedPass[i]);
                printf("FINAL : %c, FINAL INTEGER: %d\n", (decryptedPass[i] + i), (decryptedPass[i] + i));
                decryptedPass[i] = decryptedPass[i] + i;
            }
            printf("\nCrypted Pass : %s\n\n", decryptedPass);
        }
        else if(mch == 2) {
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
        }
        else if (mch == 3) {
            cnt = 0; // end
        } else {
            cnt = 1;
        }
    }
    return 0;
}
