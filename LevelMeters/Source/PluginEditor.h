#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "HorizontalMeter.h"

//==============================================================================
/**
*/
class LevelMetersAudioProcessorEditor  : public juce::AudioProcessorEditor, public Timer
{
public:
    LevelMetersAudioProcessorEditor (LevelMetersAudioProcessor&);
    ~LevelMetersAudioProcessorEditor() override;

    void timerCallback() override;
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    LevelMetersAudioProcessor& audioProcessor;

    Gui::HorizontalMeter horizontalMeterR, horizontalMeterL;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LevelMetersAudioProcessorEditor)
};
