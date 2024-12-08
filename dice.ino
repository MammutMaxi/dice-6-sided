#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Define OLED display dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Create the SSD1306 display instance (I2C connection)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire);

void setup()
{
  // Initialize the display
  if (!display.begin(SSD1306_PAGEADDR, 0x3C))
  {
    Serial.println("SSD1306 allocation failed");
    for (;;); // Halt if initialization fails
  }

  // Clear the display
  display.clearDisplay();
  display.display();
}

void loop()
{
  switch(random(1,7))
  {
    case 1: setOne(); break;
    case 2: setTwo(); break;
    case 3: setThree(); break;
    case 4: setFour(); break;
    case 5: setFive(); break;
    case 6: setSix(); break;
  }
  delay(4500);
  display.clearDisplay();
  display.display();
  delay(500);
}

void setOne()
{
  display.clearDisplay();
  setDotB2();
  display.display();
}

void setTwo()
{
  display.clearDisplay();
  setDotA1();
  setDotC3();
  display.display();
}

void setThree()
{
  display.clearDisplay();
  setDotA1();
  setDotB2();
  setDotC3();
  display.display();
}

void setFour()
{
  display.clearDisplay();
  setDotA1();
  setDotC1();
  setDotA3();
  setDotC3();
  display.display();
}

void setFive()
{
  display.clearDisplay();
  setDotA1();
  setDotC1();
  setDotA3();
  setDotC3();
  setDotB2();
  display.display();
}

void setSix()
{
  display.clearDisplay();
  setDotA1();
  setDotB1();
  setDotC1();
  setDotA3();
  setDotB3();
  setDotC3();
  display.display();
}

void setDotA1(){for(int i=43;i<54;i++) for(int j=19;j<30;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotA2(){for(int i=59;i<70;i++) for(int j=19;j<30;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotA3(){for(int i=75;i<86;i++) for(int j=19;j<30;j++) display.drawPixel(i, j, SSD1306_WHITE);}

void setDotB1(){for(int i=43;i<54;i++) for(int j=35;j<46;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotB2(){for(int i=59;i<70;i++) for(int j=35;j<46;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotB3(){for(int i=75;i<86;i++) for(int j=35;j<46;j++) display.drawPixel(i, j, SSD1306_WHITE);}

void setDotC1(){for(int i=43;i<54;i++) for(int j=51;j<62;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotC2(){for(int i=59;i<70;i++) for(int j=51;j<62;j++) display.drawPixel(i, j, SSD1306_WHITE);}
void setDotC3(){for(int i=75;i<86;i++) for(int j=51;j<62;j++) display.drawPixel(i, j, SSD1306_WHITE);}

void setDisplayBounds()
{
  for(int i=0;i<129;i+=1) display.drawPixel(i, 16, SSD1306_WHITE);
  for(int i=0;i<129;i+=1) display.drawPixel(32, i, SSD1306_WHITE);
  for(int i=0;i<129;i+=1) display.drawPixel(i, 63, SSD1306_WHITE);
  for(int i=0;i<129;i+=1) display.drawPixel(95, i, SSD1306_WHITE);
}