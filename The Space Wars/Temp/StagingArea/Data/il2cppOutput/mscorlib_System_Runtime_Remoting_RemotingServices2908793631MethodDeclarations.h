﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t786342156;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1739457092;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3293556779;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t2909122882;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Runtime.Remoting.Identity
struct Identity_t89657068;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1094351071;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1847988475;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1163883179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type77837473.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef786342156.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy2909122882.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMod157015895.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity1163883179.h"
#include "mscorlib_System_Runtime_Remoting_Identity89657068.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C"  void RemotingServices__cctor_m3728234218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C"  MethodBase_t591550820 * RemotingServices_GetVirtualMethod_m3767482873 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MethodBase_t591550820 * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C"  bool RemotingServices_IsTransparentProxy_m162250343 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C"  Type_t * RemotingServices_GetServerTypeForUri_m3261408713 (Il2CppObject * __this /* static, unused */, String_t* ___URI0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m2376992111 (Il2CppObject * __this /* static, unused */, ObjRef_t786342156 * ___objectRef0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m3498433770 (Il2CppObject * __this /* static, unused */, ObjRef_t786342156 * ___objectRef0, bool ___fRefine1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C"  RealProxy_t1739457092 * RemotingServices_GetRealProxy_m620317996 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  MethodBase_t591550820 * RemotingServices_GetMethodBaseFromMethodMessage_m716430067 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t591550820 * RemotingServices_GetMethodBaseFromName_m3271095947 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t2442356668* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t591550820 * RemotingServices_FindInterfaceMethod_m1932412725 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t2442356668* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m1631035355 (Il2CppObject * __this /* static, unused */, ActivatedClientTypeEntry_t2909122882 * ___entry0, ObjectU5BU5D_t3632007997* ___activationAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m768660530 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, String_t* ___url1, ObjectU5BU5D_t3632007997* ___activationAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxyForContextBound_m634461568 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t3632007997* ___activationAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C"  Identity_t89657068 * RemotingServices_GetIdentityForUri_m2944546997 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C"  String_t* RemotingServices_RemoveAppNameFromUri_m412342306 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C"  ClientIdentity_t1094351071 * RemotingServices_GetOrCreateClientIdentity_m2284049826 (Il2CppObject * __this /* static, unused */, ObjRef_t786342156 * ___objRef0, Type_t * ___proxyType1, Il2CppObject ** ___clientProxy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * RemotingServices_GetClientChannelSinkChain_m1754880735 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Il2CppObject * ___channelData1, String_t** ___objectUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  ServerIdentity_t1163883179 * RemotingServices_CreateWellKnownServerIdentity_m3390048085 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, String_t* ___objectUri1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void RemotingServices_RegisterServerIdentity_m1437956696 (Il2CppObject * __this /* static, unused */, ServerIdentity_t1163883179 * ___identity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetProxyForRemoteObject_m3800812855 (Il2CppObject * __this /* static, unused */, ObjRef_t786342156 * ___objref0, Type_t * ___classToProxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetRemoteObject_m3663391550 (Il2CppObject * __this /* static, unused */, ObjRef_t786342156 * ___objRef0, Type_t * ___proxyType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C"  void RemotingServices_RegisterInternalChannels_m1827304423 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C"  void RemotingServices_DisposeIdentity_m266836454 (Il2CppObject * __this /* static, unused */, Identity_t89657068 * ___ident0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C"  String_t* RemotingServices_GetNormalizedUri_m2187619651 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
