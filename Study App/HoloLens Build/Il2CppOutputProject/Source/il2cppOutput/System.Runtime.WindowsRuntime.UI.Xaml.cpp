#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Collections.IList
struct IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStream>>
struct Func_2_tDEC8B0CB7A22DA39B741B9F1EA93ACB93229E502;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A;
// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IRandomAccessStream>
struct TaskFactory_1_t599E835119389CDC903B3B4A636E6F7DDB64B6A5;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStream>
struct Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t8458F3AE31378AC0283AEFB66F34243CDFF9BBC1;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct IAsyncOperation_1_tD2C55874352E4E1522354D80EC6266220ACD13BB;
// Windows.Storage.IStorageFile
struct IStorageFile_t2C6B515C9259B5FBD1556D78511799444B66CC45;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStorageFile_t2C6B515C9259B5FBD1556D78511799444B66CC45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralFEF6AD1668AEE7EDB781EB795B9597BFF8D27C17;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m83DE029E5D2E6F231BE3E0299BC5742B1CCC09CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m4504BB4E46448D2FDE2B1045AC3845F223384B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mB61847B143D3FB15B7BBB4D7E529D5B2F824ECA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m83EE053E713502CEBE32ABE4B2E555DDA54CCDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListToBindableVectorViewAdapter_GetAt_m4C07149242BB1E01699A3B7272D4E9B4E7FCB885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStorageExtensions_OpenStreamForReadAsync_mABECCD281E0348B93055DFCEB3DD6B10D66302C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStorageExtensions_OpenStreamForWriteAsync_mE3CCFF28977D5249E28BDEBBA235A1FB17F2DFAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_GetAt_m4C07149242BB1E01699A3B7272D4E9B4E7FCB885_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_GetEnumerator_m78A427BECC1771C3339E481A1C91EBF2D81BAFBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_IndexOf_m8078DE068EB1CFA4C185D289B2E59905DAE0091A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListToBindableVectorViewAdapter_get_Size_m0D4C2E6A8A3A43D983D9B52AAE61D7F2278DC88F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStorageExtensions_OpenStreamForReadAsyncCore_m5926941CBE68FE81F649EA6CFBD0D7458836203D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStorageExtensions_OpenStreamForReadAsync_mABECCD281E0348B93055DFCEB3DD6B10D66302C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStorageExtensions_OpenStreamForWriteAsyncCore_mED306CE3B18C8D67A0A30D1DEDC2875617BBB31C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsRuntimeStorageExtensions_OpenStreamForWriteAsync_mE3CCFF28977D5249E28BDEBBA235A1FB17F2DFAA_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_tFC958AB087DC6173BBD1F80B3101F10AE9C43317_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792;
struct IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3;
struct IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18;
struct IAsyncOperation_1_tD2C55874352E4E1522354D80EC6266220ACD13BB;
struct IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF;
struct IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF7BF2D9B343FCCC89A2506EA26113C0B55FCD424 
{
public:

public:
};


// System.Object

// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct NOVTABLE IAsyncOperation_1_tD2C55874352E4E1522354D80EC6266220ACD13BB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mB5CCB381673AC2B4D4BCB879C78FF2BDCEA8696C(IAsyncOperationCompletedHandler_1_tFC958AB087DC6173BBD1F80B3101F10AE9C43317_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mAFAEE1C425DF7C488CD51FF7F233D8F43A555763(IAsyncOperationCompletedHandler_1_tFC958AB087DC6173BBD1F80B3101F10AE9C43317_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mEE3A39F82B96AEEDCBF811A86793B9D521F73C15(IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10** comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t0BFFD9F35BD49DAF121DEB9BECC544772AF35C6B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m9964D46E4BE1AEC7063BCBD8A965E4BA8E5E29B3(IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF* ___buffer0, IAsyncOperationWithProgress_2_tC8BD3FE106054920900E2389AD70276493A309B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m044167782383D370AA61E10B254F39767BCD11E8(IAsyncOperation_1_t27E018F764B0C6E8EB0FA611CB25A52C1FD0FB18** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mC7C3FD2E620A221E63F7F6AD1E806A68B3E76C03(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_put_Size_m5EC6EDD867FCC2575F31F1162F64E4523CCC71AF() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetInputStreamAt_m388AF634AE09958FE81C2155A19F55BEA90CB309() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_GetOutputStreamAt_m6504781F422B32350AD133FDBE6CAA0CC163DB46() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m48DEBF691715522B04ED7539AE7F22041221F646(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m591EC62FCE22806BA0B5A1EFDEA9E58DC63E6D1A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped3_CloneStream_m0ED461C4E1842886A18CAD2558E106DC8176F502() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mC556996DA2DF65C97288F7474DE32FAD8EBFF2BD(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m494C042532256B5EB0A66ADFBD50C8F3CC8E5580(bool* comReturnValue) = 0;
};
struct Il2CppArrayBounds;

// System.Array


// System.IO.WindowsRuntimeStorageExtensions
struct  WindowsRuntimeStorageExtensions_tDB2C94811342F7D598FBE75221D749D8044B32F4  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct  ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Exception_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stackTrace_1), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter
struct  ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2  : public RuntimeObject
{
public:
	// System.Collections.IList System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::_list
	RuntimeObject* ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<System.Object>
struct  ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream>
struct  ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_task
	Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA, ___m_task_0)); }
	inline Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>
struct  AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C, ___m_task_2)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663, ___m_task_2)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct  ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IRandomAccessStream>
struct  ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  value)
	{
		___m_configuredTaskAwaiter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_configuredTaskAwaiter_0))->___m_task_0), (void*)NULL);
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Windows.Storage.FileAccessMode
struct  FileAccessMode_t300B860DB456F76935936AA235435645C58EF7B1 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t300B860DB456F76935936AA235435645C58EF7B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1
struct  U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 
{
public:
	// System.Int32 System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::<>t__builder
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  ___U3CU3Et__builder_1;
	// Windows.Storage.IStorageFile System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::windowsRuntimeFile
	RuntimeObject* ___windowsRuntimeFile_2;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream> System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::<>u__1
	ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_windowsRuntimeFile_2() { return static_cast<int32_t>(offsetof(U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658, ___windowsRuntimeFile_2)); }
	inline RuntimeObject* get_windowsRuntimeFile_2() const { return ___windowsRuntimeFile_2; }
	inline RuntimeObject** get_address_of_windowsRuntimeFile_2() { return &___windowsRuntimeFile_2; }
	inline void set_windowsRuntimeFile_2(RuntimeObject* value)
	{
		___windowsRuntimeFile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsRuntimeFile_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658, ___U3CU3Eu__1_3)); }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3
struct  U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F 
{
public:
	// System.Int32 System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  ___U3CU3Et__builder_1;
	// Windows.Storage.IStorageFile System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::windowsRuntimeFile
	RuntimeObject* ___windowsRuntimeFile_2;
	// System.Int64 System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::offset
	int64_t ___offset_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream> System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::<>u__1
	ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_windowsRuntimeFile_2() { return static_cast<int32_t>(offsetof(U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F, ___windowsRuntimeFile_2)); }
	inline RuntimeObject* get_windowsRuntimeFile_2() const { return ___windowsRuntimeFile_2; }
	inline RuntimeObject** get_address_of_windowsRuntimeFile_2() { return &___windowsRuntimeFile_2; }
	inline void set_windowsRuntimeFile_2(RuntimeObject* value)
	{
		___windowsRuntimeFile_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsRuntimeFile_2), (void*)value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F, ___offset_3)); }
	inline int64_t get_offset_3() const { return ___offset_3; }
	inline int64_t* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(int64_t value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F, ___U3CU3Eu__1_4)); }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01, ___m_result_40)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_result_40() const { return ___m_result_40; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStream>
struct  Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t599E835119389CDC903B3B4A636E6F7DDB64B6A5 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDEC8B0CB7A22DA39B741B9F1EA93ACB93229E502 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t599E835119389CDC903B3B4A636E6F7DDB64B6A5 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t599E835119389CDC903B3B4A636E6F7DDB64B6A5 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t599E835119389CDC903B3B4A636E6F7DDB64B6A5 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tDEC8B0CB7A22DA39B741B9F1EA93ACB93229E502 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tDEC8B0CB7A22DA39B741B9F1EA93ACB93229E502 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tDEC8B0CB7A22DA39B741B9F1EA93ACB93229E502 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};

// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t2C6B515C9259B5FBD1556D78511799444B66CC45 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m03415296127D27086D9608FD4DACD014A6B4D715() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m77FCBF6360CED8022F0FA195CC82DF1A4E57D769() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_mF27A30FDD490134BA7DBE34D709835597B221E91(int32_t ___accessMode0, IAsyncOperation_1_tD2C55874352E4E1522354D80EC6266220ACD13BB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m31F6EF9F85742886AA0837FDCB22C56583034111() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m30AB5978DBE954CF2F0D610C91214ECDF9423C09() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m00E51A607B4D191E742DE1BF5706CB02DD9E870C() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m06529CF716640052A35007A798FB2897B4252809() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_mC2106E9E06F189A3274182154420F22CEBD0C44E() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m8C2A52847CEA49DC9F99324AFA8AB492E27AF759() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m7CE56056D1E29B068A882C04E721E7248A5DC788() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m8632DFF671DBFAD6D229DD24008C09D2258B17E0() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m31A3B8CDB94BC57F91E7508A5C449DE5018CD347() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tE16D3C1553F5E6BAC4E7E8D7DE411ADD049B1B13 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m7A17A555C10E8C04E93EFF0C76C28A9496E814F4(IBuffer_t13BCDB1D6DE32F79AB9F9E149514026CA6B4AAEF* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t9F077679BB6FBB6BF4C0E8B56C7FEF3D661EA792** comReturnValue) = 0;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663  AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m1A4154E5D9BD2483C3C75E3C443102C349C735F1_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_mFFEF4375F2C1C2F82794A6E4113E2F15C62F2577_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_mB84316986DD5C8009C3B1E49EF1474C87AE66536_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8  Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mD91239DE1114B7561E217FC5B4C721444A5561E6_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m16AB805A897C7F6C7C53B3EAD88DEE537E28EC6A_gshared (AsyncTaskMethodBuilder_1_t2A9513A084F4B19851B91EF1F22BB57776D35663 * __this, ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E * ___awaiter0, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * ___stateMachine1, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForReadAsyncCore(Windows.Storage.IStorageFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForReadAsyncCore_m5926941CBE68FE81F649EA6CFBD0D7458836203D (RuntimeObject* ___windowsRuntimeFile0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::Create()
inline AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mC7806A5C115ED2239A5073313AA3564D8244156E_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::Start<System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mB61847B143D3FB15B7BBB4D7E529D5B2F824ECA3 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m1A4154E5D9BD2483C3C75E3C443102C349C735F1_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::get_Task()
inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m19C5664D70C4FC799BEFB8D0FC98E687F97059FA_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForWriteAsyncCore(Windows.Storage.IStorageFile,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForWriteAsyncCore_mED306CE3B18C8D67A0A30D1DEDC2875617BBB31C (RuntimeObject* ___windowsRuntimeFile0, int64_t ___offset1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::Start<System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3>(!!0&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m83EE053E713502CEBE32ABE4B2E555DDA54CCDBA (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_mFFEF4375F2C1C2F82794A6E4113E2F15C62F2577_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<!!0> System.WindowsRuntimeSystemExtensions::AsTask<Windows.Storage.Streams.IRandomAccessStream>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_mB84316986DD5C8009C3B1E49EF1474C87AE66536_gshared)(___source0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<!0> System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStream>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582 (Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * __this, bool ___continueOnCapturedContext0, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  (*) (Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 *, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m60DD864D9488EACBA6C087E87E448797C1C8B76B_gshared)(__this, ___continueOnCapturedContext0, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<!0> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IRandomAccessStream>::GetAwaiter()
inline ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_inline (ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E * __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  (*) (ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E *, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1 (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mA1F08104B225C8640528B38BFD0AAAEE84541586_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream>,System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m83DE029E5D2E6F231BE3E0299BC5742B1CCC09CF (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * ___awaiter0, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *, U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mD91239DE1114B7561E217FC5B4C721444A5561E6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream>::GetResult()
inline RuntimeObject* ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19 (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m4EE5BF4F8536CCC951CA3F4E3C494411AE2D507E_gshared)(__this, method);
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamForRead_m0C215C31D3FDB1F656DA5A4D81AD0628A3EE7AAB (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD (Exception_t * ___nativeException0, const RuntimeMethod* method);
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F (ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m4C0B5462ECCB520FACA3C90B353DF596DAAF586D_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mD7DA7A17DC0610B11A0AAA364C3CA51FEC1271DB_gshared)(__this, ___result0, method);
}
// System.Void System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5 (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m5CC21A02320CF3D2DD7894A31123DFD82A428E4C_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForReadAsyncCore>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551 (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.IO.Stream>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IRandomAccessStream>,System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m4504BB4E46448D2FDE2B1045AC3845F223384B7B (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * __this, ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * ___awaiter0, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *, ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *, U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m16AB805A897C7F6C7C53B3EAD88DEE537E28EC6A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForWrite(Windows.Storage.Streams.IOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * WindowsRuntimeStreamExtensions_AsStreamForWrite_m5FD65D5055406F3D1640BBD8CD624E996FB19DE2 (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028 (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * __this, const RuntimeMethod* method);
// System.Void System.IO.WindowsRuntimeStorageExtensions/<OpenStreamForWriteAsyncCore>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5 (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7 (Exception_t * __this, int32_t ___hr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForReadAsync(Windows.Storage.IStorageFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForReadAsync_mABECCD281E0348B93055DFCEB3DD6B10D66302C4 (RuntimeObject* ___windowsRuntimeFile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStorageExtensions_OpenStreamForReadAsync_mABECCD281E0348B93055DFCEB3DD6B10D66302C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___windowsRuntimeFile0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralFEF6AD1668AEE7EDB781EB795B9597BFF8D27C17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WindowsRuntimeStorageExtensions_OpenStreamForReadAsync_mABECCD281E0348B93055DFCEB3DD6B10D66302C4_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___windowsRuntimeFile0;
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_3 = WindowsRuntimeStorageExtensions_OpenStreamForReadAsyncCore_m5926941CBE68FE81F649EA6CFBD0D7458836203D(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForReadAsyncCore(Windows.Storage.IStorageFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForReadAsyncCore_m5926941CBE68FE81F649EA6CFBD0D7458836203D (RuntimeObject* ___windowsRuntimeFile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStorageExtensions_OpenStreamForReadAsyncCore_m5926941CBE68FE81F649EA6CFBD0D7458836203D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___windowsRuntimeFile0;
		(&V_0)->set_windowsRuntimeFile_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_1 = AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658  L_2 = V_0;
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mB61847B143D3FB15B7BBB4D7E529D5B2F824ECA3((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)(&V_1), (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_mB61847B143D3FB15B7BBB4D7E529D5B2F824ECA3_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_5 = AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_4, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForWriteAsync(Windows.Storage.IStorageFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForWriteAsync_mE3CCFF28977D5249E28BDEBBA235A1FB17F2DFAA (RuntimeObject* ___windowsRuntimeFile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStorageExtensions_OpenStreamForWriteAsync_mE3CCFF28977D5249E28BDEBBA235A1FB17F2DFAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___windowsRuntimeFile0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralFEF6AD1668AEE7EDB781EB795B9597BFF8D27C17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, WindowsRuntimeStorageExtensions_OpenStreamForWriteAsync_mE3CCFF28977D5249E28BDEBBA235A1FB17F2DFAA_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___windowsRuntimeFile0;
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_3 = WindowsRuntimeStorageExtensions_OpenStreamForWriteAsyncCore_mED306CE3B18C8D67A0A30D1DEDC2875617BBB31C(L_2, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.IO.WindowsRuntimeStorageExtensions::OpenStreamForWriteAsyncCore(Windows.Storage.IStorageFile,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * WindowsRuntimeStorageExtensions_OpenStreamForWriteAsyncCore_mED306CE3B18C8D67A0A30D1DEDC2875617BBB31C (RuntimeObject* ___windowsRuntimeFile0, int64_t ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsRuntimeStorageExtensions_OpenStreamForWriteAsyncCore_mED306CE3B18C8D67A0A30D1DEDC2875617BBB31C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___windowsRuntimeFile0;
		(&V_0)->set_windowsRuntimeFile_2(L_0);
		int64_t L_1 = ___offset1;
		(&V_0)->set_offset_3(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_2 = AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225(/*hidden argument*/AsyncTaskMethodBuilder_1_Create_mE990EBE247374CEF78C09BAC4A1845B42E2AF225_RuntimeMethod_var);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F  L_3 = V_0;
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m83EE053E713502CEBE32ABE4B2E555DDA54CCDBA((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)(&V_1), (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_1_Start_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m83EE053E713502CEBE32ABE4B2E555DDA54CCDBA_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_6 = AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_5, /*hidden argument*/AsyncTaskMethodBuilder_1_get_Task_m638684DB3092DA761CD7ABE7A0A10D26A18FF017_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}

IL_000a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0056;
				}
			}

IL_000d:
			{
				RuntimeObject* L_3 = __this->get_windowsRuntimeFile_2();
				NullCheck(L_3);
				RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream> Windows.Storage.IStorageFile::OpenAsync(Windows.Storage.FileAccessMode) */, IStorageFile_t2C6B515C9259B5FBD1556D78511799444B66CC45_il2cpp_TypeInfo_var, L_3, 0);
				Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * L_5 = WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E(L_4, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E_RuntimeMethod_var);
				NullCheck(L_5);
				ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  L_6 = Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582(L_5, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582_RuntimeMethod_var);
				V_3 = L_6;
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_7 = ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_inline((ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E *)(&V_3), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_RuntimeMethod_var);
				V_2 = L_7;
				bool L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1((ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0072;
				}
			}

IL_0036:
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->set_U3CU3E1__state_0(L_9);
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_10 = V_2;
				__this->set_U3CU3Eu__1_3(L_10);
				AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_11 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m83DE029E5D2E6F231BE3E0299BC5742B1CCC09CF((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_11, (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658_m83DE029E5D2E6F231BE3E0299BC5742B1CCC09CF_RuntimeMethod_var);
				goto IL_00bc;
			}

IL_0056:
			{
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_12 = __this->get_U3CU3Eu__1_3();
				V_2 = L_12;
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * L_13 = __this->get_address_of_U3CU3Eu__1_3();
				il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA ));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
			}

IL_0072:
			{
				RuntimeObject* L_15 = ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19((ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_16 = WindowsRuntimeStreamExtensions_AsStreamForRead_m0C215C31D3FDB1F656DA5A4D81AD0628A3EE7AAB(L_15, /*hidden argument*/NULL);
				V_1 = L_16;
				goto IL_00a8;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0081;
			throw e;
		}

CATCH_0081:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_17 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			NullCheck(L_17);
			ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_17, /*hidden argument*/NULL);
			V_1 = (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL;
			goto IL_00a8;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008f;
		throw e;
	}

CATCH_008f:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44_RuntimeMethod_var);
		goto IL_00bc;
	} // end catch (depth: 1)

IL_00a8:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF_RuntimeMethod_var);
	}

IL_00bc:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * _thisAdjusted = reinterpret_cast<U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *>(__this + _offset);
	U3COpenStreamForReadAsyncCoreU3Ed__1_MoveNext_mAA13FA8844B20422720E9F4424E237357BCE6EFB(_thisAdjusted, method);
}
// System.Void System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForReadAsyncCore>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551 (U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 * _thisAdjusted = reinterpret_cast<U3COpenStreamForReadAsyncCoreU3Ed__1_t598C0E7AC7E48E118FC17DFA3D58883117F87658 *>(__this + _offset);
	U3COpenStreamForReadAsyncCoreU3Ed__1_SetStateMachine_m11CFE4CCE1005D3071B1426096FB354BB4A7E551(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028 (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * V_1 = NULL;
	ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
		}

IL_000a:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0056;
				}
			}

IL_000d:
			{
				RuntimeObject* L_3 = __this->get_windowsRuntimeFile_2();
				NullCheck(L_3);
				RuntimeObject* L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream> Windows.Storage.IStorageFile::OpenAsync(Windows.Storage.FileAccessMode) */, IStorageFile_t2C6B515C9259B5FBD1556D78511799444B66CC45_il2cpp_TypeInfo_var, L_3, 1);
				Task_1_t7C2AD8532016BE26CAA1B7F671FBB57E44DF3FC9 * L_5 = WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E(L_4, /*hidden argument*/WindowsRuntimeSystemExtensions_AsTask_TisIRandomAccessStream_tF45B1A1FE1DC95209EC2F32A0134C4BCDD756E10_m1EC17879CC9066D89340954E75BF188554A04F8E_RuntimeMethod_var);
				NullCheck(L_5);
				ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E  L_6 = Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582(L_5, (bool)0, /*hidden argument*/Task_1_ConfigureAwait_m5C3DCD2539967D01DC892946EDC7825102D12582_RuntimeMethod_var);
				V_3 = L_6;
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_7 = ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_inline((ConfiguredTaskAwaitable_1_tAD04F4E294B2226B87467BA6AA8D58E09094890E *)(&V_3), /*hidden argument*/ConfiguredTaskAwaitable_1_GetAwaiter_m38FA223C9C70BE1873B3D3276BC8628761C4FA13_RuntimeMethod_var);
				V_2 = L_7;
				bool L_8 = ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1((ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_get_IsCompleted_mB1C03EF248FA29D8C27E1A9D986805AAE1215AC1_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0072;
				}
			}

IL_0036:
			{
				int32_t L_9 = 0;
				V_0 = L_9;
				__this->set_U3CU3E1__state_0(L_9);
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_10 = V_2;
				__this->set_U3CU3Eu__1_4(L_10);
				AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_11 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m4504BB4E46448D2FDE2B1045AC3845F223384B7B((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_11, (ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA_TisU3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F_m4504BB4E46448D2FDE2B1045AC3845F223384B7B_RuntimeMethod_var);
				goto IL_00c8;
			}

IL_0056:
			{
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA  L_12 = __this->get_U3CU3Eu__1_4();
				V_2 = L_12;
				ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA * L_13 = __this->get_address_of_U3CU3Eu__1_4();
				il2cpp_codegen_initobj(L_13, sizeof(ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA ));
				int32_t L_14 = (-1);
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
			}

IL_0072:
			{
				RuntimeObject* L_15 = ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19((ConfiguredTaskAwaiter_t10EE079256E404F7347C0166735648B1B4EC48EA *)(&V_2), /*hidden argument*/ConfiguredTaskAwaiter_GetResult_m50E3519FAE824F04ECB8285632658C44B4CFEA19_RuntimeMethod_var);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_tB2579CDBD2DBFEE07F8602FCC099051A1DA1D07E_il2cpp_TypeInfo_var);
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_16 = WindowsRuntimeStreamExtensions_AsStreamForWrite_m5FD65D5055406F3D1640BBD8CD624E996FB19DE2(L_15, /*hidden argument*/NULL);
				Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_17 = L_16;
				int64_t L_18 = __this->get_offset_3();
				NullCheck(L_17);
				VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_17, L_18);
				V_1 = L_17;
				goto IL_00b4;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_008d;
			throw e;
		}

CATCH_008d:
		{ // begin catch(System.Exception)
			ExceptionDispatchInfo_t0C54083F3909DAF986A4DEAA7C047559531E0E2A * L_19 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_m1CA2440467C50E50B6448BBCC86B4B7DB9A394AD(((Exception_t *)__exception_local), /*hidden argument*/NULL);
			NullCheck(L_19);
			ExceptionDispatchInfo_Throw_m9630C06EF8D7CDF5BD5DC76144CD98C4D9E8D26F(L_19, /*hidden argument*/NULL);
			V_1 = (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *)NULL;
			goto IL_00b4;
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009b;
		throw e;
	}

CATCH_009b:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3BF8D77ED3E1F97A9BB50B3C7A7E5E97923DDA44_RuntimeMethod_var);
		goto IL_00c8;
	} // end catch (depth: 1)

IL_00b4:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_22, L_23, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m98940FAEAE7AA0A182DF13786E8E2E4F3BCEC2FF_RuntimeMethod_var);
	}

IL_00c8:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * _thisAdjusted = reinterpret_cast<U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *>(__this + _offset);
	U3COpenStreamForWriteAsyncCoreU3Ed__3_MoveNext_m4F7E953313AAFA5453935B22DA8C92C54E41C028(_thisAdjusted, method);
}
// System.Void System.IO.WindowsRuntimeStorageExtensions_<OpenStreamForWriteAsyncCore>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5 (U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5((AsyncTaskMethodBuilder_1_t629F383EABB1E23F4CFEEA0B7A1783E79CB8EF9C *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m09A51B661BF01119D6D51465AD8C7F570EFC6AE5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F * _thisAdjusted = reinterpret_cast<U3COpenStreamForWriteAsyncCoreU3Ed__3_t2DB03D33DD9EAEF15AB8AFC4637BEABBB25D706F *>(__this + _offset);
	U3COpenStreamForWriteAsyncCoreU3Ed__3_SetStateMachine_m1C57F813ED9F240095D2F2FBAC412250E08264F5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToBindableVectorViewAdapter__ctor_m88D2B6C058513EBDA6360AABA6E7858323E3B935 (ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2 * __this, RuntimeObject* ___underlyingList0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___underlyingList0;
		__this->set__list_0(L_0);
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t ListToBindableVectorViewAdapter_get_Size_m0D4C2E6A8A3A43D983D9B52AAE61D7F2278DC88F (ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_get_Size_m0D4C2E6A8A3A43D983D9B52AAE61D7F2278DC88F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetAt(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ListToBindableVectorViewAdapter_GetAt_m4C07149242BB1E01699A3B7272D4E9B4E7FCB885 (ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2 * __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_GetAt_m4C07149242BB1E01699A3B7272D4E9B4E7FCB885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_0 = __this->get__list_0();
		uint32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_001b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.ArgumentOutOfRangeException)
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = ((ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)__exception_local);
		NullCheck(L_3);
		Exception_SetErrorCode_m742C1E687C82E56F445893685007EF4FC017F4A7(L_3, ((int32_t)-2147483637), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ListToBindableVectorViewAdapter_GetAt_m4C07149242BB1E01699A3B7272D4E9B4E7FCB885_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_001b:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::IndexOf(System.Object,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListToBindableVectorViewAdapter_IndexOf_m8078DE068EB1CFA4C185D289B2E59905DAE0091A (ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2 * __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_IndexOf_m8078DE068EB1CFA4C185D289B2E59905DAE0091A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->get__list_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t* L_4 = ___index1;
		*((int32_t*)L_4) = (int32_t)0;
		return (bool)0;
	}

IL_0016:
	{
		uint32_t* L_5 = ___index1;
		int32_t L_6 = V_0;
		*((int32_t*)L_5) = (int32_t)L_6;
		return (bool)1;
	}
}
// System.Collections.IEnumerator System.Runtime.InteropServices.WindowsRuntime.Xaml.ListToBindableVectorViewAdapter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListToBindableVectorViewAdapter_GetEnumerator_m78A427BECC1771C3339E481A1C91EBF2D81BAFBC (ListToBindableVectorViewAdapter_t696401DFDF750C3C08073BE8C654F1CBC81E80D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListToBindableVectorViewAdapter_GetEnumerator_m78A427BECC1771C3339E481A1C91EBF2D81BAFBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  ConfiguredTaskAwaitable_1_GetAwaiter_m86C543D72022CB5D0C43053C4AF5F37EA4E690A7_gshared_inline (ConfiguredTaskAwaitable_1_tA36F8230F9392F8C09FD6FDBAEA3F1A41388CCA8 * __this, const RuntimeMethod* method)
{
	{
		ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E  L_0 = (ConfiguredTaskAwaiter_tFB3C4197768C6CF02BE088F703AA6E46D703D46E )__this->get_m_configuredTaskAwaiter_0();
		return L_0;
	}
}
