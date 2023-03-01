
// AppTesteDlg.h : header file
//

#pragma once


// CAppTesteDlg dialog
class CAppTesteDlg : public CDialogEx
{
// Construction
public:
	CAppTesteDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_APPTESTE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnClickedInfo();
	afx_msg void OnBnClickedOk();
	CString LoginText;
	CString SenhaText;
	afx_msg void OnEnChangeLogintextfield();
	afx_msg void OnBnClickedCancel();
};
