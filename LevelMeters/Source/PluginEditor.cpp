/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
LevelMetersAudioProcessorEditor::LevelMetersAudioProcessorEditor (LevelMetersAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    addAndMakeVisible(horizontalMeterL);
    addAndMakeVisible(horizontalMeterR);
    setSize (400, 300);
}

LevelMetersAudioProcessorEditor::~LevelMetersAudioProcessorEditor()
{
}

void LevelMeterAudioProcessorEditor::timerCallback()
{

}
//==============================================================================
void LevelMetersAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(Colours::darkgrey);
}

void LevelMetersAudioProcessorEditor::resized()
{
    horizontalMeterL.setBounds(100, 100, 200, 15);
    horizontalMeterR.setBounds(100, 120, 200, 15);
}