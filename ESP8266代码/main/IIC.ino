void IIC_Init()
{
  pinMode(D1, OUTPUT);
  pinMode(D2, INPUT);
  pinMode(D4, OUTPUT);
  digitalWrite(D1,HIGH);
}

unsigned int Request_Byte()
{
  unsigned int Byte=0x0000,count=0;
  digitalWrite(Reset, 0);
  digitalWrite(Reset, 1);
  for(int i=0;i<16;i++)
  {
    digitalWrite(SCL,LOW);
    if(digitalRead(SDA)==0)
    {
      Byte|=(0x8000>>i);
    }
    digitalWrite(SCL,HIGH);
  }
  return Byte;
}

void Update_Voltage()
{
  for(int i=0;i<8;i++)
  {
    temp=Request_Byte();
    if(temp==0xffff)
    {
      p_Voltage=0;
    }
    else
    {
      Voltage[p_Voltage]=temp;
      p_Voltage++;
    }
    if(p_Voltage==8)
    {
      p_Voltage=0;
    }
  }
}
