#pragma once

#include "wx/wx.h"

// Inherit wxFrame(Parent frame, Frame ID
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	// Main Frame Sizer
	wxBoxSizer* mainSizer = nullptr;

	// Layout Panel
	wxPanel* layoutPanel = nullptr;
	wxButton* layoutButton = nullptr;

	// Data Panel
	wxPanel* dataPanel = nullptr;

	// Class Functions
	void OnButtonClicked(wxCommandEvent& evt);

	// Required to allow wxWidget events
	wxDECLARE_EVENT_TABLE();
};

