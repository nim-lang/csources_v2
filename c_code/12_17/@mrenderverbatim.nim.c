/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw;
typedef struct tySequence__shxop0zPIs5Ec3k71aCLuQ tySequence__shxop0zPIs5Ec3k71aCLuQ;
typedef struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content tySequence__shxop0zPIs5Ec3k71aCLuQ_Content;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__shxop0zPIs5Ec3k71aCLuQ {
  NI len; tySequence__shxop0zPIs5Ec3k71aCLuQ_Content* p;
};
struct tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw {
tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf;
NI lineFirst;
tySequence__shxop0zPIs5Ec3k71aCLuQ lines;
};
struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw;
typedef NU8 tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ;
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ {
  NI len; tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content* p;
};
struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q {
tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA* typ;
tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
tySet_tyEnum_TNodeFlag__69c8WThOUT3nlaj2cOZ9c2dw flags;
tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ kind;
union{
struct {NI64 intVal;
} _kind_1;
struct {NF floatVal;
} _kind_2;
struct {NimStringV2 strVal;
} _kind_3;
struct {tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA* sym;
} _kind_4;
struct {tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* ident;
} _kind_5;
struct {tySequence__xxu3GgaFAGO6lOns9aHaeLQ sons;
} _kind_6;
};
};
struct tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ {
NI16 a;
NI b;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};


#ifndef tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
#define tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content { NI cap; NIM_BOOL data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
#define tySequence__shxop0zPIs5Ec3k71aCLuQ_Content_PP
struct tySequence__shxop0zPIs5Ec3k71aCLuQ_Content { NI cap; NIM_BOOL data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastSon__ast_6268)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__gpwzfpTVVRehSuSfiPxoLQ_2);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastNodeRec__renderverbatim_7)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__IV2D74vQs000LtZlWq85hA);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__xUGZnk6LgW9ckUtke9chKW3g_2, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src__vkZbm6WIEuiiRIu4TGi3lg_2);
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__N6lgafW6ph3i7ySOoXUzXQ);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__XTPkz1jrUDzaDAHPseflHQ);
N_LIB_PRIVATE N_NIMCALL(NI, numLines__msgs_1154)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__suP2vNdiALhEMXbXTU6joA, NI32 fileIdx__Sb19aTRwtvOqEjZhPnChuFQ);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___options_3378)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg** dest__N0eR9cNWRfVR9aZcEdEl6gtg, tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* src__aZMXvkhxxJVKsHuB4EUYzA);
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_52)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata__k9aiRvUv3IaS4xFJ7cZMIng, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__2I60WsZx29cQQeVmAOvpK1Q);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_28)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__JU8GvAuARjFB4MhQf7JS7w, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__0w2geC2NTRB1HXVPghVphA);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, sourceLine__msgs_1165)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__iK9bTN9aVh8UgFVk9cczbtRWw, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg i__zBv4jLsT6jyzThbcgw2Gug);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuContinuesWith)(NimStringV2 s__EwCUO9bgwuwYAHwo8UDvZbQ, NimStringV2 substr__VEOU5oHE7Uph4zSSo7LFWQ, NI start__mpumXFdmnMaLVkzj3it9bmA);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_224)(NimStringV2 msg__K3q0fL6aLKe9by6qIeCq9c1A);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest__C2JKGPCNdWKCPrsQvNywTQ);
N_LIB_PRIVATE N_NIMCALL(void, setLen__cgen_12197)(tySequence__shxop0zPIs5Ec3k71aCLuQ* s__v0I5mv34MkKlp4viOanXng, NI newlen__c9bFmd8RdbqPwU34fS2Dljg);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest__9bysEU1F6xjkB13t7jg7tFg, NimStringV2 src__Q0EcxC6eCjA9adTTWfOBbQQ);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_93)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata__5ETe1GssmmPnlCdcCnVmXA, NI line__kSwQsuEBJhBuMvKz0fsA5g);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_15)(NimStringV2 src__OX9bMORmjW6o0ABLGOXwVTg, NI indent__7Mo2GW3fm5B9bCXJNLvFIzg);
static N_INLINE(void, appendString)(NimStringV2* dest__Ws6Yi19bfxrbjCy9a9brzRV7A, NimStringV2 src__369aqaoei6FUsRf9cDAsKQ2g);
static N_INLINE(void, copyMem__system_1719)(void* dest__fJYjxXM6yYjbZ9agQpPnNNA, void* source__Y6ZnHEKiVLswf16AMGuQUA, NI size__YLlwRG7Z9bTiXmiSwU9cUHeA);
static N_INLINE(void, nimCopyMem)(void* dest__HMDJtGX4ficduS9cTUiey0w, void* source__xDZEU1SRcEBuZ8mtbKQBhQ, NI size__9b8g0WMA1h1RvMwHOMW7yFA);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s__qL2AkrAohOvo9bZZC15G6TA, NI addlen__uGPPC8Yor9a9avOoki7IG3AQ);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s__S65jkNxJ72wMzHX9bQ0it8w, NIM_CHAR c__q53woDK9bF1K5bAKmsVpSkA);
static N_INLINE(NimStringV2, X5BX5D___renderverbatim_172)(NimStringV2 s__S9c9b9bwgmn3VVemVN0NkGOrA, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x__9aNqPmXJfBR0vsEiqi1wHWA);
N_NIMCALL(NimStringV2, mnewString)(NI len__AJLhA35Y49afqnWtWvCnn4w);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s__loo5Z73wZsb5OCeQPiUDYg);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_2301)(NimStringV2* s__9azXNueo9acOrj8WVyZabYtg);
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_142)(NI16 a__KjwZroJB1iMTsXN9b0MEieA, NI b__m9c8KJepQ6mBYDEvipBikTw);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s__19atMbr42TbRkrQSPFxaPZg, NI newLen__zdmruIpEqwmFKxid9btfbJw);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___renderverbatim_187)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* dest__orv9abJW1T9al79as7Fwj9b5KA);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p__YLyUZk8Vki03tNo3UlpTrw);
static N_INLINE(NI, minuspercent___system_790)(NI x__nhqJNug5PDvy9ah8vc6uJ5Q, NI y__LJLJ0MGnpTb2U2nvMvG6MQ);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___options_3149)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* dest__jjXLqLv8SE2IeCJIJka0WQ);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p__fgKDMBQtwelfRnNv9bB0I5Q, NI alignment__upwtGXrI1BTnjD4u6YvIRw);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___cgen_12291)(tySequence__shxop0zPIs5Ec3k71aCLuQ* dest__roU2YOy9a9a9beBr400TJtMRA);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__grSiItv7LycMhpeWUvBn0A);
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_2 = { 3 | NIM_STRLIT_FLAG, "\"\"\"" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_3 = {3, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_2};
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_4 = { 64 | NIM_STRLIT_FLAG, "renderverbatim.nim(46, 3) `src.continuesWith(tripleQuote, col)` " };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_5 = {64, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_4};
static const struct {
  NI cap; NIM_CHAR data[41+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_6 = { 41 | NIM_STRLIT_FLAG, "renderverbatim.nim(51, 7) `src.len == i` " };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_7 = {41, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_6};
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_8 = {3, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_9 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_10 = {0, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_9};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__Ut3DGYXxqjf6Sd7VfREQEw_11 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__Ut3DGYXxqjf6Sd7VfREQEw_12 = {1, (NimStrPayload*)&TM__Ut3DGYXxqjf6Sd7VfREQEw_11};
extern NIM_BOOL nimInErrorMode__system_3975;
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a__tZiCJHYy5dYyAh9cxwrrVhQ, v__iM7JOvZxArJIvbhGyRZG6Q, ((size_t) (size__ntsFNLS0mpvnjQFrZT7DCw)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3975);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p__BuPKoq7dppy2upaj3KUaxw, ((int)0), size__ttWVm79bajRU3tarcA7MkLw);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__XTPkz1jrUDzaDAHPseflHQ) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n__XTPkz1jrUDzaDAHPseflHQ)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NI, safeLen__ast_3318)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__N6lgafW6ph3i7ySOoXUzXQ) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!((*n__N6lgafW6ph3i7ySOoXUzXQ).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)0) && (*n__N6lgafW6ph3i7ySOoXUzXQ).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23))) goto LA3_;
		result = ((NI)0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len__ast_3325(n__N6lgafW6ph3i7ySOoXUzXQ);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, lastNodeRec__renderverbatim_7)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__IV2D74vQs000LtZlWq85hA) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	eqcopy___ast_3457(&result, n__IV2D74vQs000LtZlWq85hA);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		while (1) {
			NI T3_;
			NI T4_;
			T3_ = (NI)0;
			T3_ = safeLen__ast_3318(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!(((NI)0) < T3_)) goto LA2			;
			T4_ = (NI)0;
			T4_ = len__ast_3325(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqcopy___ast_3457(&result, (*result)._kind_6.sons.p->data[(NI)(T4_ - ((NI)1))]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		} LA2: ;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tripleStrLitStartsAtNextLine__renderverbatim_28)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__JU8GvAuARjFB4MhQf7JS7w, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__0w2geC2NTRB1HXVPghVphA) {
	NIM_BOOL result;
	NimStringV2 src;
	NI16 col;
	NI16 i;
	NIM_BOOL onlySpace;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	src.len = 0; src.p = NIM_NIL;
	src = sourceLine__msgs_1165(conf__JU8GvAuARjFB4MhQf7JS7w, (*n__0w2geC2NTRB1HXVPghVphA).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	col = (*n__0w2geC2NTRB1HXVPghVphA).info.col;
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = nsuContinuesWith(src, TM__Ut3DGYXxqjf6Sd7VfREQEw_3, ((NI) (col)));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(T4_)) goto LA5_;
		failedAssertImpl__stdZassertions_224(TM__Ut3DGYXxqjf6Sd7VfREQEw_5);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA5_: ;
	i = (NI16)(col + ((NI16)3));
	onlySpace = NIM_TRUE;
	{
		while (1) {
			{
				if (!(src.len <= ((NI) (i)))) goto LA11_;
				{
					if (!!((src.len == ((NI) (i))))) goto LA15_;
					failedAssertImpl__stdZassertions_224(TM__Ut3DGYXxqjf6Sd7VfREQEw_7);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				}
				LA15_: ;
				result = onlySpace;
				eqdestroy___stdZassertions_13((&src));
				goto BeforeRet_;
			}
			goto LA9_;
			LA11_: ;
			{
				NIM_BOOL T18_;
				NIM_BOOL T20_;
				T18_ = (NIM_BOOL)0;
				T18_ = nsuContinuesWith(src, TM__Ut3DGYXxqjf6Sd7VfREQEw_8, ((NI) (i)));
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
				if (!(T18_)) goto LA19_;
				T20_ = (NIM_BOOL)0;
				T20_ = (src.len == ((NI) ((NI16)(i + ((NI16)3)))));
				if (T20_) goto LA21_;
				T20_ = !(((NU8)(src.p->data[(NI16)(i + ((NI16)3))]) == (NU8)(34)));
				LA21_: ;
				T18_ = T20_;
				LA19_: ;
				if (!T18_) goto LA22_;
				result = NIM_FALSE;
				eqdestroy___stdZassertions_13((&src));
				goto BeforeRet_;
			}
			goto LA9_;
			LA22_: ;
			{
				if (!!(((NU8)(src.p->data[i]) == (NU8)(32)))) goto LA25_;
				onlySpace = NIM_FALSE;
			}
			goto LA9_;
			LA25_: ;
			LA9_: ;
			i += ((NI)1);
		}
	}
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&src));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, visitMultilineStrings__renderverbatim_52)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata__k9aiRvUv3IaS4xFJ7cZMIng, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__2I60WsZx29cQQeVmAOvpK1Q) {
	NI cline;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	cline = (*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lineFirst;
	switch ((*n__2I60WsZx29cQQeVmAOvpK1Q).kind) {
	case ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22):
	{
		cline = ((NI) ((*n__2I60WsZx29cQQeVmAOvpK1Q).info.line));
		{
			NIM_BOOL T4_;
			NI indexX60gensym11_;
			T4_ = (NIM_BOOL)0;
			T4_ = tripleStrLitStartsAtNextLine__renderverbatim_28((*ldata__k9aiRvUv3IaS4xFJ7cZMIng).conf, n__2I60WsZx29cQQeVmAOvpK1Q);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T4_) goto LA5_;
			cline += ((NI)1);
			indexX60gensym11_ = (NI)(cline - (*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lineFirst);
			{
				NI T9_;
				T9_ = (*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines.len;
				if (!(T9_ < (NI)(indexX60gensym11_ + ((NI)1)))) goto LA10_;
				setLen__cgen_12197((&(*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines), ((NI) ((NI)(indexX60gensym11_ + ((NI)1)))));
			}
			LA10_: ;
			(*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines.p->data[indexX60gensym11_] = NIM_TRUE;
		}
		LA5_: ;
		{
			NimStringV2 colontmp_;
			NIM_CHAR ai;
			NI i;
			NI L;
			colontmp_.len = 0; colontmp_.p = NIM_NIL;
			ai = (NIM_CHAR)0;
			eqcopy___stdZassertions_16((&colontmp_), (*n__2I60WsZx29cQQeVmAOvpK1Q)._kind_3.strVal);
			i = ((NI)0);
			L = colontmp_.len;
			{
				while (1) {
					if (!(i < L)) goto LA14					;
					ai = colontmp_.p->data[i];
					switch (((NU8)(ai))) {
					case 10:
					{
						NI indexX60gensym12_;
						cline += ((NI)1);
						indexX60gensym12_ = (NI)(cline - (*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lineFirst);
						{
							NI T18_;
							T18_ = (*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines.len;
							if (!(T18_ < (NI)(indexX60gensym12_ + ((NI)1)))) goto LA19_;
							setLen__cgen_12197((&(*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines), ((NI) ((NI)(indexX60gensym12_ + ((NI)1)))));
						}
						LA19_: ;
						(*ldata__k9aiRvUv3IaS4xFJ7cZMIng).lines.p->data[indexX60gensym12_] = NIM_TRUE;
					}
					break;
					default:
					{
					}
					break;
					}
					i += ((NI)1);
				} LA14: ;
			}
			eqdestroy___stdZassertions_13((&colontmp_));
		}
	}
	break;
	default:
	{
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = safeLen__ast_3318(n__2I60WsZx29cQQeVmAOvpK1Q);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i_3 = ((NI)0);
			{
				while (1) {
					if (!(i_3 < colontmp__2)) goto LA25					;
					i_2 = i_3;
					visitMultilineStrings__renderverbatim_52(ldata__k9aiRvUv3IaS4xFJ7cZMIng, (*n__2I60WsZx29cQQeVmAOvpK1Q)._kind_6.sons.p->data[i_2]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_3 += ((NI)1);
				} LA25: ;
			}
		}
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, startOfLineInsideTriple__renderverbatim_93)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* ldata__5ETe1GssmmPnlCdcCnVmXA, NI line__kSwQsuEBJhBuMvKz0fsA5g) {
	NIM_BOOL result;
	NIM_BOOL colontmpD_;
	NIM_BOOL colontmpD__2;
	NI index;
	result = (NIM_BOOL)0;
	colontmpD_ = (NIM_BOOL)0;
	colontmpD__2 = (NIM_BOOL)0;
	index = (NI)(line__kSwQsuEBJhBuMvKz0fsA5g - (*ldata__5ETe1GssmmPnlCdcCnVmXA).lineFirst);
	{
		NI T3_;
		T3_ = (*ldata__5ETe1GssmmPnlCdcCnVmXA).lines.len;
		if (!(T3_ <= index)) goto LA4_;
		colontmpD_ = NIM_FALSE;
		result = colontmpD_;
	}
	goto LA1_;
	LA4_: ;
	{
		colontmpD__2 = (*ldata__5ETe1GssmmPnlCdcCnVmXA).lines.p->data[index];
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isInIndentationBlock__renderverbatim_15)(NimStringV2 src__OX9bMORmjW6o0ABLGOXwVTg, NI indent__7Mo2GW3fm5B9bCXJNLvFIzg) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i < indent__7Mo2GW3fm5B9bCXJNLvFIzg)) goto LA3				;
				j = i;
				{
					if (!(src__OX9bMORmjW6o0ABLGOXwVTg.len <= j)) goto LA6_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA6_: ;
				{
					if (!!(((NU8)(src__OX9bMORmjW6o0ABLGOXwVTg.p->data[j]) == (NU8)(32)))) goto LA10_;
					result = NIM_FALSE;
					goto BeforeRet_;
				}
				LA10_: ;
				i += ((NI)1);
			} LA3: ;
		}
	}
	result = NIM_TRUE;
	goto BeforeRet_;
	}BeforeRet_: ;
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s__S65jkNxJ72wMzHX9bQ0it8w, NIM_CHAR c__q53woDK9bF1K5bAKmsVpSkA) {
	prepareAdd(s__S65jkNxJ72wMzHX9bQ0it8w, ((NI)1));
	(*(*s__S65jkNxJ72wMzHX9bQ0it8w).p).data[(*s__S65jkNxJ72wMzHX9bQ0it8w).len] = c__q53woDK9bF1K5bAKmsVpSkA;
	(*(*s__S65jkNxJ72wMzHX9bQ0it8w).p).data[(NI)((*s__S65jkNxJ72wMzHX9bQ0it8w).len + ((NI)1))] = 0;
	(*s__S65jkNxJ72wMzHX9bQ0it8w).len += ((NI)1);
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s__loo5Z73wZsb5OCeQPiUDYg) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s__loo5Z73wZsb5OCeQPiUDYg).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s__loo5Z73wZsb5OCeQPiUDYg).p).cap & ((NI)IL64(4611686018427387904))) == ((NI)IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_2301(s__loo5Z73wZsb5OCeQPiUDYg);
	}
	LA5_: ;
}
static N_INLINE(NimStringV2, X5BX5D___renderverbatim_172)(NimStringV2 s__S9c9b9bwgmn3VVemVN0NkGOrA, tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ x__9aNqPmXJfBR0vsEiqi1wHWA) {
	NimStringV2 result;
	NI a;
	NI L;
	result.len = 0; result.p = NIM_NIL;
	a = ((NI) (x__9aNqPmXJfBR0vsEiqi1wHWA.a));
	L = (NI)((NI)((NI)(s__S9c9b9bwgmn3VVemVN0NkGOrA.len - x__9aNqPmXJfBR0vsEiqi1wHWA.b) - a) + ((NI)1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3				;
				i = i_2;
				nimPrepareStrMutationV2((&result));
				result.p->data[i] = s__S9c9b9bwgmn3VVemVN0NkGOrA.p->data[(NI)(i + a)];
				i_2 += ((NI)1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ, dotdot___renderverbatim_142)(NI16 a__KjwZroJB1iMTsXN9b0MEieA, NI b__m9c8KJepQ6mBYDEvipBikTw) {
	tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ));
	result.a = a__KjwZroJB1iMTsXN9b0MEieA;
	result.b = b__m9c8KJepQ6mBYDEvipBikTw;
	return result;
}
static N_INLINE(NI, minuspercent___system_790)(NI x__nhqJNug5PDvy9ah8vc6uJ5Q, NI y__LJLJ0MGnpTb2U2nvMvG6MQ) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x__nhqJNug5PDvy9ah8vc6uJ5Q))) - (NU64)(((NU) (y__LJLJ0MGnpTb2U2nvMvG6MQ))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p__YLyUZk8Vki03tNo3UlpTrw) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p__YLyUZk8Vki03tNo3UlpTrw == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___system_790(((NI) (ptrdiff_t) (p__YLyUZk8Vki03tNo3UlpTrw)), ((NI)16));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI)16);
		}
		LA6_: ;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___renderverbatim_187)(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw* dest__orv9abJW1T9al79as7Fwj9b5KA) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest__orv9abJW1T9al79as7Fwj9b5KA).conf);
		if (!T3_) goto LA4_;
		eqdestroy___options_3149((*dest__orv9abJW1T9al79as7Fwj9b5KA).conf);
		nimRawDispose((*dest__orv9abJW1T9al79as7Fwj9b5KA).conf, ((NI)8));
	}
	LA4_: ;
	eqdestroy___cgen_12291((&(*dest__orv9abJW1T9al79as7Fwj9b5KA).lines));
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, extractRunnableExamplesSource__renderverbatim_101)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__Kf9aKMNFG9cncSWaZJeMPU9ag, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__MFD1XvYBU3xZMNNagvBQaQ, NI indent__9bL2oINafrd2R772MW8APgA) {
	NimStringV2 result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmpD__2;
	tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw ldata;
	tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* colontmpD__3;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg first;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg last;
	tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info;
	NI16 indent2;
	NU16 numLines;
	NI T7_;
	NI lastNonemptyPos;
	NI T8_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_ = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw));
	colontmpD__3 = NIM_NIL;
	colontmpD_ = lastSon__ast_6268(n__MFD1XvYBU3xZMNNagvBQaQ);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	first = (*colontmpD_).info;
	{
		if (!(first.line == (*(*n__MFD1XvYBU3xZMNNagvBQaQ)._kind_6.sons.p->data[((NI)0)]).info.line)) goto LA4_;
	}
	goto LA2_;
	LA4_: ;
	{
		first.line = (NU16)((NU16)((*(*n__MFD1XvYBU3xZMNNagvBQaQ)._kind_6.sons.p->data[((NI)0)]).info.line) + (NU16)(((NU16)1)));
	}
	LA2_: ;
	colontmpD__2 = lastNodeRec__renderverbatim_7(n__MFD1XvYBU3xZMNNagvBQaQ);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	last = (*colontmpD__2).info;
	info = first;
	indent2 = info.col;
	T7_ = (NI)0;
	T7_ = numLines__msgs_1154(conf__Kf9aKMNFG9cncSWaZJeMPU9ag, info.fileIndex);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	numLines = ((NU16) (T7_));
	lastNonemptyPos = ((NI)0);
	nimZeroMem((void*)(&ldata), sizeof(tyObject_LineData__NxlQoo9aW70epjBbzwE7cKw));
	ldata.lineFirst = ((NI) (first.line));
	colontmpD__3 = 0;
	eqcopy___options_3378(&colontmpD__3, conf__Kf9aKMNFG9cncSWaZJeMPU9ag);
	ldata.conf = colontmpD__3;
	T8_ = (NI)0;
	T8_ = len__ast_3325(n__MFD1XvYBU3xZMNNagvBQaQ);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	visitMultilineStrings__renderverbatim_52((&ldata), (*n__MFD1XvYBU3xZMNNagvBQaQ)._kind_6.sons.p->data[(NI)(T8_ - ((NI)1))]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = TM__Ut3DGYXxqjf6Sd7VfREQEw_10;
	{
		NU16 line;
		NI res;
		line = (NU16)0;
		res = ((NI) (first.line));
		{
			while (1) {
				NimStringV2 src;
				NIM_BOOL special;
				if (!(res <= ((NI) (numLines)))) goto LA11				;
				src.len = 0; src.p = NIM_NIL;
				line = ((NU16) (res));
				info.line = line;
				src = sourceLine__msgs_1165(conf__Kf9aKMNFG9cncSWaZJeMPU9ag, info);
				if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
				special = startOfLineInsideTriple__renderverbatim_93((&ldata), ((NI) (line)));
				if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
				{
					NIM_BOOL T15_;
					NIM_BOOL T16_;
					NIM_BOOL T19_;
					T15_ = (NIM_BOOL)0;
					T16_ = (NIM_BOOL)0;
					T16_ = ((NU16)(last.line) < (NU16)(line));
					if (!(T16_)) goto LA17_;
					T16_ = !(special);
					LA17_: ;
					T15_ = T16_;
					if (!(T15_)) goto LA18_;
					T19_ = (NIM_BOOL)0;
					T19_ = isInIndentationBlock__renderverbatim_15(src, ((NI) (indent2)));
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					T15_ = !(T19_);
					LA18_: ;
					if (!T15_) goto LA20_;
					eqdestroy___stdZassertions_13((&src));
					goto LA9;
				}
				LA20_: ;
				{
					if (!((NU16)(first.line) < (NU16)(line))) goto LA24_;
					prepareAdd((&result), 1);
appendString((&result), TM__Ut3DGYXxqjf6Sd7VfREQEw_12);
				}
				LA24_: ;
				{
					if (!special) goto LA28_;
					prepareAdd((&result), src.len + 0);
appendString((&result), src);
					lastNonemptyPos = result.len;
				}
				goto LA26_;
				LA28_: ;
				{
					NimStringV2 colontmpD__4;
					tyObject_HSlice__tWbbzDT29cxDfMvWataNEeQ T36_;
					if (!(((NI) (indent2)) < src.len)) goto LA31_;
					colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
					{
						NI i;
						NI i_2;
						i = (NI)0;
						i_2 = ((NI)0);
						{
							while (1) {
								if (!(i_2 < indent__9bL2oINafrd2R772MW8APgA)) goto LA35								;
								i = i_2;
								nimAddCharV1((&result), 32);
								i_2 += ((NI)1);
							} LA35: ;
						}
					}
					T36_ = dotdot___renderverbatim_142(indent2, ((NI)1));
					colontmpD__4 = X5BX5D___renderverbatim_172(src, T36_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					prepareAdd((&result), colontmpD__4.len + 0);
appendString((&result), colontmpD__4);
					lastNonemptyPos = result.len;
					eqdestroy___stdZassertions_13((&colontmpD__4));
				}
				goto LA26_;
				LA31_: ;
				LA26_: ;
				res += ((NI)1);
				{
					LA12_:;
				}
				{
					eqdestroy___stdZassertions_13((&src));
				}
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			} LA11: ;
		}
	} LA9: ;
	setLengthStrV2((&result), ((NI) (lastNonemptyPos)));
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___renderverbatim_187((&ldata));
		eqdestroy___ast_3454(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___ast_3454(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
