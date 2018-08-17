#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

#define MT4_EXPFUNC __declspec(dllexport)  

	MT4_EXPFUNC double _stdcall GetAccurateTime();

#ifdef __cplusplus
}
#endif
