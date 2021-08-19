#include <stdio.h>
//ปริ้นดาว n ตัว
void printstar(int n)
{
    for (size_t j = 0; j < n; j++)
    {
        printf("* ");
    }
}
int main()
{
    // จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 2)
    int n;
    printf("Enter number :");
    scanf("%d", &n);

    for (size_t i = 0; i < n; i++)
    {
        printstar(n);
        printf("\n");
    }
    return 0;
}
