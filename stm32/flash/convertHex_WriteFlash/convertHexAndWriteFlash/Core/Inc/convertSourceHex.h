#ifndef convertSourceHex_h
#define convertSourceHex_h
#include <stdint.h>
#include <stdbool.h>
char* fileHEX = ":020000040800F2"
								":1020000070060020892100080B2B0008912A000887"
								":10201000092B00088B220008672B00080000000035"
								":1020000070060020892100080B2B0008912A000887"
								":10201000092B00088B220008672B00080000000035"
								":1020000070060020892100080B2B0008912A000887"
								":10201000092B00088B220008672B00080000000035"
								":1020000070060020892100080B2B0008912A000887"
								":10201000092B00088B220008672B00080000000035"
								":1020000070060020892100080B2B0008912A000887"
								":10201000092B00088B220008672B00080000000035";
bool checkFile();
uint8_t numByte(uint8_t hex);
uint8_t byteRecord(uint8_t hex);
uint32_t getAddress();
void writeFlash();
#endif