#include <objbase.h>
#include "../ATLProject2/ATLProject2_i.h"
#include "../ATLProject2/ATLProject2_i.c"

#include <atlcomcli.h>
using namespace ATL;

int main()
{
	HMODULE hLib = LoadLibrary(_T("BleWinrtDll.dll"));
	HRESULT hr = CoInitialize(NULL);

	if (SUCCEEDED(hr))
	{
		{
			CLSID clsid;
			CComPtr<IDMessage> cpDisp;
			hr = CLSIDFromProgID(L"x64Message.App", &clsid);
			if (SUCCEEDED(hr))
				hr = CoCreateInstance(clsid, NULL, CLSCTX_LOCAL_SERVER, IID_IDMessage, (void**)&cpDisp);
			CComVariant var(L"HELLO");
			cpDisp->Show(var);
		}
		CoUninitialize();
	}
	return hr;
}