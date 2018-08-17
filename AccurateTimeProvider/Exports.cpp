#include "stdafx.h"
#include "Exports.h"

MT4_EXPFUNC double _stdcall GetAccurateTime()
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	//
	LARGE_INTEGER nFreq = { 0 };
	LARGE_INTEGER nTime = { 0 };

	//��ȡ�Ƿ�֧�־�ȷ��ʱ����
	return (QueryPerformanceFrequency(&nFreq) && QueryPerformanceCounter(&nTime))
		? (double)nTime.QuadPart / (double)nFreq.QuadPart
		: -1.0;

}

