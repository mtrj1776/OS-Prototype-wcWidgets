/******************************************
Main wxWidgets Frame - No Parent

Author: Michael Johns
*******************************************/

#include "cMain.h"

// Enum to store human frinedly values
enum btn
{
	LayoutHeaderButton = 10001,
	NetworkLayersHeaderButton = 10002,
	DataHeaderButton = 10003,
	NodeImageActivationsHeaderButton = 10004,
};

#pragma region EVENT_TABLE_MACRO

// Event Table Entries macro
// (class event is for, base class)
wxBEGIN_EVENT_TABLE(cMain, wxFrame)

	// Button Pressed (Windows button ID, Function to call)
	EVT_BUTTON(10001, OnButtonClicked)
	EVT_BUTTON(10002, OnButtonClicked)
	EVT_BUTTON(10003, OnButtonClicked)
	EVT_BUTTON(10004, OnButtonClicked)

wxEND_EVENT_TABLE()

#pragma endregion EVENT_TABLE_MACRO

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OS Prototype wcWidgets")
{
/* ----------------------------------------------------------------------------
	Layout and Network Layers Header Panel and Buttons Sizer
-----------------------------------------------------------------------------*/
#pragma region TopInnerTopSizer

	// Layout Panel background and colour
	layoutHeaderPanel = new wxPanel(this, wxID_ANY);
	layoutHeaderPanel->SetBackgroundColour(wxColour(100, 150, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	layoutHeaderButton = new wxButton(layoutHeaderPanel, btn::LayoutHeaderButton, "Layout", wxPoint(0, 0), wxSize(150, 50), wxBORDER_NONE);
	layoutHeaderButton->SetBackgroundColour(wxColor(100, 100, 100));
	
	// Network Layers Panel background and colour
	networkLayersHeaderPanel = new wxPanel(this, wxID_ANY);
	networkLayersHeaderPanel->SetBackgroundColour(wxColour(100, 100, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	networkLayersHeaderButton = new wxButton(networkLayersHeaderPanel, btn::NetworkLayersHeaderButton, "Network Layers", wxPoint(0, 0), wxSize(150, 50), wxBORDER_NONE);
	networkLayersHeaderButton->SetBackgroundColour(wxColor(100, 150, 100));

	topInnertopSizer = new wxBoxSizer(wxHORIZONTAL);
	topInnertopSizer->Add(layoutHeaderPanel, 1, wxEXPAND);// | wxALL, 1);
	topInnertopSizer->Add(networkLayersHeaderPanel, 1, wxEXPAND);// | wxALL, 1);

#pragma endregion TopInnerTopSizer

/* ----------------------------------------------------------------------------
	Layout and Network Layers Main Panel Sizer
-----------------------------------------------------------------------------*/
#pragma region TopInnerBottomSizer

/* ----------------------------------------------------------------------------
	Layout Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region layoutPanel

// Layout Panel background and colour
	layoutPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	layoutPanel->SetBackgroundColour(wxColour(100, 100, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	//layoutButton = new wxButton(layoutPanel, btn::LayoutHeaderButton, "Layout", wxPoint(0, 0), wxSize(150, 50), wxBORDER_NONE);
	//layoutButton->SetBackgroundColour(wxColor(100, 100, 100));

#pragma endregion layoutPanel

/* ----------------------------------------------------------------------------
	Network Layers Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region NetworkLayers
	networkLayersPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	networkLayersPanel->SetBackgroundColour(wxColor(200, 100, 100));


#pragma endregion NetworkLayers

	topInnerBottomSizer = new wxBoxSizer(wxHORIZONTAL);
	topInnerBottomSizer->Add(layoutPanel, 1, wxEXPAND);// | wxLEFT | wxRIGHT | wxBOTTOM, 1);
	topInnerBottomSizer->Add(networkLayersPanel, 1, wxEXPAND);// | wxRIGHT | wxBOTTOM, 1);

#pragma endregion TopInnerBottomSizer

/* ----------------------------------------------------------------------------
	Top Sizer
-----------------------------------------------------------------------------*/
#pragma region TopSizer

	// Add panel sizer to control size
	topSizer = new wxBoxSizer(wxVERTICAL);
	topSizer->Add(topInnertopSizer, 0.1, wxEXPAND);// | wxTOP | wxRIGHT | wxLEFT, 1);
	topSizer->Add(topInnerBottomSizer, 1, wxEXPAND | wxBOTTOM, 1);// | wxTOP | wxRIGHT | wxLEFT, 1);

#pragma endregion TopSizer

/* ----------------------------------------------------------------------------
	Layout and Network Layers Header Panel and Buttons Sizer
-----------------------------------------------------------------------------*/
	// Data Panel background and colour
	dataHeaderPanel = new wxPanel(this, wxID_ANY);
	dataHeaderPanel->SetBackgroundColour(wxColour(100, 150, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	dataHeaderButton = new wxButton(dataHeaderPanel, btn::DataHeaderButton, "Data", wxPoint(0, 0), wxSize(150, 50), wxBORDER_NONE);
	dataHeaderButton->SetBackgroundColour(wxColor(100, 100, 100));

	// Node Image Activations Panel background and colour
	nodeImageActivationsHeaderPanel = new wxPanel(this, wxID_ANY);
	nodeImageActivationsHeaderPanel->SetBackgroundColour(wxColour(100, 150, 200));

	// Construct button (parent, Frame ID, Button Text, Position inside parent frame, button size | options)
	nodeImageActivationsHeaderButton = new wxButton(nodeImageActivationsHeaderPanel, btn::NodeImageActivationsHeaderButton, "Node Image Activations", wxPoint(0, 0), wxSize(150, 50), wxBORDER_NONE);
	nodeImageActivationsHeaderButton->SetBackgroundColour(wxColor(100, 100, 100));

	BottomInnertopSizer = new wxBoxSizer(wxHORIZONTAL);
	BottomInnertopSizer->Add(dataHeaderPanel, 1, wxEXPAND | wxRIGHT | wxBOTTOM | wxLEFT, 5);
	BottomInnertopSizer->Add(nodeImageActivationsHeaderPanel, 1, wxEXPAND | wxRIGHT | wxBOTTOM | wxLEFT, 5);

/* ----------------------------------------------------------------------------
	Data Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region dataPanel

	// Data Panel
	dataPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	dataPanel->SetBackgroundColour(wxColor(200, 200, 100));

#pragma endregion dataPanel



/* ----------------------------------------------------------------------------
	Node Image Activations Panel Components and settings
-----------------------------------------------------------------------------*/
#pragma region NodeImageActivations

	nodeImageActivationsPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
	nodeImageActivationsPanel->SetBackgroundColour(wxColor(200, 100, 200));

	// Add panel sizer to control size
	BottomInnerBottomSizer = new wxBoxSizer(wxHORIZONTAL);

	// Node Image Activations Panel
	BottomInnerBottomSizer->Add(dataPanel, 1, wxEXPAND | wxRIGHT | wxBOTTOM | wxLEFT, 5);
	BottomInnerBottomSizer->Add(nodeImageActivationsPanel, 1, wxEXPAND | wxRIGHT | wxBOTTOM | wxLEFT, 5);
	drawPane = new wxImagePanel(this, wxT("DeepLearningrepos\\toponet\\toponetvis_outputs\\shapes\\shapes40x40_c32c32c32c08_classifier_top09_maxactimages\\conv2d\\unit_0000\\maxim_006.png"), wxBITMAP_TYPE_JPEG);

#pragma endregion NodeImageActivations

/* ----------------------------------------------------------------------------
		Bottom Sizer
-----------------------------------------------------------------------------*/
#pragma region BottomSizer

	// Add panel sizer to control size
	bottomSizer = new wxBoxSizer(wxVERTICAL);
	bottomSizer->Add(BottomInnertopSizer, 0.1, wxEXPAND);// | wxTOP | wxRIGHT | wxLEFT, 1);
	bottomSizer->Add(BottomInnerBottomSizer, 1, wxEXPAND | wxBOTTOM, 1);// | wxTOP | wxRIGHT | wxLEFT, 1);
	bottomSizer->Add(drawPane, 1, wxEXPAND);

#pragma endregion BottomSizer

/* ----------------------------------------------------------------------------
	Main Sizer Frame Components and settings
-----------------------------------------------------------------------------*/
#pragma region mainSizer
	// Add panel sizer to control size
	mainSizer = new wxBoxSizer(wxVERTICAL);

	mainSizer->Add(topSizer, 1, wxEXPAND | wxTOP | wxRIGHT | wxLEFT, 1);

	mainSizer->Add(bottomSizer, 1, wxEXPAND | wxRIGHT | wxLEFT | wxBOTTOM, 1);

	// Build sizer layout
	this->SetSizerAndFit(mainSizer);


#pragma endregion mainSizer
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	switch (evt.GetId())
	{
	case btn::LayoutHeaderButton:
		if (layoutPanel->IsShown())
		{
			layoutPanel->Hide();
			topInnerBottomSizer->Layout();
		}
		else
		{
			layoutPanel->Show();
			topInnerBottomSizer->Layout();
		}
		break;
	case btn::NetworkLayersHeaderButton:
		if (networkLayersPanel->IsShown())
		{
			networkLayersPanel->Hide();
			topInnerBottomSizer->Layout();
		}
		else
		{
			networkLayersPanel->Show();
			topInnerBottomSizer->Layout();
		}
		break;
	case btn::DataHeaderButton:
		if (dataPanel->IsShown())
		{
			dataPanel->Hide();
			BottomInnerBottomSizer->Layout();
		}
		else
		{
			dataPanel->Show();
			BottomInnerBottomSizer->Layout();
		}
		break;
	case btn::NodeImageActivationsHeaderButton:
		if (nodeImageActivationsPanel->IsShown())
		{
			//nodeImageActivationsPanel->Hide();
			dataPanel->Hide();
			//networkLayersPanel->Hide();
			//networkLayersHeaderPanel->Hide();
			//layoutPanel->Hide();
			//layoutHeaderPanel->Hide();
			topSizer->Hide(topInnertopSizer);
			topSizer->Hide(topInnerBottomSizer);
			topSizer->Layout();
			bottomSizer->Layout();
			//BottomInnerBottomSizer->Layout();
		}
		else
		{
			nodeImageActivationsPanel->Show();
			BottomInnerBottomSizer->Layout();
		}
		break;
	default:
		break;
	}


	// Event finished (do not look at parents for event methods)
	evt.Skip();

}


cMain::~cMain()
{

}