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

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3396089105;
// System.IO.Stream
struct Stream_t2768948945;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1429855556;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2821278614;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t888773083;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3713108670;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3261833271;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t2344509121;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t750127348;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1157533551;
// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t2387210216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream2768948945.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Security_Cryptography_X509Certific1429855556.h"
#include "System_System_Security_Cryptography_X509Certificat2821278614.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4187179796.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certificat888773083.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica3713108670.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKe3261833271.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica2344509121.h"
#include "mscorlib_System_AsyncCallback889871978.h"
#include "mscorlib_System_Object707969140.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo1157533550.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C"  void SslClientStream__ctor_m3295335959 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void SslClientStream__ctor_m1193810714 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___stream0, String_t* ___targetHost1, X509Certificate_t1429855556 * ___clientCertificate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void SslClientStream__ctor_m3350475994 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___stream0, String_t* ___targetHost1, X509CertificateCollection_t2821278614 * ___clientCertificates2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslClientStream__ctor_m1435497855 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, int32_t ___securityProtocolType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void SslClientStream__ctor_m2178305131 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, int32_t ___securityProtocolType3, X509CertificateCollection_t2821278614 * ___clientCertificates4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_add_ServerCertValidation_m684653638 (SslClientStream_t3396089105 * __this, CertificateValidationCallback_t888773083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_remove_ServerCertValidation_m2446179261 (SslClientStream_t3396089105 * __this, CertificateValidationCallback_t888773083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_add_ClientCertSelection_m2644836210 (SslClientStream_t3396089105 * __this, CertificateSelectionCallback_t3713108670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_remove_ClientCertSelection_m2497978917 (SslClientStream_t3396089105 * __this, CertificateSelectionCallback_t3713108670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_add_PrivateKeySelection_m481383932 (SslClientStream_t3396089105 * __this, PrivateKeySelectionCallback_t3261833271 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_remove_PrivateKeySelection_m427666577 (SslClientStream_t3396089105 * __this, PrivateKeySelectionCallback_t3261833271 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C"  void SslClientStream_add_ServerCertValidation2_m2603998068 (SslClientStream_t3396089105 * __this, CertificateValidationCallback2_t2344509121 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C"  void SslClientStream_remove_ServerCertValidation2_m3857463517 (SslClientStream_t3396089105 * __this, CertificateValidationCallback2_t2344509121 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C"  Stream_t2768948945 * SslClientStream_get_InputBuffer_m295521966 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C"  X509CertificateCollection_t2821278614 * SslClientStream_get_ClientCertificates_m444639806 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C"  X509Certificate_t1429855556 * SslClientStream_get_SelectedClientCertificate_m1580018944 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C"  CertificateValidationCallback_t888773083 * SslClientStream_get_ServerCertValidationDelegate_m3909657681 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_set_ServerCertValidationDelegate_m3125858424 (SslClientStream_t3396089105 * __this, CertificateValidationCallback_t888773083 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C"  CertificateSelectionCallback_t3713108670 * SslClientStream_get_ClientCertSelectionDelegate_m2316959461 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_set_ClientCertSelectionDelegate_m3476473798 (SslClientStream_t3396089105 * __this, CertificateSelectionCallback_t3713108670 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C"  PrivateKeySelectionCallback_t3261833271 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m3715949545 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_set_PrivateKeyCertSelectionDelegate_m159581650 (SslClientStream_t3396089105 * __this, PrivateKeySelectionCallback_t3261833271 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C"  void SslClientStream_Finalize_m3464869995 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C"  void SslClientStream_Dispose_m3148875377 (SslClientStream_t3396089105 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslClientStream_OnBeginNegotiateHandshake_m4281860610 (SslClientStream_t3396089105 * __this, AsyncCallback_t889871978 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C"  void SslClientStream_SafeReceiveRecord_m210668541 (SslClientStream_t3396089105 * __this, Stream_t2768948945 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C"  void SslClientStream_OnNegotiateHandshakeCallback_m1332934317 (SslClientStream_t3396089105 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * SslClientStream_OnLocalCertificateSelection_m3628249765 (SslClientStream_t3396089105 * __this, X509CertificateCollection_t2821278614 * ___clientCertificates0, X509Certificate_t1429855556 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C"  bool SslClientStream_get_HaveRemoteValidation2Callback_m3555576758 (SslClientStream_t3396089105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t750127348 * SslClientStream_OnRemoteCertificateValidation2_m3416857045 (SslClientStream_t3396089105 * __this, X509CertificateCollection_t1157533551 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslClientStream_OnRemoteCertificateValidation_m3974135419 (SslClientStream_t3396089105 * __this, X509Certificate_t1429855556 * ___certificate0, Int32U5BU5D_t3315407976* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslClientStream_RaiseServerCertificateValidation_m1782631027 (SslClientStream_t3396089105 * __this, X509Certificate_t1429855556 * ___certificate0, Int32U5BU5D_t3315407976* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t750127348 * SslClientStream_RaiseServerCertificateValidation2_m3736176381 (SslClientStream_t3396089105 * __this, X509CertificateCollection_t1157533551 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t1429855556 * SslClientStream_RaiseClientCertificateSelection_m3933788312 (SslClientStream_t3396089105 * __this, X509CertificateCollection_t2821278614 * ___clientCertificates0, X509Certificate_t1429855556 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2821278614 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t2387210216 * SslClientStream_OnLocalPrivateKeySelection_m3649986106 (SslClientStream_t3396089105 * __this, X509Certificate_t1429855556 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t2387210216 * SslClientStream_RaisePrivateKeySelection_m2326189090 (SslClientStream_t3396089105 * __this, X509Certificate_t1429855556 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
