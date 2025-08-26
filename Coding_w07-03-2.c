#include <stdio.h>

int main() {
int level;

printf("Enter level (1-4): ");
scanf("%d", &level);

if (level <= 0) {
printf("The level below 1 is not allowed\n");
} else if (level > 4) {
printf("The level above 4 is not allowed\n");
} else {
switch (level) {
case 1: printf("Beginner\n"); break;
case 2: printf("Intermediate\n"); break;
case 3: printf("Advanced\n"); break;
case 4: printf("Expert\n"); break;
}
}

return 0;
}
//6-7 รับค่าระดับจากผู้ใช้
//9-13 ตรวจสอบระดับก่อนเข้า switch
//13-19 ใช้ switch สำหรับระดับที่ถูกต้อง (1-4)
//level = -4: "The level below 1 is not allowed"
//level = 0: "The level below 1 is not allowed"
//level = 1: "Beginner"
//level = 2: "Intermediate"
//level = 3: "Advanced"
//level = 4: "Expert"
//level = 100: "The level above 4 is not allowed"