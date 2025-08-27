#include <stdio.h>

int main() {
int age, vip;
float amount, discount = 0.0;

// รับค่าจากผู้ใช้
printf("Enter age: ");
scanf("%d", &age);

printf("Enter VIP level (1-5): ");
scanf("%d", &vip);

printf("Enter purchase amount: ");
scanf("%f", &amount);

// ตรวจสอบเงื่อนไขส่วนลด
if (age > 60 || (vip >= 3 && vip <= 4)) {
discount = 0.20; // 20%
}
else if (age >= 30 && age <= 40 && amount > 2000) {
discount = 0.15; // 15%
}
else if (age >= 18 && age <= 25 && amount > 1000) {
discount = 0.10; // 10%
}
else if (vip == 5 || amount > 50000) {
discount = 0.25; // 25%
}
else {
discount = 0.0; // ไม่มีส่วนลด
}

// แสดงผลลัพธ์
printf("\n--- Customer Info ---\n");
printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip, amount);

if (discount > 0) {
printf("Discount received: %.0f%%\n", discount * 100);
} else {
printf("No discount applied.\n");
}

printf("\nThank you for shopping with us!\n");

return 0;
}