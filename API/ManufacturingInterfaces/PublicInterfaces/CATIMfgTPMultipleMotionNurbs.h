/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================
#ifndef CATIMfgTPMultipleMotionNurbs_H
#define CATIMfgTPMultipleMotionNurbs_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATIMfgTPNurbsDescription.h"

#include "CATBooleanDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPMultipleMotionNurbs;
#else
extern "C" const IID IID_CATIMfgTPMultipleMotionNurbs;
#endif

/**
* Interface dedicated to the management of the link between a CATIMfgTPMultipleMotion object
* and a CATIMfgTPNurbsDescription object.
* <b>Role</b>: This interface offers services to read, set and unset the nurbs description object on a MfgTPMultipleMotion object.<br>
*
* @see CATIMfgTPMultipleMotion, CATIMfgTPNurbsDescription
*/
class ExportedByMfgItfEnv CATIMfgTPMultipleMotionNurbs : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :
/**
*     Retrieves the object describing nurbs data.
*   @param oNurbsDescription
* 	   The object describing nurbs data
*/  
      virtual CATBoolean GetNurbsDescription	   (      CATIMfgTPNurbsDescription_var& oNurbsDescription) = 0;

/**
* @nodoc
*/ 
	  virtual CATBoolean UnsetNurbsDescription	   () = 0;

/**
* @nodoc
*/ 
      virtual CATBoolean SetNurbsDescription	   (const CATIMfgTPNurbsDescription_var& iNurbsDescription) = 0;
};

CATDeclareHandler(CATIMfgTPMultipleMotionNurbs, CATBaseUnknown);

#endif







