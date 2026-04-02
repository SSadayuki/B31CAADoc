// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWShortNames_h
#define _SWShortNames_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
// 
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SWConvertShortNameToString
//    SWConvertStringToShortName
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/27
//  Goal  : Creation
// *****************************************************************************

#ifdef  _WINDOWS_SOURCE
#ifdef  __SWManikinMod
#define ExportedBySWManikinMod     __declspec(dllexport)
#else
#define ExportedBySWManikinMod     __declspec(dllimport)
#endif
#else
#define ExportedBySWManikinMod
#endif

enum SWShortName
{
	SWNoShortName = -1,

	// Segments
	SWSBoPh   = 0,     // Phantom 
	SWSBoTIp  = 1,     // Transpelvic 
	SWRSBoIlp = 2,     // Right Illio-pelvic 
	SWLSBoIlp = 3,     // Left Illio-pelvic 
	SWSBoL5   = 4,     // Lumbar Spine 5 
	SWSBoL4   = 5,     // Lumbar Spine 4 
	SWSBoL3   = 6,     // Lumbar Spine 3 
	SWSBoL2   = 7,     // Lumbar Spine 2 
	SWSBoL1   = 8,     // Lumbar Spine 1 
	SWSBoT12  = 9,     // Thoracic Spine 12 
	SWSBoT11  = 10,    // Thoracic Spine 11 
	SWSBoT10  = 11,    // Thoracic Spine 10 
	SWSBoT9   = 12,    // Thoracic Spine 9 
	SWSBoT8   = 13,    // Thoracic Spine 8 
	SWSBoT7   = 14,    // Thoracic Spine 7 
	SWSBoT6   = 15,    // Thoracic Spine 6 
	SWSBoT5   = 16,    // Thoracic Spine 5 
	SWSBoT4   = 17,    // Thoracic Spine 4 
	SWSBoT3   = 18,    // Thoracic Spine 3 
	SWSBoT2   = 19,    // Thoracic Spine 2 
	SWSBoT1   = 20,    // Thoracic Spine 1 
	SWSBoTh   = 21,    // Thoracic 
	SWRSBoTst = 22,    // Right Transternal 
	SWLSBoTst = 23,    // Left Transternal 
	SWSHeNe   = 24,    // Neck 
	SWSHeCg   = 25,    // Head Center of Gravity 
	SWSHeTo   = 26,    // Top of head 
	SWSHeBa   = 27,    // Back of head 
	SWSHeFr   = 28,    // Front of head 
	SWSHeNo   = 29,    // Nose 
	SWSHeMe   = 30,    // Menton 
	SWRSHeTrg = 31,    // Right Tragion 
	SWLSHeTrg = 32,    // Left Tragion 
	SWRSHeEye = 33,    // Right Eye 
	SWLSHeEye = 34,    // Left Eye 
	SWRSLeTh  = 35,    // Right Thigh 
	SWRSLeLe  = 36,    // Right Leg 
	SWRSFoAn  = 37,    // Right Ankle 
	SWRSFoHe  = 38,    // Right Heel 
	SWRSFoSo  = 39,    // Right Sole 
	SWRSFoTa  = 40,    // Right Metatarsus 
	SWRSFoTo  = 41,    // Right Toes 
	SWRSArCl  = 42,    // Right Clavicular 
	SWRSArSc  = 43,    // Arm(flexion/extention) 
	SWRSArAr  = 44,    // Right Arm 
	SWRSArFAr = 45,    // Right ForeArm 
	SWRSHaCPr = 46,    // Right Center of Prehension 
	SWRSHaThM = 47,    // Right Thumb Metacarpus 
	SWRSHaTh1 = 48,    // Right Thumb 1 
	SWRSHaTh2 = 49,    // Right Thumb 2 
	SWRSHaTh3 = 50,    // Right Thumb 3 
	SWRSHaInM = 51,    // Right Index Metacarpus 
	SWRSHaIn1 = 52,    // Right Index 1 
	SWRSHaIn2 = 53,    // Right Index 2 
	SWRSHaIn3 = 54,    // Right Index 3 
	SWRSHaMiM = 55,    // Right Middle Finger Metacarpus 
	SWRSHaMi1 = 56,    // Right Middle Finger 1 
	SWRSHaMi2 = 57,    // Right Middle Finger 2 
	SWRSHaMi3 = 58,    // Right Middle Finger 3 
	SWRSHaAnM = 59,    // Right Annular Metacarpus 
	SWRSHaAn1 = 60,    // Right Annular 1 
	SWRSHaAn2 = 61,    // Right Annular 2 
	SWRSHaAn3 = 62,    // Right Annular 3 
	SWRSHaAuM = 63,    // Right Auricular Metacarpus 
	SWRSHaAu1 = 64,    // Right Auricular 1 
	SWRSHaAu2 = 65,    // Right Auricular 2 
	SWRSHaAu3 = 66,    // Right Auricular 3 
	SWLSLeTh  = 67,    // Left Thigh 
	SWLSLeLe  = 68,    // Left Leg 
	SWLSFoAn  = 69,    // Left Ankle 
	SWLSFoHe  = 70,    // Left Heel 
	SWLSFoSo  = 71,    // Left Sole 
	SWLSFoTa  = 72,    // Left Metatarsus 
	SWLSFoTo  = 73,    // Left Toes 
	SWLSArCl  = 74,    // Left Clavicular 
	SWLSArSc  = 75,    // Arm(flexion/extention) 
	SWLSArAr  = 76,    // Left Arm 
	SWLSArFAr = 77,    // Left ForeArm 
	SWLSHaCPr = 78,    // Left Center of Prehension 
	SWLSHaThM = 79,    // Left Thumb Metacarpus 
	SWLSHaTh1 = 80,    // Left Thumb 1 
	SWLSHaTh2 = 81,    // Left Thumb 2 
	SWLSHaTh3 = 82,    // Left Thumb 3 
	SWLSHaInM = 83,    // Left Index Metacarpus 
	SWLSHaIn1 = 84,    // Left Index 1 
	SWLSHaIn2 = 85,    // Left Index 2 
	SWLSHaIn3 = 86,    // Left Index 3 
	SWLSHaMiM = 87,    // Left Middle Finger Metacarpus 
	SWLSHaMi1 = 88,    // Left Middle Finger 1 
	SWLSHaMi2 = 89,    // Left Middle Finger 2 
	SWLSHaMi3 = 90,    // Left Middle Finger 3 
	SWLSHaAnM = 91,    // Left Annular Metacarpus 
	SWLSHaAn1 = 92,    // Left Annular 1 
	SWLSHaAn2 = 93,    // Left Annular 2 
	SWLSHaAn3 = 94,    // Left Annular 3 
	SWLSHaAuM = 95,    // Left Auricular Metacarpus 
	SWLSHaAu1 = 96,    // Left Auricular 1 
	SWLSHaAu2 = 97,    // Left Auricular 2 
	SWLSHaAu3 = 98,    // Left Auricular 3 
	
	// Ellipses
	SWEBoBb   = 1000,  // Below Breast 
	SWEBoBu   = 1001,  // Buttock 
	SWEBoCh   = 1002,  // Chest 
	SWEBoCr   = 1003,  // Crotch 
	SWEBoIl   = 1004,  // Iliac 
	SWEBoNe   = 1005,  // Neck 1 
	SWEBoNi   = 1006,  // Natural Indentation 
	SWEBoOm   = 1007,  // Omphalion 
	SWEBoSc   = 1008,  // Scye 
	SWEBoTh   = 1009,  // Thoracic 
	SWEHeCh   = 1010,  // Chin 
	SWEHeEy   = 1011,  // Eyes 
	SWEHeFh   = 1012,  // ForeHead 
	SWEHeGl   = 1013,  // Glabella 
	SWEHeMe   = 1014,  // Menton 
	SWEHeNe   = 1015,  // Neck 2 
	SWEHeNo   = 1016,  // Nose 
	SWEHeSt   = 1017,  // Stomion 
	SWEHeTo   = 1018,  // Top of Head 
	SWLEArAc  = 1019,  // Left Acromial 
	SWLEArAca = 1020,  // Left Acromial bis 
	SWLEArBi  = 1021,  // Left Biceps 
	SWLEArEl  = 1022,  // Left Elbow 
	SWLEArFAr = 1023,  // Left ForeArm 
	SWLEArMSh = 1024,  // Left Mid Shoulder 
	SWLEArSc  = 1025,  // Left Scye 
	SWLEArTh  = 1026,  // Left Thoracic 
	SWLEArWr  = 1027,  // Left Wrist 
	SWLEFoBa  = 1028,  // Left Bool of Foot 
	SWLEFoHAn = 1029,  // Left Heel-Ankle 
	SWLEFoTa  = 1030,  // Left Tarsus 
	SWLEFoTo  = 1031,  // Left Toe 
	SWLEHaAn1 = 1032,  // Left Annular 1 
	SWLEHaAn2 = 1033,  // Left Annular 2 
	SWLEHaAn3 = 1034,  // Left Annular 3 
	SWLEHaAn4 = 1035,  // Left Annular 4 
	SWLEHaAu1 = 1036,  // Left Auricular 1 
	SWLEHaAu2 = 1037,  // Left Auricular 2 
	SWLEHaAu3 = 1038,  // Left Auricular 3 
	SWLEHaAu4 = 1039,  // Left Auricular 4 
	SWLEHaIn1 = 1040,  // Left Index 1 
	SWLEHaIn2 = 1041,  // Left Index 2 
	SWLEHaIn3 = 1042,  // Left Index 3 
	SWLEHaIn4 = 1043,  // Left Index 4 
	SWLEHaMi1 = 1044,  // Left Middle Finger 1 
	SWLEHaMi2 = 1045,  // Left Middle Finger 2 
	SWLEHaMi3 = 1046,  // Left Middle Finger 3 
	SWLEHaMi4 = 1047,  // Left MIddle Finger 4 
	SWLEHaPa  = 1048,  // Left Palm 
	SWLEHaPa1 = 1049,  // Left Palm 1 
	SWLEHaTh0 = 1050,  // Left Thumb 0 
	SWLEHaTh1 = 1051,  // Left Thumb 1 
	SWLEHaTh2 = 1052,  // Left Thumb 2 
	SWLEHaTh3 = 1053,  // Left Thumb 3 
	SWLELeAn  = 1054,  // Left Ankle 
	SWLELeAn2 = 1055,  // Left Ankle 2 
	SWLELeBKn = 1056,  // Left Bottom of Knee 
	SWLELeCa  = 1057,  // Left Calf 
	SWLELeCr  = 1058,  // Left Crotch 
	SWLELeHi  = 1059,  // Left Hip 
	SWLELeKn  = 1060,  // Left Knee 
	SWLELeMTh = 1061,  // Left Mid Thigh 
	SWLELeTKn = 1062,  // Left Top of Knee 
	SWREArAc  = 1063,  // Right Acromial 
	SWREArAca = 1064,  // Right Acromial bis 
	SWREArBi  = 1065,  // Right Biceps 
	SWREArEl  = 1066,  // Right Elbow 
	SWREArFAr = 1067,  // Right ForeArm 
	SWREArMSh = 1068,  // Right Mid Shoulder 
	SWREArSc  = 1069,  // Right Scye 
	SWREArTh  = 1070,  // Right Thoracic 
	SWREArWr  = 1071,  // Right Wrist 
	SWREFoBa  = 1072,  // Right Bool of Foot 
	SWREFoHAn = 1073,  // Right Heel-Ankle 
	SWREFoTa  = 1074,  // Right Tarsus 
	SWREFoTo  = 1075,  // Right Toe 
	SWREHaAn1 = 1076,  // Right Annular 1 
	SWREHaAn2 = 1077,  // Right Annular 2 
	SWREHaAn3 = 1078,  // Right Annular 3 
	SWREHaAn4 = 1079,  // Right Annular 4 
	SWREHaAu1 = 1080,  // Right Auricular 1 
	SWREHaAu2 = 1081,  // Right Auricular 2 
	SWREHaAu3 = 1082,  // Right Auricular 2 
	SWREHaAu4 = 1083,  // Right Auricular 4 
	SWREHaIn1 = 1084,  // Right Index 1 
	SWREHaIn2 = 1085,  // Right Index 2 
	SWREHaIn3 = 1086,  // Right Index 3 
	SWREHaIn4 = 1087,  // Right Index 4 
	SWREHaMi1 = 1088,  // Right Middle Finger 1 
	SWREHaMi2 = 1089,  // Right Middle Finger 2 
	SWREHaMi3 = 1090,  // Right Middle Finger 3 
	SWREHaMi4 = 1091,  // Right MIddle Finger 4 
	SWREHaPa  = 1092,  // Right Palm 
	SWREHaPa1 = 1093,  // Right Palm 1 
	SWREHaTh0 = 1094,  // Right Thumb 0 
	SWREHaTh1 = 1095,  // Right Thumb 1 
	SWREHaTh2 = 1096,  // Right Thumb 2 
	SWREHaTh3 = 1097,  // Right Thumb 3 
	SWRELeAn  = 1098,  // Right Ankle 
	SWRELeAn2 = 1099,  // Right Ankle 2 
	SWRELeBKn = 1100,  // Right Bottom of Knee 
	SWRELeCa  = 1101,  // Right Calf 
	SWRELeCr  = 1102,  // Right Crotch 
	SWRELeHi  = 1103,  // Right Hip 
	SWRELeKn  = 1104,  // Right Knee 
	SWRELeMTh = 1105,  // Right Mid Thigh 
	SWRELeTKn = 1106,  // Right Top of Knee 
	SWEBoNe1  = 1107,  // virtual neck ellipse below the real necl ellipse 

	// Body
	SWBoBo = 2000,

	// Center of gravity
	SWBoCg = 3000,

	// Skin elements
	SWSkBoPh   = 4000, // Phantom 
	SWSkBoTIp  = 4001, // Transpelvic 
	SWRSkBoIlp = 4002, // Right Illio-pelvic 
	SWLSkBoIlp = 4003, // Left Illio-pelvic 
	SWSkBoL5   = 4004, // Lumbar Spine 5 
	SWSkBoL4   = 4005, // Lumbar Spine 4 
	SWSkBoL3   = 4006, // Lumbar Spine 3 
	SWSkBoL2   = 4007, // Lumbar Spine 2 
	SWSkBoL1   = 4008, // Lumbar Spine 1 
	SWSkBoT12  = 4009, // Thoracic Spine 12 
	SWSkBoT11  = 4010, // Thoracic Spine 11 
	SWSkBoT10  = 4011, // Thoracic Spine 10 
	SWSkBoT9   = 4012, // Thoracic Spine 9 
	SWSkBoT8   = 4013, // Thoracic Spine 8 
	SWSkBoT7   = 4014, // Thoracic Spine 7 
	SWSkBoT6   = 4015, // Thoracic Spine 6 
	SWSkBoT5   = 4016, // Thoracic Spine 5 
	SWSkBoT4   = 4017, // Thoracic Spine 4 
	SWSkBoT3   = 4018, // Thoracic Spine 3 
	SWSkBoT2   = 4019, // Thoracic Spine 2 
	SWSkBoT1   = 4020, // Thoracic Spine 1 
	SWSkBoTh   = 4021, // Thoracic 
	SWRSkBoTst = 4022, // Right Transternal  
	SWLSkBoTst = 4023, // Left Transternal 
	SWSkHeNe   = 4024, // Neck 
	SWSkHeCg   = 4025, // Head Center of Gravity 
	SWSkHeTo   = 4026, // Top of head 
	SWSkHeBa   = 4027, // Back of head 
	SWSkHeFr   = 4028, // Front of head 
	SWSkHeNo   = 4029, // Nose 
	SWSkHeMe   = 4030, // Menton 
	SWRSkHeTrg = 4031, // Right Tragion 
	SWLSkHeTrg = 4032, // Left Tragion 
	SWRSkHeEye = 4033, // Right Eye 
	SWLSkHeEye = 4034, // Left Eye 
	SWRSkLeTh  = 4035, // Right Thigh 
	SWRSkLeLe  = 4036, // Right Leg 
	SWRSkFoAn  = 4037, // Right Ankle 
	SWRSkFoHe  = 4038, // Right Heel 
	SWRSkFoSo  = 4039, // Right Sole 
	SWRSkFoTa  = 4040, // Right Metatarsus 
	SWRSkFoTo  = 4041, // Right Toes 
	SWRSkArCl  = 4042, // Right Clavicular 
	SWRSkArSc  = 4043, // Arm(flexion/extention) 
	SWRSkArAr  = 4044, // Right Arm 
	SWRSkArFAr = 4045, // Right ForeArm 
	SWRSkHaCPr = 4046, // Right Center of Prehension 
	SWRSkHaThM = 4047, // Right Thumb Metacarpus 
	SWRSkHaTh1 = 4048, // Right Thumb 1 
	SWRSkHaTh2 = 4049, // Right Thumb 2 
	SWRSkHaTh3 = 4050, // Right Thumb 3 
	SWRSkHaInM = 4051, // Right Index Metacarpus 
	SWRSkHaIn1 = 4052, // Right Index 1 
	SWRSkHaIn2 = 4053, // Right Index 2 
	SWRSkHaIn3 = 4054, // Right Index 3 
	SWRSkHaMiM = 4055, // Right Middle Finger Metacarpus 
	SWRSkHaMi1 = 4056, // Right Middle Finger 1 
	SWRSkHaMi2 = 4057, // Right Middle Finger 2 
	SWRSkHaMi3 = 4058, // Right Middle Finger 3 
	SWRSkHaAnM = 4059, // Right Annular Metacarpus 
	SWRSkHaAn1 = 4060, // Right Annular 1 
	SWRSkHaAn2 = 4061, // Right Annular 2 
	SWRSkHaAn3 = 4062, // Right Annular 3 
	SWRSkHaAuM = 4063, // Right Auricular Metacarpus 
	SWRSkHaAu1 = 4064, // Right Auricular 1 
	SWRSkHaAu2 = 4065, // Right Auricular 2 
	SWRSkHaAu3 = 4066, // Right Auricular 3 
	SWLSkLeTh  = 4067, // Left Thigh 
	SWLSkLeLe  = 4068, // Left Leg 
	SWLSkFoAn  = 4069, // Left Ankle 
	SWLSkFoHe  = 4070, // Left Heel 
	SWLSkFoSo  = 4071, // Left Sole 
	SWLSkFoTa  = 4072, // Left Metatarsus 
	SWLSkFoTo  = 4073, // Left Toes 
	SWLSkArCl  = 4074, // Left Clavicular 
	SWLSkArSc  = 4075, // Arm(flexion/extention) 
	SWLSkArAr  = 4076, // Left Arm 
	SWLSkArFAr = 4077, // Left ForeArm 
	SWLSkHaCPr = 4078, // Left Center of Prehension 
	SWLSkHaThM = 4079, // Left Thumb Metacarpus 
	SWLSkHaTh1 = 4080, // Left Thumb 1 
	SWLSkHaTh2 = 4081, // Left Thumb 2 
	SWLSkHaTh3 = 4082, // Left Thumb 3 
	SWLSkHaInM = 4083, // Left Index Metacarpus 
	SWLSkHaIn1 = 4084, // Left Index 1 
	SWLSkHaIn2 = 4085, // Left Index 2 
	SWLSkHaIn3 = 4086, // Left Index 3 
	SWLSkHaMiM = 4087, // Left Middle Finger Metacarpus 
	SWLSkHaMi1 = 4088, // Left Middle Finger 1 
	SWLSkHaMi2 = 4089, // Left Middle Finger 2 
	SWLSkHaMi3 = 4090, // Left Middle Finger 3 
	SWLSkHaAnM = 4091, // Left Annular Metacarpus 
	SWLSkHaAn1 = 4092, // Left Annular 1 
	SWLSkHaAn2 = 4093, // Left Annular 2 
	SWLSkHaAn3 = 4094, // Left Annular 3 
	SWLSkHaAuM = 4095, // Left Auricular Metacarpus 
	SWLSkHaAu1 = 4096, // Left Auricular 1 
	SWLSkHaAu2 = 4097, // Left Auricular 2 
	SWLSkHaAu3 = 4098, // Left Auricular 3 

	// Lines of sight
	SWLLHeEye = 5000,  // Left line of sight 
	SWMLHeEye = 5001,  // Middle line of sight 
	SWRLHeEye = 5002   // Right line of sight 
};

#define SWFirstSegment     SWSBoPh
#define SWLastSegment      SWLSHaAu3
#define SWFirstEllipse     SWEBoBb
#define SWLastEllipse      SWRELeTKn
#define SWFirstSkinElement SWSkBoPh
#define SWLastSkinElement  SWLSkHaAu3

/**
  * Global function to convert a numerical short name into its string equivalent.
  *
  * @param piShortName The short name to convert.
  *
  * @return The equivalent string. The function returns <code>NULL</code>
  * if the given short name is invalid.
  *
  * @sample
  *  SWConvertShortNameToString(SWLSFoAn) would return the character string "LSFoAn".
  **/
ExportedBySWManikinMod const char * SWConvertShortNameToString(SWShortName piShortName);

/**
  * Global function to convert a string into its equivalent short name.
  *
  * @param piShortNameAsString The string to convert.
  *
  * @return The equivalent short name. The function returns <code>NoShortName</code>
  * if the given string is NULL or does not designate a valid short name.
  *
  * @sample
  *  SWConvertShortNameToString("LSFoAn") would return the short name SWLSFoAn.
  **/
ExportedBySWManikinMod SWShortName SWConvertStringToShortName(const char * piShortNameAsString);

#endif
