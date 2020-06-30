/*
  液晶图书馆 - Hello World

 说明了LCD1602显示器的使用。液晶图书馆在所有的与日立（公司）HD44780驱动器
 兼容的LCD显示器上起作用。这儿有他们中的许多在那里，并且你通常可以通过16引脚
 的接口告诉他们。
 
 这个草稿打印Hello World!在LCD上，并且展示时间

  电路：
  
 * LCD的RS（寄存器）引脚接到数字引脚12
 * LCD的E（使能够）引脚接到数字引脚11 
 * LCD的D4引脚接到数字引脚5 
 * LCD的D6引脚接到数字引脚3
 * LCD的D7引脚接到数字引脚2
 * LCD的RW（读写）引脚接地
 * LCD的VSS引脚接地5
 * LCD的VCC引脚接到5V
 * 1万欧姆的电阻器:
 * 以正5V和地为端点ends to +5V and ground
 * 在LCD的VO3引脚擦去

 图书馆最初在2008年4月18日被David A. Mellis添加
 在2009年七月5日被Limor Fried (http://www.ladyada.net)修改
 例子在2009年七月9日被Tom Igoe添加
 在2010年11月22日被Tom Igoe修正
 
 这个例码在公开域名上
 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h> //调用库函数

// 用数字接口引脚初始化图书馆
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // 设置LCD初始的行数和列数
  lcd.begin(16, 2);
  // 在LCD上打印信息
  lcd.print("hello, world!");
}

void loop() {
  // 设置LCD的指针位于第一列，第二行
  // （注意: line 1 指的是第二行，因为行从0开始计数）:
  lcd.setCursor(0, 1);
  // 自重置开始每秒打印数字
  lcd.print(millis() / 1000);
}
 