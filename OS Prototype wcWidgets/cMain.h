#pragma once

#include "wx/wx.h"

// Inherit wxFrame(Parent frame, Frame ID
class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

	// Component Variables
	wxButton* m_btn1 = nullptr;
	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;

	wxPanel* m_panelBackground = nullptr;
	wxPanel* m_panelLayout = nullptr;
	wxPanel* m_panelData = nullptr;
	wxPanel* m_panelTest = nullptr;
	wxBoxSizer* m_sizer2 = nullptr;
	wxBoxSizer* m_sizer1 = nullptr;

	// Class Functions
	void OnButtonClicked(wxCommandEvent& evt);

	// Required to allow wxWidget events
	wxDECLARE_EVENT_TABLE();
};

