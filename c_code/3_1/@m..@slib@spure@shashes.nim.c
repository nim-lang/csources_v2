/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_195)(NU8* x__9aDt9bkXl9bVWYAuN1fhLRmPA, NI x__9aDt9bkXl9bVWYAuN1fhLRmPALen_0);
static N_INLINE(NU32, rotl32__pureZhashes_183)(NU32 x__3lHgIZXKg5vjmZaIiI51wA, NI r__Qe8V3vC9bDMuMXk18d269bJA);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h__mQSIWRSiILaOXahsaQrfEA, NI val__6BqXyWQClsmMQ09a9bXX9ai9bw);
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h__1bwjMSLKO4K4c9bKmOGLGGg);
static N_INLINE(NI, hash__pureZhashes_131)(NI x__uVTlbX9a1gXGBRA9aBVU59c1g);
static N_INLINE(NI, hashWangYi1__pureZhashes_139)(NU64 x__W6g2fmHoiYXB3l9buwBE5pg);
static N_INLINE(NU64, hiXorLo__pureZhashes_80)(NU64 a__uCZh8UDElv9bCCYlpIqEhhQ, NU64 b__wSqZMZxL9cXkGeKtZtr6B6g);
static N_INLINE(NU64, hiXorLoFallback64__pureZhashes_36)(NU64 a__Z4qHTZoqTkY9aI4JGSTbXog, NU64 b__j9cH14c70Ua9cuNT0yo2O9cAw);
extern NIM_BOOL nimInErrorMode__system_3980;
static N_INLINE(NU32, rotl32__pureZhashes_183)(NU32 x__3lHgIZXKg5vjmZaIiI51wA, NI r__Qe8V3vC9bDMuMXk18d269bJA) {
	NU32 result;
	result = (NU32)0;
	result = (NU32)((NU32)((NU32)(x__3lHgIZXKg5vjmZaIiI51wA) << (NU32)(r__Qe8V3vC9bDMuMXk18d269bJA)) | (NU32)((NU32)(x__3lHgIZXKg5vjmZaIiI51wA) >> (NU32)((NI)(((NI)32) - r__Qe8V3vC9bDMuMXk18d269bJA))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_3980);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_195)(NU8* x__9aDt9bkXl9bVWYAuN1fhLRmPA, NI x__9aDt9bkXl9bVWYAuN1fhLRmPALen_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	size = x__9aDt9bkXl9bVWYAuN1fhLRmPALen_0;
	stepSize = ((NI)4);
	n = (NI)(size / stepSize);
	h1 = (NU32)0;
	i = ((NI)0);
	{
		while (1) {
			NU32 k1;
			if (!(i < (NI)(n * stepSize))) goto LA2			;
			k1 = (NU32)0;
			k1 = (*((NU32*) ((&x__9aDt9bkXl9bVWYAuN1fhLRmPA[i]))));
			i += stepSize;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)IL64(3432918353))));
			k1 = rotl32__pureZhashes_183(k1, ((NI)15));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)461845907)));
			h1 = (NU32)(h1 ^ k1);
			h1 = rotl32__pureZhashes_183(h1, ((NI)13));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32)5)))) + (NU32)(((NU32)IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	rem = (NI)(size % stepSize);
	{
		while (1) {
			if (!(((NI)0) < rem)) goto LA4			;
			rem -= ((NI)1);
			k1_2 = (NU32)((NU32)((NU32)(k1_2) << (NU32)(((NI)8))) | ((NU32) (x__9aDt9bkXl9bVWYAuN1fhLRmPA[(NI)(i + rem)])));
		} LA4: ;
	}
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)IL64(3432918353))));
	k1_2 = rotl32__pureZhashes_183(k1_2, ((NI)15));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)461845907)));
	h1 = (NU32)(h1 ^ k1_2);
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI)16))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(2246822507))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI)13))));
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(3266489909))));
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU32)(((NI)16))));
	result = ((NI) (h1));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_284)(NimStringV2 x__UiY9c69cgZt7GwmbRpotW0IQ_2) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((((x__UiY9c69cgZt7GwmbRpotW0IQ_2).p) ? ((NU8*)x__UiY9c69cgZt7GwmbRpotW0IQ_2.p->data+(((NI)0))) : NIM_NIL), ((x__UiY9c69cgZt7GwmbRpotW0IQ_2.len-1))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, emarkamp___pureZhashes_4)(NI h__mQSIWRSiILaOXahsaQrfEA, NI val__6BqXyWQClsmMQ09a9bXX9ai9bw) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h__mQSIWRSiILaOXahsaQrfEA));
	val_2 = ((NU) (val__6BqXyWQClsmMQ09a9bXX9ai9bw));
	res = (NU)((NU32)(h_2) + (NU32)(val_2));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI)10)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI)6))));
	result = ((NI) (res));
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_19)(NI h__1bwjMSLKO4K4c9bKmOGLGGg) {
	NI result;
	NU h_2;
	NU res;
	result = (NI)0;
	h_2 = ((NU) (h__1bwjMSLKO4K4c9bKmOGLGGg));
	res = (NU)((NU32)(h_2) + (NU32)((NU)((NU32)(h_2) << (NU32)(((NI)3)))));
	res = (NU)(res ^ (NU)((NU32)(res) >> (NU32)(((NI)11))));
	res = (NU)((NU32)(res) + (NU32)((NU)((NU32)(res) << (NU32)(((NI)15)))));
	result = ((NI) (res));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__pureZhashes_362)(NimStringV2 x__9c4bIxSwq9bYM7XuZ7Y8Hgcg) {
	NI result;
	NI h;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	h = ((NI)0);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(x__9c4bIxSwq9bYM7XuZ7Y8Hgcg.len - ((NI)1));
		res = ((NI)0);
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA3				;
				i = res;
				c = x__9c4bIxSwq9bYM7XuZ7Y8Hgcg.p->data[i];
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI)32))))));
				}
				LA6_: ;
				h = emarkamp___pureZhashes_4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				res += ((NI)1);
			} LA3: ;
		}
	}
	result = emarkdollar___pureZhashes_19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_295)(NimStringV2 x__UWqHuQ5vl2auFcfneTFFUA) {
	NI result;
	NI h;
	NI i;
	NI xLen;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	h = ((NI)0);
	i = ((NI)0);
	xLen = x__UWqHuQ5vl2auFcfneTFFUA.len;
	{
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2			;
			c = x__UWqHuQ5vl2auFcfneTFFUA.p->data[i];
			{
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				i += ((NI)1);
			}
			goto LA3_;
			LA5_: ;
			{
				{
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					c = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI)32))))));
				}
				LA10_: ;
				h = emarkamp___pureZhashes_4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI)1);
			}
			LA3_: ;
		} LA2: ;
	}
	result = emarkdollar___pureZhashes_19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NU64, hiXorLoFallback64__pureZhashes_36)(NU64 a__Z4qHTZoqTkY9aI4JGSTbXog, NU64 b__j9cH14c70Ua9cuNT0yo2O9cAw) {
	NU64 result;
	NU64 colontmpD_;
	NU64 colontmpD__2;
	NU64 colontmpD__3;
	NU64 colontmpD__4;
	NU64 aH;
	NU64 aL;
	NU64 bH;
	NU64 bL;
	NU64 rHH;
	NU64 rHL;
	NU64 rLH;
	NU64 rLL;
	NU64 t;
	NU64 c;
	NU64 lo;
	NU64 T6_;
	NU64 hi;
{	result = (NU64)0;
	colontmpD_ = (NU64)0;
	colontmpD__2 = (NU64)0;
	colontmpD__3 = (NU64)0;
	colontmpD__4 = (NU64)0;
	aH = (NU64)((NU64)(a__Z4qHTZoqTkY9aI4JGSTbXog) >> (NU64)(((NI)32)));
	aL = (NU64)(a__Z4qHTZoqTkY9aI4JGSTbXog & 4294967295ULL);
	bH = (NU64)((NU64)(b__j9cH14c70Ua9cuNT0yo2O9cAw) >> (NU64)(((NI)32)));
	bL = (NU64)(b__j9cH14c70Ua9cuNT0yo2O9cAw & 4294967295ULL);
	rHH = (NU64)((NU64)(aH) * (NU64)(bH));
	rHL = (NU64)((NU64)(aH) * (NU64)(bL));
	rLH = (NU64)((NU64)(aL) * (NU64)(bH));
	rLL = (NU64)((NU64)(aL) * (NU64)(bL));
	t = (NU64)((NU64)(rLL) + (NU64)((NU64)((NU64)(rHL) << (NU64)(((NI)32)))));
	{
		if (!((NU64)(t) < (NU64)(rLL))) goto LA3_;
		colontmpD_ = 1ULL;
		c = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = 0ULL;
		c = colontmpD__2;
	}
	LA1_: ;
	lo = (NU64)((NU64)(t) + (NU64)((NU64)((NU64)(rLH) << (NU64)(((NI)32)))));
	T6_ = (NU64)0;
	{
		if (!((NU64)(lo) < (NU64)(t))) goto LA9_;
		colontmpD__3 = 1ULL;
		T6_ = colontmpD__3;
	}
	goto LA7_;
	LA9_: ;
	{
		colontmpD__4 = 0ULL;
		T6_ = colontmpD__4;
	}
	LA7_: ;
	c += T6_;
	hi = (NU64)((NU64)((NU64)((NU64)((NU64)((NU64)(rHH) + (NU64)((NU64)((NU64)(rHL) >> (NU64)(((NI)32)))))) + (NU64)((NU64)((NU64)(rLH) >> (NU64)(((NI)32)))))) + (NU64)(c));
	result = (NU64)(hi ^ lo);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NU64, hiXorLo__pureZhashes_80)(NU64 a__uCZh8UDElv9bCCYlpIqEhhQ, NU64 b__wSqZMZxL9cXkGeKtZtr6B6g) {
	NU64 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NU64)0;
	result = hiXorLoFallback64__pureZhashes_36(a__uCZh8UDElv9bCCYlpIqEhhQ, b__wSqZMZxL9cXkGeKtZtr6B6g);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, hashWangYi1__pureZhashes_139)(NU64 x__W6g2fmHoiYXB3l9buwBE5pg) {
	NI result;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NU64)0;
	T1_ = hiXorLo__pureZhashes_80(11562461410679940143ULL, (NU64)(x__W6g2fmHoiYXB3l9buwBE5pg ^ 16646288086500911323ULL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NU64)0;
	T2_ = hiXorLo__pureZhashes_80(T1_, 16952864883938283885ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T2_));
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, hash__pureZhashes_131)(NI x__uVTlbX9a1gXGBRA9aBVU59c1g) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = hashWangYi1__pureZhashes_139(((NU64) (x__uVTlbX9a1gXGBRA9aBVU59c1g)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__sigmatch_6390)(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ x__uVTlbX9a1gXGBRA9aBVU59c1g) {
	NI result;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_131(x__uVTlbX9a1gXGBRA9aBVU59c1g.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_131(x__uVTlbX9a1gXGBRA9aBVU59c1g.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkdollar___pureZhashes_19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_290)(NimStringV2 sBuf__aZe7Eo1NHVLKwd9c4y9a2jCw, NI sPos__xoyHbBKE0Mfd7phx2e4gLw, NI ePos__ZJHXK4zpQVLitjPJjoZbSg) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((((sBuf__aZe7Eo1NHVLKwd9c4y9a2jCw).p) ? ((NU8*)sBuf__aZe7Eo1NHVLKwd9c4y9a2jCw.p->data+(sPos__xoyHbBKE0Mfd7phx2e4gLw)) : NIM_NIL), (ePos__ZJHXK4zpQVLitjPJjoZbSg)-(sPos__xoyHbBKE0Mfd7phx2e4gLw)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__vm_13719)(NU8* aBuf__MQCfnHnZbf0un9baE9aaVqRg, NI aBuf__MQCfnHnZbf0un9baE9aaVqRgLen_0, NI sPos__bwwLIo8ub9asgPlOgm9cjY8w, NI ePos__r9aZqUYcjDHk24J9b0LLipSQ) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = murmurHash__pureZhashes_195((NU8*)(aBuf__MQCfnHnZbf0un9baE9aaVqRg)+(sPos__bwwLIo8ub9asgPlOgm9cjY8w), (ePos__r9aZqUYcjDHk24J9b0LLipSQ)-(sPos__bwwLIo8ub9asgPlOgm9cjY8w)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__lineinfos_268)(tyTuple__47w2DboNEPf69aPgubZdd7Q x__uVTlbX9a1gXGBRA9aBVU59c1g) {
	NI result;
	NI T1_;
	NI T2_;
	NI T3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_131(x__uVTlbX9a1gXGBRA9aBVU59c1g.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_131(x__uVTlbX9a1gXGBRA9aBVU59c1g.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (NI)0;
	T3_ = hash__pureZhashes_131(x__uVTlbX9a1gXGBRA9aBVU59c1g.Field2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_4(result, T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkdollar___pureZhashes_19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
