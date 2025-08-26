#include <stdio.h>

int main() {
    int membershipLevel;

    //รับค่าระดับจากผู้ใช้
    printf("Enter membership level (1-4): ");
    scanf("%d", &membershipLevel);

    //ตรวจสอบเงื่อนไขและคำนวณคะแนน
    if (membershipLevel == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (membershipLevel == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (membershipLevel == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (membershipLevel == 4) {
        printf("Diamond Member: All benefits + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }
    
    return 0;
}
//ข้อดีของ if-else if:
//ยืดหยุ่นกว่า สามารถใช้เงื่อนไขที่ซับซ้อนได้
//ใช้เปรียบเทียบช่วงค่าได้ (เช่น if (level > 2 && level < 5))
//เหมาะสำหรับเงื่อนไขที่ไม่ใช่ค่าคงที่
