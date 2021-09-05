#pragma once

#include "wx/wx.h"
#include "wxImagePanel.h"

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
	wxBoxSizer* topInnertopSizer = nullptr;
	wxBoxSizer* topInnerBottomSizer = nullptr;
	wxBoxSizer* BottomInnertopSizer = nullptr;
	wxBoxSizer* BottomInnerBottomSizer = nullptr;

	// Layout Panel
	wxPanel* layoutHeaderPanel = nullptr;
	wxButton* layoutHeaderButton = nullptr;
	wxPanel* layoutPanel = nullptr;

	// Data Panel
	wxPanel* dataHeaderPanel = nullptr;
	wxButton* dataHeaderButton = nullptr;
	wxPanel* dataPanel = nullptr;

	// Network Layers Activations Panel
	wxPanel* networkLayersPanel = nullptr;
	wxPanel* networkLayersHeaderPanel = nullptr;
	wxButton* networkLayersHeaderButton = nullptr;
	
	// Node Image Activations Panel
	wxPanel* nodeImageActivationsHeaderPanel = nullptr;
	wxButton* nodeImageActivationsHeaderButton = nullptr;
	wxPanel* nodeImageActivationsPanel = nullptr;

	wxImagePanel* drawPane;

	// Class Functions
	void OnButtonClicked(wxCommandEvent& evt);

	// Required to allow wxWidget events
	wxDECLARE_EVENT_TABLE();
};

