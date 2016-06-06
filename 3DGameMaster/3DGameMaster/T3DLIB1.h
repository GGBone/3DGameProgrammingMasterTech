#ifndef T3DLIB1
#define T3DLIB1
#include <Windows.h>
#define SCREEN_WIDTH			640
#define SCREEN_HEIGHT			320
#define SCREEN_BPP				8
#define MAX_COLORS_PALETTE		256
#define DEFAULT_PALETTE_FILE	"PALDATA2.PAL"
#define SCREEN_FULLSCREEN		0
#define SCREEN_WINDOWED			1

//bit map
#define BITMAP_ID					0x4D42
#define BITMAP_STATE_DEAD			0
#define BITMAP_STATE_ALIVE			1
#define BITMAP_STATE_DYING			2
#define BITMAP_ATTR_LOADED			128
#define BITMAP_EXTRACT_MODE_CELL	0
#define BITMAP_EXTRACT_MODE_ABS		1
#define DD_PIXEL_FORMAT8			8
#define DD_PIXEL_FORMAT555			15
#define DD_PIXEL_FORMAT565			16
#define DD_PIXEL_FORMAT888			24
#define DD_PIXEL_FORMATALPHA8888	32

//define for bobs
#define BOB_STATE_DEAD			0
#define BOB_STATE_ALIVE			1
#define BOB_STATE_DYING			2
#define BOB_STATE_ANIM_DONE		1
#define MAX_BOB_FRAMES			64
#define MAX_BOB_ANIMATIONS		16

#define BOB_ATTR_SINGLE_FRAME	1
#define BOB_ATTR_MULTI_FRAM		2
#define BOB_ATTR_MULTI_ANIN		4
#define BOB_ATTR_ANIM_ONE_SHOT	8
#define BOB_ATTR_ANIM_VISIBLE	16
#define BOB_ATTR_BONCE			32
#define BOB_ATTR_WRAPAROUND		64
#define BOB_ATTR_LOADED			128
#define BOB_ATTR_CLONE			256

#define SCREEN_DARKNESS		0
#define SCREEN_WHITENESS	1
#define SCREEN_SWIPE_X		2
#define SCREEN_SWIPE_Y		3
#define SCREEN_DISOLVE		4
#define SCREEN_SCRUNCH		5


#define BLINKER_ADD		0
#define BLINKER_DELETE	1
#define BLINKER_UPDATE	2
#define BLINKER_RUN		3



#define PI			((float)3.141592365f)
#define PI2			((float)6.283185307f)
#define PI_DIV_2	((float)1.570796327f)
#define PI_DIV_4	((float)0.785398163f)
#define PI_INV		((float)0.318309886f)


#define FIXP16_SHIFT		16
#define FIXP16_MAG			65536
#define FIXP16_DP_MASK		0x0000ffff
#define FIXP16_WP_MASK		0xffff0000
#define FIXP16_ROUND_UP		0x00008000

#define KEY_DOWN(vk_code)	((GetAsyncKeyState(vk_code)	& 0x8000)? 1 : 0)
#define KEY_UP(vk_code)		((GetAsyncKeyState)(vk_code)& 0x8000)? 0 : 1)

#define _RGB16BIT55(r,g,b)	((b & 31) + ((g & 31)<<5) + (r & 31)<< 10)

int Game_Init(void* parms = NULL);





#endif