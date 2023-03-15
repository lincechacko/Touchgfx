#include <gui/startup_screen_screen/Startup_ScreenView.hpp>

Startup_ScreenView::Startup_ScreenView()
{

}

void Startup_ScreenView::setupScreen()
{
    Startup_ScreenViewBase::setupScreen();
}

void Startup_ScreenView::tearDownScreen()
{
    Startup_ScreenViewBase::tearDownScreen();
}
void Startup_ScreenView::handleTickEvent()
{
	const uint8_t string[]="shutting down";
	Unicode::fromUTF8(string, textArea2Buffer, 20);
	textArea2.setWildcard(textArea2Buffer);
    textArea2.resizeToCurrentText();
    textArea2.invalidate();

        const uint8_t string1[]="Bye";
    	Unicode::fromUTF8(string1, textArea1Buffer, 20);
    	textArea1.setWildcard(textArea1Buffer);
        //textArea1.resizeToCurrentText();
        textArea1.invalidate();
}
