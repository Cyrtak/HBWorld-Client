// Item.h: interface for the CItem class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ITEM_H__211A1360_91B9_11D2_B143_00001C7030A6__INCLUDED_)
#define AFX_ITEM_H__211A1360_91B9_11D2_B143_00001C7030A6__INCLUDED_

#include <windows.h>

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#define DEF_MAXITEMEQUIPPOS		15
#define DEF_EQUIPPOS_NONE		0
#define DEF_EQUIPPOS_HEAD		1
#define DEF_EQUIPPOS_BODY		2
#define DEF_EQUIPPOS_ARMS		3
#define DEF_EQUIPPOS_PANTS		4
#define DEF_EQUIPPOS_BOOTS		5
#define DEF_EQUIPPOS_NECK		6
#define DEF_EQUIPPOS_LHAND		7
#define DEF_EQUIPPOS_RHAND		8
#define DEF_EQUIPPOS_TWOHAND	9
#define DEF_EQUIPPOS_RFINGER	10
#define DEF_EQUIPPOS_LFINGER	11
#define DEF_EQUIPPOS_BACK		12
#define DEF_EQUIPPOS_FULLBODY	13

#define DEF_ITEMTYPE_NONE			0
#define DEF_ITEMTYPE_EQUIP			1
#define DEF_ITEMTYPE_APPLY			2
#define DEF_ITEMTYPE_USE_DEPLETE	3
#define DEF_ITEMTYPE_INSTALL		4
#define DEF_ITEMTYPE_CONSUME		5
#define DEF_ITEMTYPE_ARROW			6
#define DEF_ITEMTYPE_EAT			7
#define DEF_ITEMTYPE_USE_SKILL		8
#define DEF_ITEMTYPE_USE_PERM		9
#define DEF_ITEMTYPE_USE_SKILL_ENABLEDIALOGBOX	10
#define DEF_ITEMTYPE_USE_DEPLETE_DEST			11
#define DEF_ITEMTYPE_MATERIAL					12
#define DEF_ITEMTYPE_EQUIP_CONSUME				13
#define DEF_ITEMTYPE_SUMMON						14

#define DEF_GEM_POWER						1553
#define DEF_GEM_HYPNO						1554
#define DEF_GEM_HARD						1555
#define DEF_GEM_PRECISION					1556
#define DEF_GEM_SWIFT						1557
#define DEF_GEM_SMART						1558
#define DEF_GEM_CURSE						1559
#define DEF_GEM_BLOOD						1560
#define DEF_GEM_CHANELLING					1561
#define DEF_GEM_PENETRATE					1562
#define DEF_GEM_FRAGILE						1563
#define DEF_GEM_EMULATE						1564
#define DEF_GEM_SACRIFICE					1565
#define DEF_GEM_TWISTED						1566
#define DEF_GEM_ENDURE						1567
#define DEF_GEM_FIRM						1568
#define DEF_GEM_SHINING						1569
#define DEF_GEM_MOON						1570
#define DEF_GEM_STAR						1571
#define DEF_GEM_SOUL						1572
#define DEF_GEM_CRITICAL					1573
#define DEF_GEM_SHADOW						1574
#define DEF_GEM_FROST						1575
#define DEF_GEM_BLAZE						1576
#define DEF_GEM_BOLT						1577
#define DEF_GEM_STONE						1578
#define DEF_GEM_KLONESS						1579
#define DEF_GEM_CORRUPT						1580
#define DEF_GEM_SHATTER						1581
#define DEF_GEM_SILENCE						1582
#define DEF_GEM_BALANCE						1583
#define DEF_GEM_DISPLACE					1584

class CItem  
{
public:
	CItem();
	virtual ~CItem();
	DWORD m_dwElement; // VAMP - elemental armours
	char  m_cName[21];
	char  m_cItemType;
	char  m_cEquipPos;
	char  m_cItemColor;
	char  m_cSpeed;
	char  m_cGenderLimit;
//	short m_sItemEffectType;
	short m_sLevelLimit;
	short m_sSprite;
	short m_sSpriteFrame;
	short m_sX, m_sY;
	short m_sItemSpecEffectValue1, m_sItemSpecEffectValue2, m_sItemSpecEffectValue3;
	short m_sItemEffectValue1, m_sItemEffectValue2, m_sItemEffectValue3, m_sItemEffectValue4, m_sItemEffectValue5, m_sItemEffectValue6; 
	WORD  m_wCurLifeSpan;
	WORD  m_wMaxLifeSpan;
	DWORD m_wPrice;
	WORD  m_wWeight;
	DWORD m_dwCount;
	DWORD m_dwAttribute;
};

#endif // !defined(AFX_ITEM_H__211A1360_91B9_11D2_B143_00001C7030A6__INCLUDED_)
