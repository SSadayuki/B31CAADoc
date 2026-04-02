/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
#ifndef CATIMfgTPTransformation_H
#define CATIMfgTPTransformation_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "IUnknown.h"
#include "CATIMfgToolPath.h"
#include "CATIMfgToolPathFactory.h"

#include "CATMathTransformation.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPTransformation;
#else
extern "C" const IID IID_CATIMfgTPTransformation;
#endif

/**
* Interface usefull to make transformation on tool path objects.
* <b>Role</b>: Tool path can be transformed wih methods of this interface.
*
* @see CATIMfgTPModification
*/

class ExportedByMfgItfEnv CATIMfgTPTransformation : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Duplicate a tool path.<br>
 *   @param ioToolPath
*      The tool path which will contained the copy of the original tool path.
*   @param iToolPathIsCreated
*      If FALSE, create the component of the tool path.
*   @param iFactory
*      Factory where the toolpath is duplicated. If NULL_var, the used toolpath factory
*      is the toolpath factory of the original toolpath
**/
	  virtual CATBoolean Duplicate (CATIMfgToolPath_var& ioToolPath,const CATBoolean iToolPathIsCreated=FALSE, CATIMfgToolPathFactory_var iFactory=NULL_var) = 0;

/**
*   Reverse a tool path.<br>
**/
	  virtual CATBoolean Reverse () = 0;

/**
*   Split a tool path.<br>
*   When splitting a tool path, the first part will be keeped by the original tool path
*   @param iNumpt
*		 The index of the point used to split the tool path
*   @param oToolPath
*      The tool path which will contained the second part of the original tool path.
**/
	  virtual CATBoolean Split (const int iNumpt,CATIMfgToolPath_var& oToolPath) = 0;

/**
*   Merge two tool pathes.<br>
*   Tool Path  = Tool Path->Merge(iToolPath) is equivalent to 
*   Tool Path  = Tool Path + iToolPath
*   @param iToolPath
*      The tool path what will be merged.
**/
	  virtual CATBoolean Merge (const CATIMfgToolPath_var& iToolPath) = 0;

/**
*   Transform a tool path with a given transformation.<br>
*   @param iTransfo
*		 the transformation to apply to the tool path
*   @param iTransformToolAxis
*      The tool axis will also be transformed.
**/
	  virtual HRESULT Transform (CATMathTransformation *iTransfo,const CATBoolean iTransformToolAxis = FALSE) = 0;

/**
* @nodoc
*/     
     virtual CATBoolean DeleteDatas                   () = 0;
};

CATDeclareHandler(CATIMfgTPTransformation, CATBaseUnknown);

#endif







