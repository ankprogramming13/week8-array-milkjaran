#include <iostream>
using namespace std;

int main () {
        // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
        // calendar[5][7]
        int calender [6][7];
        int i,j;

        // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
        // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x
        calender [0][0] =0;
        calender [0][1] =0;
        calender [0][2] =0;
        calender [0][3] =0;
        calender [0][4] =0;
        calender [0][5] =1;
        calender [0][6] =2;
        calender [1][0] =3;
        calender [1][1] =4;
        calender [1][2] =5;
        calender [1][3] =6;
        calender [1][4] =7;
        calender [1][5] =8;
        calender [1][6] =9;
        calender [2][0] =10;
        calender [2][1] =11;
        calender [2][2] =12;
        calender [2][3] =13;
        calender [2][4] =14;
        calender [2][5] =15;
        calender [2][6] =16;
        calender [3][0] =17;
        calender [3][1] =18;
        calender [3][2] =19;
        calender [3][3] =20;
        calender [3][4] =21;
        calender [3][5] =22;
        calender [3][6] =23;
        calender [4][0] =24;
        calender [4][1] =25;
        calender [4][2] =26;
        calender [4][3] =27;
        calender [4][4] =28;
        calender [4][5] =29;
        calender [4][6] =30;
        calender [5][0] =31;
        calender [5][1] =0;
        calender [5][2] =0;
        calender [5][3] =0;
        calender [5][4] =0;
        calender [5][5] =0;
        calender [5][6] =0;

    for (i = 0 ; i < 6 ; i ++){
        for (j = 0 ; j < 7; j++) {
        cout << calender [i][j] << " " ;
        }
        cout << endl;
        }

        // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
        // 0 = อาทิตย์, 1 = จันทร์ ... 7 = เสาร์


        // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
        // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}


        return 0;
}
