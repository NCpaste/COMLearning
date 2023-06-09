//.h
#pragma once
#include "ATLProject2_i.h"
#include <atlcom.h>

using namespace ATL;

class DMessageImpl
	: public CComObjectRoot
	, public IDispatchImpl<IDMessage, &IID_IDMessage, &LIBID_ATLProject2Lib>
{
public:
	BEGIN_COM_MAP(DMessageImpl)
		COM_INTERFACE_ENTRY(IDMessage)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	STDMETHODIMP Show(VARIANT szText) override;
};

class Message
	: public CComObjectRoot
	, public CComCoClass<DMessageImpl, &CLSID_Message>
{
public:
	DECLARE_REGISTRY_RESOURCEID(IDR_ATLPROJECT2);
};

OBJECT_ENTRY_AUTO(CLSID_Message, Message);
