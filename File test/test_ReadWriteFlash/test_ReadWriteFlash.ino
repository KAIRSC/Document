#include "flash.h"
#define DATA_START_ADDRESS       ((uint32_t)0x08001C20 )  //Page 127
#define LENGTH_START_ADDRESS    ((uint32_t)0x08001C10)   //Page 126
char data[50] = {0};

void setup() {
  Serial.begin(9600);
  while (!Serial) {
;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Flash_ProgramPage("First data written to flash", DATA_START_ADDRESS, LENGTH_START_ADDRESS);
  Flash_ReadChar(data, DATA_START_ADDRESS, LENGTH_START_ADDRESS);
  Serial.println(data);
  HAL_Delay(2000);
  Flash_ProgramPage("New data", DATA_START_ADDRESS, LENGTH_START_ADDRESS);
  Flash_ReadChar(data, DATA_START_ADDRESS, LENGTH_START_ADDRESS);
  Serial.println(data);
  while (1) {

  }
}
