

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ATLProject2.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLProject2_i_h__
#define __ATLProject2_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IMessage_FWD_DEFINED__
#define __IMessage_FWD_DEFINED__
typedef interface IMessage IMessage;

#endif 	/* __IMessage_FWD_DEFINED__ */


#ifndef __Message_FWD_DEFINED__
#define __Message_FWD_DEFINED__

#ifdef __cplusplus
typedef class Message Message;
#else
typedef struct Message Message;
#endif /* __cplusplus */

#endif 	/* __Message_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMessage_INTERFACE_DEFINED__
#define __IMessage_INTERFACE_DEFINED__

/* interface IMessage */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMessage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59371D05-3025-4E52-AF88-977B219F0E97")
    IMessage : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Show( 
            /* [in] */ VARIANT szText) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessage * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessage * This);
        
        DECLSPEC_XFGVIRT(IMessage, Show)
        HRESULT ( STDMETHODCALLTYPE *Show )( 
            IMessage * This,
            /* [in] */ VARIANT szText);
        
        END_INTERFACE
    } IMessageVtbl;

    interface IMessage
    {
        CONST_VTBL struct IMessageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessage_Show(This,szText)	\
    ( (This)->lpVtbl -> Show(This,szText) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessage_INTERFACE_DEFINED__ */



#ifndef __ATLProject2Lib_LIBRARY_DEFINED__
#define __ATLProject2Lib_LIBRARY_DEFINED__

/* library ATLProject2Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject2Lib;

EXTERN_C const CLSID CLSID_Message;

#ifdef __cplusplus

class DECLSPEC_UUID("3A68BEBC-3A60-46A5-8CA1-508C1406B73D")
Message;
#endif
#endif /* __ATLProject2Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


