#ifndef CATISmgNcGeometryManager_H
#define CATISmgNcGeometryManager_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATSmgDefs.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgNcGeometryManager;
#else
extern "C" const IID IID_CATISmgNcGeometryManager ;
#endif

/**
 * Interface to define new nc geometry parameters.
 * <br><b>Role</b>: This interface offers services to create or retrieve a nc geometry parameter
 * to a user feature. This kind of parameter can contain manufacturing geometries or nc geometry features.
 * @see CATISmgNcGeometryParameter
 */

class ExportedBySmgItfEnv CATISmgNcGeometryManager: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Adds a new parameter to a user machining feature or operation.
 * This method should be use when instantiating the user feature.
 * @param iName 
 *    Parameter's name
 *
 * @param iType
 *   Type of nc geometry features allowed.
 *   <br><b>Legal values</b>: Use
 *   <dl>
 *     <dt><tt>SmgAreaType </tt> <dd> to create areas
 *     <dt><tt>SmgEdgeType </tt> <dd> to create edges
 *     <dt><tt>SmgPlaneType</tt> <dd> to create planes
 *     <dt><tt>SmgPointType</tt> <dd> to create points
 *   </dl>
 */
	virtual HRESULT AddNcGeometryParameter(const CATUnicodeString &iName, const CATUnicodeString &iType = SmgAreaType) = 0;

/**
 * Returns the parameter of a manufacturing feature from its name.
 * @param iName 
 *    Parameter's name
 *
 * @param oMAF
 *   Nc geometry parameter
 */
	virtual HRESULT GetNcGeometryParameter(const CATUnicodeString &iName, CATBaseUnknown_var &oMAF) = 0;

};

CATDeclareHandler( CATISmgNcGeometryManager, CATBaseUnknown) ;

#endif
