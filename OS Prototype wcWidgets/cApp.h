#pragma once

// include header files
#include "wx/wx.h"


class cApp : public wxApp // inherit wxApp
{
public:
	cApp();
	~cApp();

	virtual bool OnInit();

};