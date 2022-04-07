void Websever_Init()
{
  wifiMulti.addAP("CMCC-TauH", "@126.com?"); 
  while (wifiMulti.run() != WL_CONNECTED)   // 此处的wifiMulti.run()是重点。通过wifiMulti.run()，NodeMCU将会在当前
  { 
    delay(1000);                             // 环境中搜索addAP函数所存储的WiFi。如果搜到多个存储的WiFi那么NodeMCU
    //Serial.print(i++); Serial.print(' ');    // 将会连接信号最强的那一个WiFi信号。
  }                                          // 一旦连接WiFI成功，wifiMulti.run()将会返回“WL_CONNECTED”。这也是
                                             // 此处while循环判断是否跳出循环的条件。
}
