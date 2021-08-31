/******************************************
Main wxWidgets Frame - No Parent

Author: Michael Johns
*******************************************/

#include "cMain.h"

// Event Table Entries macro
// (class event is for, base class)
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	// Button Pressed (Windows button ID, Function to call)
	EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OS Prototype wcWidgets", wxDefaultPosition, wxDefaultSize)
{
	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size
	m_btn1 = new wxButton(this, 10001, "Click ME", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

	// Layout Panel background and colour
	m_panelLayout = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(200, 100));
	m_panelLayout->SetBackgroundColour(wxColour(100, 100, 200));

	// Data Panel
	m_panelData = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(300, 50));
	m_panelData->SetBackgroundColour(wxColor(100, 200, 100));

	// Add panel sizer to control size
	m_sizer1 = new wxBoxSizer(wxVERTICAL);

	// Add Sizer(panel the sizer is controlling, amount of area to expand to, expand type | margins)

	// Layout Panel
	m_sizer1->Add(m_panelLayout, 1, wxEXPAND | wxLEFT | wxTOP | wxRIGHT, 5);

	// Data Panel
	m_sizer1->Add(m_panelData, 1, wxEXPAND | wxALL, 5);

	this->SetSizerAndFit(m_sizer1);
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	// append string
	m_list1->AppendString(m_txt1->GetValue());
	// Tell event has finished
	evt.Skip();
}

