/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "GuiComponent.h"


//==============================================================================
/**
*/
class AutogainAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    AutogainAudioProcessorEditor (AutogainAudioProcessor&);
    ~AutogainAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    GuiComponent gui; //to display the Gui Component
    TooltipWindow tooltipWindow; //to display tooltips
    AutogainAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AutogainAudioProcessorEditor)
};
