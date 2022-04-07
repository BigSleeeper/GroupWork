unsigned char x=0,test_old[3],test_new[3];
void single_graph()
{

  single_base();
  u8g2.drawLine(x,60,x,0);
  u8g2.setDrawColor(0);
  u8g2.drawLine(x-1,59,x-1,0);
  u8g2.setDrawColor(1);
  u8g2.drawPixel(x-1, 10 );
  u8g2.sendBuffer();
  if(x==120)
  {
    u8g2.setDrawColor(0);
    u8g2.drawLine(x,59,x,0);
    u8g2.setDrawColor(1);
    x=6;
  }
  x++;
}

void treble_graph()
{
  //清除文字
  u8g2.setDrawColor(0);
  u8g2.drawBox(0,0,128,20);
  u8g2.setDrawColor(1);

  //显示电压信息
  u8g2.setCursor(4, 10);
  u8g2.print("电芯一");
  u8g2.setCursor(4, 20);
  u8g2.print((float)Voltage[1]/4096*3.3);
  u8g2.print("V");
  
  u8g2.setCursor(44, 10);
  u8g2.print("电芯二");
  u8g2.setCursor(44, 20);
  u8g2.print((float)Voltage[2]/4096*3.3);
  u8g2.print("V");
  
  u8g2.setCursor(84, 10);
  u8g2.print("电芯三");
  u8g2.setCursor(84, 20);
  u8g2.print((float)Voltage[3]/4096*3.3);
  u8g2.print("V");
  
  
  treble_base();
  u8g2.drawLine(6+x,59,6+x,26);
  u8g2.drawLine(46+x,59,46+x,26);
  u8g2.drawLine(86+x,59,86+x,26);
  
  u8g2.setDrawColor(0); //清除扫描线
  u8g2.drawLine(5+x,59,5+x,26);
  u8g2.drawLine(45+x,59,45+x,26);
  u8g2.drawLine(85+x,59,85+x,26);
  u8g2.setDrawColor(1);

  //画点
  //u8g2.drawPixel(5+x,temp1+40);
  //u8g2.drawPixel(45+x,temp1+40);
  //u8g2.drawPixel(85+x,temp1+40);
  
  //画线
  if(x!=0)
  {
    u8g2.drawLine( 4+x, 59 - test_old[0],  5+x, 59 - test_new[0]);
    u8g2.drawLine(44+x, 59 - test_old[1], 45+x, 59 - test_new[1]);
    u8g2.drawLine(84+x, 59 - test_old[2], 85+x, 59 - test_new[2]);
  }
  
  u8g2.sendBuffer();
  if(x==30)
  {
    u8g2.setDrawColor(0);
    u8g2.drawLine(6+x,60,6+x,20);
    u8g2.drawLine(46+x,60,46+x,20);
    u8g2.drawLine(86+x,60,86+x,20);
    u8g2.setDrawColor(1);
    x=0;
  }
  else
  {
    x++;
  }
}

//单坐标系
void single_base()
{
  u8g2.drawLine(4,60,4,0);
  u8g2.drawLine(4,60,128,60);
  u8g2.drawTriangle(0,6,  8,6,  4,0);
  u8g2.drawTriangle(122,57,  122,63,  128,60);
}

//三坐标系
void treble_base()
{
  u8g2.drawLine(4,60,4,20);
  u8g2.drawLine(4,60,40,60);
  u8g2.drawTriangle(0,26,  8,26,  4,20);
  u8g2.drawTriangle(34,57,  34,63,  40,60);

  u8g2.drawLine(44,60,44,20);
  u8g2.drawLine(44,60,80,60);
  u8g2.drawTriangle(40,26,  48,26,  44,20);
  u8g2.drawTriangle(74,57,  74,63,  80,60);

  u8g2.drawLine(84,60,84,20);
  u8g2.drawLine(84,60,120,60);
  u8g2.drawTriangle(80,26,  88,26,  84,20);
  u8g2.drawTriangle(114,57,  114,63,  120,60);
}


void update_random()
{
  for(int i=0;i<3;i++)
  {
    test_old[i]=test_new[i];
    test_new[i]=(float)Voltage[i+1]/4096*33;
  }
}
