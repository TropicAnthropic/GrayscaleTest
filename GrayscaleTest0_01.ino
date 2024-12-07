// GrayscaleTest
// Version 0.01
// December 6th
// Onebit Productions
// Matthew Bryan

#pragma once

#define ABG_IMPLEMENTATION
#define ABG_SYNC_PARK_ROW
#define ABG_TIMER4
#include "ArduboyG.h"
ArduboyG_Config<ABG_Mode::L4_Triplane> a;

#define SPRITESU_IMPLEMENTATION
#define SPRITESU_OVERWRITE
#define SPRITESU_PLUSMASK
#define SPRITESU_FX
#define SPRITESU_RECT
#include "SpritesU.hpp"
#include "fxdata.h"
//#include "graphics.h"
Arduboy2 arduboy;

uint8_t frameNumber = 0;

void setup()
{
  a.begin();
  arduboy.display();

  a.startGray();
}

void loop()
{
  a.waitForNextPlane();
  if(a.needsUpdate())
  update();
  render();
}

void update()
{

}

void render()
{
  //SpritesU::drawPlusMask(24, 24, test, frameNumber);

  SpritesU::drawPlusMaskFX(64, 16, test, frameNumber);

  if(++frameNumber==3) frameNumber=0;
}
