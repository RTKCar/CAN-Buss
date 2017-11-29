//***CAN-Buss variabes**
#include <mcp_can.h>
#include <SPI.h>
int RecievedData[8];
long unsigned int rxId;
unsigned char len = 0;
unsigned char rxBuf[8];
char msgString[128];                            // Array to store serial string
#define CAN0_INT 2                              // Set INT to pin 2
MCP_CAN CAN0(10);                               // Set CS to pin 10
byte data[8] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};
int sendId;
void setup(){
//  SetupCANBuss();
}

void loop(){
   
}
  
