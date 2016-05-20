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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t3811610235;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3835026402;
// System.IO.Stream
struct Stream_t2768948945;
// System.Exception
struct Exception_t1145979430;
// System.Threading.WaitHandle
struct WaitHandle_t313797096;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_Exception1145979430.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C"  void ReceiveRecordAsyncResult__ctor_m109339899 (ReceiveRecordAsyncResult_t3811610235 * __this, AsyncCallback_t889871978 * ___userCallback0, Il2CppObject * ___userState1, ByteU5BU5D_t3835026402* ___initialBuffer2, Stream_t2768948945 * ___record3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C"  Stream_t2768948945 * ReceiveRecordAsyncResult_get_Record_m1336421357 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C"  ByteU5BU5D_t3835026402* ReceiveRecordAsyncResult_get_ResultingBuffer_m2153361373 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C"  ByteU5BU5D_t3835026402* ReceiveRecordAsyncResult_get_InitialBuffer_m1245345098 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * ReceiveRecordAsyncResult_get_AsyncState_m2086535212 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t1145979430 * ReceiveRecordAsyncResult_get_AsyncException_m1835236292 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C"  bool ReceiveRecordAsyncResult_get_CompletedWithError_m2670396551 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t313797096 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m1602093076 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C"  bool ReceiveRecordAsyncResult_get_IsCompleted_m2327274447 (ReceiveRecordAsyncResult_t3811610235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m2441107665 (ReceiveRecordAsyncResult_t3811610235 * __this, Exception_t1145979430 * ___ex0, ByteU5BU5D_t3835026402* ___resultingBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m494147202 (ReceiveRecordAsyncResult_t3811610235 * __this, Exception_t1145979430 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m4055415513 (ReceiveRecordAsyncResult_t3811610235 * __this, ByteU5BU5D_t3835026402* ___resultingBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
