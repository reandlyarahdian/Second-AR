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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD;

IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// Unity.Collections.Allocator
struct Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD  : public Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Destroyed
	bool ___m_Destroyed_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Destroyed_2() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD, ___m_Destroyed_2)); }
	inline bool get_m_Destroyed_2() const { return ___m_Destroyed_2; }
	inline bool* get_address_of_m_Destroyed_2() { return &___m_Destroyed_2; }
	inline void set_m_Destroyed_2(bool value)
	{
		___m_Destroyed_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4  : public XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Added_1)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Updated_2)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);

// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, const RuntimeMethod*))NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_2 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m79A1BBDC8A7E6F17C8B48E7CB3ED027A3180039E((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_Dispose_m3B184CCCF10AF965D2B4EBB1FA4E4F4B493D515F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Updated.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_2 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_Dispose_mB2C813BA8D282D0D27B65493A2DC6F025A770B6B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m9814F0C90CD347A8B044F613EA3BEA89C0EDD0E6_gshared (TrackingSubsystem_2_t3EB27DAF7DE2C1954FFCC178A2D5B14B2560C403 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m65C3CAD8EE099E2B3C0810F5C431A181CF765DE0_gshared (TrackingSubsystem_2_t3CF23872873C38C0BB67F7761931C72EC3595A4A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m5935653F3C84C1F836AFB07A6B418EF778456DB9_gshared (TrackingSubsystem_2_t997A5E9CC5FBE9CBC39863972E14CCF39DF888EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC1034FB5C0414A774582B61F74AFB2AB356B1E61_gshared (TrackingSubsystem_2_tE0D61F1BF5FB76A26581A1B27EF091FF598C3192 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m9657E700209AD59449C7457BA3FFF13E2CB77ABA_gshared (TrackingSubsystem_2_tED07EAE67EF6C35C4B2BD12EC0B22192EDA517F0 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mC50C77CDABF6E044EC3D1220128F4F8CC4DAFA34_gshared (TrackingSubsystem_2_t3EC8D7E050800A819879CB4B105623452C631D7A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7AB136126F271CC1CF77B79DD04F23CE085B0FC4_gshared (TrackingSubsystem_2_t13B09A7DD60BB228A81595F3289379D17A4D033E * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m43327E37F6A301CC47FFB62C5790FD44A93C1DF1_gshared (TrackingSubsystem_2_t06C6E348315FEE29AF48FDD79F5DB54971CEE4C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		((  void (*) (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m2218567853F336CE6652D569B3FC4BC9A502B0B2_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_mE98AE6600FDB7D7B0FBBBAAB63637A2DF42CDC79_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (m_Destroyed)
		bool L_0 = (bool)__this->get_m_Destroyed_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Destroyed = true;
		__this->set_m_Destroyed_2((bool)1);
		// Stop();
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		// OnDestroyed();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_m733AE25F56E5F5CB86BD93528C705904983F366F_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mC7BBEDFC52A3D2D09EBFD945E87454D5CE36A49B_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		NullCheck((XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD *)__this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mE06FEB5A6401B2A0AB469738A82EE613C0F6A41A_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *)__this);
		((  void (*) (Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Subsystem_1_t29863A16908A3D448A89A2EC5AD3BD557CE0EE86 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_added_mC31FEFAAC8F70ABBBC324DC618B0DFAB08AAE934_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Added_1();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  TrackableChanges_1_get_updated_m54C710EFD531DFB25ABA289B60FAA4181D479DDF_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )__this->get_m_Updated_2();
		return (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m9781A441FA95E17CBDB3C4687247859A562AF077_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m3FDC7B829134AB7EB2041A8F47782DADE78AE4A4_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9B7A85066C48002C82960BDEE711BECB4212385B_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mCB619574FF8635CEEB82E9C792CD2F5AC1FB8AC1_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m9D19271BFA6757109A9BC4F34D32EA2EDD7E3BF9_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
