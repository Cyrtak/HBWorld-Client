// Title.cpp: implementation of the Title class.
//
//////////////////////////////////////////////////////////////////////

#include "Title.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Title::Title()
{
	ZeroMemory(m_cSubject, sizeof(m_cSubject));

	m_iCurrentNo = 0;
}

Title::~Title()
{

}
