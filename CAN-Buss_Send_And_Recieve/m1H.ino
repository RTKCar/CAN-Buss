#ifndef CANBuss_h
#define CANBuss_h

#include "Arduino.h"

class CANBuss
{
  public:
    CANBuss(int pin);
    int RecievedData[8];
    long unsigned int rxId;
    unsigned char len = 0;
    unsigned char rxBuf[8];
    char msgString[128];  
    byte data[8] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07};
    int sendId;
//  **FUNKTIONER**
    void clearData();
    void SetupCANBuss();
    void ReadMessage();
    void SendData();
    void ClearData();

    
  private:
    
};

#endif
