#include <ESP8266WiFi.h>        // 本程序使用 ESP8266WiFi库
#include <ESP8266WiFiMulti.h>   //  ESP8266WiFiMulti库
#include <ESP8266WebServer.h>   //  ESP8266WebServer库
#include <U8g2lib.h>

#define SCL D1
#define SDA D2
#define Reset D4
#define SEND_BUFFER_DISPLAY_MS(ms)do {u8g2.sendBuffer();delay(ms);}while(0);

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /*clock=SCL*/D6, /*data=SDA*/D5, /*reset=*/U8X8_PIN_NONE);   // All Boards without Reset of the Display
//U8G2_ST7567_OS12864_F_4W_SW_SPI u8g2(U8G2_R0, /* clock=*/ 14, /* data=*/ 13, /* cs=*/ 15, /* dc=*/ 5, /* reset=*/ 4);

ESP8266WiFiMulti wifiMulti;
ESP8266WebServer esp8266_server(80);// 建立网络服务器对象，该对象用于响应HTTP请求。监听端口（80）

unsigned int Voltage[8],p_Voltage=0,temp;
float Converted_Voltage[4];


void OLED_Init()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_unifont_t_symbols);
  u8g2.enableUTF8Print();//enable UTF8
  u8g2.setFont(u8g2_font_wqy12_t_gb2312b);//设置中文字符集
}


void setup()
{
  
  OLED_Init();
  IIC_Init();
  //Websever_Init();
  
  Open();
  //battery_3S();
  
  Serial.begin(9600);
}

void loop()
{
  unsigned char Byte;
  String str;
  delay(100);
  Update_Voltage();
  for(int i=0;i<7;i++)
  {
    Serial.print((float)Voltage[i]/4096*3.3);
    Serial.print(", ");
  }
  Serial.println(Voltage[7]);
  update_random();
  //single_graph();
  treble_graph();
}
