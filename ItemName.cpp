// ItemName.cpp: implementation of the CItemName class.
//
//////////////////////////////////////////////////////////////////////

#include "ItemName.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CItemName::CItemName()
{
	ZeroMemory(m_cOriginName, sizeof(m_cOriginName));
	ZeroMemory(m_cName, sizeof(m_cName));

	ZeroMemory(m_cItemDescription1, sizeof(m_cItemDescription1));
	ZeroMemory(m_cItemDescription2, sizeof(m_cItemDescription2));
	ZeroMemory(m_cItemDescription3, sizeof(m_cItemDescription3));
}

CItemName::~CItemName()
{

}


