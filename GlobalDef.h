/****************************************************************
*		 This client was writen by Diuuude & Snoopy81.			*
*					Based on Cleroth work.						*
*																*
*			V3.51 compatibility by Cleroth						*
*			V3.51 dialogs by Diuuude							*
*			Effects, mobs, Apocalypse, Heldenian				*
*			& finalizing by Snoopy81							*
*			V3.82 Crafting & Angels by Snoopy81					*
*****************************************************************/

/****************************************************************
*	Find here all compilation options							*
*	I removed useless ones and tryed to add some explanations	*
*	( Snoopy81 06/2005 )										*
*****************************************************************/

/*** Put here global data for your server ***/
#define NAME_WORLDNAME1			"HBW1" // Name for default (1st) server
#define MSG_WORLDNAME1			"Hellbreath World" // Long name for 1st server...
#define MSG_HOMEPAGE			"http://www.hellbreathworld.com"
#define DEF_UPPERVERSION		4
#define DEF_LOWERVERSION		002
#define DEF_SERVER_IP			"192.168.2.88" //"67.19.2.226"
#define DEF_SERVER_PORT			5832
#define DEF_PRESHARED			"Ktyu7890Y&)N£_(mf8ieAS83j8dAJS*y3h801j_)A_Kmf0hf842AFi9K@21!rr3~~#a@e"


/*** Some more compilation options ***/
//#define DEF_USING_WIN_IME		// Used for unicode characters (unchecked)
#define DEF_MAKE_ACCOUNT		// Enable acc creation. Missing sprites, fixed!
//#define DEF_SELECTSERVER		// Show/Hides server selection screen.DEF_MSGBUFFERSIZE

// #define DEF_COMMA_GOLD		// Allows to show comma nbe as original HB (ie: 1,200,000)
// #define DEF_4XXP_PER_LVL		// limits xp niv 140, then 4 x XP per lvl (affects XP shown as % on status)


#define  _DEBUG				// Multi-Client, Instant-logout, Version check, Badwords,
								// Mics debug msgs, CtrlQ for admins, Show status, Cursor position
#define DEF_WINDOWED_MODE		// Shows HB in a windowed mode (for debug purpose only, sprite will bug....)



/*** Special conditions   ***/
#ifndef _DEBUG
	#undef DEF_WINDOWED_MODE
#endif
