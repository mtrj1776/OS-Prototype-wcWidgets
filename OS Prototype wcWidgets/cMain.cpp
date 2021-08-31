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

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OS Prototype wcWidgets", wxPoint(30, 30), wxSize(800, 600))
{
	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size
	m_btn1 = new wxButton(this, 10001, "Click ME", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
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

