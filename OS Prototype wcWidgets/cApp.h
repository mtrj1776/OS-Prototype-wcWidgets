#pragma once

// include header files
#include "wx/wx.h"
#include "cMain.h"


class cApp : public wxApp // inherit wxApp
{
public:
	cApp();
	~cApp();

	virtual bool OnInit();

private:

	// first frame variable
	cMain* m_frame1 = nullptr;
};