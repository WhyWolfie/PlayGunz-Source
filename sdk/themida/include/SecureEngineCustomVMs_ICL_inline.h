/******************************************************************************
 * Header: SecureEngineCustomVMs_ICL_inline.h
 * Description: ICL inline assembly macros definitions
 *
 * Author/s: Oreans Technologies 
 * (c) 2013 Oreans Technologies
 *
 * --- File generated automatically from Oreans VM Generator (14/9/2013) ---
 ******************************************************************************/

/***********************************************
 * Definition as inline assembly
 ***********************************************/

#ifdef PLATFORM_X32

#define VM_TIGER_WHITE_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x64 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_WHITE_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF4 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_RED_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x65 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_RED_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF5 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_BLACK_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x66 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_BLACK_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF6 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_WHITE_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6A \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_WHITE_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFA \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_RED_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6C \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_RED_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFC \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_BLACK_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6E \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_BLACK_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFE \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#endif

#ifdef PLATFORM_X64

#define VM_TIGER_WHITE_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x67 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_WHITE_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF7 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_RED_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x68 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_RED_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF8 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_BLACK_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x69 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_TIGER_BLACK_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xF9 \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_WHITE_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6B \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_WHITE_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFB \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_RED_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6D \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_RED_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFD \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_BLACK_START \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0x6F \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#define VM_FISH_BLACK_END \
  __asm __emit 0xEB \
  __asm __emit 0x10 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \
  __asm __emit 0xFF \
  __asm __emit 0x01 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x00 \
  __asm __emit 0x57\
  __asm __emit 0x4C\
  __asm __emit 0x20 \
  __asm __emit 0x20 \

#endif

