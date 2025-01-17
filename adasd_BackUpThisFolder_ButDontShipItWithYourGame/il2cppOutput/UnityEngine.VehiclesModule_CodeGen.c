﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Vector3 UnityEngine.WheelHit::get_normal()
extern void WheelHit_get_normal_mD59C9DB64546E22ADE3CA24DEE638F6F8168F162 (void);
// 0x00000002 System.Single UnityEngine.WheelHit::get_forwardSlip()
extern void WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE (void);
// 0x00000003 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8 (void);
// 0x00000004 System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
extern void WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB (void);
// 0x00000005 System.Single UnityEngine.WheelCollider::get_steerAngle()
extern void WheelCollider_get_steerAngle_mF0A004554F1509F1DA233AC71A7A2C9C36CC9EE5 (void);
// 0x00000006 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3 (void);
// 0x00000007 System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern void WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890 (void);
// 0x00000008 System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern void WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	WheelHit_get_normal_mD59C9DB64546E22ADE3CA24DEE638F6F8168F162,
	WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE,
	WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8,
	WheelCollider_set_brakeTorque_mB9B216C57C275470907C7DB35185E2F192DC8DAB,
	WheelCollider_get_steerAngle_mF0A004554F1509F1DA233AC71A7A2C9C36CC9EE5,
	WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3,
	WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890,
	WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2,
};
extern void WheelHit_get_normal_mD59C9DB64546E22ADE3CA24DEE638F6F8168F162_AdjustorThunk (void);
extern void WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[2] = 
{
	{ 0x06000001, WheelHit_get_normal_mD59C9DB64546E22ADE3CA24DEE638F6F8168F162_AdjustorThunk },
	{ 0x06000002, WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE_AdjustorThunk },
};
static const int32_t s_InvokerIndices[8] = 
{
	5474,
	5416,
	4374,
	4374,
	5416,
	4374,
	1869,
	2900,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	8,
	s_methodPointers,
	2,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
