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
	wxBoxSizer* topSizer = nullptr;
	wxBoxSizer* bottomSizer = nullptr;

	// Layout Panel
	wxPanel* layoutPanel = nullptr;
	wxButton* layoutButton = nullptr;

	// Data Panel
	wxPanel* dataPanel = nullptr;

	// Network Layers Activations Panel
	wxPanel* networkLayersPanel = nullptr;

	// Node Image Activations Panel
	wxPanel* nodeImageActivationsPanel = nullptr;

	// Class Functions
	void OnButtonClicked(wxCommandEvent& evt);

	// Required to allow wxWidget events
	wxDECLARE_EVENT_TABLE();
};

