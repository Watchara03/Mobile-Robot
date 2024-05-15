#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_I2C_ADDR 0x3C // or 0x3C
#define SCREEN_WIDTH 128     // OLED display width, in pixels
#define SCREEN_HEIGHT 64     // OLED display height, in pixels
#define OLED_RST_PIN -1      // Reset pin (-1 if not available)

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RST_PIN);

// OLED Animation: walk
// Code auto-generated by https://wokwi.com/animator, graphics by icons8.com

#define FRAME_DELAY (42)
#define FRAME_WIDTH (48)
#define FRAME_HEIGHT (48)
#define FRAME_COUNT (sizeof(moving) / sizeof(moving[0]))
const byte PROGMEM moving[][288] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,31,224,0,0,0,0,60,112,0,0,0,0,112,56,0,0,0,1,192,24,0,0,0,3,128,28,0,0,0,7,0,30,0,0,0,6,24,54,0,0,0,12,120,51,128,0,0,12,248,49,248,0,0,24,208,56,60,0,0,25,176,108,12,0,0,17,176,111,140,0,0,51,48,65,252,0,0,35,32,64,48,0,0,54,96,192,0,0,0,62,96,192,0,0,0,8,112,96,0,0,0,0,120,48,0,0,0,0,124,24,0,0,0,0,206,24,0,0,0,0,199,12,0,0,0,0,199,134,0,0,0,1,132,198,0,0,0,1,140,198,0,0,0,3,12,70,0,0,0,6,24,99,0,0,0,14,56,99,0,0,0,12,48,99,0,0,0,24,96,35,0,0,0,16,192,49,128,0,0,25,128,51,0,0,0,31,128,31,0,0,0,15,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,31,224,0,0,0,0,60,112,0,0,0,0,112,56,0,0,0,0,224,24,0,0,0,3,128,28,0,0,0,7,8,30,0,0,0,6,24,54,0,0,0,12,120,51,128,0,0,12,248,49,240,0,0,8,208,56,120,0,0,25,176,124,12,0,0,25,176,111,140,0,0,49,48,67,252,0,0,51,32,192,112,0,0,54,96,192,0,0,0,62,96,192,0,0,0,28,112,96,0,0,0,0,120,48,0,0,0,0,124,24,0,0,0,0,78,24,0,0,0,0,199,12,0,0,0,0,199,132,0,0,0,0,197,198,0,0,0,1,140,198,0,0,0,3,12,198,0,0,0,6,24,99,0,0,0,14,56,99,0,0,0,12,48,99,0,0,0,24,96,35,0,0,0,24,192,49,128,0,0,25,192,51,0,0,0,15,128,31,0,0,0,7,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,7,128,0,0,0,0,31,224,0,0,0,0,60,112,0,0,0,0,112,24,0,0,0,0,224,24,0,0,0,1,128,28,0,0,0,3,8,28,0,0,0,6,24,54,0,0,0,6,120,55,0,0,0,4,120,51,224,0,0,12,240,48,240,0,0,12,240,120,24,0,0,9,240,110,24,0,0,25,176,71,248,0,0,25,32,192,248,0,0,27,96,192,0,0,0,31,96,192,0,0,0,14,112,96,0,0,0,0,112,48,0,0,0,0,120,48,0,0,0,0,108,24,0,0,0,0,70,12,0,0,0,0,71,12,0,0,0,0,199,140,0,0,0,1,132,198,0,0,0,3,140,198,0,0,0,7,12,198,0,0,0,6,24,99,0,0,0,12,48,99,0,0,0,24,96,99,0,0,0,24,224,49,128,0,0,29,192,51,0,0,0,15,128,31,0,0,0,2,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,220,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,7,128,0,0,0,0,31,224,0,0,0,0,56,48,0,0,0,0,112,24,0,0,0,0,224,24,0,0,0,1,192,28,0,0,0,3,140,28,0,0,0,3,24,62,0,0,0,6,56,54,0,0,0,6,120,51,128,0,0,6,112,49,224,0,0,4,240,120,112,0,0,12,240,124,48,0,0,12,240,79,176,0,0,12,224,195,240,0,0,9,224,192,0,0,0,15,224,192,0,0,0,15,112,96,0,0,0,0,112,32,0,0,0,0,120,48,0,0,0,0,108,24,0,0,0,0,102,24,0,0,0,0,103,12,0,0,0,0,199,12,0,0,0,1,199,132,0,0,0,3,134,134,0,0,0,3,12,198,0,0,0,6,28,195,0,0,0,12,56,99,0,0,0,12,112,97,0,0,0,12,224,49,128,0,0,15,192,51,0,0,0,7,128,31,0,0,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,220,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,224,0,0,0,0,56,48,0,0,0,0,112,24,0,0,0,0,224,24,0,0,0,1,192,24,0,0,0,1,140,28,0,0,0,3,24,60,0,0,0,3,56,54,0,0,0,2,112,39,0,0,0,2,112,115,192,0,0,6,112,112,224,0,0,6,112,120,32,0,0,6,96,126,32,0,0,4,224,199,224,0,0,4,224,193,192,0,0,7,224,192,0,0,0,7,240,96,0,0,0,0,112,96,0,0,0,0,120,48,0,0,0,0,124,48,0,0,0,0,108,24,0,0,0,0,102,24,0,0,0,0,103,12,0,0,0,0,199,12,0,0,0,1,135,134,0,0,0,3,14,134,0,0,0,6,28,195,0,0,0,12,56,99,0,0,0,12,112,97,0,0,0,12,224,49,128,0,0,7,192,51,0,0,0,3,128,31,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,252,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,252,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,224,0,0,0,0,56,48,0,0,0,0,48,24,0,0,0,0,96,24,0,0,0,0,192,24,0,0,0,1,140,24,0,0,0,1,156,56,0,0,0,3,56,60,0,0,0,3,48,60,0,0,0,3,48,103,0,0,0,3,48,97,128,0,0,3,112,113,128,0,0,3,96,125,128,0,0,2,96,199,128,0,0,2,96,192,0,0,0,3,224,192,0,0,0,3,240,96,0,0,0,0,48,96,0,0,0,0,56,96,0,0,0,0,60,48,0,0,0,0,60,48,0,0,0,0,118,48,0,0,0,0,230,24,0,0,0,1,199,24,0,0,0,3,135,8,0,0,0,6,15,140,0,0,0,4,57,140,0,0,0,12,112,198,0,0,0,15,224,198,0,0,0,7,192,198,0,0,0,0,0,110,0,0,0,0,0,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,240,0,0,0,0,3,188,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,24,0,0,0,0,96,24,0,0,0,0,228,16,0,0,0,0,204,48,0,0,0,1,140,48,0,0,0,1,152,48,0,0,0,1,184,56,0,0,0,1,176,124,0,0,0,1,176,102,0,0,0,1,176,118,0,0,0,1,48,126,0,0,0,1,48,220,0,0,0,1,176,192,0,0,0,1,240,192,0,0,0,0,240,192,0,0,0,0,48,96,0,0,0,0,56,96,0,0,0,0,56,96,0,0,0,0,60,96,0,0,0,0,124,48,0,0,0,1,230,48,0,0,0,3,134,48,0,0,0,7,14,48,0,0,0,12,63,24,0,0,0,12,115,24,0,0,0,7,227,24,0,0,0,3,129,136,0,0,0,0,1,136,0,0,0,0,0,216,0,0,0,0,0,248,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,32,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,16,0,0,0,0,96,16,0,0,0,0,100,16,0,0,0,0,196,48,0,0,0,0,204,48,0,0,0,0,152,48,0,0,0,1,152,48,0,0,0,1,152,112,0,0,0,0,152,120,0,0,0,0,152,120,0,0,0,0,152,120,0,0,0,0,216,240,0,0,0,0,216,192,0,0,0,0,240,192,0,0,0,0,112,192,0,0,0,0,48,192,0,0,0,0,56,64,0,0,0,0,24,96,0,0,0,0,56,96,0,0,0,0,252,96,0,0,0,3,140,96,0,0,0,6,12,96,0,0,0,12,30,96,0,0,0,12,126,48,0,0,0,7,230,48,0,0,0,3,134,48,0,0,0,0,6,48,0,0,0,0,3,48,0,0,0,0,3,240,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,112,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,12,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,2,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,96,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,16,0,0,0,0,48,16,0,0,0,0,102,16,0,0,0,0,102,48,0,0,0,0,204,48,0,0,0,0,204,48,0,0,0,0,216,32,0,0,0,0,216,96,0,0,0,0,204,96,0,0,0,0,204,96,0,0,0,0,204,64,0,0,0,0,108,192,0,0,0,0,108,192,0,0,0,0,120,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,56,192,0,0,0,0,248,192,0,0,0,7,216,192,0,0,0,14,8,192,0,0,0,12,28,192,0,0,0,12,124,192,0,0,0,7,252,64,0,0,0,3,12,96,0,0,0,0,12,96,0,0,0,0,12,96,0,0,0,0,12,96,0,0,0,0,7,192,0,0,0,0,7,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,112,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,2,12,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,16,0,0,0,0,48,16,0,0,0,0,34,16,0,0,0,0,102,48,0,0,0,0,102,48,0,0,0,0,76,48,0,0,0,0,204,32,0,0,0,0,76,96,0,0,0,0,108,96,0,0,0,0,102,96,0,0,0,0,102,64,0,0,0,0,102,192,0,0,0,0,118,192,0,0,0,0,60,192,0,0,0,0,56,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,248,128,0,0,0,1,248,128,0,0,0,3,24,128,0,0,0,3,56,128,0,0,0,1,248,128,0,0,0,0,248,128,0,0,0,0,24,128,0,0,0,0,24,128,0,0,0,0,24,128,0,0,0,0,31,128,0,0,0,0,15,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,112,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,2,12,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,15,240,0,0,0,0,24,48,0,0,0,0,16,16,0,0,0,0,48,16,0,0,0,0,50,16,0,0,0,0,50,48,0,0,0,0,102,48,0,0,0,0,102,48,0,0,0,0,100,32,0,0,0,0,102,96,0,0,0,0,102,96,0,0,0,0,50,96,0,0,0,0,51,192,0,0,0,0,51,192,0,0,0,0,59,192,0,0,0,0,63,192,0,0,0,0,36,128,0,0,0,0,32,128,0,0,0,0,49,128,0,0,0,0,49,128,0,0,0,0,49,128,0,0,0,0,49,128,0,0,0,0,113,128,0,0,0,0,113,128,0,0,0,0,241,128,0,0,0,0,241,0,0,0,0,0,113,0,0,0,0,0,49,0,0,0,0,0,49,0,0,0,0,0,51,0,0,0,0,0,55,0,0,0,0,0,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,96,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,12,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,15,224,0,0,0,0,24,48,0,0,0,0,16,24,0,0,0,0,16,24,0,0,0,0,51,16,0,0,0,0,115,16,0,0,0,0,114,48,0,0,0,0,102,48,0,0,0,0,102,32,0,0,0,0,102,96,0,0,0,0,115,96,0,0,0,0,115,224,0,0,0,0,121,192,0,0,0,0,121,192,0,0,0,0,109,192,0,0,0,0,111,192,0,0,0,0,103,128,0,0,0,0,97,128,0,0,0,0,97,128,0,0,0,0,97,128,0,0,0,0,97,192,0,0,0,0,99,192,0,0,0,0,99,192,0,0,0,0,99,128,0,0,0,0,99,128,0,0,0,0,99,0,0,0,0,0,99,0,0,0,0,0,66,0,0,0,0,0,70,0,0,0,0,0,70,0,0,0,0,0,110,0,0,0,0,0,124,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,248,0,0,0,0,3,28,0,0,0,0,6,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,15,224,0,0,0,0,24,48,0,0,0,0,24,24,0,0,0,0,56,24,0,0,0,0,115,24,0,0,0,0,243,16,0,0,0,0,243,48,0,0,0,0,243,48,0,0,0,1,179,32,0,0,0,1,179,96,0,0,0,1,177,96,0,0,0,1,185,224,0,0,0,1,248,224,0,0,0,0,124,192,0,0,0,0,102,96,0,0,0,0,103,192,0,0,0,0,99,192,0,0,0,0,97,192,0,0,0,0,97,192,0,0,0,0,99,224,0,0,0,0,67,96,0,0,0,0,67,96,0,0,0,0,198,96,0,0,0,0,198,96,0,0,0,0,198,192,0,0,0,0,198,192,0,0,0,0,199,128,0,0,0,0,143,0,0,0,0,1,140,0,0,0,0,1,140,0,0,0,0,1,156,0,0,0,0,0,248,0,0,0,0,0,48,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,240,0,0,0,0,3,188,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,3,128,0,0,0,0,15,224,0,0,0,0,24,48,0,0,0,0,56,24,0,0,0,0,120,24,0,0,0,0,241,24,0,0,0,1,147,16,0,0,0,1,179,48,0,0,0,1,51,48,0,0,0,3,51,32,0,0,0,3,51,224,0,0,0,3,121,224,0,0,0,3,120,224,0,0,0,3,252,96,0,0,0,0,230,48,0,0,0,0,99,48,0,0,0,0,97,224,0,0,0,0,97,192,0,0,0,0,97,192,0,0,0,0,97,192,0,0,0,0,99,96,0,0,0,0,99,48,0,0,0,0,67,48,0,0,0,0,71,48,0,0,0,0,199,48,0,0,0,0,199,32,0,0,0,0,143,32,0,0,0,1,143,96,0,0,0,1,139,224,0,0,0,1,25,192,0,0,0,3,24,0,0,0,0,3,48,0,0,0,0,1,240,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,252,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,252,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,3,128,0,0,0,0,15,224,0,0,0,0,28,112,0,0,0,0,56,24,0,0,0,0,248,24,0,0,0,1,249,24,0,0,0,3,155,16,0,0,0,3,59,48,0,0,0,3,57,48,0,0,0,6,121,32,0,0,0,6,121,224,0,0,0,6,120,224,0,0,0,6,252,112,0,0,0,7,246,48,0,0,0,1,227,24,0,0,0,0,97,152,0,0,0,0,96,240,0,0,0,0,96,224,0,0,0,0,97,192,0,0,0,0,97,224,0,0,0,0,99,48,0,0,0,0,99,48,0,0,0,0,67,24,0,0,0,0,71,24,0,0,0,0,199,152,0,0,0,0,135,152,0,0,0,1,141,152,0,0,0,1,9,152,0,0,0,3,25,152,0,0,0,3,24,248,0,0,0,2,48,240,0,0,0,6,48,0,0,0,0,3,224,0,0,0,0,1,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,220,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,15,224,0,0,0,0,28,112,0,0,0,0,120,56,0,0,0,0,248,24,0,0,0,1,217,24,0,0,0,3,25,16,0,0,0,3,57,48,0,0,0,6,57,176,0,0,0,6,121,176,0,0,0,6,121,224,0,0,0,12,248,96,0,0,0,4,254,56,0,0,0,7,247,24,0,0,0,3,163,140,0,0,0,0,96,236,0,0,0,0,96,248,0,0,0,0,96,224,0,0,0,0,97,224,0,0,0,0,97,176,0,0,0,0,97,48,0,0,0,0,99,24,0,0,0,0,67,24,0,0,0,0,67,140,0,0,0,0,199,140,0,0,0,1,135,140,0,0,0,1,140,204,0,0,0,3,8,198,0,0,0,3,24,198,0,0,0,6,48,198,0,0,0,4,48,108,0,0,0,4,96,60,0,0,0,7,192,0,0,0,0,3,192,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,15,224,0,0,0,0,28,112,0,0,0,0,56,48,0,0,0,0,248,24,0,0,0,1,217,24,0,0,0,1,153,16,0,0,0,3,25,176,0,0,0,3,57,176,0,0,0,6,121,176,0,0,0,6,120,240,0,0,0,12,120,112,0,0,0,4,254,56,0,0,0,7,247,12,0,0,0,3,161,204,0,0,0,0,96,236,0,0,0,0,96,248,0,0,0,0,96,224,0,0,0,0,97,224,0,0,0,0,97,176,0,0,0,0,97,24,0,0,0,0,99,24,0,0,0,0,67,12,0,0,0,0,67,140,0,0,0,0,199,140,0,0,0,1,134,198,0,0,0,1,140,198,0,0,0,3,28,198,0,0,0,6,24,66,0,0,0,6,48,99,0,0,0,12,48,102,0,0,0,12,96,62,0,0,0,7,192,28,0,0,0,7,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,15,224,0,0,0,0,28,112,0,0,0,0,56,24,0,0,0,0,120,24,0,0,0,0,249,24,0,0,0,1,217,16,0,0,0,1,153,48,0,0,0,3,57,176,0,0,0,7,57,240,0,0,0,6,121,224,0,0,0,12,124,112,0,0,0,4,254,56,0,0,0,7,247,24,0,0,0,3,33,140,0,0,0,0,96,248,0,0,0,0,96,248,0,0,0,0,96,224,0,0,0,0,97,224,0,0,0,0,97,176,0,0,0,0,97,16,0,0,0,0,99,24,0,0,0,0,99,24,0,0,0,0,67,140,0,0,0,0,199,140,0,0,0,1,135,140,0,0,0,1,140,198,0,0,0,3,12,198,0,0,0,6,24,198,0,0,0,6,48,98,0,0,0,12,112,102,0,0,0,4,96,62,0,0,0,7,192,28,0,0,0,3,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,156,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,3,128,0,0,0,0,15,224,0,0,0,0,28,112,0,0,0,0,24,24,0,0,0,0,24,24,0,0,0,0,25,24,0,0,0,0,59,16,0,0,0,0,59,48,0,0,0,0,121,48,0,0,0,0,121,224,0,0,0,0,249,224,0,0,0,0,252,224,0,0,0,1,190,112,0,0,0,0,247,48,0,0,0,0,227,144,0,0,0,0,97,240,0,0,0,0,96,224,0,0,0,0,96,192,0,0,0,0,97,224,0,0,0,0,97,224,0,0,0,0,97,176,0,0,0,0,97,24,0,0,0,0,99,24,0,0,0,0,99,24,0,0,0,0,195,12,0,0,0,1,199,140,0,0,0,1,141,140,0,0,0,3,12,132,0,0,0,6,24,198,0,0,0,6,48,198,0,0,0,6,96,70,0,0,0,7,224,124,0,0,0,3,192,60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,220,0,0,0,0,1,248,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,15,224,0,0,0,0,24,48,0,0,0,0,24,24,0,0,0,0,16,24,0,0,0,0,17,24,0,0,0,0,19,16,0,0,0,0,19,48,0,0,0,0,51,48,0,0,0,0,49,160,0,0,0,0,57,224,0,0,0,0,56,224,0,0,0,0,60,96,0,0,0,0,54,96,0,0,0,0,34,96,0,0,0,0,99,224,0,0,0,0,97,192,0,0,0,0,96,192,0,0,0,0,96,224,0,0,0,0,97,224,0,0,0,0,97,160,0,0,0,0,33,176,0,0,0,0,33,176,0,0,0,0,97,24,0,0,0,0,227,24,0,0,0,1,199,24,0,0,0,3,143,12,0,0,0,3,29,140,0,0,0,6,25,140,0,0,0,6,48,198,0,0,0,3,224,196,0,0,0,3,192,252,0,0,0,0,0,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,252,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,252,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,15,240,0,0,0,0,24,48,0,0,0,0,16,24,0,0,0,0,16,24,0,0,0,0,51,24,0,0,0,0,51,48,0,0,0,0,51,48,0,0,0,0,50,48,0,0,0,0,51,48,0,0,0,0,51,96,0,0,0,0,57,224,0,0,0,0,57,224,0,0,0,0,60,224,0,0,0,0,108,224,0,0,0,0,103,192,0,0,0,0,99,192,0,0,0,0,96,192,0,0,0,0,32,192,0,0,0,0,32,224,0,0,0,0,49,224,0,0,0,0,49,224,0,0,0,0,49,176,0,0,0,0,113,176,0,0,0,0,227,48,0,0,0,1,199,24,0,0,0,3,143,24,0,0,0,3,31,24,0,0,0,3,57,140,0,0,0,3,241,140,0,0,0,1,225,140,0,0,0,0,0,220,0,0,0,0,0,120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,240,0,0,0,0,3,188,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,15,240,0,0,0,0,24,56,0,0,0,0,16,24,0,0,0,0,48,24,0,0,0,0,51,24,0,0,0,0,51,24,0,0,0,0,34,56,0,0,0,0,102,56,0,0,0,0,102,56,0,0,0,0,50,120,0,0,0,0,51,120,0,0,0,0,51,120,0,0,0,0,57,216,0,0,0,0,57,216,0,0,0,0,127,248,0,0,0,0,111,248,0,0,0,0,96,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,24,192,0,0,0,0,24,224,0,0,0,0,48,224,0,0,0,0,49,224,0,0,0,0,99,96,0,0,0,0,99,32,0,0,0,0,198,48,0,0,0,0,206,48,0,0,0,0,254,48,0,0,0,0,123,48,0,0,0,0,3,240,0,0,0,0,1,224,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,32,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,12,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,16,24,0,0,0,0,48,24,0,0,0,0,50,24,0,0,0,0,98,56,0,0,0,0,102,56,0,0,0,0,70,56,0,0,0,0,68,56,0,0,0,0,102,120,0,0,0,0,102,104,0,0,0,0,102,108,0,0,0,0,34,108,0,0,0,0,50,252,0,0,0,0,62,252,0,0,0,0,60,216,0,0,0,0,48,192,0,0,0,0,48,192,0,0,0,0,48,64,0,0,0,0,24,96,0,0,0,0,24,96,0,0,0,0,28,96,0,0,0,0,28,64,0,0,0,0,24,192,0,0,0,0,24,128,0,0,0,0,17,128,0,0,0,0,49,128,0,0,0,0,51,128,0,0,0,0,55,128,0,0,0,0,31,128,0,0,0,0,15,128,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,112,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,2,12,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,15,224,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,24,0,0,0,0,48,24,0,0,0,0,98,24,0,0,0,0,102,56,0,0,0,0,198,56,0,0,0,0,204,60,0,0,0,0,204,60,0,0,0,0,204,108,0,0,0,0,204,110,0,0,0,0,204,103,0,0,0,0,204,123,0,0,0,0,68,223,0,0,0,0,108,206,0,0,0,0,124,192,0,0,0,0,48,64,0,0,0,0,48,96,0,0,0,0,56,96,0,0,0,0,56,96,0,0,0,0,60,32,0,0,0,0,30,32,0,0,0,0,30,32,0,0,0,0,30,96,0,0,0,0,60,96,0,0,0,0,52,64,0,0,0,0,60,192,0,0,0,0,60,192,0,0,0,0,44,192,0,0,0,0,55,128,0,0,0,0,63,0,0,0,0,0,28,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,112,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,2,12,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,64,0,0,0,0,0,0,0,0,0,0,15,192,0,0,0,0,31,240,0,0,0,0,24,48,0,0,0,0,48,24,0,0,0,0,96,24,0,0,0,0,100,24,0,0,0,0,198,56,0,0,0,1,140,60,0,0,0,1,152,60,0,0,0,1,152,44,0,0,0,1,152,102,0,0,0,1,152,115,128,0,0,1,152,113,192,0,0,1,152,124,192,0,0,1,144,207,192,0,0,1,240,195,128,0,0,0,240,192,0,0,0,0,112,96,0,0,0,0,48,96,0,0,0,0,56,48,0,0,0,0,60,48,0,0,0,0,54,48,0,0,0,0,55,16,0,0,0,0,51,16,0,0,0,0,35,48,0,0,0,0,103,48,0,0,0,0,71,48,0,0,0,0,199,48,0,0,0,0,199,48,0,0,0,0,143,48,0,0,0,0,207,224,0,0,0,0,249,224,0,0,0,0,112,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,32,0,0,0,0,1,248,0,0,0,0,3,12,0,0,0,0,6,12,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,224,0,0,0,0,0,0,0,0,0,0,7,192,0,0,0,0,31,224,0,0,0,0,56,56,0,0,0,0,48,24,0,0,0,0,96,24,0,0,0,0,192,24,0,0,0,1,140,28,0,0,0,1,156,60,0,0,0,3,56,54,0,0,0,3,48,39,0,0,0,3,48,115,192,0,0,2,48,112,224,0,0,2,112,120,32,0,0,6,96,126,32,0,0,6,96,199,224,0,0,7,224,193,192,0,0,3,224,64,0,0,0,0,112,96,0,0,0,0,112,32,0,0,0,0,120,48,0,0,0,0,108,16,0,0,0,0,102,24,0,0,0,0,103,24,0,0,0,0,103,152,0,0,0,0,199,152,0,0,0,0,199,152,0,0,0,1,141,136,0,0,0,1,141,136,0,0,0,3,25,136,0,0,0,3,25,136,0,0,0,3,48,216,0,0,0,3,240,248,0,0,0,1,224,96,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,240,0,0,0,0,3,188,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,4,0,0,0,0,3,12,0,0,0,0,1,248,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,7,128,0,0,0,0,31,224,0,0,0,0,56,48,0,0,0,0,112,24,0,0,0,0,224,24,0,0,0,1,192,28,0,0,0,3,140,28,0,0,0,3,24,54,0,0,0,6,56,54,0,0,0,6,120,51,192,0,0,4,112,48,224,0,0,12,240,120,56,0,0,12,240,126,24,0,0,12,240,79,248,0,0,9,224,193,240,0,0,13,224,192,0,0,0,15,96,64,0,0,0,0,112,96,0,0,0,0,120,48,0,0,0,0,124,48,0,0,0,0,110,24,0,0,0,0,71,12,0,0,0,0,71,140,0,0,0,0,199,140,0,0,0,0,196,204,0,0,0,1,140,204,0,0,0,3,12,198,0,0,0,3,24,198,0,0,0,6,48,198,0,0,0,12,48,70,0,0,0,12,96,102,0,0,0,14,192,126,0,0,0,7,192,60,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,3,248,0,0,0,0,3,12,0,0,0,0,6,4,0,0,0,0,6,6,0,0,0,0,6,6,0,0,0,0,3,12,0,0,0,0,3,220,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,31,224,0,0,0,0,60,112,0,0,0,0,112,24,0,0,0,0,224,24,0,0,0,3,128,28,0,0,0,3,8,30,0,0,0,6,24,54,0,0,0,4,120,51,128,0,0,12,248,49,240,0,0,12,208,56,120,0,0,24,176,124,12,0,0,25,176,111,140,0,0,17,48,67,248,0,0,51,32,192,112,0,0,55,96,192,0,0,0,30,96,192,0,0,0,12,112,96,0,0,0,0,120,48,0,0,0,0,124,24,0,0,0,0,78,24,0,0,0,0,199,12,0,0,0,0,199,140,0,0,0,0,196,198,0,0,0,1,140,198,0,0,0,3,12,198,0,0,0,7,24,102,0,0,0,6,56,99,0,0,0,12,48,99,0,0,0,24,96,99,0,0,0,24,192,35,0,0,0,25,192,51,0,0,0,15,128,62,0,0,0,15,0,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};