#include "mcp_can.h"
#include <SPI.h>

const int SPI_CS_PIN = 10;
MCP_CAN CAN(SPI_CS_PIN); 

unsigned char stmp[8] = {0x01, 0x34, 0x02, 0x30, 0x40, 0x50, 0xbb, 0xaa};

void setup()
{
  delay(5000);  // delay to allow me time to open the serial monitor window to check all is well
  Serial.begin(115200);
  if(CAN.begin(CAN_500KBPS) ==CAN_OK)  //check the Seeeduino CAN-BUS wiki for more details on code
  {
    Serial.print("can init ok!!\r\n");
      for (int i = 0; i < 9; i = i + 1)
      {
        Serial.print(stmp[i], DEC);
      }
  }
  else Serial.print("Can init fail!!\r\n");
}

void loop()
{
  CAN.sendMsgBuf(0x22, 0, 8, stmp);
  delay(1000);  //
}
