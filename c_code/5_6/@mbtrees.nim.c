/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 64

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
typedef struct tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ;
typedef struct tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NimStringV2 tyArray__9aijZrM1syqzleJpcL8bUyw[512];
typedef tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* tyArray__E9bSD5rkt5i3dcYty9cq9bNxg[512];
typedef tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* tyArray__O9bOLS2kvNtrvY9bYkzy1irQ[512];
struct tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA {
NI entries;
tyArray__9aijZrM1syqzleJpcL8bUyw keys;
NIM_BOOL isInternal;
union{
struct {tyArray__E9bSD5rkt5i3dcYty9cq9bNxg vals;
} _isInternal_1;
struct {tyArray__O9bOLS2kvNtrvY9bYkzy1irQ links;
} _isInternal_2;
};
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
NI rootIdx;
};
struct tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ {
tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* root;
NI entries;
};
struct tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ {
NimStringV2 Field0;
tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* Field1;
NI Field2;
};
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_13)(NimStringV2* dest__C2JKGPCNdWKCPrsQvNywTQ);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p__YLyUZk8Vki03tNo3UlpTrw);
static N_INLINE(NI, minuspercent___system_790)(NI x__nhqJNug5PDvy9ah8vc6uJ5Q, NI y__LJLJ0MGnpTb2U2nvMvG6MQ);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_3466)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* dest__grSiItv7LycMhpeWUvBn0A);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p__fgKDMBQtwelfRnNv9bB0I5Q, NI alignment__upwtGXrI1BTnjD4u6YvIRw);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___modulegraphs_10228)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* dest__OahwVO03J49bbt9aibiQuYUQ);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw);
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size__LZn6dneMVUSD9cVJcoc7Slw, NI alignment__eu9b1Xf7SGvOM5v8REyXVWA);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vm_8439)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__JMzYMBMJ9ajhotzGeBjMMkQ, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src__8WAp9c9b4p8v5sBWLX7pQ9azg);
static N_INLINE(void, nimIncRef)(void* p__M1cYVc9bN6PEXNz0Oab9abOw);
N_LIB_PRIVATE N_NIMCALL(NI, cmp__system_1543)(NimStringV2 x__Ok8JiBP69a1BIhKRombxbfQ, NimStringV2 y__fb9bAMrmvGVbLTtqOX5TcIw);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vm_8436)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__OahwVO03J49bbt9aibiQuYUQ);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, insert__vm_10116)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__kmyeGfve0PM77UJ9ap7GamA, NimStringV2 key__hoZORW5Kd47ZIDGGm7Em2Q, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val__bqwxa1faLq7jEyiLPVDZVQ);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest__9bysEU1F6xjkB13t7jg7tFg, NimStringV2 src__Q0EcxC6eCjA9adTTWfOBbQQ);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_3457)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__xUGZnk6LgW9ckUtke9chKW3g_2, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src__vkZbm6WIEuiiRIu4TGi3lg_2);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___ast_3460)(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q** dest__VQAzjFA4pS6k3b9cU6LNuQw_2, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* src__UYvSVFOZNg2i8gJQynIEBg_2);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8442)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__eAU3QjA0UBOxPQ9ceUjO64Q, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src__L9coWlEikoLlvuHjt6nk5sQ);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_19)(NimStringV2* dest__VTJh4gw5Rje9bocjsx81Ekg, NimStringV2 src__GJAw6lOoetbnH4F11f7wrg);
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, split__vm_10944)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__F5leEQuJRkyulJsiB4YBsw);
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__vm_10961)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__2P6cgen7kbXjyFDD3mg2LQ, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result__zS9bjpLvH5qLFqu440IuuMg);
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__vm_12693)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it__TbQToXYOGcPsOhRH8XfWXQ);
extern NIM_BOOL nimInErrorMode__system_3994;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3994);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___modulegraphs_10228)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* dest__OahwVO03J49bbt9aibiQuYUQ) {
	NI colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = ((NI)0);
	{
		while (1) {
			if (!(colontmp_ < ((NI)512))) goto LA2			;
			eqdestroy___stdZassertions_13((&(*dest__OahwVO03J49bbt9aibiQuYUQ).keys[(colontmp_)- 0]));
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	switch ((*dest__OahwVO03J49bbt9aibiQuYUQ).isInternal) {
	case NIM_FALSE:
	{
		NI colontmp__2;
		colontmp__2 = ((NI)0);
		{
			while (1) {
				if (!(colontmp__2 < ((NI)512))) goto LA5				;
				{
					NIM_BOOL T8_;
					T8_ = (NIM_BOOL)0;
					T8_ = nimDecRefIsLast((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_1.vals[(colontmp__2)- 0]);
					if (!T8_) goto LA9_;
					eqdestroy___ast_3466((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_1.vals[(colontmp__2)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimRawDispose((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_1.vals[(colontmp__2)- 0], ((NI)8));
				}
				LA9_: ;
				colontmp__2 += ((NI)1);
			} LA5: ;
		}
	}
	break;
	case NIM_TRUE:
	{
		NI colontmp__3;
		colontmp__3 = ((NI)0);
		{
			while (1) {
				if (!(colontmp__3 < ((NI)512))) goto LA13				;
				{
					NIM_BOOL T16_;
					T16_ = (NIM_BOOL)0;
					T16_ = nimDecRefIsLast((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_2.links[(colontmp__3)- 0]);
					if (!T16_) goto LA17_;
					eqdestroy___modulegraphs_10228((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_2.links[(colontmp__3)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimRawDispose((*dest__OahwVO03J49bbt9aibiQuYUQ)._isInternal_2.links[(colontmp__3)- 0], ((NI)8));
				}
				LA17_: ;
				colontmp__3 += ((NI)1);
			} LA13: ;
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8458)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* dest__XXPiQ9cBZBiplgSRWD6emWw, tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ src__iX1ew9cE79cL9bjJJvfYNfQ6A) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest__XXPiQ9cBZBiplgSRWD6emWw).root);
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest__XXPiQ9cBZBiplgSRWD6emWw).root);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest__XXPiQ9cBZBiplgSRWD6emWw).root, ((NI)8));
	}
	LA4_: ;
	(*dest__XXPiQ9cBZBiplgSRWD6emWw).root = src__iX1ew9cE79cL9bjJJvfYNfQ6A.root;
	(*dest__XXPiQ9cBZBiplgSRWD6emWw).entries = src__iX1ew9cE79cL9bjJJvfYNfQ6A.entries;
	}BeforeRet_: ;
}
static N_INLINE(void, nimSetMem__systemZmemory_7)(void* a__tZiCJHYy5dYyAh9cxwrrVhQ, int v__iM7JOvZxArJIvbhGyRZG6Q, NI size__ntsFNLS0mpvnjQFrZT7DCw) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a__tZiCJHYy5dYyAh9cxwrrVhQ, v__iM7JOvZxArJIvbhGyRZG6Q, ((size_t) (size__ntsFNLS0mpvnjQFrZT7DCw)));
}
static N_INLINE(void, nimZeroMem)(void* p__BuPKoq7dppy2upaj3KUaxw, NI size__ttWVm79bajRU3tarcA7MkLw) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_7(p__BuPKoq7dppy2upaj3KUaxw, ((int)0), size__ttWVm79bajRU3tarcA7MkLw);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, initBTree__vm_8428)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* Result) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T1_;
	nimZeroMem((void*)Result, sizeof(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ));
	T1_ = NIM_NIL;
	T1_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T1_).entries = ((NI)0);
	(*T1_).isInternal = NIM_FALSE;
	(*Result).root = T1_;
}
static N_INLINE(void, nimIncRef)(void* p__M1cYVc9bN6PEXNz0Oab9abOw) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___system_790(((NI) (ptrdiff_t) (p__M1cYVc9bN6PEXNz0Oab9abOw)), ((NI)16));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI)16);
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___vm_8439)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__JMzYMBMJ9ajhotzGeBjMMkQ, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src__8WAp9c9b4p8v5sBWLX7pQ9azg) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!src__8WAp9c9b4p8v5sBWLX7pQ9azg) goto LA3_;
		nimIncRef(src__8WAp9c9b4p8v5sBWLX7pQ9azg);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest__JMzYMBMJ9ajhotzGeBjMMkQ));
		if (!T7_) goto LA8_;
		eqdestroy___modulegraphs_10228((*dest__JMzYMBMJ9ajhotzGeBjMMkQ));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest__JMzYMBMJ9ajhotzGeBjMMkQ), ((NI)8));
	}
	LA8_: ;
	(*dest__JMzYMBMJ9ajhotzGeBjMMkQ) = src__8WAp9c9b4p8v5sBWLX7pQ9azg;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___vm_8436)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__OahwVO03J49bbt9aibiQuYUQ) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest__OahwVO03J49bbt9aibiQuYUQ));
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest__OahwVO03J49bbt9aibiQuYUQ));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest__OahwVO03J49bbt9aibiQuYUQ), ((NI)8));
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__vm_9813)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b__aLdAdbAwMquttonx7YwOVA, NimStringV2 key__WnbgMjfGgDNTGrKRqUbd3g) {
	NIM_BOOL result;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x = NIM_NIL;
	eqcopy___vm_8439(&x, b__aLdAdbAwMquttonx7YwOVA.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			if (!(*x).isInternal) goto LA3			;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI)0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA6						;
						j = i;
						{
							NIM_BOOL T9_;
							NI T11_;
							T9_ = (NIM_BOOL)0;
							T9_ = ((NI)(j + ((NI)1)) == (*x).entries);
							if (T9_) goto LA10_;
							T11_ = (NI)0;
							T11_ = cmp__system_1543(key__WnbgMjfGgDNTGrKRqUbd3g, (*x).keys[((NI)(j + ((NI)1)))- 0]);
							T9_ = (T11_ < ((NI)0));
							LA10_: ;
							if (!T9_) goto LA12_;
							eqcopy___vm_8439(&x, (*x)._isInternal_2.links[(j)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							goto LA4;
						}
						LA12_: ;
						i += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA16				;
				j_2 = i_2;
				{
					NI T19_;
					T19_ = (NI)0;
					T19_ = cmp__system_1543(key__WnbgMjfGgDNTGrKRqUbd3g, (*x).keys[(j_2)- 0]);
					if (!(T19_ == ((NI)0))) goto LA20_;
					result = NIM_TRUE;
					eqdestroy___vm_8436(&x);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA20_: ;
				i_2 += ((NI)1);
			} LA16: ;
		}
	}
	result = NIM_FALSE;
	eqdestroy___vm_8436(&x);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8436(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___vm_8442)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA** dest__eAU3QjA0UBOxPQ9ceUjO64Q, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* src__L9coWlEikoLlvuHjt6nk5sQ) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest__eAU3QjA0UBOxPQ9ceUjO64Q));
		if (!T3_) goto LA4_;
		eqdestroy___modulegraphs_10228((*dest__eAU3QjA0UBOxPQ9ceUjO64Q));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest__eAU3QjA0UBOxPQ9ceUjO64Q), ((NI)8));
	}
	LA4_: ;
	(*dest__eAU3QjA0UBOxPQ9ceUjO64Q) = src__L9coWlEikoLlvuHjt6nk5sQ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, copyHalf__vm_10961)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__2P6cgen7kbXjyFDD3mg2LQ, tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result__zS9bjpLvH5qLFqu440IuuMg) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NI j;
		NI i;
		j = (NI)0;
		i = ((NI)0);
		{
			while (1) {
				if (!(i < ((NI)256))) goto LA3				;
				j = i;
				eqcopy___stdZassertions_16((&(*result__zS9bjpLvH5qLFqu440IuuMg).keys[(j)- 0]), (*h__2P6cgen7kbXjyFDD3mg2LQ).keys[((NI)(((NI)256) + j))- 0]);
				i += ((NI)1);
			} LA3: ;
		}
	}
	{
		if (!(*h__2P6cgen7kbXjyFDD3mg2LQ).isInternal) goto LA6_;
		{
			NI j_2;
			NI i_2;
			j_2 = (NI)0;
			i_2 = ((NI)0);
			{
				while (1) {
					if (!(i_2 < ((NI)256))) goto LA10					;
					j_2 = i_2;
					eqcopy___vm_8439(&(*result__zS9bjpLvH5qLFqu440IuuMg)._isInternal_2.links[(j_2)- 0], (*h__2P6cgen7kbXjyFDD3mg2LQ)._isInternal_2.links[((NI)(((NI)256) + j_2))- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_2 += ((NI)1);
				} LA10: ;
			}
		}
	}
	goto LA4_;
	LA6_: ;
	{
		{
			NI j_3;
			NI i_3;
			j_3 = (NI)0;
			i_3 = ((NI)0);
			{
				while (1) {
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T15_;
					if (!(i_3 < ((NI)256))) goto LA14					;
					j_3 = i_3;
					T15_ = NIM_NIL;
					T15_ = (*h__2P6cgen7kbXjyFDD3mg2LQ)._isInternal_1.vals[((NI)(((NI)256) + j_3))- 0];
					(*h__2P6cgen7kbXjyFDD3mg2LQ)._isInternal_1.vals[((NI)(((NI)256) + j_3))- 0] = 0;
					eqsink___ast_3460(&(*result__zS9bjpLvH5qLFqu440IuuMg)._isInternal_1.vals[(j_3)- 0], T15_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					i_3 += ((NI)1);
				} LA14: ;
			}
		}
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, split__vm_10944)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__F5leEQuJRkyulJsiB4YBsw) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result;
	NIM_BOOL colontmpD_;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (NIM_BOOL)0;
	T1_ = NIM_NIL;
	T1_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T1_).entries = ((NI)256);
	colontmpD_ = (*h__F5leEQuJRkyulJsiB4YBsw).isInternal;
	(*T1_).isInternal = colontmpD_;
	result = T1_;
	(*h__F5leEQuJRkyulJsiB4YBsw).entries = ((NI)256);
	copyHalf__vm_10961(h__F5leEQuJRkyulJsiB4YBsw, result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*, insert__vm_10116)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* h__kmyeGfve0PM77UJ9ap7GamA, NimStringV2 key__hoZORW5Kd47ZIDGGm7Em2Q, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val__bqwxa1faLq7jEyiLPVDZVQ) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* result;
	NimStringV2 newKey;
	NI j;
NIM_BOOL oldNimErrFin33_;
NIM_BOOL oldNimErrFin23_;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T48_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	newKey.len = 0; newKey.p = NIM_NIL;
	eqcopy___stdZassertions_16((&newKey), key__hoZORW5Kd47ZIDGGm7Em2Q);
	j = ((NI)0);
	{
		if (!!((*h__kmyeGfve0PM77UJ9ap7GamA).isInternal)) goto LA4_;
		{
			while (1) {
				if (!(j < (*h__kmyeGfve0PM77UJ9ap7GamA).entries)) goto LA7				;
				{
					NI T10_;
					T10_ = (NI)0;
					T10_ = cmp__system_1543(key__hoZORW5Kd47ZIDGGm7Em2Q, (*h__kmyeGfve0PM77UJ9ap7GamA).keys[(j)- 0]);
					if (!(T10_ == ((NI)0))) goto LA11_;
					eqcopy___ast_3457(&(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_1.vals[(j)- 0], val__bqwxa1faLq7jEyiLPVDZVQ);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___stdZassertions_13((&newKey));
					goto BeforeRet_;
				}
				LA11_: ;
				{
					NI T15_;
					T15_ = (NI)0;
					T15_ = cmp__system_1543(key__hoZORW5Kd47ZIDGGm7Em2Q, (*h__kmyeGfve0PM77UJ9ap7GamA).keys[(j)- 0]);
					if (!(T15_ < ((NI)0))) goto LA16_;
					goto LA6;
				}
				LA16_: ;
				j += ((NI)1);
			} LA7: ;
		} LA6: ;
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)(j + ((NI)1));
			res = (*h__kmyeGfve0PM77UJ9ap7GamA).entries;
			{
				while (1) {
					tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* T21_;
					if (!(colontmp_ <= res)) goto LA20					;
					i = res;
					T21_ = NIM_NIL;
					T21_ = (*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_1.vals[((NI)(i - ((NI)1)))- 0];
					(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_1.vals[((NI)(i - ((NI)1)))- 0] = 0;
					eqsink___ast_3460(&(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_1.vals[(i)- 0], T21_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					res -= ((NI)1);
				} LA20: ;
			}
		}
		eqcopy___ast_3457(&(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_1.vals[(j)- 0], val__bqwxa1faLq7jEyiLPVDZVQ);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA2_;
	LA4_: ;
	{
		tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* newLink;
		newLink = NIM_NIL;
		newLink = ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL);
		{
			while (1) {
				if (!(j < (*h__kmyeGfve0PM77UJ9ap7GamA).entries)) goto LA25				;
				{
					NIM_BOOL T28_;
					NI T30_;
					tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* u;
					T28_ = (NIM_BOOL)0;
					T28_ = ((NI)(j + ((NI)1)) == (*h__kmyeGfve0PM77UJ9ap7GamA).entries);
					if (T28_) goto LA29_;
					T30_ = (NI)0;
					T30_ = cmp__system_1543(key__hoZORW5Kd47ZIDGGm7Em2Q, (*h__kmyeGfve0PM77UJ9ap7GamA).keys[((NI)(j + ((NI)1)))- 0]);
					T28_ = (T30_ < ((NI)0));
					LA29_: ;
					if (!T28_) goto LA31_;
					u = NIM_NIL;
					u = insert__vm_10116((*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_2.links[(j)- 0], key__hoZORW5Kd47ZIDGGm7Em2Q, val__bqwxa1faLq7jEyiLPVDZVQ);
					if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
					j += ((NI)1);
					{
						if (!(u == ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL))) goto LA36_;
						eqsink___vm_8442(&result, ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL));
						if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
						eqdestroy___vm_8436(&u);
						if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
						eqdestroy___vm_8436(&newLink);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						eqdestroy___stdZassertions_13((&newKey));
						goto BeforeRet_;
					}
					LA36_: ;
					eqcopy___stdZassertions_16((&newKey), (*u).keys[(((NI)0))- 0]);
					eqsink___vm_8442(&newLink, u);
					if (NIM_UNLIKELY(*nimErr_)) goto LA33_;
					u = 0;
					eqdestroy___vm_8436(&u);
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
					goto LA24;
					{
						LA33_:;
					}
					{
						oldNimErrFin33_ = *nimErr_; *nimErr_ = NIM_FALSE;
						eqdestroy___vm_8436(&u);
						if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
						*nimErr_ = oldNimErrFin33_;
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
				}
				LA31_: ;
				j += ((NI)1);
			} LA25: ;
		} LA24: ;
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (NI)(j + ((NI)1));
			res_2 = (*h__kmyeGfve0PM77UJ9ap7GamA).entries;
			{
				while (1) {
					if (!(colontmp__2 <= res_2)) goto LA42					;
					i_2 = res_2;
					eqcopy___vm_8439(&(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_2.links[(i_2)- 0], (*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_2.links[((NI)(i_2 - ((NI)1)))- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
					res_2 -= ((NI)1);
				} LA42: ;
			}
		}
		eqsink___vm_8442(&(*h__kmyeGfve0PM77UJ9ap7GamA)._isInternal_2.links[(j)- 0], newLink);
		if (NIM_UNLIKELY(*nimErr_)) goto LA23_;
		newLink = 0;
		{
			LA23_:;
		}
		{
			oldNimErrFin23_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___vm_8436(&newLink);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin23_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA2_: ;
	{
		NI i_3;
		NI colontmp__3;
		NI res_3;
		i_3 = (NI)0;
		colontmp__3 = (NI)0;
		colontmp__3 = (NI)(j + ((NI)1));
		res_3 = (*h__kmyeGfve0PM77UJ9ap7GamA).entries;
		{
			while (1) {
				if (!(colontmp__3 <= res_3)) goto LA47				;
				i_3 = res_3;
				eqcopy___stdZassertions_16((&(*h__kmyeGfve0PM77UJ9ap7GamA).keys[(i_3)- 0]), (*h__kmyeGfve0PM77UJ9ap7GamA).keys[((NI)(i_3 - ((NI)1)))- 0]);
				res_3 -= ((NI)1);
			} LA47: ;
		}
	}
	eqsink___stdZassertions_19((&(*h__kmyeGfve0PM77UJ9ap7GamA).keys[(j)- 0]), newKey);
	newKey.len = 0; newKey.p = NIM_NIL;
	(*h__kmyeGfve0PM77UJ9ap7GamA).entries += ((NI)1);
	T48_ = NIM_NIL;
	{
		if (!((*h__kmyeGfve0PM77UJ9ap7GamA).entries < ((NI)512))) goto LA51_;
		result = ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL);
	}
	goto LA49_;
	LA51_: ;
	{
		result = split__vm_10944(h__kmyeGfve0PM77UJ9ap7GamA);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA49_: ;
	eqdestroy___stdZassertions_13((&newKey));
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_13((&newKey));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__vm_10100)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ* b__5t2VeOW7OCYAj03FUBqrNA, NimStringV2 key__JkpEpGMAQiUp9cghFRpzIZA, tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* val__w1RpoCE53aiSWocRcMziug) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* u;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* t;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* T6_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	u = NIM_NIL;
	t = NIM_NIL;
	u = insert__vm_10116((*b__5t2VeOW7OCYAj03FUBqrNA).root, key__JkpEpGMAQiUp9cghFRpzIZA, val__w1RpoCE53aiSWocRcMziug);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	(*b__5t2VeOW7OCYAj03FUBqrNA).entries += ((NI)1);
	{
		if (!(u == ((tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) NIM_NIL))) goto LA4_;
		eqdestroy___vm_8436(&t);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___vm_8436(&u);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA4_: ;
	T6_ = NIM_NIL;
	T6_ = (tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA*) nimNewObj(sizeof(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA), NIM_ALIGNOF(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA));
	(*T6_).entries = ((NI)2);
	(*T6_).isInternal = NIM_TRUE;
	t = T6_;
	eqcopy___stdZassertions_16((&(*t).keys[(((NI)0))- 0]), (*(*b__5t2VeOW7OCYAj03FUBqrNA).root).keys[(((NI)0))- 0]);
	eqcopy___vm_8439(&(*t)._isInternal_2.links[(((NI)0))- 0], (*b__5t2VeOW7OCYAj03FUBqrNA).root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	eqcopy___stdZassertions_16((&(*t).keys[(((NI)1))- 0]), (*u).keys[(((NI)0))- 0]);
	eqsink___vm_8442(&(*t)._isInternal_2.links[(((NI)1))- 0], u);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	u = 0;
	eqsink___vm_8442(&(*b__5t2VeOW7OCYAj03FUBqrNA).root, t);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	t = 0;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8436(&t);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___vm_8436(&u);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q*, getOrDefault__vm_12092)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b__YEBfxW6Tloy69c3Q9cF5sQtg, NimStringV2 key__PVQ3FLh89bQOD8pe58X7i6g) {
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* result;
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	x = NIM_NIL;
	eqcopy___vm_8439(&x, b__YEBfxW6Tloy69c3Q9cF5sQtg.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		while (1) {
			if (!(*x).isInternal) goto LA3			;
			{
				NI j;
				NI i;
				j = (NI)0;
				i = ((NI)0);
				{
					while (1) {
						if (!(i < (*x).entries)) goto LA6						;
						j = i;
						{
							NIM_BOOL T9_;
							NI T11_;
							T9_ = (NIM_BOOL)0;
							T9_ = ((NI)(j + ((NI)1)) == (*x).entries);
							if (T9_) goto LA10_;
							T11_ = (NI)0;
							T11_ = cmp__system_1543(key__PVQ3FLh89bQOD8pe58X7i6g, (*x).keys[((NI)(j + ((NI)1)))- 0]);
							T9_ = (T11_ < ((NI)0));
							LA10_: ;
							if (!T9_) goto LA12_;
							eqcopy___vm_8439(&x, (*x)._isInternal_2.links[(j)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							goto LA4;
						}
						LA12_: ;
						i += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	{
		NI j_2;
		NI i_2;
		j_2 = (NI)0;
		i_2 = ((NI)0);
		{
			while (1) {
				if (!(i_2 < (*x).entries)) goto LA16				;
				j_2 = i_2;
				{
					NI T19_;
					T19_ = (NI)0;
					T19_ = cmp__system_1543(key__PVQ3FLh89bQOD8pe58X7i6g, (*x).keys[(j_2)- 0]);
					if (!(T19_ == ((NI)0))) goto LA20_;
					eqcopy___ast_3457(&result, (*x)._isInternal_1.vals[(j_2)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					eqdestroy___vm_8436(&x);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				LA20_: ;
				i_2 += ((NI)1);
			} LA16: ;
		}
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8436(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__vm_12465)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b__Hq5xVxndOx9bKgx5Co4IB7Q, NI index__eq4kSoX0WQqIpO5lR9aAFMw) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (index__eq4kSoX0WQqIpO5lR9aAFMw < b__Hq5xVxndOx9bKgx5Co4IB7Q.entries);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, countSubTree__vm_12693)(tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it__TbQToXYOGcPsOhRH8XfWXQ) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!(*it__TbQToXYOGcPsOhRH8XfWXQ).isInternal) goto LA3_;
		result = ((NI)0);
		{
			NI k;
			NI i;
			k = (NI)0;
			i = ((NI)0);
			{
				while (1) {
					NI T8_;
					if (!(i < (*it__TbQToXYOGcPsOhRH8XfWXQ).entries)) goto LA7					;
					k = i;
					T8_ = (NI)0;
					T8_ = countSubTree__vm_12693((*it__TbQToXYOGcPsOhRH8XfWXQ)._isInternal_2.links[(k)- 0]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					result += T8_;
					i += ((NI)1);
				} LA7: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		result = (*it__TbQToXYOGcPsOhRH8XfWXQ).entries;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, next__vm_12616)(tyObject_BTree__BxbTQohN8QrxN73DA9bcM9aQ b__U8vWxyMym3I9ckpyMBBA5TA, NI index__Yv9aYFSFgt9a9bYU6dgOvOarg, tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ* Result) {
	tyObject_NodecolonObjectType___mrvIQfKwBmbEEQo9c7zUoMA* it;
	NimStringV2 colontmp_;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* colontmp__2;
	NI i;
	NI colontmp__3;
	NimStringV2 blitTmp;
	tyObject_TNode__1pEudI6ZemBfsBxMjg4u5Q* blitTmp_2;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Result, sizeof(tyTuple__fEYsTpTmLyu9a9a9aiqr9aMdLQ));
	it = NIM_NIL;
	colontmp_.len = 0; colontmp_.p = NIM_NIL;
	colontmp__2 = NIM_NIL;
	eqcopy___vm_8439(&it, b__U8vWxyMym3I9ckpyMBBA5TA.root);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	i = index__Yv9aYFSFgt9a9bYU6dgOvOarg;
	{
		while (1) {
			NI sum;
			if (!(*it).isInternal) goto LA3			;
			sum = ((NI)0);
			{
				NI k;
				NI i_2;
				k = (NI)0;
				i_2 = ((NI)0);
				{
					while (1) {
						NI c;
						if (!(i_2 < (*it).entries)) goto LA6						;
						k = i_2;
						c = countSubTree__vm_12693((*it)._isInternal_2.links[(k)- 0]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						sum += c;
						{
							if (!(i < sum)) goto LA9_;
							eqcopy___vm_8439(&it, (*it)._isInternal_2.links[(k)- 0]);
							if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
							i -= (NI)(sum - c);
							goto LA4;
						}
						LA9_: ;
						i_2 += ((NI)1);
					} LA6: ;
				}
			} LA4: ;
		} LA3: ;
	}
	eqcopy___stdZassertions_16((&colontmp_), (*it).keys[(i)- 0]);
	eqcopy___ast_3457(&colontmp__2, (*it)._isInternal_1.vals[(i)- 0]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmp__3 = (NI)(index__Yv9aYFSFgt9a9bYU6dgOvOarg + ((NI)1));
	blitTmp = colontmp_;
	(*Result).Field0 = blitTmp;
	blitTmp_2 = colontmp__2;
	(*Result).Field1 = blitTmp_2;
	(*Result).Field2 = colontmp__3;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___vm_8436(&it);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
