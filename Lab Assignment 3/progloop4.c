#include <stdio.h>
#include <string.h>

void convert_base(char num[], int base1, int base2);

int main() {
    char num[100];
    int base1, base2;

    // Get user input
    printf("Enter number: ");
    scanf("%s", num);
    printf("Enter base of the number: ");
    scanf("%d", &base1);
    printf("Enter base to convert to: ");
    scanf("%d", &base2);

    // Call function to convert base
    convert_base(num, base1, base2);

    return 0;
}

void convert_base(char num[], int base1, int base2) {
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int decimal = 0, i, j, power = 1;
    int len = strlen(num);

    // Convert to decimal first
    for (i = len - 1; i >= 0; i--) {
        int digit = 0;
        for (j = 0; j <= 35; j++) {
            if (num[i] == digits[j]) {
                digit = j;
                break;
            }
        }
        decimal += digit * power;
        power *= base1;
    }

    // Convert decimal to new base
    char new_num[100];
    i = 0;
    while (decimal > 0) {
        int digit = decimal % base2;
        new_num[i++] = digits[digit];
        decimal /= base2;
    }
    new_num[i] = '\0';

    // Reverse the new number
    len = strlen(new_num);
    for (i = 0; i < len / 2; i++) {
        char temp = new_num[i];
        new_num[i] = new_num[len - i - 1];
        new_num[len - i - 1] = temp;
    }

    // Print result
    printf("The number %s in base %d is equal to %s in base %d.\n", num, base1, new_num, base2);
}