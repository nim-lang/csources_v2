/* Generated by Nim Compiler v1.9.1 */
#define NIM_INTBITS 64

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
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_16)(NimStringV2* dest__9bysEU1F6xjkB13t7jg7tFg, NimStringV2 src__Q0EcxC6eCjA9adTTWfOBbQQ);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nativeToUnixPath__stdZprivateZglobs_76)(NimStringV2 path__0mEELd89bWpeKz485b8JdoA) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	eqcopy___stdZassertions_16((&result), path__0mEELd89bWpeKz485b8JdoA);
	return result;
}
