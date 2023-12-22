#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String>
struct Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1;
// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>
struct List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640;
// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier>
struct List_1_t201D04C7843627BC579FC0F51B4192316F5615CA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>
struct List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A;
// System.Collections.Generic.List`1<UnityEngine.TerrainLayer>
struct List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26;
// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain>
struct List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5;
// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile>
struct List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// sc.terrain.proceduralpainter.LayerSettings[]
struct LayerSettingsU5BU5D_t311945A618F86BAD6BA9041001A50ECD5356188A;
// sc.terrain.proceduralpainter.Modifier[]
struct ModifierU5BU5D_t54CBA40B9D2FA2B9A195AB551F7B640944F2F840;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
// sc.terrain.proceduralpainter.TerrainChangeListener[]
struct TerrainChangeListenerU5BU5D_tDD28963C5EBF00F5A842EB7243DA72AFE3016B95;
// UnityEngine.TerrainLayer[]
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// sc.terrain.proceduralpainter.Attributes
struct Attributes_t8CBD3F65C9E54D73CD3D8D0A7031F0517E2B68A4;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// sc.terrain.proceduralpainter.Curvature
struct Curvature_t47798CFB33244F406CFCD5A3A7B0D57F1238D1B8;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// sc.terrain.proceduralpainter.Height
struct Height_tF0567ED94EF00C1D8EF7710DD68BA53015DC2D24;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// sc.terrain.proceduralpainter.LayerSettings
struct LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// sc.terrain.proceduralpainter.Modifier
struct Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7;
// sc.terrain.proceduralpainter.ModifierStack
struct ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// sc.terrain.proceduralpainter.Noise
struct Noise_t44C91D670364FAE3113A4E3CA8061DEA123458F1;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.TerrainTools.PaintContext
struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// sc.terrain.proceduralpainter.Slope
struct Slope_tE52E6BC5CE53B90C625A8721D2A9D1CE9D0D6E88;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667;
// sc.terrain.proceduralpainter.TerrainChangeListener
struct TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F;
// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24;
// UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9;
// sc.terrain.proceduralpainter.TerrainPainter
struct TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// sc.terrain.proceduralpainter.TextureMask
struct TextureMask_t2C4849B4F1E7F01C361F9927811CF86F09A6D4E7;
// sc.terrain.proceduralpainter.Utilities
struct Utilities_t17A5AF220BB71804AE19FD20BC94787A623AE548;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// sc.terrain.proceduralpainter.Attributes/ChannelPicker
struct ChannelPicker_t9B5AB1467DA86C8AA4EB229AD50AF3B0A28378A7;
// sc.terrain.proceduralpainter.Attributes/MinMaxSlider
struct MinMaxSlider_tB8C439964C0927C7C760508B2B215FBCEA0CD246;
// sc.terrain.proceduralpainter.Attributes/ResolutionDropdown
struct ResolutionDropdown_t01E398CF20E79FDEADD155E4FBB4D26B466D95EB;
// sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent
struct TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BlendMode_t9109076A8E2BF239B942BA2069AB7156522B236F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018B57B8C06348ACB7153CB0000D65542A6C8C93;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2DEC7C6DDDFE2B89C70FB30B19309EF90DFDA5;
IL2CPP_EXTERN_C String_t* _stringLiteral0B5EAF1B3F5C57235B5B94F5751D135D495CAD8F;
IL2CPP_EXTERN_C String_t* _stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342;
IL2CPP_EXTERN_C String_t* _stringLiteral1E6628BB0C2D0FC6C2879456D97101909B02FCD6;
IL2CPP_EXTERN_C String_t* _stringLiteral2B84D6FBE415F01254A292988B811153F00E4381;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9F56DDE62972939232A11B6A299011864FA5EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5562504CC772DD25B87420C637F866C08A106982;
IL2CPP_EXTERN_C String_t* _stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5BD15E84FBC2E3036F55DC7DDFB58E346C528EC8;
IL2CPP_EXTERN_C String_t* _stringLiteral7BAC0E32995BF3381B3DE9890803CEE0664764C4;
IL2CPP_EXTERN_C String_t* _stringLiteral94E48EF06DACF931C0573005148461983EF342EB;
IL2CPP_EXTERN_C String_t* _stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478;
IL2CPP_EXTERN_C String_t* _stringLiteralC1270B977595956A762AEAA6C8A9C905EF855810;
IL2CPP_EXTERN_C String_t* _stringLiteralCEFE5AB0DF1C4B711B19A1EFB40A0FB61E88B8C6;
IL2CPP_EXTERN_C String_t* _stringLiteralD6383B5308FD77E04FD11705906B3912B3085E0E;
IL2CPP_EXTERN_C String_t* _stringLiteralDADB94EA87904777EBA11D637493E3CA6048BAD8;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4426767A20BCB5D6A2B73D4EF1A77347F4DD03;
IL2CPP_EXTERN_C String_t* _stringLiteralDF23EF1C490D6406D37C4F3D38485112EA711A72;
IL2CPP_EXTERN_C String_t* _stringLiteralE6907969A3AAD73EE9CF1999EA9ED576DF888B2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF9645C1741EAED029EE2110E1963F0C430F2D284;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_m7B9F004A83355A9708A1597A72DB21D342223027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_mB222BE4BA80737561D7FCA292871D39A236A2BCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA71FE5F91021BEECB7A8263DD981E8EA8759C6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF192B6CA17085F82F4AD565061F0F5A1C2F84625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8DF2189494DA2D19E4E703CE0E93A0F04A91B3C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mAA2628DBEDDEC0EA3A3825CBF5852F545A87F79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE1AAAADDC775272475F2F94ADE4C9EAA3FEE0215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E8925C8F655917AD426359CAC5038527A23C52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m467FEA25B745E6C7F3CD224BD39F5B6C82043465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m998E4ED35306D0BCC2AF5D47CC10DFC07F688147_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF440F540CDAF22CFDCF4BD60548455FD2CA8DCF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFDED9FA9F46390288324E4361777314315506D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEC514037C025FFEE5E861E99A0521AE1DBE2DE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Modifier_SetBlendMode_m053A1C08DEBBA3E4FAE24F8FE2B707C18F733A40_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE;
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t048AB6B042BD90A321165BB8CED96F0AB0B5BBB5 
{
};

// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>
struct List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LayerSettingsU5BU5D_t311945A618F86BAD6BA9041001A50ECD5356188A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LayerSettingsU5BU5D_t311945A618F86BAD6BA9041001A50ECD5356188A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier>
struct List_1_t201D04C7843627BC579FC0F51B4192316F5615CA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ModifierU5BU5D_t54CBA40B9D2FA2B9A195AB551F7B640944F2F840* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ModifierU5BU5D_t54CBA40B9D2FA2B9A195AB551F7B640944F2F840* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>
struct List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainChangeListenerU5BU5D_tDD28963C5EBF00F5A842EB7243DA72AFE3016B95* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainChangeListenerU5BU5D_tDD28963C5EBF00F5A842EB7243DA72AFE3016B95* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.TerrainLayer>
struct List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// sc.terrain.proceduralpainter.Attributes
struct Attributes_t8CBD3F65C9E54D73CD3D8D0A7031F0517E2B68A4  : public RuntimeObject
{
};

// sc.terrain.proceduralpainter.LayerSettings
struct LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E  : public RuntimeObject
{
	// System.Boolean sc.terrain.proceduralpainter.LayerSettings::enabled
	bool ___enabled_0;
	// UnityEngine.TerrainLayer sc.terrain.proceduralpainter.LayerSettings::layer
	TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___layer_1;
	// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier> sc.terrain.proceduralpainter.LayerSettings::modifierStack
	List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* ___modifierStack_2;
};

// sc.terrain.proceduralpainter.ModifierStack
struct ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426  : public RuntimeObject
{
};

struct ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields
{
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::m_resolution
	int32_t ___m_resolution_0;
	// System.Single sc.terrain.proceduralpainter.ModifierStack::heightScale
	float ___heightScale_1;
	// UnityEngine.Material sc.terrain.proceduralpainter.ModifierStack::filterMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___filterMat_2;
	// UnityEngine.RenderTexture sc.terrain.proceduralpainter.ModifierStack::alphaMap
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___alphaMap_3;
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::HeightmapID
	int32_t ___HeightmapID_5;
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::HeightmapScaleID
	int32_t ___HeightmapScaleID_6;
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::NormalMapID
	int32_t ___NormalMapID_7;
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::TerrainPosScaleID
	int32_t ___TerrainPosScaleID_8;
	// System.Int32 sc.terrain.proceduralpainter.ModifierStack::TerrainBoundsID
	int32_t ___TerrainBoundsID_9;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// sc.terrain.proceduralpainter.Utilities
struct Utilities_t17A5AF220BB71804AE19FD20BC94787A623AE548  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.TerrainTools.PaintContext
struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A  : public RuntimeObject
{
	// UnityEngine.Terrain UnityEngine.TerrainTools.PaintContext::<originTerrain>k__BackingField
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___U3CoriginTerrainU3Ek__BackingField_0;
	// UnityEngine.RectInt UnityEngine.TerrainTools.PaintContext::<pixelRect>k__BackingField
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___U3CpixelRectU3Ek__BackingField_1;
	// System.Int32 UnityEngine.TerrainTools.PaintContext::<targetTextureWidth>k__BackingField
	int32_t ___U3CtargetTextureWidthU3Ek__BackingField_2;
	// System.Int32 UnityEngine.TerrainTools.PaintContext::<targetTextureHeight>k__BackingField
	int32_t ___U3CtargetTextureHeightU3Ek__BackingField_3;
	// UnityEngine.Vector2 UnityEngine.TerrainTools.PaintContext::<pixelSize>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpixelSizeU3Ek__BackingField_4;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<sourceRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CsourceRenderTextureU3Ek__BackingField_5;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<destinationRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3CdestinationRenderTextureU3Ek__BackingField_6;
	// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::<oldRenderTexture>k__BackingField
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___U3ColdRenderTextureU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/TerrainTile> UnityEngine.TerrainTools.PaintContext::m_TerrainTiles
	List_1_t7DDC71E438F730F47361AE15CC1689D07E67C5B0* ___m_TerrainTiles_8;
	// System.Single UnityEngine.TerrainTools.PaintContext::m_HeightWorldSpaceMin
	float ___m_HeightWorldSpaceMin_9;
	// System.Single UnityEngine.TerrainTools.PaintContext::m_HeightWorldSpaceMax
	float ___m_HeightWorldSpaceMax_10;
};

struct PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A_StaticFields
{
	// System.Action`3<UnityEngine.TerrainTools.PaintContext/ITerrainInfo,UnityEngine.TerrainTools.PaintContext/ToolAction,System.String> UnityEngine.TerrainTools.PaintContext::onTerrainTileBeforePaint
	Action_3_t0A786294D5B34458B53DEE6AA749D2850B9BF5B1* ___onTerrainTileBeforePaint_11;
	// System.Collections.Generic.List`1<UnityEngine.TerrainTools.PaintContext/PaintedTerrain> UnityEngine.TerrainTools.PaintContext::s_PaintedTerrain
	List_1_tF46281AFA77430E7EF24D172853D7A6B2D07A7B5* ___s_PaintedTerrain_12;
};

// sc.terrain.proceduralpainter.Attributes/ChannelPicker
struct ChannelPicker_t9B5AB1467DA86C8AA4EB229AD50AF3B0A28378A7  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// sc.terrain.proceduralpainter.Attributes/MinMaxSlider
struct MinMaxSlider_tB8C439964C0927C7C760508B2B215FBCEA0CD246  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Single sc.terrain.proceduralpainter.Attributes/MinMaxSlider::min
	float ___min_0;
	// System.Single sc.terrain.proceduralpainter.Attributes/MinMaxSlider::max
	float ___max_1;
};

// sc.terrain.proceduralpainter.Attributes/ResolutionDropdown
struct ResolutionDropdown_t01E398CF20E79FDEADD155E4FBB4D26B466D95EB  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Int32 sc.terrain.proceduralpainter.Attributes/ResolutionDropdown::min
	int32_t ___min_0;
	// System.Int32 sc.terrain.proceduralpainter.Attributes/ResolutionDropdown::max
	int32_t ___max_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TerrainData
struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct TerrainData_t615A68EAC648066681875D47FC641496D12F2E24_StaticFields
{
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;
};

// UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.TerrainLayer
struct TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// sc.terrain.proceduralpainter.Modifier
struct Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean sc.terrain.proceduralpainter.Modifier::enabled
	bool ___enabled_4;
	// System.String sc.terrain.proceduralpainter.Modifier::label
	String_t* ___label_5;
	// sc.terrain.proceduralpainter.Modifier/BlendMode sc.terrain.proceduralpainter.Modifier::blendMode
	int32_t ___blendMode_6;
	// System.Single sc.terrain.proceduralpainter.Modifier::opacity
	float ___opacity_7;
	// sc.terrain.proceduralpainter.Modifier/FilterPass sc.terrain.proceduralpainter.Modifier::passIndex
	int32_t ___passIndex_8;
};

struct Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields
{
	// System.Int32 sc.terrain.proceduralpainter.Modifier::SrcFactorID
	int32_t ___SrcFactorID_9;
	// System.Int32 sc.terrain.proceduralpainter.Modifier::DstFactorID
	int32_t ___DstFactorID_10;
	// System.Int32 sc.terrain.proceduralpainter.Modifier::BlendOpID
	int32_t ___BlendOpID_11;
	// System.Int32 sc.terrain.proceduralpainter.Modifier::OpacityID
	int32_t ___OpacityID_12;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent
struct TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// sc.terrain.proceduralpainter.Curvature
struct Curvature_t47798CFB33244F406CFCD5A3A7B0D57F1238D1B8  : public Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7
{
	// UnityEngine.Vector2 sc.terrain.proceduralpainter.Curvature::minMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMax_13;
	// System.Single sc.terrain.proceduralpainter.Curvature::radius
	float ___radius_14;
	// System.Single sc.terrain.proceduralpainter.Curvature::minFalloff
	float ___minFalloff_15;
	// System.Single sc.terrain.proceduralpainter.Curvature::maxFalloff
	float ___maxFalloff_16;
};

// sc.terrain.proceduralpainter.Height
struct Height_tF0567ED94EF00C1D8EF7710DD68BA53015DC2D24  : public Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7
{
	// System.Single sc.terrain.proceduralpainter.Height::min
	float ___min_13;
	// System.Single sc.terrain.proceduralpainter.Height::minFalloff
	float ___minFalloff_14;
	// System.Single sc.terrain.proceduralpainter.Height::max
	float ___max_15;
	// System.Single sc.terrain.proceduralpainter.Height::maxFalloff
	float ___maxFalloff_16;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// sc.terrain.proceduralpainter.Noise
struct Noise_t44C91D670364FAE3113A4E3CA8061DEA123458F1  : public Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7
{
	// sc.terrain.proceduralpainter.Noise/NoiseType sc.terrain.proceduralpainter.Noise::noiseType
	int32_t ___noiseType_13;
	// System.Single sc.terrain.proceduralpainter.Noise::noiseScale
	float ___noiseScale_14;
	// UnityEngine.Vector2 sc.terrain.proceduralpainter.Noise::noiseOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___noiseOffset_15;
	// UnityEngine.Vector2 sc.terrain.proceduralpainter.Noise::levels
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___levels_16;
};

// sc.terrain.proceduralpainter.Slope
struct Slope_tE52E6BC5CE53B90C625A8721D2A9D1CE9D0D6E88  : public Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7
{
	// UnityEngine.Vector2 sc.terrain.proceduralpainter.Slope::minMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMax_13;
	// System.Single sc.terrain.proceduralpainter.Slope::minFalloff
	float ___minFalloff_14;
	// System.Single sc.terrain.proceduralpainter.Slope::maxFalloff
	float ___maxFalloff_15;
};

// UnityEngine.Terrain
struct Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// sc.terrain.proceduralpainter.TextureMask
struct TextureMask_t2C4849B4F1E7F01C361F9927811CF86F09A6D4E7  : public Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7
{
	// UnityEngine.Texture2D sc.terrain.proceduralpainter.TextureMask::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_13;
	// System.Int32 sc.terrain.proceduralpainter.TextureMask::channel
	int32_t ___channel_14;
	// System.Boolean sc.terrain.proceduralpainter.TextureMask::spanTerrains
	bool ___spanTerrains_15;
	// System.Single sc.terrain.proceduralpainter.TextureMask::tiling
	float ___tiling_16;
};

// sc.terrain.proceduralpainter.TerrainChangeListener
struct TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Terrain sc.terrain.proceduralpainter.TerrainChangeListener::terrain
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain_4;
};

// sc.terrain.proceduralpainter.TerrainPainter
struct TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Terrain[] sc.terrain.proceduralpainter.TerrainPainter::terrains
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains_6;
	// System.Int32 sc.terrain.proceduralpainter.TerrainPainter::splatmapResolution
	int32_t ___splatmapResolution_7;
	// System.Int32 sc.terrain.proceduralpainter.TerrainPainter::colorMapResolution
	int32_t ___colorMapResolution_8;
	// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings> sc.terrain.proceduralpainter.TerrainPainter::layerSettings
	List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* ___layerSettings_9;
	// System.Boolean sc.terrain.proceduralpainter.TerrainPainter::autoRepaint
	bool ___autoRepaint_10;
	// System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener> sc.terrain.proceduralpainter.TerrainPainter::terrainListeners
	List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* ___terrainListeners_11;
	// UnityEngine.Bounds sc.terrain.proceduralpainter.TerrainPainter::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_12;
	// UnityEngine.Shader sc.terrain.proceduralpainter.TerrainPainter::filterShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___filterShader_13;
};

struct TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields
{
	// sc.terrain.proceduralpainter.TerrainPainter sc.terrain.proceduralpainter.TerrainPainter::Current
	TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* ___Current_5;
	// sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent sc.terrain.proceduralpainter.TerrainPainter::OnTerrainRepaint
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* ___OnTerrainRepaint_14;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE  : public RuntimeArray
{
	ALIGN_FIELD (8) Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* m_Items[1];

	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.TerrainLayer[]
struct TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0  : public RuntimeArray
{
	ALIGN_FIELD (8) TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* m_Items[1];

	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier>::.ctor()
inline void List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5 (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void sc.terrain.proceduralpainter.Modifier::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4 (Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.Modifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56 (Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.Modifier::SetBlendMode(UnityEngine.Material,sc.terrain.proceduralpainter.Modifier/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier_SetBlendMode_m053A1C08DEBBA3E4FAE24F8FE2B707C18F733A40 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainData::get_heightmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Terrain::get_normalmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>::get_Count()
inline int32_t List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_inline (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>::get_Item(System.Int32)
inline LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770 (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* (*) (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void sc.terrain.proceduralpainter.ModifierStack::ProcessSingleLayer(UnityEngine.Terrain,sc.terrain.proceduralpainter.LayerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_ProcessSingleLayer_mD00B9E56F7A11C93420493FEE59A274F92CCA1F7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* ___settings1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___rt0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier>::get_Count()
inline int32_t List_1_get_Count_mF440F540CDAF22CFDCF4BD60548455FD2CA8DCF2_inline (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<sc.terrain.proceduralpainter.Modifier>::get_Item(System.Int32)
inline Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* (*) (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// UnityEngine.TerrainTools.PaintContext UnityEngine.TerrainTools.TerrainPaintUtility::BeginPaintTexture(UnityEngine.Terrain,UnityEngine.Rect,UnityEngine.TerrainLayer,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* TerrainPaintUtility_BeginPaintTexture_m0BBFA0F86453D0363334C3E960CF7AB9AF40EA4C (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___boundsInTerrainSpace1, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___inputLayer2, int32_t ___extraBorderPixels3, bool ___fillOutsideTerrain4, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.TerrainTools.PaintContext::get_destinationRenderTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainTools.TerrainPaintUtility::EndPaintTexture(UnityEngine.TerrainTools.PaintContext,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPaintUtility_EndPaintTexture_m06D132134AC924F27FA3F5598E3C9F91CFC1A936 (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* ___ctx0, String_t* ___editorUndoName1, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RepaintTerrain(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RepaintTerrain_m5C81B6EC4CB54183EC4BEA18A4AC68D44117F77B (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_alphamapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_alphamapResolution_mECF82D6CF9A3C640B18AB6DE14666BF380E03389 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Bounds sc.terrain.proceduralpainter.Utilities::RecalculateBounds(UnityEngine.Terrain[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Utilities_RecalculateBounds_m4B8832E0130A57E453A72A747818D3F409AC0E55 (TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains0, const RuntimeMethod* method) ;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701 (const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::SetTargetTerrains(UnityEngine.Terrain[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_SetTargetTerrains_mA63D983506186AE1216C54F528B2443D567A9ABD (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains0, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RepaintAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RepaintAll_m279BC39DFA0E4E831F9851251DB42CE17A5F9E92 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RecalculateBounds_mF9958B342D9D35F21836AC8AF5D53091066D7E3F (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::ResizeSplatmaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_ResizeSplatmaps_mFA480CE9E184C722D32DE67A5C0F3ABAEE040845 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.ModifierStack::Configure(UnityEngine.Terrain,UnityEngine.Bounds,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_Configure_m2617F95C75163CA77C768E9DF610ADD4CE4D8F26 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, int32_t ___resolution2, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.ModifierStack::ProcessLayers(UnityEngine.Terrain,System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_ProcessLayers_mBC44FC02D25298760FA1198A450F382766982483 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* ___layerSettings1, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::ApplyStampsToTerrain(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_ApplyStampsToTerrain_mAF4CF720DC16B8F51296A98720770CFD3292D155 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_baseMapResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_baseMapResolution_mB1F3A79E687A45F695A716B8B7417B35E77C19A7 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::SetBaseMapDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RefreshVegetation(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RefreshVegetation_m42F1D19D96994EE8AF0893F68D20A4E546729C1D (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Terrain::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent::Invoke(UnityEngine.Terrain)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_inline (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.LayerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerSettings__ctor_mFD9844D34E28077B930B8A6F9CD9D285F2A7E64E (LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>::Insert(System.Int32,T)
inline void List_1_Insert_mAA2628DBEDDEC0EA3A3825CBF5852F545A87F79E (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* __this, int32_t ___index0, LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640*, int32_t, LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::SetTerrainLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_SetTerrainLayers_mB802E83AFA3ACE764918F3FF19EF14EEAE9D6F02 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) ;
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RemoveTerrainListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RemoveTerrainListeners_m1DE119BC1BC66662778D7BA504A04B413D30CF9D (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<sc.terrain.proceduralpainter.TerrainChangeListener>()
inline TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* Component_GetComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_m7B9F004A83355A9708A1597A72DB21D342223027 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<sc.terrain.proceduralpainter.TerrainChangeListener>()
inline TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* GameObject_AddComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_mB222BE4BA80737561D7FCA292871D39A236A2BCE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>::Add(T)
inline void List_1_Add_mF192B6CA17085F82F4AD565061F0F5A1C2F84625_inline (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* __this, TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*, TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>::get_Item(System.Int32)
inline TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* List_1_get_Item_mEC514037C025FFEE5E861E99A0521AE1DBE2DE72 (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* (*) (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>::get_Count()
inline int32_t List_1_get_Count_mFDED9FA9F46390288324E4361777314315506D52_inline (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>::Clear()
inline void List_1_Clear_m8DF2189494DA2D19E4E703CE0E93A0F04A91B3C5_inline (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.TerrainLayer[] sc.terrain.proceduralpainter.Utilities::SettingsToLayers(System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* Utilities_SettingsToLayers_m65BFCE780A9B84BA0E575F54363A080A48DB4E27 (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* ___layerSettings0, const RuntimeMethod* method) ;
// System.Void UnityEngine.TerrainData::set_terrainLayers(UnityEngine.TerrainLayer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671 (TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* __this, TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>::.ctor()
inline void List_1__ctor_m998E4ED35306D0BCC2AF5D47CC10DFC07F688147 (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.proceduralpainter.TerrainChangeListener>::.ctor()
inline void List_1__ctor_m3E8925C8F655917AD426359CAC5038527A23C52E (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_SetMinMax_mB5F7DDF18EDB7F3F25FA6D2B36824F28978C540F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___min0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___max1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainLayer>::.ctor()
inline void List_1__ctor_m467FEA25B745E6C7F3CD224BD39F5B6C82043465 (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TerrainLayer>::Add(T)
inline void List_1_Add_mA71FE5F91021BEECB7A8263DD981E8EA8759C6B7_inline (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* __this, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26*, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.TerrainLayer>::ToArray()
inline TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* List_1_ToArray_mE1AAAADDC775272475F2F94ADE4C9EAA3FEE0215 (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* __this, const RuntimeMethod* method)
{
	return ((  TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* (*) (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void sc.terrain.proceduralpainter.Attributes::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attributes__ctor_m3EA0C57CD308DA72827D3C59CFE50F4225BBACA7 (Attributes_t8CBD3F65C9E54D73CD3D8D0A7031F0517E2B68A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.Attributes/ResolutionDropdown::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolutionDropdown__ctor_m2F3F60C8C9F701D55BD6B80E9E9FDAD8C1DA9F0A (ResolutionDropdown_t01E398CF20E79FDEADD155E4FBB4D26B466D95EB* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	{
		// public ResolutionDropdown(int min, int max)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.min = min;
		int32_t L_0 = ___min0;
		__this->___min_0 = L_0;
		// this.max = max;
		int32_t L_1 = ___max1;
		__this->___max_1 = L_1;
		// }
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
// System.Void sc.terrain.proceduralpainter.Attributes/MinMaxSlider::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSlider__ctor_m7D807995364CFA90A1BF0AE659901DE8B24273B3 (MinMaxSlider_tB8C439964C0927C7C760508B2B215FBCEA0CD246* __this, float ___min0, float ___max1, const RuntimeMethod* method) 
{
	{
		// public MinMaxSlider(float min, float max)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.min = min;
		float L_0 = ___min0;
		__this->___min_0 = L_0;
		// this.max = max;
		float L_1 = ___max1;
		__this->___max_1 = L_1;
		// }
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
// System.Void sc.terrain.proceduralpainter.Attributes/ChannelPicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelPicker__ctor_m66A000A636C05650E891D1ABCEE0AA94E850E25C (ChannelPicker_t9B5AB1467DA86C8AA4EB229AD50AF3B0A28378A7* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.LayerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerSettings__ctor_mFD9844D34E28077B930B8A6F9CD9D285F2A7E64E (LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool enabled = true;
		__this->___enabled_0 = (bool)1;
		// public List<Modifier> modifierStack = new List<Modifier>();
		List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* L_0 = (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA*)il2cpp_codegen_object_new(List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5(L_0, List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5_RuntimeMethod_var);
		__this->___modifierStack_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modifierStack_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.Curvature::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curvature_OnEnable_m1B3424FD120E7555B584446B3AF3A109A504B788 (Curvature_t47798CFB33244F406CFCD5A3A7B0D57F1238D1B8* __this, const RuntimeMethod* method) 
{
	{
		// passIndex = FilterPass.Curvature;
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7*)__this)->___passIndex_8 = 2;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Curvature::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curvature_Configure_mAB2A7CA47C219E15B8F203F7D074F5449AE618B3 (Curvature_t47798CFB33244F406CFCD5A3A7B0D57F1238D1B8* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5562504CC772DD25B87420C637F866C08A106982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94E48EF06DACF931C0573005148461983EF342EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Configure(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4(__this, L_0, NULL);
		// material.SetFloat("_CurvatureRadius", radius);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		float L_2 = __this->___radius_14;
		NullCheck(L_1);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_1, _stringLiteral94E48EF06DACF931C0573005148461983EF342EB, L_2, NULL);
		// material.SetVector("_MinMaxCurvature", new Vector4(minMax.x, minMax.y, minFalloff,maxFalloff));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___minMax_13);
		float L_5 = L_4->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___minMax_13);
		float L_7 = L_6->___y_1;
		float L_8 = __this->___minFalloff_15;
		float L_9 = __this->___maxFalloff_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_10), L_5, L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_3, _stringLiteral5562504CC772DD25B87420C637F866C08A106982, L_10, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Curvature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curvature__ctor_m312ED224320889101C09F475D99DED538829F38C (Curvature_t47798CFB33244F406CFCD5A3A7B0D57F1238D1B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Min(0f)] public Vector2 minMax = new Vector2(0f, 0.25f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (0.25f), /*hidden argument*/NULL);
		__this->___minMax_13 = L_0;
		// [Range(1f, 16f)] public float radius = 1;
		__this->___radius_14 = (1.0f);
		// [Range(0.001f, 1f)] public float minFalloff = 0.001f;
		__this->___minFalloff_15 = (0.00100000005f);
		// [Range(0.001f, 1f)] public float maxFalloff = 0.001f;
		__this->___maxFalloff_16 = (0.00100000005f);
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.Height::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Height_OnEnable_m64918E350CA7B271B4EA890A4E13CEC7A5A7B6BD (Height_tF0567ED94EF00C1D8EF7710DD68BA53015DC2D24* __this, const RuntimeMethod* method) 
{
	{
		// passIndex = FilterPass.Height;
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7*)__this)->___passIndex_8 = 0;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Height::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Height_Configure_m904097AC53567A1B24267636564BE3DA6F2B2C71 (Height_tF0567ED94EF00C1D8EF7710DD68BA53015DC2D24* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6907969A3AAD73EE9CF1999EA9ED576DF888B2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Configure(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4(__this, L_0, NULL);
		// material.SetVector("_MinMaxHeight", new Vector4(min, max, minFalloff, maxFalloff));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		float L_2 = __this->___min_13;
		float L_3 = __this->___max_15;
		float L_4 = __this->___minFalloff_14;
		float L_5 = __this->___maxFalloff_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_1, _stringLiteralE6907969A3AAD73EE9CF1999EA9ED576DF888B2F, L_6, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Height::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Height__ctor_m86C9E8A708F870A4A3112C32C678B3199B36EDC9 (Height_tF0567ED94EF00C1D8EF7710DD68BA53015DC2D24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [Min(0.001f)] public float minFalloff = 1;
		__this->___minFalloff_14 = (1.0f);
		// public float max = 2000;
		__this->___max_15 = (2000.0f);
		// [Min(0.001f)] public float maxFalloff = 1;
		__this->___maxFalloff_16 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.Modifier::SetBlendMode(UnityEngine.Material,sc.terrain.proceduralpainter.Modifier/BlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier_SetBlendMode_m053A1C08DEBBA3E4FAE24F8FE2B707C18F733A40 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___mode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_006a;
			}
			case 3:
			{
				goto IL_008f;
			}
			case 4:
			{
				goto IL_00b4;
			}
		}
	}
	{
		goto IL_00d9;
	}

IL_001f:
	{
		// mat.SetInt(SrcFactorID, (int)UnityEngine.Rendering.BlendMode.DstColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9;
		NullCheck(L_1);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_1, L_2, 2, NULL);
		// mat.SetInt(DstFactorID, (int)UnityEngine.Rendering.BlendMode.SrcColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat0;
		int32_t L_4 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10;
		NullCheck(L_3);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_3, L_4, 3, NULL);
		// mat.SetInt(BlendOpID, (int)BlendOp.Multiply);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat0;
		int32_t L_6 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11;
		NullCheck(L_5);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_5, L_6, ((int32_t)21), NULL);
		// } break;
		return;
	}

IL_0045:
	{
		// mat.SetInt(SrcFactorID, (int)UnityEngine.Rendering.BlendMode.SrcColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9;
		NullCheck(L_7);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_7, L_8, 3, NULL);
		// mat.SetInt(DstFactorID, (int)UnityEngine.Rendering.BlendMode.DstColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___mat0;
		int32_t L_10 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10;
		NullCheck(L_9);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_9, L_10, 2, NULL);
		// mat.SetInt(BlendOpID, (int)BlendOp.Add);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___mat0;
		int32_t L_12 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11;
		NullCheck(L_11);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_11, L_12, 0, NULL);
		// } break;
		return;
	}

IL_006a:
	{
		// mat.SetInt(SrcFactorID, (int)UnityEngine.Rendering.BlendMode.SrcColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		int32_t L_14 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9;
		NullCheck(L_13);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_13, L_14, 3, NULL);
		// mat.SetInt(DstFactorID, (int)UnityEngine.Rendering.BlendMode.DstColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___mat0;
		int32_t L_16 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10;
		NullCheck(L_15);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_15, L_16, 2, NULL);
		// mat.SetInt(BlendOpID, (int)BlendOp.ReverseSubtract);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___mat0;
		int32_t L_18 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11;
		NullCheck(L_17);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_17, L_18, 2, NULL);
		// } break;
		return;
	}

IL_008f:
	{
		// mat.SetInt(SrcFactorID, (int)UnityEngine.Rendering.BlendMode.SrcColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		int32_t L_20 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9;
		NullCheck(L_19);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_19, L_20, 3, NULL);
		// mat.SetInt(DstFactorID, (int)UnityEngine.Rendering.BlendMode.DstColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = ___mat0;
		int32_t L_22 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10;
		NullCheck(L_21);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_21, L_22, 2, NULL);
		// mat.SetInt(BlendOpID, (int)BlendOp.Min);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = ___mat0;
		int32_t L_24 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11;
		NullCheck(L_23);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_23, L_24, 3, NULL);
		// } break;
		return;
	}

IL_00b4:
	{
		// mat.SetInt(SrcFactorID, (int)UnityEngine.Rendering.BlendMode.SrcColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		int32_t L_26 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9;
		NullCheck(L_25);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_25, L_26, 3, NULL);
		// mat.SetInt(DstFactorID, (int)UnityEngine.Rendering.BlendMode.DstColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___mat0;
		int32_t L_28 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10;
		NullCheck(L_27);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_27, L_28, 2, NULL);
		// mat.SetInt(BlendOpID, (int)BlendOp.Max);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___mat0;
		int32_t L_30 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11;
		NullCheck(L_29);
		Material_SetInt_m9C05C9D7C152CFCC48F8572710F89DDAC9277E39(L_29, L_30, 4, NULL);
		// } break;
		return;
	}

IL_00d9:
	{
		// throw new ArgumentOutOfRangeException(nameof(mode), mode, null);
		int32_t L_31 = ___mode1;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BlendMode_t9109076A8E2BF239B942BA2069AB7156522B236F_il2cpp_TypeInfo_var)), &L_32);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_34 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), L_33, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Modifier_SetBlendMode_m053A1C08DEBBA3E4FAE24F8FE2B707C18F733A40_RuntimeMethod_var)));
	}
}
// System.Void sc.terrain.proceduralpainter.Modifier::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4 (Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetBlendMode(material, blendMode);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		int32_t L_1 = __this->___blendMode_6;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier_SetBlendMode_m053A1C08DEBBA3E4FAE24F8FE2B707C18F733A40(L_0, L_1, NULL);
		// material.SetFloat(OpacityID, opacity * 0.01f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___material0;
		int32_t L_3 = ((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___OpacityID_12;
		float L_4 = __this->___opacity_7;
		NullCheck(L_2);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, (0.00999999978f))), NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Modifier::Execute(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier_Execute_m9F5BE7B9C52FA70B02FA9736394B7FB41A784895 (Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!enabled || opacity == 0) return;
		bool L_0 = __this->___enabled_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = __this->___opacity_7;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (!enabled || opacity == 0) return;
		return;
	}

IL_0016:
	{
		// Graphics.Blit(null, target, ModifierStack.filterMat, (int)passIndex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ___target0;
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_4 = __this->___passIndex_8;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m1875691D6AAA8CF8EDE8508538714CF895E36779((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Modifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56 (Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled = true;
		__this->___enabled_4 = (bool)1;
		// public float opacity = 100;
		__this->___opacity_7 = (100.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Modifier::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Modifier__cctor_m817426723D88DEEE18861FD8F51BA934AA8B1DD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2DEC7C6DDDFE2B89C70FB30B19309EF90DFDA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF23EF1C490D6406D37C4F3D38485112EA711A72);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int SrcFactorID = Shader.PropertyToID("_SrcFactor");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDF23EF1C490D6406D37C4F3D38485112EA711A72, NULL);
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___SrcFactorID_9 = L_0;
		// private static int DstFactorID = Shader.PropertyToID("_DstFactor");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral0A2DEC7C6DDDFE2B89C70FB30B19309EF90DFDA5, NULL);
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___DstFactorID_10 = L_1;
		// private static int BlendOpID = Shader.PropertyToID("_BlendOp");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral9EB3C32AD3B76FD126254C6B1979A0E5E8C5123F, NULL);
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___BlendOpID_11 = L_2;
		// private static int OpacityID = Shader.PropertyToID("_Opacity");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral56FA0C8D9308880001A2ECB99BAADD0188191D3C, NULL);
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_StaticFields*)il2cpp_codegen_static_fields_for(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var))->___OpacityID_12 = L_3;
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
// System.Void sc.terrain.proceduralpainter.Noise::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise_OnEnable_m4784AB00B762C36D3D8BD3234A4B2F621B53104F (Noise_t44C91D670364FAE3113A4E3CA8061DEA123458F1* __this, const RuntimeMethod* method) 
{
	{
		// passIndex = FilterPass.Noise;
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7*)__this)->___passIndex_8 = 4;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Noise::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise_Configure_m642E142E2BABCEC201A465273762B859FE71C301 (Noise_t44C91D670364FAE3113A4E3CA8061DEA123458F1* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9F56DDE62972939232A11B6A299011864FA5EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BD15E84FBC2E3036F55DC7DDFB58E346C528EC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9645C1741EAED029EE2110E1963F0C430F2D284);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Configure(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4(__this, L_0, NULL);
		// material.SetVector("_NoiseScaleOffset", new Vector4(noiseScale * 0.001f, noiseScale * 0.001f, noiseOffset.x, noiseOffset.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		float L_2 = __this->___noiseScale_14;
		float L_3 = __this->___noiseScale_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___noiseOffset_15);
		float L_5 = L_4->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___noiseOffset_15);
		float L_7 = L_6->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), ((float)il2cpp_codegen_multiply(L_2, (0.00100000005f))), ((float)il2cpp_codegen_multiply(L_3, (0.00100000005f))), L_5, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_1, _stringLiteral4C9F56DDE62972939232A11B6A299011864FA5EA, L_8, NULL);
		// material.SetVector("_Levels", new Vector4(levels.x, levels.y, 0,0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___material0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___levels_16);
		float L_11 = L_10->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___levels_16);
		float L_13 = L_12->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_14), L_11, L_13, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_9, _stringLiteral5BD15E84FBC2E3036F55DC7DDFB58E346C528EC8, L_14, NULL);
		// material.SetInt("_NoiseType", (int)noiseType);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___material0;
		int32_t L_16 = __this->___noiseType_13;
		NullCheck(L_15);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_15, _stringLiteralF9645C1741EAED029EE2110E1963F0C430F2D284, L_16, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Noise::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise__ctor_mF8B7B32C76483DFE5572C33C7A8E171A35AC3974 (Noise_t44C91D670364FAE3113A4E3CA8061DEA123458F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float noiseScale = 50f;
		__this->___noiseScale_14 = (50.0f);
		// public Vector2 levels = new Vector2(0.5f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->___levels_16 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.Slope::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slope_OnEnable_mA885B5E0911C7572F11936BA6BC023B0D252060D (Slope_tE52E6BC5CE53B90C625A8721D2A9D1CE9D0D6E88* __this, const RuntimeMethod* method) 
{
	{
		// passIndex = FilterPass.Slope;
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7*)__this)->___passIndex_8 = 1;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Slope::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slope_Configure_mC09D193977C4E7270E15DA5F1F2A25C9482EFBBE (Slope_tE52E6BC5CE53B90C625A8721D2A9D1CE9D0D6E88* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BAC0E32995BF3381B3DE9890803CEE0664764C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Configure(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4(__this, L_0, NULL);
		// material.SetVector("_MinMaxSlope", new Vector4(minMax.x, minMax.y, minFalloff, maxFalloff));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___minMax_13);
		float L_3 = L_2->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___minMax_13);
		float L_5 = L_4->___y_1;
		float L_6 = __this->___minFalloff_14;
		float L_7 = __this->___maxFalloff_15;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_1, _stringLiteral7BAC0E32995BF3381B3DE9890803CEE0664764C4, L_8, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.Slope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slope__ctor_m47EF2591C1E91ED7845EC0F6E924149072B0AC81 (Slope_tE52E6BC5CE53B90C625A8721D2A9D1CE9D0D6E88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2 minMax = new Vector2(0, 90f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (90.0f), /*hidden argument*/NULL);
		__this->___minMax_13 = L_0;
		// [Range(0.001f, 90f)] public float minFalloff = 10;
		__this->___minFalloff_14 = (10.0f);
		// [Range(0.001f, 90f)] public float maxFalloff = 10;
		__this->___maxFalloff_15 = (10.0f);
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.TextureMask::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureMask_OnEnable_m3BBB23360CD4E17BF54033CE965BE622DB8D81E7 (TextureMask_t2C4849B4F1E7F01C361F9927811CF86F09A6D4E7* __this, const RuntimeMethod* method) 
{
	{
		// passIndex = FilterPass.TextureMask;
		((Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7*)__this)->___passIndex_8 = 3;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TextureMask::Configure(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureMask_Configure_m3791041D21F05A6A11945687EB932B00CC030B8A (TextureMask_t2C4849B4F1E7F01C361F9927811CF86F09A6D4E7* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6383B5308FD77E04FD11705906B3912B3085E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4426767A20BCB5D6A2B73D4EF1A77347F4DD03);
		s_Il2CppMethodInitialized = true;
	}
	float G_B2_0 = 0.0f;
	String_t* G_B2_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_2 = NULL;
	float G_B1_0 = 0.0f;
	String_t* G_B1_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	String_t* G_B3_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_3 = NULL;
	{
		// base.Configure(material);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___material0;
		Modifier_Configure_m73754CA746D461D302D9AFE5BE3A636287F368B4(__this, L_0, NULL);
		// material.SetTexture("_MaskTexture", texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___texture_13;
		NullCheck(L_1);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_1, _stringLiteralBB2ED7F20376FBEB6F53E15F9D67658D0E6B8478, L_2, NULL);
		// material.SetVector("_TilingParams", new Vector4(tiling, spanTerrains ? 1 : 0, 0f, 0f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		float L_4 = __this->___tiling_16;
		bool L_5 = __this->___spanTerrains_15;
		G_B1_0 = L_4;
		G_B1_1 = _stringLiteralDE4426767A20BCB5D6A2B73D4EF1A77347F4DD03;
		G_B1_2 = L_3;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = _stringLiteralDE4426767A20BCB5D6A2B73D4EF1A77347F4DD03;
			G_B2_2 = L_3;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0030:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), G_B3_1, ((float)G_B3_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B3_3, G_B3_2, L_6, NULL);
		// material.SetInt("_Channel", channel);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = ___material0;
		int32_t L_8 = __this->___channel_14;
		NullCheck(L_7);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_7, _stringLiteralD6383B5308FD77E04FD11705906B3912B3085E0E, L_8, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TextureMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureMask__ctor_mB3C75B9DFBA8F5408CD597334207D42AB212C901 (TextureMask_t2C4849B4F1E7F01C361F9927811CF86F09A6D4E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float tiling = 1f;
		__this->___tiling_16 = (1.0f);
		il2cpp_codegen_runtime_class_init_inline(Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7_il2cpp_TypeInfo_var);
		Modifier__ctor_m2ECA0D8A80C4CB54D7C2C8F29FED53805A732B56(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.ModifierStack::Configure(UnityEngine.Terrain,UnityEngine.Bounds,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_Configure_m2617F95C75163CA77C768E9DF610ADD4CE4D8F26 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, int32_t ___resolution2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B84D6FBE415F01254A292988B811153F00E4381);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_resolution != resolution || alphaMap == null)
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0;
		int32_t L_1 = ___resolution2;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}

IL_0015:
	{
		// alphaMap = new RenderTexture(resolution, resolution, 0, RenderTextureFormat.R8);
		int32_t L_4 = ___resolution2;
		int32_t L_5 = ___resolution2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_6, L_4, L_5, 0, ((int32_t)16), NULL);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3), (void*)L_6);
	}

IL_0024:
	{
		// m_resolution = resolution;
		int32_t L_7 = ___resolution2;
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0 = L_7;
		// if (!filterMat) filterMat = new Material(Shader.Find("Hidden/TerrainPainter/Modifier"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}
	{
		// if (!filterMat) filterMat = new Material(Shader.Find("Hidden/TerrainPainter/Modifier"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10;
		L_10 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2B84D6FBE415F01254A292988B811153F00E4381, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_11, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2), (void*)L_11);
	}

IL_004a:
	{
		// filterMat.SetTexture(HeightmapID, terrain.terrainData.heightmapTexture);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_13 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___HeightmapID_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14 = ___terrain0;
		NullCheck(L_14);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_15;
		L_15 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_14, NULL);
		NullCheck(L_15);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16;
		L_16 = TerrainData_get_heightmapTexture_m26CB863455F0048CEA74741C71BF3021576FF8CE(L_15, NULL);
		NullCheck(L_12);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_12, L_13, L_16, NULL);
		// filterMat.SetTexture(NormalMapID, terrain.normalmapTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_18 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___NormalMapID_7;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = ___terrain0;
		NullCheck(L_19);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20;
		L_20 = Terrain_get_normalmapTexture_m0B073CA3D5CD8E6176A8512B6B095F7BBE0D4C53(L_19, NULL);
		NullCheck(L_17);
		Material_SetTexture_mA9F8461850AAB88F992E9C6FA6F24C2E050B83FD(L_17, L_18, L_20, NULL);
		// heightScale = bounds.max.y - bounds.min.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___bounds1), NULL);
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds1), NULL);
		float L_24 = L_23.___y_3;
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___heightScale_1 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		// filterMat.SetFloat(HeightmapScaleID, heightScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_26 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___HeightmapScaleID_6;
		float L_27 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___heightScale_1;
		NullCheck(L_25);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_25, L_26, L_27, NULL);
		// float invWidth = 1.0f / bounds.size.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_29 = L_28.___x_2;
		V_0 = ((float)((1.0f)/L_29));
		// float invHeight = 1.0f / bounds.size.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_31 = L_30.___z_4;
		V_1 = ((float)((1.0f)/L_31));
		// var terrainPosScale = new Vector4(
		//     (terrain.GetPosition().x * invWidth) - (bounds.min.x * invWidth),
		//     (terrain.GetPosition().z * invHeight) - (bounds.min.z * invHeight),
		//     terrain.terrainData.size.x / bounds.size.x,
		//     terrain.terrainData.size.z / bounds.size.z
		// );
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_32 = ___terrain0;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_32, NULL);
		float L_34 = L_33.___x_2;
		float L_35 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds1), NULL);
		float L_37 = L_36.___x_2;
		float L_38 = V_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_39 = ___terrain0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_39, NULL);
		float L_41 = L_40.___z_4;
		float L_42 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds1), NULL);
		float L_44 = L_43.___z_4;
		float L_45 = V_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_46 = ___terrain0;
		NullCheck(L_46);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_47;
		L_47 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_47, NULL);
		float L_49 = L_48.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_51 = L_50.___x_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_52 = ___terrain0;
		NullCheck(L_52);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_53;
		L_53 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_52, NULL);
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_53, NULL);
		float L_55 = L_54.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_57 = L_56.___z_4;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_2), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_34, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_38)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_41, L_42)), ((float)il2cpp_codegen_multiply(L_44, L_45)))), ((float)(L_49/L_51)), ((float)(L_55/L_57)), NULL);
		// filterMat.SetVector(TerrainPosScaleID, terrainPosScale);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_58 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_59 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___TerrainPosScaleID_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = V_2;
		NullCheck(L_58);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_58, L_59, L_60, NULL);
		// filterMat.SetVector(TerrainBoundsID, new Vector4(bounds.min.x, bounds.max.z, bounds.size.x, bounds.size.z));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_61 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		int32_t L_62 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___TerrainBoundsID_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds1), NULL);
		float L_64 = L_63.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___bounds1), NULL);
		float L_66 = L_65.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_68 = L_67.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&___bounds1), NULL);
		float L_70 = L_69.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_71), L_64, L_66, L_68, L_70, /*hidden argument*/NULL);
		NullCheck(L_61);
		Material_SetVector_m44CD02D4555E2AF391C30700F0AEC36BA04CFEA7(L_61, L_62, L_71, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.ModifierStack::ProcessLayers(UnityEngine.Terrain,System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_ProcessLayers_mBC44FC02D25298760FA1198A450F382766982483 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* ___layerSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_0 = ___layerSettings1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_inline(L_0, List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_001c;
	}

IL_000b:
	{
		// ProcessSingleLayer(terrain, layerSettings[i]);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_3 = ___layerSettings1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_5;
		L_5 = List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770(L_3, L_4, List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		ModifierStack_ProcessSingleLayer_mD00B9E56F7A11C93420493FEE59A274F92CCA1F7(L_2, L_5, NULL);
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_001c:
	{
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.ModifierStack::ProcessSingleLayer(UnityEngine.Terrain,sc.terrain.proceduralpainter.LayerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack_ProcessSingleLayer_mD00B9E56F7A11C93420493FEE59A274F92CCA1F7 (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* ___settings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF440F540CDAF22CFDCF4BD60548455FD2CA8DCF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018B57B8C06348ACB7153CB0000D65542A6C8C93);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (settings.enabled == false || settings.layer == false) return;
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_0 = ___settings1;
		NullCheck(L_0);
		bool L_1 = L_0->___enabled_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_2 = ___settings1;
		NullCheck(L_2);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_3 = L_2->___layer_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (settings.enabled == false || settings.layer == false) return;
		return;
	}

IL_0016:
	{
		// Graphics.SetRenderTarget(alphaMap);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_5, NULL);
		// Graphics.Blit(Texture2D.whiteTexture, alphaMap);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3;
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_6, L_7, NULL);
		// for (int i = settings.modifierStack.Count-1; i >= 0; i--)
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_8 = ___settings1;
		NullCheck(L_8);
		List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* L_9 = L_8->___modifierStack_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mF440F540CDAF22CFDCF4BD60548455FD2CA8DCF2_inline(L_9, List_1_get_Count_mF440F540CDAF22CFDCF4BD60548455FD2CA8DCF2_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_006f;
	}

IL_003f:
	{
		// settings.modifierStack[i].Configure(filterMat);
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_11 = ___settings1;
		NullCheck(L_11);
		List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* L_12 = L_11->___modifierStack_2;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* L_14;
		L_14 = List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D(L_12, L_13, List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___filterMat_2;
		NullCheck(L_14);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(4 /* System.Void sc.terrain.proceduralpainter.Modifier::Configure(UnityEngine.Material) */, L_14, L_15);
		// settings.modifierStack[i].Execute(alphaMap);
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_16 = ___settings1;
		NullCheck(L_16);
		List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* L_17 = L_16->___modifierStack_2;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		Modifier_t23E86781097BDF830A645A6EC8071A28C09489D7* L_19;
		L_19 = List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D(L_17, L_18, List_1_get_Item_mD33820D30E6A9783F258335FBDE150BEB4A64E4D_RuntimeMethod_var);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_20 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3;
		NullCheck(L_19);
		VirtualActionInvoker1< RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* >::Invoke(5 /* System.Void sc.terrain.proceduralpainter.Modifier::Execute(UnityEngine.RenderTexture) */, L_19, L_20);
		// for (int i = settings.modifierStack.Count-1; i >= 0; i--)
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_006f:
	{
		// for (int i = settings.modifierStack.Count-1; i >= 0; i--)
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// Vector2 scaledSplatmapSize = new Vector2((terrain.terrainData.size.x / m_resolution) * m_resolution, (terrain.terrainData.size.z / m_resolution) * m_resolution);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_23 = ___terrain0;
		NullCheck(L_23);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_24;
		L_24 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_24, NULL);
		float L_26 = L_25.___x_2;
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		int32_t L_27 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0;
		int32_t L_28 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_29 = ___terrain0;
		NullCheck(L_29);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_30;
		L_30 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_30, NULL);
		float L_32 = L_31.___z_4;
		int32_t L_33 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0;
		int32_t L_34 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___m_resolution_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(((float)(L_26/((float)L_27))), ((float)L_28))), ((float)il2cpp_codegen_multiply(((float)(L_32/((float)L_33))), ((float)L_34))), NULL);
		// PaintContext c = TerrainPaintUtility.BeginPaintTexture(terrain, new Rect(0, 0, scaledSplatmapSize.x, scaledSplatmapSize.y), settings.layer);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_35 = ___terrain0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_0;
		float L_39 = L_38.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40;
		memset((&L_40), 0, sizeof(L_40));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_40), (0.0f), (0.0f), L_37, L_39, /*hidden argument*/NULL);
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_41 = ___settings1;
		NullCheck(L_41);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_42 = L_41->___layer_1;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_43;
		L_43 = TerrainPaintUtility_BeginPaintTexture_m0BBFA0F86453D0363334C3E960CF7AB9AF40EA4C(L_35, L_40, L_42, 0, (bool)1, NULL);
		V_1 = L_43;
		// Graphics.Blit(alphaMap, c.destinationRenderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___alphaMap_3;
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_45 = V_1;
		NullCheck(L_45);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_46;
		L_46 = PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline(L_45, NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_44, L_46, NULL);
		// TerrainPaintUtility.EndPaintTexture(c, UndoActionName);
		PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* L_47 = V_1;
		TerrainPaintUtility_EndPaintTexture_m06D132134AC924F27FA3F5598E3C9F91CFC1A936(L_47, _stringLiteral018B57B8C06348ACB7153CB0000D65542A6C8C93, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.ModifierStack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack__ctor_m94A59E127D7FA4332A9724843A2753539C50FDA0 (ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.ModifierStack::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifierStack__cctor_m32AC6B6F8C2D4EE902797DC31E97CFE34D11969A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E6628BB0C2D0FC6C2879456D97101909B02FCD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1270B977595956A762AEAA6C8A9C905EF855810);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEFE5AB0DF1C4B711B19A1EFB40A0FB61E88B8C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDADB94EA87904777EBA11D637493E3CA6048BAD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int HeightmapID = Shader.PropertyToID("_Heightmap");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralCEFE5AB0DF1C4B711B19A1EFB40A0FB61E88B8C6, NULL);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___HeightmapID_5 = L_0;
		// private static int HeightmapScaleID = Shader.PropertyToID("_HeightmapScale");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC1270B977595956A762AEAA6C8A9C905EF855810, NULL);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___HeightmapScaleID_6 = L_1;
		// private static int NormalMapID = Shader.PropertyToID("_NormalMap");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral17870CA6693777D85F2129A2C9A2AF8DCEDFC342, NULL);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___NormalMapID_7 = L_2;
		// private static int TerrainPosScaleID = Shader.PropertyToID("_TerrainPosScale");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralDADB94EA87904777EBA11D637493E3CA6048BAD8, NULL);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___TerrainPosScaleID_8 = L_3;
		// private static int TerrainBoundsID = Shader.PropertyToID("_TerrainBounds");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral1E6628BB0C2D0FC6C2879456D97101909B02FCD6, NULL);
		((ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_StaticFields*)il2cpp_codegen_static_fields_for(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var))->___TerrainBoundsID_9 = L_4;
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
// System.Void sc.terrain.proceduralpainter.TerrainChangeListener::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChangeListener_OnTerrainChanged_m9092ABDB6CB848C3687A269E0EB809EDDF832B93 (TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* __this, int32_t ___flags0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!terrain || !TerrainPainter.Current) return;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_0 = __this->___terrain_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* L_2 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___Current_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// if (!terrain || !TerrainPainter.Current) return;
		return;
	}

IL_001a:
	{
		// if ((flags & TerrainChangedFlags.Heightmap) != 0)
		int32_t L_4 = ___flags0;
		if (!((int32_t)((int32_t)L_4&1)))
		{
			goto IL_003b;
		}
	}
	{
		// if(TerrainPainter.Current.autoRepaint) TerrainPainter.Current.RepaintTerrain(terrain);
		TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* L_5 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___Current_5;
		NullCheck(L_5);
		bool L_6 = L_5->___autoRepaint_10;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// if(TerrainPainter.Current.autoRepaint) TerrainPainter.Current.RepaintTerrain(terrain);
		TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* L_7 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___Current_5;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = __this->___terrain_4;
		NullCheck(L_7);
		TerrainPainter_RepaintTerrain_m5C81B6EC4CB54183EC4BEA18A4AC68D44117F77B(L_7, L_8, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainChangeListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainChangeListener__ctor_m66AF9B9173F1885D2330D3D5AC6CACF9D3660009 (TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void sc.terrain.proceduralpainter.TerrainPainter::add_OnTerrainRepaint(sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_add_OnTerrainRepaint_mF41B92138B4C6B536F19BD0B4A1AD1EB12F55513 (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_0 = NULL;
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_1 = NULL;
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_2 = NULL;
	{
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_0 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___OnTerrainRepaint_14;
		V_0 = L_0;
	}

IL_0006:
	{
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_1 = V_0;
		V_1 = L_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_2 = V_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)CastclassSealed((RuntimeObject*)L_4, TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD_il2cpp_TypeInfo_var));
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_5 = V_2;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_6 = V_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_7;
		L_7 = InterlockedCompareExchangeImpl<TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*>((&((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___OnTerrainRepaint_14), L_5, L_6);
		V_0 = L_7;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_8 = V_0;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_9 = V_1;
		if ((!(((RuntimeObject*)(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)L_8) == ((RuntimeObject*)(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::remove_OnTerrainRepaint(sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_remove_OnTerrainRepaint_m7E49E6E3BB648D3CDE5E0F8DF62CB281A6E8EBAC (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_0 = NULL;
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_1 = NULL;
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* V_2 = NULL;
	{
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_0 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___OnTerrainRepaint_14;
		V_0 = L_0;
	}

IL_0006:
	{
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_1 = V_0;
		V_1 = L_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_2 = V_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)CastclassSealed((RuntimeObject*)L_4, TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD_il2cpp_TypeInfo_var));
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_5 = V_2;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_6 = V_1;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_7;
		L_7 = InterlockedCompareExchangeImpl<TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*>((&((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___OnTerrainRepaint_14), L_5, L_6);
		V_0 = L_7;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_8 = V_0;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_9 = V_1;
		if ((!(((RuntimeObject*)(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)L_8) == ((RuntimeObject*)(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_OnEnable_m17F613E88BDA185F0424C0BACFF135E7AEFA9197 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B84D6FBE415F01254A292988B811153F00E4381);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!filterShader) filterShader = Shader.Find("Hidden/TerrainPainter/Modifier");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___filterShader_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (!filterShader) filterShader = Shader.Find("Hidden/TerrainPainter/Modifier");
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2;
		L_2 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2B84D6FBE415F01254A292988B811153F00E4381, NULL);
		__this->___filterShader_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filterShader_13), (void*)L_2);
	}

IL_001d:
	{
		// Current = this;
		((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___Current_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___Current_5), (void*)__this);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::ResizeSplatmaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_ResizeSplatmaps_mFA480CE9E184C722D32DE67A5C0F3ABAEE040845 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0 = __this->___terrains_6;
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if(terrain) terrain.terrainData.alphamapResolution = splatmapResolution;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_5 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// if(terrain) terrain.terrainData.alphamapResolution = splatmapResolution;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = V_2;
		NullCheck(L_7);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_8;
		L_8 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_7, NULL);
		int32_t L_9 = __this->___splatmapResolution_7;
		NullCheck(L_8);
		TerrainData_set_alphamapResolution_mECF82D6CF9A3C640B18AB6DE14666BF380E03389(L_8, L_9, NULL);
	}

IL_0028:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		// foreach (Terrain terrain in terrains)
		int32_t L_11 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RecalculateBounds_mF9958B342D9D35F21836AC8AF5D53091066D7E3F (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	{
		// bounds = Utilities.RecalculateBounds(terrains);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0 = __this->___terrains_6;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Utilities_RecalculateBounds_m4B8832E0130A57E453A72A747818D3F409AC0E55(L_0, NULL);
		__this->___bounds_12 = L_1;
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::AssignActiveTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_AssignActiveTerrains_m7D8E1967FDB0557DB645DA53B5FDADF76716DFB6 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	{
		// SetTargetTerrains(Terrain.activeTerrains);
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0;
		L_0 = Terrain_get_activeTerrains_mB90A9BC89764F626D13F3EF1420EA8D3E186B701(NULL);
		TerrainPainter_SetTargetTerrains_mA63D983506186AE1216C54F528B2443D567A9ABD(__this, L_0, NULL);
		// RepaintAll();
		TerrainPainter_RepaintAll_m279BC39DFA0E4E831F9851251DB42CE17A5F9E92(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::SetTargetTerrains(UnityEngine.Terrain[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_SetTargetTerrains_mA63D983506186AE1216C54F528B2443D567A9ABD (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains0, const RuntimeMethod* method) 
{
	{
		// this.terrains = terrains;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0 = ___terrains0;
		__this->___terrains_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrains_6), (void*)L_0);
		// RecalculateBounds();
		TerrainPainter_RecalculateBounds_mF9958B342D9D35F21836AC8AF5D53091066D7E3F(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RepaintAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RepaintAll_m279BC39DFA0E4E831F9851251DB42CE17A5F9E92 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B5EAF1B3F5C57235B5B94F5751D135D495CAD8F);
		s_Il2CppMethodInitialized = true;
	}
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	{
		// if (layerSettings.Count == 0) return;
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_0 = __this->___layerSettings_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_inline(L_0, List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (layerSettings.Count == 0) return;
		return;
	}

IL_000e:
	{
		// ResizeSplatmaps();
		TerrainPainter_ResizeSplatmaps_mFA480CE9E184C722D32DE67A5C0F3ABAEE040845(__this, NULL);
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_2 = __this->___terrains_6;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0043;
	}

IL_001f:
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (!terrain)
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_7, NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.LogError("Missing terrain assigned to TerrainPainter", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral0B5EAF1B3F5C57235B5B94F5751D135D495CAD8F, __this, NULL);
		// continue;
		goto IL_003f;
	}

IL_0038:
	{
		// RepaintTerrain(terrain);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_2;
		TerrainPainter_RepaintTerrain_m5C81B6EC4CB54183EC4BEA18A4AC68D44117F77B(__this, L_9, NULL);
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0043:
	{
		// foreach (Terrain terrain in terrains)
		int32_t L_11 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RepaintTerrain(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RepaintTerrain_m5C81B6EC4CB54183EC4BEA18A4AC68D44117F77B (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* G_B5_0 = NULL;
	TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* G_B4_0 = NULL;
	{
		// if (layerSettings.Count == 0 || terrain == null) return;
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_0 = __this->___layerSettings_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_inline(L_0, List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_2 = ___terrain0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (layerSettings.Count == 0 || terrain == null) return;
		return;
	}

IL_0017:
	{
		// ModifierStack.Configure(terrain, bounds, splatmapResolution);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_4 = ___terrain0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5 = __this->___bounds_12;
		int32_t L_6 = __this->___splatmapResolution_7;
		il2cpp_codegen_runtime_class_init_inline(ModifierStack_tF3BC3A7F98AF5D86F38473553AAD7DB9EF139426_il2cpp_TypeInfo_var);
		ModifierStack_Configure_m2617F95C75163CA77C768E9DF610ADD4CE4D8F26(L_4, L_5, L_6, NULL);
		// ModifierStack.ProcessLayers(terrain, layerSettings);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = ___terrain0;
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_8 = __this->___layerSettings_9;
		ModifierStack_ProcessLayers_mBC44FC02D25298760FA1198A450F382766982483(L_7, L_8, NULL);
		// ApplyStampsToTerrain(terrain);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = ___terrain0;
		TerrainPainter_ApplyStampsToTerrain_mAF4CF720DC16B8F51296A98720770CFD3292D155(__this, L_9, NULL);
		// terrain.terrainData.baseMapResolution = colorMapResolution;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_10 = ___terrain0;
		NullCheck(L_10);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_11;
		L_11 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_10, NULL);
		int32_t L_12 = __this->___colorMapResolution_8;
		NullCheck(L_11);
		TerrainData_set_baseMapResolution_mB1F3A79E687A45F695A716B8B7417B35E77C19A7(L_11, L_12, NULL);
		// terrain.terrainData.SetBaseMapDirty();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_13 = ___terrain0;
		NullCheck(L_13);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_14;
		L_14 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_13, NULL);
		NullCheck(L_14);
		TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618(L_14, NULL);
		// RefreshVegetation(terrain);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = ___terrain0;
		TerrainPainter_RefreshVegetation_m42F1D19D96994EE8AF0893F68D20A4E546729C1D(__this, L_15, NULL);
		// terrain.Flush();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = ___terrain0;
		NullCheck(L_16);
		Terrain_Flush_m960CA9087AB6C18BE3C6B54DD993B5E728E5FA95(L_16, NULL);
		// OnTerrainRepaint?.Invoke(terrain);
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_17 = ((TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_StaticFields*)il2cpp_codegen_static_fields_for(TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968_il2cpp_TypeInfo_var))->___OnTerrainRepaint_14;
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* L_18 = L_17;
		G_B4_0 = L_18;
		if (L_18)
		{
			G_B5_0 = L_18;
			goto IL_006f;
		}
	}
	{
		return;
	}

IL_006f:
	{
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_19 = ___terrain0;
		NullCheck(G_B5_0);
		TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_inline(G_B5_0, L_19, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RefreshVegetation(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RefreshVegetation_m42F1D19D96994EE8AF0893F68D20A4E546729C1D (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::CreateSettingsForLayer(UnityEngine.TerrainLayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_CreateSettingsForLayer_m79BC85138AA238B52D03A2D02219F8A59562F5A3 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mAA2628DBEDDEC0EA3A3825CBF5852F545A87F79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* V_0 = NULL;
	{
		// LayerSettings s = new LayerSettings();
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_0 = (LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E*)il2cpp_codegen_object_new(LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LayerSettings__ctor_mFD9844D34E28077B930B8A6F9CD9D285F2A7E64E(L_0, NULL);
		V_0 = L_0;
		// s.layer = layer;
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_1 = V_0;
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_2 = ___layer0;
		NullCheck(L_1);
		L_1->___layer_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___layer_1), (void*)L_2);
		// s.modifierStack = new List<Modifier>();
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_3 = V_0;
		List_1_t201D04C7843627BC579FC0F51B4192316F5615CA* L_4 = (List_1_t201D04C7843627BC579FC0F51B4192316F5615CA*)il2cpp_codegen_object_new(List_1_t201D04C7843627BC579FC0F51B4192316F5615CA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5(L_4, List_1__ctor_m52C9E528E600AE9FABFA3443EB2E2D02570979D5_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___modifierStack_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___modifierStack_2), (void*)L_4);
		// layerSettings.Insert(0, s);
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_5 = __this->___layerSettings_9;
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_6 = V_0;
		NullCheck(L_5);
		List_1_Insert_mAA2628DBEDDEC0EA3A3825CBF5852F545A87F79E(L_5, 0, L_6, List_1_Insert_mAA2628DBEDDEC0EA3A3825CBF5852F545A87F79E_RuntimeMethod_var);
		// SetTerrainLayers();
		TerrainPainter_SetTerrainLayers_mB802E83AFA3ACE764918F3FF19EF14EEAE9D6F02(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::SetAutoRepaint(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_SetAutoRepaint_m30C6E010A4381BF85F776658125C4D7053FB1180 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_m7B9F004A83355A9708A1597A72DB21D342223027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_mB222BE4BA80737561D7FCA292871D39A236A2BCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF192B6CA17085F82F4AD565061F0F5A1C2F84625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_0 = NULL;
	int32_t V_1 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_2 = NULL;
	TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* V_3 = NULL;
	{
		// autoRepaint = value;
		bool L_0 = ___value0;
		__this->___autoRepaint_10 = L_0;
		// if (value)
		bool L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// RemoveTerrainListeners();
		TerrainPainter_RemoveTerrainListeners_m1DE119BC1BC66662778D7BA504A04B413D30CF9D(__this, NULL);
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_2 = __this->___terrains_6;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0051;
	}

IL_001b:
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// TerrainChangeListener listener = terrain.GetComponent<TerrainChangeListener>();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = V_2;
		NullCheck(L_7);
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_8;
		L_8 = Component_GetComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_m7B9F004A83355A9708A1597A72DB21D342223027(L_7, Component_GetComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_m7B9F004A83355A9708A1597A72DB21D342223027_RuntimeMethod_var);
		V_3 = L_8;
		// if (!listener) listener = terrain.gameObject.AddComponent<TerrainChangeListener>();
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (L_10)
		{
			goto IL_003a;
		}
	}
	{
		// if (!listener) listener = terrain.gameObject.AddComponent<TerrainChangeListener>();
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = V_2;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_13;
		L_13 = GameObject_AddComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_mB222BE4BA80737561D7FCA292871D39A236A2BCE(L_12, GameObject_AddComponent_TisTerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F_mB222BE4BA80737561D7FCA292871D39A236A2BCE_RuntimeMethod_var);
		V_3 = L_13;
	}

IL_003a:
	{
		// listener.terrain = terrain;
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_14 = V_3;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_15 = V_2;
		NullCheck(L_14);
		L_14->___terrain_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___terrain_4), (void*)L_15);
		// this.terrainListeners.Add(listener);
		List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* L_16 = __this->___terrainListeners_11;
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_17 = V_3;
		NullCheck(L_16);
		List_1_Add_mF192B6CA17085F82F4AD565061F0F5A1C2F84625_inline(L_16, L_17, List_1_Add_mF192B6CA17085F82F4AD565061F0F5A1C2F84625_RuntimeMethod_var);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0051:
	{
		// foreach (Terrain terrain in terrains)
		int32_t L_19 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		return;
	}

IL_0058:
	{
		// RemoveTerrainListeners();
		TerrainPainter_RemoveTerrainListeners_m1DE119BC1BC66662778D7BA504A04B413D30CF9D(__this, NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::RemoveTerrainListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_RemoveTerrainListeners_m1DE119BC1BC66662778D7BA504A04B413D30CF9D (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8DF2189494DA2D19E4E703CE0E93A0F04A91B3C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFDED9FA9F46390288324E4361777314315506D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEC514037C025FFEE5E861E99A0521AE1DBE2DE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < terrainListeners.Count; i++)
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		// DestroyImmediate(terrainListeners[i]);
		List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* L_0 = __this->___terrainListeners_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TerrainChangeListener_t1E5EF166F6BD8A0D13DDC22B77BCB00BE554CB8F* L_2;
		L_2 = List_1_get_Item_mEC514037C025FFEE5E861E99A0521AE1DBE2DE72(L_0, L_1, List_1_get_Item_mEC514037C025FFEE5E861E99A0521AE1DBE2DE72_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_2, NULL);
		// for (int i = 0; i < terrainListeners.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0019:
	{
		// for (int i = 0; i < terrainListeners.Count; i++)
		int32_t L_4 = V_0;
		List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* L_5 = __this->___terrainListeners_11;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mFDED9FA9F46390288324E4361777314315506D52_inline(L_5, List_1_get_Count_mFDED9FA9F46390288324E4361777314315506D52_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// terrainListeners.Clear();
		List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* L_7 = __this->___terrainListeners_11;
		NullCheck(L_7);
		List_1_Clear_m8DF2189494DA2D19E4E703CE0E93A0F04A91B3C5_inline(L_7, List_1_Clear_m8DF2189494DA2D19E4E703CE0E93A0F04A91B3C5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::SetTerrainLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_SetTerrainLayers_mB802E83AFA3ACE764918F3FF19EF14EEAE9D6F02 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* V_0 = NULL;
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// TerrainLayer[] layers = Utilities.SettingsToLayers(layerSettings);
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_0 = __this->___layerSettings_9;
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_1;
		L_1 = Utilities_SettingsToLayers_m65BFCE780A9B84BA0E575F54363A080A48DB4E27(L_0, NULL);
		V_0 = L_1;
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_2 = __this->___terrains_6;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0034;
	}

IL_0017:
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// terrain.terrainData.terrainLayers = layers;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_7 = L_6;
		NullCheck(L_7);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_8;
		L_8 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_7, NULL);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_9 = V_0;
		NullCheck(L_8);
		TerrainData_set_terrainLayers_m8FC80DAB5CD38A11CDB082F94DBD3186CD434671(L_8, L_9, NULL);
		// terrain.terrainData.SetBaseMapDirty();
		NullCheck(L_7);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_10;
		L_10 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_7, NULL);
		NullCheck(L_10);
		TerrainData_SetBaseMapDirty_m71323D916BC5353D2A357E91C5ECE55E65700618(L_10, NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		// foreach (Terrain terrain in terrains)
		int32_t L_12 = V_2;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::ApplyStampsToTerrain(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter_ApplyStampsToTerrain_mAF4CF720DC16B8F51296A98720770CFD3292D155 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainPainter__ctor_mF957061F53E42B2935914CA5A6842276F375E577 (TerrainPainter_t3CACD70E732D217CB78DF9B89B3182BD7B4FC968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E8925C8F655917AD426359CAC5038527A23C52E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m998E4ED35306D0BCC2AF5D47CC10DFC07F688147_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int splatmapResolution = 256;
		__this->___splatmapResolution_7 = ((int32_t)256);
		// public int colorMapResolution = 256;
		__this->___colorMapResolution_8 = ((int32_t)256);
		// public List<LayerSettings> layerSettings = new List<LayerSettings>();
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_0 = (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640*)il2cpp_codegen_object_new(List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m998E4ED35306D0BCC2AF5D47CC10DFC07F688147(L_0, List_1__ctor_m998E4ED35306D0BCC2AF5D47CC10DFC07F688147_RuntimeMethod_var);
		__this->___layerSettings_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___layerSettings_9), (void*)L_0);
		// public List<TerrainChangeListener> terrainListeners = new List<TerrainChangeListener>();
		List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A* L_1 = (List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A*)il2cpp_codegen_object_new(List_1_t2B6B5B407BC08FFFA8C365DCC5F3FEAB4CAF474A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m3E8925C8F655917AD426359CAC5038527A23C52E(L_1, List_1__ctor_m3E8925C8F655917AD426359CAC5038527A23C52E_RuntimeMethod_var);
		__this->___terrainListeners_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___terrainListeners_11), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_Multicast(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* currentDelegate = reinterpret_cast<TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___terrain0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenInst(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method)
{
	NullCheck(___terrain0);
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, method);
}
void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenStatic(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___terrain0, method);
}
void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenStaticInvoker(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(__this->___method_ptr_0, method, NULL, ___terrain0);
}
void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_ClosedStaticInvoker(TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___terrain0);
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRepaintEvent__ctor_mC7B7A0DADA1CC2E8CE44E3F6EFE650477284415B (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_Multicast;
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent::Invoke(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948 (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent::BeginInvoke(UnityEngine.Terrain,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TerrainRepaintEvent_BeginInvoke_mAF256B0F0C860BBCFC19732188820EEA71B9CE4C (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___terrain0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void sc.terrain.proceduralpainter.TerrainPainter/TerrainRepaintEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainRepaintEvent_EndInvoke_mEEDC47F56CEAFC89D874131ED3B5EF8CCDC17E25 (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 sc.terrain.proceduralpainter.Utilities::GetSplatmapCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetSplatmapCount_m8C851F1F2FE64B99BE56EBF5EF368285E76BDF15 (int32_t ___layerCount0, const RuntimeMethod* method) 
{
	{
		// if (layerCount > 12) return 4;
		int32_t L_0 = ___layerCount0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0007;
		}
	}
	{
		// if (layerCount > 12) return 4;
		return 4;
	}

IL_0007:
	{
		// if (layerCount > 8) return 3;
		int32_t L_1 = ___layerCount0;
		if ((((int32_t)L_1) <= ((int32_t)8)))
		{
			goto IL_000d;
		}
	}
	{
		// if (layerCount > 8) return 3;
		return 3;
	}

IL_000d:
	{
		// if (layerCount > 4) return 2;
		int32_t L_2 = ___layerCount0;
		if ((((int32_t)L_2) <= ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// if (layerCount > 4) return 2;
		return 2;
	}

IL_0013:
	{
		// return 1;
		return 1;
	}
}
// System.Int32 sc.terrain.proceduralpainter.Utilities::GetChannelIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetChannelIndex_m71C01F3DCDD865F18ED49175DF77EAD2A9161430 (int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	{
		// return (layerIndex % 4);
		int32_t L_0 = ___layerIndex0;
		return ((int32_t)(L_0%4));
	}
}
// UnityEngine.Vector4 sc.terrain.proceduralpainter.Utilities::GetVectorMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Utilities_GetVectorMask_mE67415026F0CEA9BE079739CF7E3BCEB7530CAF1 (int32_t ___channelIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___channelIndex0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0066;
			}
		}
	}
	{
		goto IL_0080;
	}

IL_0018:
	{
		// case 0: return new Vector4(1, 0, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_1), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_1;
	}

IL_0032:
	{
		// case 1: return new Vector4(0, 1, 0, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_2), (0.0f), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004c:
	{
		// case 2: return new Vector4(0, 0, 1, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_3), (0.0f), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0066:
	{
		// case 3: return new Vector4(0, 0, 0, 1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_4;
	}

IL_0080:
	{
		// default: return Vector4.zero;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5;
		L_5 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		return L_5;
	}
}
// System.Int32 sc.terrain.proceduralpainter.Utilities::GetSplatmapIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetSplatmapIndex_m122A813494A7BF193A4440EF2D588B330509CC5B (int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	{
		// if (layerIndex > 11) return 3;
		int32_t L_0 = ___layerIndex0;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)11))))
		{
			goto IL_0007;
		}
	}
	{
		// if (layerIndex > 11) return 3;
		return 3;
	}

IL_0007:
	{
		// if (layerIndex > 7) return 2;
		int32_t L_1 = ___layerIndex0;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_000d;
		}
	}
	{
		// if (layerIndex > 7) return 2;
		return 2;
	}

IL_000d:
	{
		// if (layerIndex > 3) return 1;
		int32_t L_2 = ___layerIndex0;
		if ((((int32_t)L_2) <= ((int32_t)3)))
		{
			goto IL_0013;
		}
	}
	{
		// if (layerIndex > 3) return 1;
		return 1;
	}

IL_0013:
	{
		// return 0;
		return 0;
	}
}
// UnityEngine.Bounds sc.terrain.proceduralpainter.Utilities::RecalculateBounds(UnityEngine.Terrain[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Utilities_RecalculateBounds_m4B8832E0130A57E453A72A747818D3F409AC0E55 (TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* V_3 = NULL;
	int32_t V_4 = 0;
	Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* V_5 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// Vector3 minSum = Vector3.one * Mathf.Infinity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (std::numeric_limits<float>::infinity()), NULL);
		V_0 = L_1;
		// Vector3 maxSum = Vector3.one * Mathf.NegativeInfinity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (-std::numeric_limits<float>::infinity()), NULL);
		V_1 = L_3;
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_4 = ___terrains0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_00d7;
	}

IL_002a:
	{
		// foreach (Terrain terrain in terrains)
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// if(terrain == null) continue;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_9 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_10)
		{
			goto IL_00d1;
		}
	}
	{
		// if(!terrain.gameObject.activeInHierarchy) continue;;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_11 = V_5;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_12, NULL);
		if (!L_13)
		{
			goto IL_00d1;
		}
	}
	{
		// Vector3 min = terrain.GetPosition(); //Safe to assume terrain starts at origin
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_14 = V_5;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_14, NULL);
		V_6 = L_15;
		// Vector3 max = terrain.GetPosition() + terrain.terrainData.size; //Note, size is slightly more correct in height than bounds
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_16 = V_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Terrain_GetPosition_m5A1020F22CA4B1818E69A3B9687668AFAB2C43F5(L_16, NULL);
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_18 = V_5;
		NullCheck(L_18);
		TerrainData_t615A68EAC648066681875D47FC641496D12F2E24* L_19;
		L_19 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_20, NULL);
		V_7 = L_21;
		// if (min.x < minSum.x || min.y < minSum.y || min.z < minSum.z) minSum = min;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_6;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		float L_25 = L_24.___x_2;
		if ((((float)L_23) < ((float)L_25)))
		{
			goto IL_009e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_6;
		float L_27 = L_26.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		float L_29 = L_28.___y_3;
		if ((((float)L_27) < ((float)L_29)))
		{
			goto IL_009e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_6;
		float L_31 = L_30.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33 = L_32.___z_4;
		if ((!(((float)L_31) < ((float)L_33))))
		{
			goto IL_00a1;
		}
	}

IL_009e:
	{
		// if (min.x < minSum.x || min.y < minSum.y || min.z < minSum.z) minSum = min;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_6;
		V_0 = L_34;
	}

IL_00a1:
	{
		// if (max.x > maxSum.x || max.y > maxSum.y || max.z > maxSum.z) maxSum = max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_7;
		float L_36 = L_35.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___x_2;
		if ((((float)L_36) > ((float)L_38)))
		{
			goto IL_00ce;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_7;
		float L_40 = L_39.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_1;
		float L_42 = L_41.___y_3;
		if ((((float)L_40) > ((float)L_42)))
		{
			goto IL_00ce;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_7;
		float L_44 = L_43.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_1;
		float L_46 = L_45.___z_4;
		if ((!(((float)L_44) > ((float)L_46))))
		{
			goto IL_00d1;
		}
	}

IL_00ce:
	{
		// if (max.x > maxSum.x || max.y > maxSum.y || max.z > maxSum.z) maxSum = max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_7;
		V_1 = L_47;
	}

IL_00d1:
	{
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00d7:
	{
		// foreach (Terrain terrain in terrains)
		int32_t L_49 = V_4;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_50 = V_3;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// Bounds bounds = new Bounds(Vector3.zero, Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_2), L_51, L_52, NULL);
		// bounds.SetMinMax(minSum, maxSum);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		Bounds_SetMinMax_mB5F7DDF18EDB7F3F25FA6D2B36824F28978C540F((&V_2), L_53, L_54, NULL);
		// if (bounds.size.y < 1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_56 = L_55.___y_3;
		if ((!(((float)L_56) < ((float)(1.0f)))))
		{
			goto IL_0144;
		}
	}
	{
		// bounds.Encapsulate(new Vector3(bounds.center.x, bounds.center.y + 1f, bounds.center.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_2), NULL);
		float L_58 = L_57.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_2), NULL);
		float L_60 = L_59.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_2), NULL);
		float L_62 = L_61.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), L_58, ((float)il2cpp_codegen_add(L_60, (1.0f))), L_62, /*hidden argument*/NULL);
		Bounds_Encapsulate_m1FCA57C58536ADB67B85A703470C6F5BFB837C2F((&V_2), L_63, NULL);
	}

IL_0144:
	{
		// return bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_64 = V_2;
		return L_64;
	}
}
// UnityEngine.TerrainLayer[] sc.terrain.proceduralpainter.Utilities::SettingsToLayers(System.Collections.Generic.List`1<sc.terrain.proceduralpainter.LayerSettings>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* Utilities_SettingsToLayers_m65BFCE780A9B84BA0E575F54363A080A48DB4E27 (List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* ___layerSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA71FE5F91021BEECB7A8263DD981E8EA8759C6B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE1AAAADDC775272475F2F94ADE4C9EAA3FEE0215_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m467FEA25B745E6C7F3CD224BD39F5B6C82043465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// List<TerrainLayer> layerList = new List<TerrainLayer>();
		List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* L_0 = (List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26*)il2cpp_codegen_object_new(List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m467FEA25B745E6C7F3CD224BD39F5B6C82043465(L_0, List_1__ctor_m467FEA25B745E6C7F3CD224BD39F5B6C82043465_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_1 = ___layerSettings0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_inline(L_1, List_1_get_Count_mDAFE765CD698D45B4A57E050985D64C953BE556A_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_0027;
	}

IL_0011:
	{
		// layerList.Add(layerSettings[i].layer);
		List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* L_3 = V_0;
		List_1_t456BFA256A0A7DAC4072CAF4A2BCA99080696640* L_4 = ___layerSettings0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		LayerSettings_tA7D8E04E8B0A5B16796014FD3CEA897A7004633E* L_6;
		L_6 = List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770(L_4, L_5, List_1_get_Item_m1F5475271579238A7FE9C8D6AAD0A19C64337770_RuntimeMethod_var);
		NullCheck(L_6);
		TerrainLayer_t52E14A94A0CF76B0B5509B7FDFDE64FF8A9FEFF9* L_7 = L_6->___layer_1;
		NullCheck(L_3);
		List_1_Add_mA71FE5F91021BEECB7A8263DD981E8EA8759C6B7_inline(L_3, L_7, List_1_Add_mA71FE5F91021BEECB7A8263DD981E8EA8759C6B7_RuntimeMethod_var);
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0027:
	{
		// for (int i = layerSettings.Count-1; i >= 0; i--)
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// return layerList.ToArray();
		List_1_tBC631FCB854910673B2EF0EBFB74AAA581B47A26* L_10 = V_0;
		NullCheck(L_10);
		TerrainLayerU5BU5D_t259E391D6115F121FCD284E79F62012D70956EB0* L_11;
		L_11 = List_1_ToArray_mE1AAAADDC775272475F2F94ADE4C9EAA3FEE0215(L_10, List_1_ToArray_mE1AAAADDC775272475F2F94ADE4C9EAA3FEE0215_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean sc.terrain.proceduralpainter.Utilities::HasMissingTerrain(UnityEngine.Terrain[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utilities_HasMissingTerrain_mFB90DF2ED094700F4CC37B5A8D7AC26856FF7B67 (TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* ___terrains0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool isMissing = false;
		V_0 = (bool)0;
		// for (int i = 0; i < terrains.Length; i++)
		V_1 = 0;
		goto IL_0017;
	}

IL_0006:
	{
		// if (terrains[i] == null) isMissing = true;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_0 = ___terrains0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0013;
		}
	}
	{
		// if (terrains[i] == null) isMissing = true;
		V_0 = (bool)1;
	}

IL_0013:
	{
		// for (int i = 0; i < terrains.Length; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// for (int i = 0; i < terrains.Length; i++)
		int32_t L_6 = V_1;
		TerrainU5BU5D_t89E2F0565563C3D9005990300ADEDD183F1823FE* L_7 = ___terrains0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// return isMissing;
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Void sc.terrain.proceduralpainter.Utilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utilities__ctor_m9E3CF08C943A955836FCC8EB007C9BFE46AF925E (Utilities_t17A5AF220BB71804AE19FD20BC94787A623AE548* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* PaintContext_get_destinationRenderTexture_m5E3BA23300AA39CB2A260F795561FD707DB91E92_inline (PaintContext_t4103CBEAA97FAE0A4094645F3376F1B700D81F5A* __this, const RuntimeMethod* method) 
{
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___U3CdestinationRenderTextureU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TerrainRepaintEvent_Invoke_mB112C23892573B0D501BB64385E444D7BA030948_inline (TerrainRepaintEvent_t8C9E2E64DC4F8162E706B7C3102A42435E4813CD* __this, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667* ___terrain0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Terrain_t7F309492F67238DBFBC4566F47385B2A665CF667*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___terrain0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
