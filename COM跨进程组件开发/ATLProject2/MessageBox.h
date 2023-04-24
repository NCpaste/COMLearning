// .h
#pragma once
#include "ATLProject2_i.h"
#include <atlcom.h>

using namespace ATL;

class MessageImpl
	: public IMessage
	, public CComObjectRoot
{
	BEGIN_COM_MAP(MessageImpl)
		COM_INTERFACE_ENTRY(IMessage)
	END_COM_MAP()

	STDMETHODIMP Show(VARIANT szText) override;
};

class Message
	: public CComObjectRoot
	, public CComCoClass<MessageImpl, &CLSID_Message>
{
public:
	DECLARE_REGISTRY_RESOURCEID(IDR_ATLPROJECT2);
};

OBJECT_ENTRY_AUTO(CLSID_Message, Message);
// 可以将Message这些继承和DECLARE_REGISTRY_RESOURCEID放在MessageImpl中，这也是M$推荐的做法
