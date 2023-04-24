#include <objbase.h>
#include "../ATLProject2/ATLProject2_i.h"
#include "../ATLProject2/ATLProject2_i.c"

// GUID的信息在.c中，所以需要手动调用

#include <atlcomcli.h>
using namespace ATL;

int main()
{
	HRESULT hr = CoInitialize(NULL);
	if (SUCCEEDED(hr))
	{
		{
			CComPtr<IMessage> cpMessage;
			hr = CoCreateInstance(CLSID_Message, NULL, CLSCTX_LOCAL_SERVER, IID_IMessage, (void**)&cpMessage);
			CComVariant var(L"HELLO");
			hr = cpMessage->Show(var);
		}
		CoUninitialize();
	}
	return hr;
}