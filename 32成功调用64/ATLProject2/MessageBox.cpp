// .cpp
#include "pch.h"
#include "MessageBox.h"

STDMETHODIMP DMessageImpl::Show(VARIANT szText)
{
	MessageBoxW(NULL, szText.bstrVal, L"x64 Remote", MB_OK);
	return S_OK;
}