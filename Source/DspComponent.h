/*
  ==============================================================================

    DspComponent.h
    Created: 20 Jan 2018 3:47:48am
    Author:  aombk

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class DspComponent
{
public:
	float autoGainr(float inputSample, float resetAutoGain);
private:
	float maxSample;
};