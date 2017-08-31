
// ModelessEx.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CModelessExApp:
// See ModelessEx.cpp for the implementation of this class
//

class CModelessExApp : public CWinApp
{
public:
	CModelessExApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CModelessExApp theApp;