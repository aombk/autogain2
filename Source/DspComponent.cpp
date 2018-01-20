/*
  ==============================================================================

    DspComponent.cpp
    Created: 20 Jan 2018 3:47:48am
    Author:  aombk

  ==============================================================================
*/

#include "DspComponent.h"

float DspComponent::autoGainr(float inputSample, float resetAutoGain)
{
	//maxSample = fmax(maxSample, inputSample);
	if (maxSample<inputSample){maxSample=inputSample;}
	if (resetAutoGain < 0.0f) { maxSample = 0.0000001f; }
	float outputSample = inputSample/maxSample;
	std::cout << maxSample;
	return outputSample;
}