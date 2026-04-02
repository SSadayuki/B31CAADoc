//=============================================================================
// COPYRIGHT Dassault Systemes 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// Usage Notes: Definition of CATSamModelRootMacro class
//
//=============================================================================
#ifndef CATSamModelRootMacro_H_
#define CATSamModelRootMacro_H_

#define CATSamModelRootNULL 0x00000000

#define	Handler(ClassName)  CATSamModelRootHandler_##ClassName
#define	CATSamModelClassType(ClassName)  CATSamModelClassType_##ClassName
#define	CATSamModelClassTypeString(iClassType)  CATSamModelClassTypeString[iClassType]

#endif 


