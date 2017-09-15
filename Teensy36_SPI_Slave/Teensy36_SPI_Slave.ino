#include <Custom_SPI.h>


void setup()
{
  Serial.begin(9600);
  SPI.setMOSI(11);
  SPI.setMISO(12);
  SPI.setSCK(27);
  SPI.setCS(9);
  
  SPI.SPI_SlaveInit();
  
  delay(5000);
  Serial.print(SPI.pinIsChipSelect(10));
  
}

void loop()
{
  Serial.print("loop");
  char RX_Data;
  RX_Data = SPI.SPI_SlaveReceive();
  //  Serial.println(RX_Data);
  Serial.println(RX_Data, HEX);
  Serial.println("rx");
}

