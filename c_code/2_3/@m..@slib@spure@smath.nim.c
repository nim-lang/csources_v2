/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <math.h>
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
typedef NU8 tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA;
static N_INLINE(NF, abs__pureZmath_154)(NF x__clSHt9b19czdoEneCA58XG9ag);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_184)(NI x__WoeEmSTM1q9bebWr5AImfNA) {
	NI result;
	result = (NI)0;
	result = (NI)(x__WoeEmSTM1q9bebWr5AImfNA - ((NI)1));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI)16))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI)8))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI)4))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI)2))));
	result = (NI)(result | (NI)((NI32)(result) >> (NU32)(((NI)1))));
	result += (NI)(((NI)1) + (x__WoeEmSTM1q9bebWr5AImfNA <= ((NI)0)));
	return result;
}
static N_INLINE(NF, abs__pureZmath_154)(NF x__clSHt9b19czdoEneCA58XG9ag) {
	NF result;
	result = (NF)0;
	result = fabs(x__clSHt9b19czdoEneCA58XG9ag);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA, classify__pureZmath_151)(NF x__djC9ccvamPhkHKsdQDvt8dw) {
	tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA result;
{	result = (tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0;
	{
		if (!(x__djC9ccvamPhkHKsdQDvt8dw == 0.0)) goto LA3_;
		{
			if (!(((NF)(1.0) / (NF)(x__djC9ccvamPhkHKsdQDvt8dw)) == INF)) goto LA7_;
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)2);
			goto BeforeRet_;
		}
		goto LA5_;
		LA7_: ;
		{
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)3);
			goto BeforeRet_;
		}
		LA5_: ;
	}
	LA3_: ;
	{
		if (!(((NF)(x__djC9ccvamPhkHKsdQDvt8dw) * (NF)(0.5)) == x__djC9ccvamPhkHKsdQDvt8dw)) goto LA12_;
		{
			if (!(0.0 < x__djC9ccvamPhkHKsdQDvt8dw)) goto LA16_;
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)5);
			goto BeforeRet_;
		}
		goto LA14_;
		LA16_: ;
		{
			result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)6);
			goto BeforeRet_;
		}
		LA14_: ;
	}
	LA12_: ;
	{
		if (!!((x__djC9ccvamPhkHKsdQDvt8dw == x__djC9ccvamPhkHKsdQDvt8dw))) goto LA21_;
		result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)4);
		goto BeforeRet_;
	}
	LA21_: ;
	{
		NF T25_;
		T25_ = (NF)0;
		T25_ = abs__pureZmath_154(x__djC9ccvamPhkHKsdQDvt8dw);
		if (!(T25_ < 2.225073858507201e-308)) goto LA26_;
		result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)1);
		goto BeforeRet_;
	}
	LA26_: ;
	result = ((tyEnum_FloatClass__pPga1yW9b8J9cwNnm9b1aPRnA)0);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NF, round__vm_13603)(NF x__D3wQRNPUKg3tsGfsicNptA, NI places__hY6dmRRa1Thg1Ni0McpkMw) {
	NF result;
	result = (NF)0;
	{
		if (!(places__hY6dmRRa1Thg1Ni0McpkMw == ((NI)0))) goto LA3_;
		result = round(x__D3wQRNPUKg3tsGfsicNptA);
	}
	goto LA1_;
	LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(10.0, ((NF) (places__hY6dmRRa1Thg1Ni0McpkMw)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x__D3wQRNPUKg3tsGfsicNptA) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__pureZtimes_284)(NI64 x__BwyYc9cDX2sWM1J9asqFiwLg, NI64 y__KGT3wqbUoWtzlSr1y5GUkA) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x__BwyYc9cDX2sWM1J9asqFiwLg / y__KGT3wqbUoWtzlSr1y5GUkA);
	r = (NI64)(x__BwyYc9cDX2sWM1J9asqFiwLg % y__KGT3wqbUoWtzlSr1y5GUkA);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y__KGT3wqbUoWtzlSr1y5GUkA < IL64(0));
		LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y__KGT3wqbUoWtzlSr1y5GUkA);
		LA8_: ;
		T3_ = T7_;
		LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI)1);
	}
	LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo__pureZmath_181)(NI x__j2MpD9cVVbd9alVb9b1iEovhQ) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI)0) < x__j2MpD9cVVbd9alVb9b1iEovhQ);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x__j2MpD9cVVbd9alVb9b1iEovhQ & (NI)(x__j2MpD9cVVbd9alVb9b1iEovhQ - ((NI)1))) == ((NI)0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
