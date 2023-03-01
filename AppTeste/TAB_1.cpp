// TAB_1.cpp : implementation file
//

#include "pch.h"
#include "AppTeste.h"
#include "TAB_1.h"


// TAB_1

IMPLEMENT_DYNCREATE(TAB_1, CTabView)

TAB_1::TAB_1()
{

}

TAB_1::~TAB_1()
{
}

BEGIN_MESSAGE_MAP(TAB_1, CTabView)
END_MESSAGE_MAP()


// TAB_1 diagnostics

#ifdef _DEBUG
void TAB_1::AssertValid() const
{
	CTabView::AssertValid();
}

#ifndef _WIN32_WCE
void TAB_1::Dump(CDumpContext& dc) const
{
	CTabView::Dump(dc);
}
#endif
#endif //_DEBUG


// TAB_1 message handlers
