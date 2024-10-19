#include <stdio.h>
#include <stdint.h>

// تابع برای چاپ بایت به صورت بیت‌ها
void printBits(uint8_t byte) {
    for(int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
    printf("\n");
}

int main() {
    // ذخیره 8 بیت داده
    uint8_t data = 0b11001100; // 204 در ده‌دهی

    // نمایش داده ذخیره شده
    printf("Stored data: ");
    printBits(data);

    // بازیابی داده
    uint8_t retrievedData = data;

    // نمایش داده بازیابی شده
    printf("Retrieved data: ");
    printBits(retrievedData);

    return 0;
}
