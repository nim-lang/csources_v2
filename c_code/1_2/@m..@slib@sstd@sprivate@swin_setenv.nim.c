/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A;
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA tySequence__lBgZ7a89beZGYPl8PiANMTA;
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content tySequence__lBgZ7a89beZGYPl8PiANMTA_Content;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A {
NI bytes;
NI16* data;
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
struct tySequence__lBgZ7a89beZGYPl8PiANMTA {
  NI len; tySequence__lBgZ7a89beZGYPl8PiANMTA_Content* p;
};
typedef N_STDCALL_PTR(NI32, tyProc__bqj9c9cp9clcknaC0kHFkuNVg) (NI16* lpName__ukDV9b5jNdOUonNNYJAx6Gw, NI16* lpValue__iD9aJfyd1pOu3Kvk8i07cgg);


#ifndef tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
#define tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content { NI cap; NIM_CHAR data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_41)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A x__NBa1pzleDFoqbT7nhVpSnA);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A, newWideCString__stdZwidestrs_287)(NimStringV2 s__TvPuMx6CGjgZlMxAat9b5Ug);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_6)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A* a__T5KnFC1i1GXKLoRVEXa5DA);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest__C2JKGPCNdWKCPrsQvNywTQ);
static N_INLINE(void, appendString)(NimStringV2* dest__Ws6Yi19bfxrbjCy9a9brzRV7A, NimStringV2 src__369aqaoei6FUsRf9cDAsKQ2g);
static N_INLINE(void, copyMem__system_1719)(void* dest__fJYjxXM6yYjbZ9agQpPnNNA, void* source__Y6ZnHEKiVLswf16AMGuQUA, NI size__YLlwRG7Z9bTiXmiSwU9cUHeA);
static N_INLINE(void, nimCopyMem)(void* dest__HMDJtGX4ficduS9cTUiey0w, void* source__xDZEU1SRcEBuZ8mtbKQBhQ, NI size__9b8g0WMA1h1RvMwHOMW7yFA);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space__9cQ1OhOryhnk7At3WzUsjtA);
N_LIB_PRIVATE N_NIMCALL(tySequence__lBgZ7a89beZGYPl8PiANMTA, newSeq__stdZprivateZwin95setenv_137)(NI len__p49b9b5HIylhMqZoxjxlq7QA);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZprivateZwin95setenv_145)(tySequence__lBgZ7a89beZGYPl8PiANMTA* dest__roU2YOy9a9a9beBr400TJtMRA);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringV2 path__mVVz6IhYgAuxNFAJ1iPf0w);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringV2 path__uI3Yjbv02TUCxNtkqeBT7g);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib__Ve504f5n5pluBiC1QHdYAg, NCSTRING name__G5vRZARY8RIDXS1SbIlXmQ);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_2 = { 1 | NIM_STRLIT_FLAG, "=" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_3 = {1, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_4 = { 3 | NIM_STRLIT_FLAG, "=  " };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_5 = {3, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_4};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_8 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_9 = {8, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_8};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_10 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_11 = {8, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_10};
extern NIM_CHAR** _environ;
extern NIM_BOOL nimInErrorMode__system_3980;
static void* TM__UOYsq9cbb0VE8vr3Xt181HA_6;
tyProc__bqj9c9cp9clcknaC0kHFkuNVg Dl_1694498819_;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a__tZiCJHYy5dYyAh9cxwrrVhQ, v__iM7JOvZxArJIvbhGyRZG6Q, ((size_t) (size__ntsFNLS0mpvnjQFrZT7DCw)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p__BuPKoq7dppy2upaj3KUaxw, ((int)0), size__ttWVm79bajRU3tarcA7MkLw);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NI16*, toWideCString__stdZwidestrs_41)(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A x__NBa1pzleDFoqbT7nhVpSnA) {
	NI16* result;
	result = (NI16*)0;
	result = x__NBa1pzleDFoqbT7nhVpSnA.data;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest__HMDJtGX4ficduS9cTUiey0w, void* source__xDZEU1SRcEBuZ8mtbKQBhQ, NI size__9b8g0WMA1h1RvMwHOMW7yFA) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest__HMDJtGX4ficduS9cTUiey0w, source__xDZEU1SRcEBuZ8mtbKQBhQ, ((size_t) (size__9b8g0WMA1h1RvMwHOMW7yFA)));
}
static N_INLINE(void, copyMem__system_1719)(void* dest__fJYjxXM6yYjbZ9agQpPnNNA, void* source__Y6ZnHEKiVLswf16AMGuQUA, NI size__YLlwRG7Z9bTiXmiSwU9cUHeA) {
	nimCopyMem(dest__fJYjxXM6yYjbZ9agQpPnNNA, source__Y6ZnHEKiVLswf16AMGuQUA, size__YLlwRG7Z9bTiXmiSwU9cUHeA);
}
static N_INLINE(void, appendString)(NimStringV2* dest__Ws6Yi19bfxrbjCy9a9brzRV7A, NimStringV2 src__369aqaoei6FUsRf9cDAsKQ2g) {
	{
		if (!(((NI)0) < src__369aqaoei6FUsRf9cDAsKQ2g.len)) goto LA3_;
		copyMem__system_1719(((void*) ((&(*(*dest__Ws6Yi19bfxrbjCy9a9brzRV7A).p).data[(*dest__Ws6Yi19bfxrbjCy9a9brzRV7A).len]))), ((void*) ((&(*src__369aqaoei6FUsRf9cDAsKQ2g.p).data[((NI)0)]))), ((NI) ((NI)(src__369aqaoei6FUsRf9cDAsKQ2g.len + ((NI)1)))));
		(*dest__Ws6Yi19bfxrbjCy9a9brzRV7A).len += src__369aqaoei6FUsRf9cDAsKQ2g.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl__stdZprivateZwin95setenv_18)(NimStringV2 name__7UtkvHsg9cAzgLrO9c4Husfg, NimStringV2 value__DbyBadodAg65gu7WGj6wAw, int overwrite__kAWWbsPvPmNQIX89b59aNjeg) {
	int result;
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD_;
	NimStringV2 colontmpD__2;
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD__3;
	tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD__4;
	NI16* wideName;
NIM_BOOL oldNimErrFin13_;
	NI16* envstring_2;
	NimStringV2 T21_;
	NI16* s;
	wchar_t* T27_;
	wchar_t* T28_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	nimZeroMem((void*)(&colontmpD__3), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	nimZeroMem((void*)(&colontmpD__4), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
	colontmpD_ = newWideCString__stdZwidestrs_287(name__7UtkvHsg9cAzgLrO9c4Husfg);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	wideName = toWideCString__stdZwidestrs_41(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		NIM_BOOL T4_;
		wchar_t* T6_;
		T4_ = (NIM_BOOL)0;
		T4_ = (overwrite__kAWWbsPvPmNQIX89b59aNjeg == ((NI32)0));
		if (!(T4_)) goto LA5_;
		T6_ = (wchar_t*)0;
		T6_ = _wgetenv(((wchar_t*) (wideName)));
		T4_ = !((T6_ == ((wchar_t*) NIM_NIL)));
		LA5_: ;
		if (!T4_) goto LA7_;
		result = ((int)0);
		eqdestroy___stdZwidestrs_6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA7_: ;
	{
		NimStringV2 colontmpD__5;
		tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A colontmpD__6;
		NI16* envstring;
		NimStringV2 T14_;
		int e;
		if (!!((value__DbyBadodAg65gu7WGj6wAw.len == 0))) goto LA11_;
		colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
		nimZeroMem((void*)(&colontmpD__6), sizeof(tyObject_WideCStringObj__BwbUsAz4qeNPsD7q6SJ32A));
		T14_.len = 0; T14_.p = NIM_NIL;
		T14_ = rawNewString(name__7UtkvHsg9cAzgLrO9c4Husfg.len + value__DbyBadodAg65gu7WGj6wAw.len + 1);
appendString((&T14_), name__7UtkvHsg9cAzgLrO9c4Husfg);
appendString((&T14_), TM__UOYsq9cbb0VE8vr3Xt181HA_3);
appendString((&T14_), value__DbyBadodAg65gu7WGj6wAw);
		colontmpD__5 = T14_;
		colontmpD__6 = newWideCString__stdZwidestrs_287(colontmpD__5);
		if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
		envstring = toWideCString__stdZwidestrs_41(colontmpD__6);
		if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
		e = _wputenv(((wchar_t*) (envstring)));
		{
			if (!!((e == ((NI32)0)))) goto LA17_;
			errno = ((int)22);
			result = ((int)-1);
			eqdestroy___stdZwidestrs_6((&colontmpD__6));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			eqdestroy___stdZassertions_13((&colontmpD__5));
			eqdestroy___stdZwidestrs_6((&colontmpD__4));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqdestroy___stdZwidestrs_6((&colontmpD__3));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqdestroy___stdZassertions_13((&colontmpD__2));
			eqdestroy___stdZwidestrs_6((&colontmpD_));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA17_: ;
		result = ((int)0);
		eqdestroy___stdZwidestrs_6((&colontmpD__6));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		eqdestroy___stdZassertions_13((&colontmpD__5));
		eqdestroy___stdZwidestrs_6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
		{
			LA13_:;
		}
		{
			oldNimErrFin13_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___stdZwidestrs_6((&colontmpD__6));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			eqdestroy___stdZassertions_13((&colontmpD__5));
			*nimErr_ = oldNimErrFin13_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA11_: ;
	T21_.len = 0; T21_.p = NIM_NIL;
	T21_ = rawNewString(name__7UtkvHsg9cAzgLrO9c4Husfg.len + 3);
appendString((&T21_), name__7UtkvHsg9cAzgLrO9c4Husfg);
appendString((&T21_), TM__UOYsq9cbb0VE8vr3Xt181HA_5);
	colontmpD__2 = T21_;
	colontmpD__3 = newWideCString__stdZwidestrs_287(colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	envstring_2 = toWideCString__stdZwidestrs_41(colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		int T24_;
		T24_ = (int)0;
		T24_ = _wputenv(((wchar_t*) (envstring_2)));
		if (!!((T24_ == ((NI32)0)))) goto LA25_;
		errno = ((int)22);
		result = ((int)-1);
		eqdestroy___stdZwidestrs_6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA25_: ;
	T27_ = (wchar_t*)0;
	T27_ = _wgetenv(((wchar_t*) (wideName)));
	s = ((NI16*) (T27_));
	s[((NI)0)] = ((NI16)0);
	T28_ = (wchar_t*)0;
	T28_ = _wgetenv(((wchar_t*) (wideName)));
	s = ((NI16*) (T28_));
	s[((NI)1)] = ((NI16)61);
	{
		size_t requiredSizeS;
		if (!!((_environ == ((NIM_CHAR**) NIM_NIL)))) goto LA31_;
		requiredSizeS = wcstombs(((NIM_CHAR*) NIM_NIL), ((wchar_t*) (wideName)), ((size_t)0));
		{
			tySequence__lBgZ7a89beZGYPl8PiANMTA buf;
			NI requiredSize;
			NIM_CHAR* buf2;
			if (!!((requiredSizeS == ((size_t)-1)))) goto LA35_;
			buf.len = 0; buf.p = NIM_NIL;
			requiredSize = ((NI) (requiredSizeS));
			buf = newSeq__stdZprivateZwin95setenv_137(((NI) ((NI)(requiredSize + ((NI)1)))));
			buf2 = (&buf.p->data[((NI)0)]);
			{
				size_t T39_;
				NCSTRING ptrToEnv;
				T39_ = (size_t)0;
				T39_ = wcstombs(buf2, ((wchar_t*) (wideName)), ((size_t) ((NI)(requiredSize + ((NI)1)))));
				if (!!((T39_ == ((size_t)-1)))) goto LA40_;
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				ptrToEnv[((NI)0)] = 0;
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				ptrToEnv[((NI)1)] = 61;
			}
			LA40_: ;
			eqdestroy___stdZprivateZwin95setenv_145((&buf));
		}
		LA35_: ;
	}
	LA31_: ;
	{
		NI16* T44_;
		NI32 T45_;
		colontmpD__4 = newWideCString__stdZwidestrs_287(value__DbyBadodAg65gu7WGj6wAw);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T44_ = (NI16*)0;
		T44_ = toWideCString__stdZwidestrs_41(colontmpD__4);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T45_ = (NI32)0;
		T45_ = Dl_1694498819_(wideName, T44_);
		if (!(T45_ == ((NI32)0))) goto LA46_;
		errno = ((int)22);
		result = ((int)-1);
		eqdestroy___stdZwidestrs_6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA46_: ;
	result = ((int)0);
	eqdestroy___stdZwidestrs_6((&colontmpD__4));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___stdZwidestrs_6((&colontmpD__3));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___stdZassertions_13((&colontmpD__2));
	eqdestroy___stdZwidestrs_6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___stdZwidestrs_6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZassertions_13((&colontmpD__2));
		eqdestroy___stdZwidestrs_6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatslibatsstdatsprivateatswin_setenvdotnim_DatInit000)(void) {
if (!((TM__UOYsq9cbb0VE8vr3Xt181HA_6 = nimLoadLibrary(TM__UOYsq9cbb0VE8vr3Xt181HA_9))
)) nimLoadLibraryError(TM__UOYsq9cbb0VE8vr3Xt181HA_11);
	Dl_1694498819_ = (tyProc__bqj9c9cp9clcknaC0kHFkuNVg) nimGetProcAddr(TM__UOYsq9cbb0VE8vr3Xt181HA_6, "SetEnvironmentVariableW");
}

