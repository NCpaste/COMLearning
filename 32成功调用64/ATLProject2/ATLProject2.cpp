// ATLProject2.cpp: WinMain 的实现


#include "pch.h"
#include "framework.h"
#include "resource.h"
#include "ATLProject2_i.h"

using namespace ATL;

class CATLProject2Module : public ATL::CAtlExeModuleT< CATLProject2Module >
{
public:
	DECLARE_LIBID(LIBID_ATLProject2Lib)
		DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLPROJECT2, "{4a02363c-cbc1-403a-905e-8ae116ccd454}")
};

CATLProject2Module _AtlModule;
//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/,
	LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}
