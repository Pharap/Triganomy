#include <FixedPoints.h>
#include <FixedPointsCommon.h>
#include <Arduboy2.h>

#include "Trig.h"

Arduboy2 arduboy;


void setup()
{
	arduboy.begin();
}

uint8_t j = 0;
void loop()
{
	if(!arduboy.nextFrame())
		return;
	
	arduboy.clear();

	uint8_t halfHeightIndex = ((HEIGHT - 1) / 2);
	for(uint8_t i=0; i<128; ++i)
	{
    	arduboy.drawPixel(i, round(static_cast<float>(Sin((i * 2) + j)) * halfHeightIndex) + halfHeightIndex);
    }
	++j;
	
	arduboy.display();
}
