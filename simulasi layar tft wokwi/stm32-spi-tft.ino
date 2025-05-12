#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

#define TFT_DC PB7
#define TFT_CS PB6
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

void setup() {
  Serial.begin(115200);
  Serial.println("Fetching Data Starting...");

  tft.begin();

  tft.setCursor(36, 120);
  tft.setTextColor(ILI9341_CYAN);
  tft.setTextSize(3);
  tft.println("Kelompok F08");

  tft.setCursor(60, 160);
  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(4);
  tft.println("STM32");
}

void loop() {
  delay(10);
}