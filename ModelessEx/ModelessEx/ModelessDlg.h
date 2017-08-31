#pragma once


// CModelessDlg dialog

class CModelessDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CModelessDlg)

public:
	CModelessDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CModelessDlg();

// Dialog Data
	enum { IDD = IDD_MODELESS_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
