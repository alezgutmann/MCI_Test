
// MCI_TestDlg.h: Headerdatei
//

#pragma once
#include "CMCIObject.h"

// CMCITestDlg-Dialogfeld
class CMCITestDlg : public CDialogEx
{
// Konstruktion
public:
	CMCITestDlg(CWnd* pParent = nullptr);	// Standardkonstruktor

// Dialogfelddaten
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MCI_TEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;
	CMCIObject mci;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedAudiomp3();
	afx_msg void OnBnClickedAudiocd();
	afx_msg void OnBnClickedAudiomidi();
	afx_msg void OnBnClickedAudiowav();
	afx_msg void OnBnClickedPlay();
	afx_msg void OnBnClickedStop();
	afx_msg void OnBnClickedClose();
	afx_msg void OnLbnSelchangeList1();
};
