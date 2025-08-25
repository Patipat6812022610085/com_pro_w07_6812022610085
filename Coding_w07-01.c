#include <stdio.h>

int main() {
    float score, total_score;
    
    printf("Enter midterm score: ");
    scanf("%f", &score);
    
    if (score >= 50) {
        total_score = score + (score * 0.05);
        printf("Total score after bonus: %.2f\n", total_score);
    } else {
        total_score = score;
        printf("Total score: %.2f\n", total_score);
    }
    
    printf("End of evaluation\n");
    
    return 0;
}

//6-7 รับคะแนนมิดเทอม
//9-15 ตรวจสอบเงื่อนไขและคำนวณคะแนน
//9-11 คะแนนมากกว่าหรือเท่ากับ 50 +5%
//12-15 ถ้าน้อยกว่า 50 แสดงค่าแบบไม่บวกเพิ่ม
//17 ข้อความสิ้นสุด