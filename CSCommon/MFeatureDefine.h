
#pragma once

// 기능이 국가별로 출시된 상황이 다른 경우 define으로 국가 선별을 해줍니다
// cscommon에 이 define을 만든 이유는 서버와 클라에 동시에 적용되도록 하기 위함입니다


#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA) || defined(LOCALE_NHNUSA) || defined(LOCALE_JAPAN) || defined(LOCALE_BRAZIL)
	#define _AVATAR_ENABLE	// 아바타 지원 여부
#endif

//#if defined(_DEBUG) || defined(_RELEASE) || defined(LOCALE_KOREA)
#if 0
#	define _SELL_CASHITEM	// 캐쉬 아이템 되팔기 기능
#endif

//ect

#define _PLAYGUNZ 1
//#define _SERIAL_KEY	1 //Siempre ON
#define _MAP_LOGIN	1
#define _GGZ		1
#define _MIPING		1
#define _SRVRPNG	1
#define _MULTICLIENT	1 //Siempre OFF
#define _SYSTEMUPDATETIME (5 * 60 * 1000)
//#define _XMAS 1
//#define _MOVING_CAMERA_AFTER_CHAR_SEL 1
//#define _EMOTICON 1

//AntiHack

#define _ANTISB 1 //SIEMPRE ON
//#define _SHOTBOT
#define	DETOURS_X86
#define	DETOURS_32BIT

//RandomNotice

#define _RANDOMNOTICE 1
#define _RANDOMNOTICETIME (10 * 60 * 1000) // = Minutos * segundos * milisegundos
#define _RANDOMNOTICEMSG1 "Feliz Navidad y Prospero Ano Nuevo!"
#define _RANDOMNOTICEMSG2 "Merry Christmas and Happy New Year"
#define _RANDOMNOTICEMSG3 "Donaciones NO - Disponibles!"
#define _RANDOMNOTICEMSG4 "Use the ^5/commands^2 command to see the list."
#define _RANDOMNOTICEMSG5 "Para comprar cash ir a web del servidor"
#define _RANDOMNOTICEMSG6 "Estamos preparando un Torneo muy pronto asi que preparense!"
#define _RANDOMNOTICEMSG7 "Estamos preparando muchas sopresas para ustedes!"
#define _RANDOMNOTICEMSG8 "Tenemos nuevas quest para mejor entretencion"
#define _RANDOMNOTICEMSG9 "Estamos implementando nuevas class en modo Duel Tournament"
#define _RANDOMNOTICEMSG10 "Con el comando ^8/rejoin ^2Te puedes volver a la partida de clan wars."
#define _RANDOMNOTICEMSG11 "El mejor anti-lead 100% funcional ^3GunzTheDuel.."


//--No Work--

//#define _NOUPDATEFILE 1
//#define _HITMAKERCOD 1
//#define _ENCRYPT	1
//define _ZPROTECT28 1
//#define _2PCLAN		1
#define _AUTOEVENT 1
#define _AUTOEVENT (1 * 60 * 1000) //60 minutos hora cada auto evento xD