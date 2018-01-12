#include <iostream>

using namespace std;

int main () {

        char name[] = {"Anukul"};
        int nameLength = 6;
        cout << name;
        char arr[7];

        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        arr[0] = name[5];
        arr[1] = name[4];
        arr[2] = name[3];
        arr[3] = name[2];
        arr[4] = name[1];
        arr[5] = name[0];
        arr[6] ='\0';
         cout << arr;



        return 0;
}
