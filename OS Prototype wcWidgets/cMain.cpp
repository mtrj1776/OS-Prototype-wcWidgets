/******************************************
Main wxWidgets Frame - No Parent

Author: Michael Johns
*******************************************/

#include "cMain.h"

#pragma region EVENT_TABLE_MACRO

// Event Table Entries macro
// (class event is for, base class)
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

	// Button Pressed (Windows button ID, Function to call)
	EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

#pragma endregion EVENT_TABLE_MACRO

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OS Prototype wcWidgets", wxDefaultPosition, wxDefaultSize)
{

/* ----------------------------------------------------------------------------
	Layout Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region layoutPanel

	// Layout Panel background and colour
	layoutPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
	layoutPanel->SetBackgroundColour(wxColour(100, 100, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	layoutButton = new wxButton(layoutPanel, 10001, "Layout", wxPoint(10, 10), wxSize(150, 50), wxBORDER_NONE | wxEXPAND);
	layoutButton->SetBackgroundColour(wxColor(100, 100, 100));

#pragma endregion layoutPanel

/* ----------------------------------------------------------------------------
	Data Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region dataPanel

	// Data Panel
	dataPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(40, 10));
	dataPanel->SetBackgroundColour(wxColor(200, 200, 100));

#pragma endregion dataPanel

/* ----------------------------------------------------------------------------
	Network Layers Activations Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region NetworkLayersActivation




#pragma endregion NetworkLayersActivation

/* ----------------------------------------------------------------------------
	Node Image Activations Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region NodeImageActivations


#pragma endregion NodeImageActivations

/* ----------------------------------------------------------------------------
	Main Sizer Frame Components and settings
-----------------------------------------------------------------------------*/
#pragma region mainSizer
	// Add panel sizer to control size
	mainSizer = new wxBoxSizer(wxVERTICAL);
	//m_sizer1->Add(m_panelBackground, 1, wxEXPAND);

	// Add Sizer(panel the sizer is controlling, amount of area to expand to, expand type | margins)
	// Layout Panel
	mainSizer->Add(layoutPanel, 1, wxEXPAND | wxLEFT | wxTOP | wxRIGHT, 5);

	// Data Panel
	mainSizer->Add(dataPanel, 1, wxEXPAND | wxALL, 5);

	// Build sizer layout
	this->SetSizerAndFit(mainSizer);

#pragma endregion mainSizer
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{

	mainSizer->Hide(layoutPanel);

	// Restructure panel size and layout
	mainSizer->Layout();

	// Event finished (do not look at parents for event methods)
	evt.Skip();

}


cMain::~cMain()
{

}