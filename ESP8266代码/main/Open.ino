//进度条相关宏定义 从左侧开始
#define progress_bar_begin_x 9
#define progress_bar_begin_y 50
#define progress_bar_r 5
#define progress_bar_longth 110

//电池相关宏定义 从左上角开始
#define battery_begin_x 2
#define battery_begin_y 2
#define battery_width  36
#define battery_longth 58
#define battery_frame_width  2 //电池外框厚度
#define battery_gap  2   //电量块之间间隔
#define battery_head_width 15 //电池头宽度
#define battery_head_longth 4 //电池头高度

const unsigned char gImage_1[1024] = { /* 0X20,0X01,0X7F,0X00,0X40,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFE,0XFF,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X80,0XFF,0XFF,0X07,0X00,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0XF0,0X3F,0XF0,0X1F,0X00,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0XFC,0X00,0X00,0X7F,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X3E,0X00,0X00,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0X00,0X00,0XE0,0X01,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0XC0,0X03,0X00,0X00,0XC0,0X03,0X00,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0XC0,0X01,0X00,0X00,0X80,0X07,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0XF0,0X78,0X00,0X00,0X00,0XFF,0X0F,0X00,0X00,0X00,0X80,
0X00,0X00,0X00,0X00,0X00,0X78,0X70,0X48,0X00,0X07,0XFE,0XFF,0X01,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X38,0X00,0XF8,0X03,0X07,0X3C,0XF0,0X07,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X1C,0X00,0XF8,0X03,0X07,0X78,0X00,0X3F,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X0E,0X00,0X00,0X00,0X00,0X70,0X00,0XF8,0X7F,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X0E,0X00,0X00,0X00,0X00,0X70,0X00,0XE0,0XFF,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X06,0X00,0X00,0X00,0X00,0XF0,0X00,0X00,0X77,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X70,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X03,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X30,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X70,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X70,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X07,0X01,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0X00,0X00,0X00,0X00,0X00,0XE0,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0X0D,0X02,0X00,0X00,0X00,0X00,0X60,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X00,0XFD,0X07,0X00,0X00,0X00,0X00,0X70,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0X80,0X3F,0X00,0X00,0X00,0X00,0X00,0X38,0X00,0X00,0X60,0X00,0X00,
0X00,0X00,0X00,0XE0,0X03,0X00,0X00,0X00,0X00,0X00,0X3C,0X00,0X00,0X70,0X00,0X00,
0X00,0X00,0X00,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X1C,0X00,0X00,0X70,0X00,0X00,
0X00,0X00,0X00,0X78,0X00,0X00,0X00,0X00,0X00,0X00,0X0C,0X00,0X00,0X30,0X00,0X00,
0X00,0X00,0X00,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X0E,0X00,0X00,0X38,0X00,0X00,
0X00,0X00,0X00,0X0E,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0X00,0X00,0X18,0X00,0X00,
0X00,0X00,0X00,0X06,0X00,0X00,0X00,0X38,0X00,0X80,0X03,0X00,0X00,0X1C,0X00,0X00,
0X00,0X00,0X00,0X03,0X00,0X00,0X00,0X78,0X00,0X80,0X01,0X00,0X00,0X0E,0X00,0X00,
0X00,0X00,0X80,0X03,0X00,0X00,0X00,0XF8,0X00,0XC0,0X01,0X00,0X00,0X0F,0X00,0X00,
0X00,0X00,0X80,0X01,0X00,0X00,0X00,0XD8,0X03,0XC0,0X03,0X00,0X80,0X03,0X00,0X00,
0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X98,0X0F,0XE0,0X07,0X00,0XE0,0X01,0X00,0X00,
0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X18,0X0E,0XE0,0X0E,0X00,0XF0,0X00,0X00,0X00,
0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X30,0X00,0X70,0X3C,0X00,0X3E,0X00,0X00,0X00,
0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X30,0X00,0X38,0XF0,0XFF,0X0E,0X00,0X00,0X00,
0X00,0X00,0XC0,0X01,0X00,0X00,0X00,0X30,0X00,0X38,0XE0,0XFF,0X07,0X00,0X00,0X00,
0X00,0X00,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X1C,0X00,0XF8,0X07,0X00,0X00,0X00,
0X00,0X00,0X38,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X38,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X0E,0X00,0X00,0X00,0X00,0X00,0XC0,0X07,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X07,0X00,0X00,0X00,0X00,0X00,0XE0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X80,0X87,0X01,0X00,0X00,0X00,0X00,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0XC0,0XFF,0X0F,0X00,0X00,0X00,0X00,0X7C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X80,0XFF,0X78,0X00,0X00,0X00,0X80,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0XF0,0X7F,0X00,0X00,0XC0,0X0F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X80,0XFF,0X00,0X00,0XF8,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3E,0X00,0XC0,0X3F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X1F,0X00,0XFC,0X0F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X80,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X80,0XFF,0XFF,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XF8,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};



void Open()
{
  u8g2.drawXBM(0,0,128,64,gImage_1);
  
  SEND_BUFFER_DISPLAY_MS(3000);
  u8g2.clearBuffer();


  
  u8g2.setCursor(29, 30);
  u8g2.print("正在初始化");

  
  //进度条
  for(int i=0; i<progress_bar_longth; i++)
  {
    if( i==5 )
    {
      u8g2.clearBuffer();
      u8g2.setCursor(25, 30);
      u8g2.print("正在打开串口");
    }
    if(i==6)
    {
      Serial.begin(9600);
      Serial.println("测试串口");
    }
    if(i==10)
    {
      u8g2.clearBuffer();
      u8g2.setCursor(15, 30);
      u8g2.print("正在尝试连接WIFI");
      
    }
    if(i==15)
    {
      //Websever_Init();
      delay(1000);
      u8g2.clearBuffer();
      u8g2.setCursor(3, 22);
      u8g2.print("成功连接到");
      u8g2.print(/*WiFi.SSID()*/"CMCC-TauH");
      u8g2.setCursor(6, 38);
      u8g2.print("IP地址:");
      u8g2.print(/*WiFi.localIP()*/" 192.168.1.4");
      i+=40;
    }
    if(i==75)
    {
      u8g2.clearBuffer();
      u8g2.setCursor(29, 22);
      u8g2.print("正在尝试与");
      u8g2.setCursor(25, 38);
      u8g2.print("ADC模块通讯");
    }
    if(i==80)
    {
      u8g2.clearBuffer();
      u8g2.setCursor(15, 30);
      u8g2.print("正在读取电池状态");
    }
    if(i==85)
    {
      u8g2.clearBuffer();
      u8g2.setCursor(30, 30);
      u8g2.print("初始化完毕");
      i+=20;
    }
    process_bar(i);
  }
  delay(1000);
  u8g2.clearBuffer();
  
  //进入电池界面
  draw_battery_frame();
  //第一块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap +  (battery_longth - battery_frame_width*2 - battery_gap*3)*2/3 + battery_gap*2  , battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 -2);                                                     
  //u8g2.drawLine(19, 53, 40, 53);
  u8g2.setCursor(40, 58);
  u8g2.print("3.86V");
  SEND_BUFFER_DISPLAY_MS(100);

  //第二块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap +  (battery_longth - battery_frame_width*2 - battery_gap*3)/3 + battery_gap  , battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 );                                                     
  //u8g2.drawLine(19, 36, 40, 36);
  u8g2.setCursor(40, 41);
  u8g2.print("3.85V");
  SEND_BUFFER_DISPLAY_MS(100);

  //第三块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap, battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 );                                                     
  //u8g2.drawLine(19, 18, 40, 18);
  u8g2.setCursor(40, 23);
  u8g2.print("3.84V");

  //电池信息
  u8g2.drawLine(75, 0, 75, 63);
  u8g2.setCursor(77, 10);
  u8g2.print("电池信息");
  u8g2.setCursor(90, 25);
  u8g2.print("3S?P");
  u8g2.setCursor(85, 40);
  u8g2.print("11.55V");
  u8g2.setCursor(88, 55);
  u8g2.print("? mAh");
  u8g2.setCursor(95, 70);
  SEND_BUFFER_DISPLAY_MS(100);
  
  SEND_BUFFER_DISPLAY_MS(5000);
  u8g2.clearBuffer();
}

void process_bar(unsigned char x)
{
  //进度条外框
  u8g2.drawCircle(progress_bar_begin_x, progress_bar_begin_y, progress_bar_r, U8G2_DRAW_UPPER_LEFT); //左上
  //SEND_BUFFER_DISPLAY_MS(10);
  u8g2.drawCircle(progress_bar_begin_x, progress_bar_begin_y, progress_bar_r, U8G2_DRAW_LOWER_LEFT); //左下
  //SEND_BUFFER_DISPLAY_MS(10);
  u8g2.drawCircle(progress_bar_begin_x + progress_bar_longth, progress_bar_begin_y, progress_bar_r, U8G2_DRAW_UPPER_RIGHT); //右上
  //SEND_BUFFER_DISPLAY_MS(10);
  u8g2.drawCircle(progress_bar_begin_x + progress_bar_longth, progress_bar_begin_y, progress_bar_r, U8G2_DRAW_LOWER_RIGHT); //右下
  //SEND_BUFFER_DISPLAY_MS(10);
  u8g2.drawLine(progress_bar_begin_x, progress_bar_begin_y + progress_bar_r, progress_bar_begin_x + progress_bar_longth, progress_bar_begin_y + progress_bar_r);
  //SEND_BUFFER_DISPLAY_MS(10);
  u8g2.drawLine(progress_bar_begin_x, progress_bar_begin_y - progress_bar_r, progress_bar_begin_x + progress_bar_longth, progress_bar_begin_y - progress_bar_r);

  
  u8g2.drawDisc(progress_bar_begin_x, progress_bar_begin_y, progress_bar_r - 3, U8G2_DRAW_ALL);
  u8g2.drawBox(progress_bar_begin_x, progress_bar_begin_y - progress_bar_r+3, x, progress_bar_r*2-5);
  u8g2.drawDisc(progress_bar_begin_x + x, progress_bar_begin_y, progress_bar_r - 3, U8G2_DRAW_ALL);
  SEND_BUFFER_DISPLAY_MS(1);
}


void draw_battery_frame()
{
  u8g2.drawBox(battery_begin_x + (battery_width - battery_head_width)/2, battery_begin_y, battery_head_width, battery_head_longth);//电池头
  //SEND_BUFFER_DISPLAY_MS(1000);

  for(int i=0;i<battery_frame_width;i++)
  {
    u8g2.drawRFrame(battery_begin_x + i, battery_begin_y + battery_head_longth + i, battery_width - i*2, battery_longth - i*2, 3-i);
  }
}

void battery_3S()
{
  u8g2.clearBuffer();
  
  //SEND_BUFFER_DISPLAY_MS(1000);

  //第三块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap, battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 );                                                     
  SEND_BUFFER_DISPLAY_MS(1000); 


  //第二块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap +  (battery_longth - battery_frame_width*2 - battery_gap*3)/3 + battery_gap  , battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 );                                                     
  SEND_BUFFER_DISPLAY_MS(1000);


  //第一块电芯
  u8g2.drawBox( battery_begin_x + battery_frame_width + battery_gap, battery_begin_y + battery_head_longth + battery_frame_width + battery_gap +  (battery_longth - battery_frame_width*2 - battery_gap*3)*2/3 + battery_gap*2  , battery_width - battery_frame_width*2 - battery_gap*2, (battery_longth - battery_frame_width*2 - battery_gap*3)/3 -2);                                                     

  SEND_BUFFER_DISPLAY_MS(100000);
}
