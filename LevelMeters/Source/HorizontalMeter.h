#pragma once

#include <JuceHeader.h>

namespace Gui
{
	class HorizontalMeter : public Component 
	{
	public : 
		void paint(Graphics& g) override {

			auto bounds = getLocalBounds().toFloat();

			g.setColour(Colours::white.withBrightness(0.4f));
			g.fillRoundedRectangle(bounds, 5.f);

			g.setColour(Colours::white);
			// we will map the level from -60.0f dB / 6.0f dB to 0 / width of the rectangle

			const auto ScaledX = jmap(level, 60.0f, +6.f, 0.f, static_cast<float>(getWidth()));

			g.fillRoundedRectangle(bounds.removeFromLeft(ScaledX), 5.f);
		};
		void setLevel(const float value) { level = value; }
	private :
		float level = -60.0f;
	};
}