// ModelessDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ModelessEx.h"
#include "ModelessDlg.h"
#include "afxdialogex.h"


// CModelessDlg dialog

IMPLEMENT_DYNAMIC(CModelessDlg, CDialogEx)

CModelessDlg::CModelessDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CModelessDlg::IDD, pParent)
{

}

CModelessDlg::~CModelessDlg()
{
}

void CModelessDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CModelessDlg, CDialogEx)
END_MESSAGE_MAP()


// CModelessDlg message handlers
