/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
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
typedef struct tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA tyObject_TType__qs8ld9cHTjcxh7xYsvWduXA;
typedef struct tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg;
typedef struct tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA tyObject_TSym__9cob5UPXvLCxy8mslvxEYzA;
typedef struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ tySequence__xxu3GgaFAGO6lOns9aHaeLQ;
typedef struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
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
typedef NU8 tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA;
typedef NU8 tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw;
typedef NU16 tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringV2 Field0;
NI Field1;
NI Field2;
};
struct tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA {
NI id;
NimStringV2 s;
tyObject_TIdent__L29bfCasnfXpB7u88iPkwMA* next;
NI h;
};
struct TNimTypeV2 {
void* destructor;
NI size;
NI16 align;
NI16 depth;
NU32* display;
void* traceImpl;
void* typeInfoV1;
NI flags;
};
struct RootObj {
TNimTypeV2* m_type;
};
typedef NU8 tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s__Orx8qa3NF5vRaY7oygGzMw, void* buf__1S9cuIFh3oT1b9ajLIxY3knQ, NI bufLen__aI2L2pbB0okoFlhe47UULA, void* ClE_0);
void* ClE_0;
} tyProc__oi9b0z9awBBnvGw9arizvgdNw;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw {
  RootObj Sup;
tyEnum_TLLStreamKind__9cSQ7roMMT510UcuCxRX05w kind;
FILE* f;
NimStringV2 s;
NI rd;
NI wr;
NI lineOffset;
tyProc__oi9b0z9awBBnvGw9arizvgdNw repl;
tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];


#ifndef tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
#define tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content_PP
struct tySequence__xxu3GgaFAGO6lOns9aHaeLQ_Content { NI cap; tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, getArg__filters_12)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__XrB9c8BOJp31xT3yd7WJNKw, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__Vr2e8deoNUxLDF1Kq1qGNg, NimStringV2 name__o3VGHLIPaGaDjtkzIj0EZg, NI pos__RSlXLR0WnKJA18XqwTFZ6Q);
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__XTPkz1jrUDzaDAHPseflHQ);
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_9)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__N9bRmyh7iWHJeXdwhkNLONQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__Ui4dPZcz8KqNkZvgsB6wCA);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_1182)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__YKJQaQvv0hyWWGIJPWWxCg, tyObject_TLineInfo__7ZAGqjaN6WqWPlHP9cRagRg info__ocsVBTLmEoRQLLAuXfquhA, tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA msg__JwpAqN3XbRDCsr6o0M0row, NimStringV2 arg__zW9cECejKQ9b7gInjXO59a9c5Q, tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw eh__5N2vmYHL6tqamW6539aRS9cQ, tyTuple__kN8up2W6YKc5YA9avn5mV5w* info2__YfwyQKDJcLAkRa9az9bNuiDA, NIM_BOOL isRaw__zpF2w4EIxTh71u9a4PuFizg);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr__j8zBuAo4g9aa9a49cWV9b6hTgw_2, NimStringV2 a__oIwfPiaKNIKCHjM11VCkjw_2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderTree__renderer_50)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__vAGyoiTS9byjI9anlomSiuvQ, tySet_tyEnum_TRenderFlag__MM5FVX0phapzCgLaUUssTA renderFlags__m0PTTLC9bD2b48lJC5gWUMA);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest__C2JKGPCNdWKCPrsQvNywTQ);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a__yaahSITnr88EoUOFv5Y1cg, NimStringV2 b__3ujH36Bubscffvz2Z2sIng);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__xUGZnk6LgW9ckUtke9chKW3g_2, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src__vkZbm6WIEuiiRIu4TGi3lg_2);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3454)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__grSiItv7LycMhpeWUvBn0A);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest__9bysEU1F6xjkB13t7jg7tFg, NimStringV2 src__Q0EcxC6eCjA9adTTWfOBbQQ);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, strArg__filters_62)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__179appdM2vEDn67b029cDIFw, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__jp9c71wesD7kOw9aWTYozCaw, NimStringV2 name__Bz44kDbqRoB29c6wXFd7Mxw, NI pos__pStf0QXqBjpeO3OJOPXSOA, NimStringV2 default__sAQTuXjU4rkI5pqkmWo9cWA);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_78)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__hNK1KpMKPgYpQLPqYyhpFQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__kJqd6asMzd3Ie9ceyO7Skhg, NimStringV2 name__ryMim0B8AFpgeLr6gEbKsQ, NI pos__85ccrR07XSKPNzLiYTuc4Q, NIM_BOOL default__2Va9aSbnS2dFJUxFvLSMOog);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, llStreamOpen__llstream_31)(NimStringV2 data__lhjqhcH30eMROuNyolBFLA);
N_NIMCALL(NimStringV2, rawNewString)(NI cap__aiFqe9bSUp1HPQPsLukio0A);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_256)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s__NAD6QGja77ZMU39alZfwvaw, NimStringV2* line__RzcVpeuN0pRywaLZBfCOPw);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuStrip)(NimStringV2 s__LMRkefVUeSzLJvzD9a3ttPw, NIM_BOOL leading__2DWJBSJUiE0E7onD9an2WOQ, NIM_BOOL trailing__Z9b5JRdAtKKfzgVB7xKT8Ag, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars__PcCRn9bqhdqvtgubAWU3Cuw);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringV2 s__QqjetKOFmHbTkbsegIyklQ, NimStringV2 prefix__CZcEmsp3Tz3aHg711LyarQ);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln__llstream_288)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s__WXcI8cH9cRoeqFSLveN2OuA, NimStringV2 data__KQtM1Q9bD2Fl41lb7u9cVqZg);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_164)(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* s__Te8j7kvgi5Aj7gNTZ09bEfQ);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuReplaceStr)(NimStringV2 s__fVPG9aK6nrUodzscp5atnSA, NimStringV2 sub__1U2U3Wf3OxudGVA1V16tEw, NimStringV2 by__NHoY8qgsyDMWbmQwZJjmnA);
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_2 = { 21 | NIM_STRLIT_FLAG, "\'$1\' not allowed here" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_3 = {21, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_2};
static const struct {
  NI cap; NIM_CHAR data[37+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_5 = { 37 | NIM_STRLIT_FLAG, "/home/wind/nimv2/compiler/filters.nim" };
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_6 = { 10 | NIM_STRLIT_FLAG, "startswith" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_7 = {10, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_6};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_8 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_9 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_10 = { 4 | NIM_STRLIT_FLAG, "true" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_11 = {4, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_10};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_12 = { 5 | NIM_STRLIT_FLAG, "false" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_13 = {5, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_12};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_14 = { 7 | NIM_STRLIT_FLAG, "leading" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_15 = {7, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_14};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_16 = { 8 | NIM_STRLIT_FLAG, "trailing" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_17 = {8, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_16};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_18 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__Z829bJQuL5LjY0SVtwy0lEQ_19 = {
0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_20 = { 3 | NIM_STRLIT_FLAG, "sub" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_21 = {3, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_20};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_22 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_23 = { 2 | NIM_STRLIT_FLAG, "by" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_24 = {2, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_23};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_25 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_26 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__Z829bJQuL5LjY0SVtwy0lEQ_4 = {{37, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_5},
((NI)17),
((NI)12)}
;
extern NIM_BOOL nimInErrorMode__system_3994;
static N_INLINE(NI, len__ast_3325)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__XTPkz1jrUDzaDAHPseflHQ) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = (*n__XTPkz1jrUDzaDAHPseflHQ)._kind_6.sons.len;
	result = T1_;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_9)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__N9bRmyh7iWHJeXdwhkNLONQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__Ui4dPZcz8KqNkZvgsB6wCA) {
	NimStringV2 colontmpD_;
	NimStringV2 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = renderTree__renderer_50(n__Ui4dPZcz8KqNkZvgsB6wCA, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = nsuFormatSingleElem(TM__Z829bJQuL5LjY0SVtwy0lEQ_3, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	liMessage__msgs_1182(conf__N9bRmyh7iWHJeXdwhkNLONQ, (*n__Ui4dPZcz8KqNkZvgsB6wCA).info, ((tyEnum_TMsgKind__9b1zBSEXe8I2R9aa2h3NYf9cA)17), colontmpD_, ((tyEnum_TErrorHandling__NXH4RLc649bsDWofENjZIqw)0), (&TM__Z829bJQuL5LjY0SVtwy0lEQ_4), NIM_FALSE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, getArg__filters_12)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__XrB9c8BOJp31xT3yd7WJNKw, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__Vr2e8deoNUxLDF1Kq1qGNg, NimStringV2 name__o3VGHLIPaGaDjtkzIj0EZg, NI pos__RSlXLR0WnKJA18XqwTFZ6Q) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	result = ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL);
	{
		if (!((*n__Vr2e8deoNUxLDF1Kq1qGNg).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)1) && (*n__Vr2e8deoNUxLDF1Kq1qGNg).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)23))) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__ast_3325(n__Vr2e8deoNUxLDF1Kq1qGNg);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i_2 = ((NI)1);
		{
			while (1) {
				if (!(i_2 < colontmp_)) goto LA7				;
				i = i_2;
				{
					if (!((*(*n__Vr2e8deoNUxLDF1Kq1qGNg)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)33))) goto LA10_;
					{
						if (!!(((*(*(*n__Vr2e8deoNUxLDF1Kq1qGNg)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)]).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2)))) goto LA14_;
						invalidPragma__filters_9(conf__XrB9c8BOJp31xT3yd7WJNKw, n__Vr2e8deoNUxLDF1Kq1qGNg);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA14_: ;
					{
						NI T18_;
						T18_ = (NI)0;
						T18_ = nsuCmpIgnoreStyle((*(*(*(*n__Vr2e8deoNUxLDF1Kq1qGNg)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)])._kind_5.ident).s, name__o3VGHLIPaGaDjtkzIj0EZg);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!(T18_ == ((NI)0))) goto LA19_;
						eqcopy___ast_3457(&result, (*(*n__Vr2e8deoNUxLDF1Kq1qGNg)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto BeforeRet_;
					}
					LA19_: ;
				}
				goto LA8_;
				LA10_: ;
				{
					if (!(i == pos__RSlXLR0WnKJA18XqwTFZ6Q)) goto LA22_;
					eqcopy___ast_3457(&result, (*n__Vr2e8deoNUxLDF1Kq1qGNg)._kind_6.sons.p->data[i]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				goto LA8_;
				LA22_: ;
				LA8_: ;
				i_2 += ((NI)1);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg__filters_46)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__JeS9bL2yA6l9aNWrnWcm9crUA, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__rxQeHoi32XP3oypGag34Jg, NimStringV2 name__tSMRIH2ZTwdY1GI1Gkls8A, NI pos__M8m81JisflvqJ1Rr383M9cQ, NIM_CHAR default__G0DQM2dYStnngdfFcn86dg) {
	NIM_CHAR result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_CHAR)0;
	x = NIM_NIL;
	x = getArg__filters_12(conf__JeS9bL2yA6l9aNWrnWcm9crUA, n__rxQeHoi32XP3oypGag34Jg, name__tSMRIH2ZTwdY1GI1Gkls8A, pos__M8m81JisflvqJ1Rr383M9cQ);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(x == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL))) goto LA4_;
		result = default__G0DQM2dYStnngdfFcn86dg;
	}
	goto LA2_;
	LA4_: ;
	{
		if (!((*x).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)5))) goto LA7_;
		result = ((NIM_CHAR) (((NI) (((NI) ((*x)._kind_1.intVal))))));
	}
	goto LA2_;
	LA7_: ;
	{
		invalidPragma__filters_9(conf__JeS9bL2yA6l9aNWrnWcm9crUA, n__rxQeHoi32XP3oypGag34Jg);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, strArg__filters_62)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__179appdM2vEDn67b029cDIFw, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__jp9c71wesD7kOw9aWTYozCaw, NimStringV2 name__Bz44kDbqRoB29c6wXFd7Mxw, NI pos__pStf0QXqBjpeO3OJOPXSOA, NimStringV2 default__sAQTuXjU4rkI5pqkmWo9cWA) {
	NimStringV2 result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	x = NIM_NIL;
	x = getArg__filters_12(conf__179appdM2vEDn67b029cDIFw, n__jp9c71wesD7kOw9aWTYozCaw, name__Bz44kDbqRoB29c6wXFd7Mxw, pos__pStf0QXqBjpeO3OJOPXSOA);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(x == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL))) goto LA4_;
		eqcopy___stdZassertions_16((&result), default__sAQTuXjU4rkI5pqkmWo9cWA);
	}
	goto LA2_;
	LA4_: ;
	{
		if (!((*x).kind >= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)20) && (*x).kind <= ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)22))) goto LA7_;
		eqcopy___stdZassertions_16((&result), (*x)._kind_3.strVal);
	}
	goto LA2_;
	LA7_: ;
	{
		invalidPragma__filters_9(conf__179appdM2vEDn67b029cDIFw, n__jp9c71wesD7kOw9aWTYozCaw);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_78)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__hNK1KpMKPgYpQLPqYyhpFQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* n__kJqd6asMzd3Ie9ceyO7Skhg, NimStringV2 name__ryMim0B8AFpgeLr6gEbKsQ, NI pos__85ccrR07XSKPNzLiYTuc4Q, NIM_BOOL default__2Va9aSbnS2dFJUxFvLSMOog) {
	NIM_BOOL result;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x = NIM_NIL;
	x = getArg__filters_12(conf__hNK1KpMKPgYpQLPqYyhpFQ, n__kJqd6asMzd3Ie9ceyO7Skhg, name__ryMim0B8AFpgeLr6gEbKsQ, pos__85ccrR07XSKPNzLiYTuc4Q);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(x == ((tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*) NIM_NIL))) goto LA4_;
		result = default__2Va9aSbnS2dFJUxFvLSMOog;
	}
	goto LA2_;
	LA4_: ;
	{
		NIM_BOOL T7_;
		NI T9_;
		T7_ = (NIM_BOOL)0;
		T7_ = ((*x).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2));
		if (!(T7_)) goto LA8_;
		T9_ = (NI)0;
		T9_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, TM__Z829bJQuL5LjY0SVtwy0lEQ_11);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T7_ = (T9_ == ((NI)0));
		LA8_: ;
		if (!T7_) goto LA10_;
		result = NIM_TRUE;
	}
	goto LA2_;
	LA10_: ;
	{
		NIM_BOOL T13_;
		NI T15_;
		T13_ = (NIM_BOOL)0;
		T13_ = ((*x).kind == ((tyEnum_TNodeKind__ySM4MdHjvuRpNcphR1xnyQ)2));
		if (!(T13_)) goto LA14_;
		T15_ = (NI)0;
		T15_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, TM__Z829bJQuL5LjY0SVtwy0lEQ_13);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T13_ = (T15_ == ((NI)0));
		LA14_: ;
		if (!T13_) goto LA16_;
		result = NIM_FALSE;
	}
	goto LA2_;
	LA16_: ;
	{
		invalidPragma__filters_9(conf__hNK1KpMKPgYpQLPqYyhpFQ, n__kJqd6asMzd3Ie9ceyO7Skhg);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___ast_3454(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, filterStrip__filters_98)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__LAUIrpgyimxvIPQd9b27UcQ, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin__OvigwQSYTXWGO3sPQzulyA, NimStringV2 filename__TZNfyBWKy9cu9bxgnhZAZusQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* call__CspLyt2RIRuR9cks2K8g4YA) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	NimStringV2 pattern;
	NimStringV2 line;
	NIM_BOOL leading;
	NIM_BOOL trailing;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	pattern.len = 0; pattern.p = NIM_NIL;
	line.len = 0; line.p = NIM_NIL;
	pattern = strArg__filters_62(conf__LAUIrpgyimxvIPQd9b27UcQ, call__CspLyt2RIRuR9cks2K8g4YA, TM__Z829bJQuL5LjY0SVtwy0lEQ_7, ((NI)1), TM__Z829bJQuL5LjY0SVtwy0lEQ_9);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	leading = boolArg__filters_78(conf__LAUIrpgyimxvIPQd9b27UcQ, call__CspLyt2RIRuR9cks2K8g4YA, TM__Z829bJQuL5LjY0SVtwy0lEQ_15, ((NI)2), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	trailing = boolArg__filters_78(conf__LAUIrpgyimxvIPQd9b27UcQ, call__CspLyt2RIRuR9cks2K8g4YA, TM__Z829bJQuL5LjY0SVtwy0lEQ_17, ((NI)3), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = llStreamOpen__llstream_31(TM__Z829bJQuL5LjY0SVtwy0lEQ_18);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	line = rawNewString(((NI)80));
	{
		while (1) {
			NIM_BOOL T4_;
			NimStringV2 stripped;
			T4_ = (NIM_BOOL)0;
			T4_ = llStreamReadLine__llstream_256(stdin__OvigwQSYTXWGO3sPQzulyA, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T4_) goto LA3			;
			stripped.len = 0; stripped.p = NIM_NIL;
			stripped = nsuStrip(line, leading, trailing, TM__Z829bJQuL5LjY0SVtwy0lEQ_19);
			if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			{
				NIM_BOOL T8_;
				T8_ = (NIM_BOOL)0;
				T8_ = (pattern.len == ((NI)0));
				if (T8_) goto LA9_;
				T8_ = nsuStartsWith(stripped, pattern);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
				LA9_: ;
				if (!T8_) goto LA10_;
				llStreamWriteln__llstream_288(result, stripped);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			}
			goto LA6_;
			LA10_: ;
			{
				llStreamWriteln__llstream_288(result, line);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			}
			LA6_: ;
			{
				LA5_:;
			}
			{
				eqdestroy___stdZassertions_13((&stripped));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA3: ;
	}
	llStreamClose__llstream_164(stdin__OvigwQSYTXWGO3sPQzulyA);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&line));
		eqdestroy___stdZassertions_13((&pattern));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw*, filterReplace__filters_109)(tyObject_ConfigRefcolonObjectType___2BjaRtGfBjUbX51p9a4g9a9cg* conf__4c22lFNKoath8VwwH47hxg, tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* stdin__0M9alIculeUlhk14O1J5qlg, NimStringV2 filename__0QXxd0zKPLsnIC9cRozRszQ, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* call__TBcifY6v8mWJnERg4OLAuA) {
	tyObject_TLLStream__f9cpUXDA3VY8pIlUfIovHaw* result;
	NimStringV2 sub;
	NimStringV2 by;
	NimStringV2 line;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	sub.len = 0; sub.p = NIM_NIL;
	by.len = 0; by.p = NIM_NIL;
	line.len = 0; line.p = NIM_NIL;
	sub = strArg__filters_62(conf__4c22lFNKoath8VwwH47hxg, call__TBcifY6v8mWJnERg4OLAuA, TM__Z829bJQuL5LjY0SVtwy0lEQ_21, ((NI)1), TM__Z829bJQuL5LjY0SVtwy0lEQ_22);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		if (!(sub.len == ((NI)0))) goto LA4_;
		invalidPragma__filters_9(conf__4c22lFNKoath8VwwH47hxg, call__TBcifY6v8mWJnERg4OLAuA);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA4_: ;
	by = strArg__filters_62(conf__4c22lFNKoath8VwwH47hxg, call__TBcifY6v8mWJnERg4OLAuA, TM__Z829bJQuL5LjY0SVtwy0lEQ_24, ((NI)2), TM__Z829bJQuL5LjY0SVtwy0lEQ_25);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	result = llStreamOpen__llstream_31(TM__Z829bJQuL5LjY0SVtwy0lEQ_26);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	line = rawNewString(((NI)80));
	{
		while (1) {
			NIM_BOOL T8_;
			NimStringV2 colontmpD_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine__llstream_256(stdin__0M9alIculeUlhk14O1J5qlg, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T8_) goto LA7			;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			colontmpD_ = nsuReplaceStr(line, sub, by);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			llStreamWriteln__llstream_288(result, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			{
				LA9_:;
			}
			{
				eqdestroy___stdZassertions_13((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA7: ;
	}
	llStreamClose__llstream_164(stdin__0M9alIculeUlhk14O1J5qlg);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&line));
		eqdestroy___stdZassertions_13((&by));
		eqdestroy___stdZassertions_13((&sub));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
