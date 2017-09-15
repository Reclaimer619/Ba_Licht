#include <Custom_SPI.h>
#include <Custom_DmxSimple.h>

static int dmxChannelMax = 512;

void setup()
{
  Serial.begin(9600);
  /*-------SPI Setup------*/
  SPI.setMOSI(11);
  SPI.setMISO(12);
  SPI.setSCK(27);
  SPI.setCS(9);
  
  SPI.SPI_SlaveInit();
  
  delay(5000);
  Serial.print(SPI.pinIsChipSelect(10));
  //Serial.println("SPI Setup ready");
  
  
  /*------DMX Setup------*/
  DmxSimple.usePin(1); // Universe 1
  DMXSimple2.usePin(8); // Universe2

  
  DmxSimple.maxChannel(512);
  //Serial.println("Dmx Setup ready");

 
}

void loop()
{
  Serial.print("loop");
  char RX_Data;
  uint8_t DMX_BUF[dmxChannelMax];
  
  
  RX_Data = SPI.SPI_SlaveReceive();
  
  
  //Serial.println(RX_Data);
  //Serial.println(RX_Data, HEX);
  //Serial.println("rx");

  if(RX_Data != 0){
    
  }

  
  
}

