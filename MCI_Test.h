
// MCI_Test.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'pch.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CMCITestApp:
// Siehe MCI_Test.cpp für die Implementierung dieser Klasse
//

class CMCITestApp : public CWinApp
{
public:
	CMCITestApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CMCITestApp theApp;
