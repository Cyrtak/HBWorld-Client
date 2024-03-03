// Effect.cpp: implementation of the CEffect class.
//
//////////////////////////////////////////////////////////////////////

#include "Effect.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CEffect::CEffect()
{
	m_sType       = NULL;
	m_cFrame      = -1;
	m_cMaxFrame   = NULL;
	m_dwTime      = NULL;
	m_dwFrameTime = NULL;
	m_iColor = -1;
}

CEffect::~CEffect()
{

}