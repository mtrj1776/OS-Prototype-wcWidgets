/******************************************
Helper Class to enable GUI initialisation


*******************************************/

#include "cApp.h"

// Automatically generate WinMain function
wxIMPLEMENT_APP(cApp);

// Main constructor for cApp
cApp::cApp()
{

}

// Deconstructor for cApp
// (Where you delete memory allocated with 'new' and 'delete')
cApp::~cApp()
{
    // wxWidgets handles deletion of objects.
    // Any arrays will need to be deleted if created with a new command
}

// OnInit Function (entry point to initialise variables
bool cApp::OnInit()
{

    // Create new instance of main
    m_frame1 = new cMain();
    // Show main window
    m_frame1->IsMaximized();
    m_frame1->EnableCloseButton();
    m_frame1->Show();

    return true;
}