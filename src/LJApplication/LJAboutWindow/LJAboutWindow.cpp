/*
	This file was generated by BeXL
	Copyright (c) 2000 Simon Huet
*/


#include <Application.h>
#include "message_labels.h"
#include "LJAboutWindow.h"

#include <Screen.h>



LJAboutWindow::LJAboutWindow()
 : BWindow(BRect(100, 295, 411, 464), "About AliveJournal", B_TITLED_WINDOW, 0, B_CURRENT_WORKSPACE)
{

	MainView = new LJAboutMainView();
	AddChild(MainView);
	SetSizeLimits(0, 1000, 0, 1000);

    char *title = new char[32];
    sprintf( title, "About AliveJournal v%s", VERSION_NUMBER );
    SetTitle( title );
    sprintf( title, "AliveJournal v%s", VERSION_NUMBER );
    MainView->titlestring->SetText( title );
    delete title;

    // Center the about box.
    BScreen *screen = new BScreen(this);
    int x = 0;
    int y = 0;

    x = screen->Frame().IntegerWidth() / 2;
    y = screen->Frame().IntegerHeight() / 2;

    x = x - Frame().IntegerWidth() / 2;
    y = y - Frame().IntegerHeight() / 2;

    MoveTo( x, y );
    
    delete screen;

}

LJAboutWindow::~LJAboutWindow(void)
{
}

bool
LJAboutWindow::QuitRequested(void)
{

    
    // This contains typical code blocks used inside BWindow::QuitRequested() 

    Hide();
    return false;

}


