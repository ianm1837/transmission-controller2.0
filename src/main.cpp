#include <Arduino.h>
#include <TFT_eSPI.h>
#include <aptosFont.h>
// be sure to set pin numbering to GPIO (LEGACY)! Unintuitive and makes no sense, but it works.

TFT_eSPI tft = TFT_eSPI();

void setup() {
  Serial.begin(9600);
  tft.init();

  tft.fillScreen(TFT_BLACK);

  tft.loadFont(aptosFont);


  tft.setTextColor(TFT_WHITE, TFT_BLACK);  // Set text color to black on white
  // tft.setTextSize(84);  // Set text size
  tft.setCursor(40, 90);
  tft.print("1");

  Serial.println("hello test");
}

void loop() {
  Serial.println("hello test");
  delay(500);
}
