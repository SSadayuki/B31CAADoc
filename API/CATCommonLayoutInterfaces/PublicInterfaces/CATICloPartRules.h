#ifndef CATICloPartRules_H
#define CATICloPartRules_H

//	COPYRIGHT DASSAULT SYSTEMES 2010
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// CATArrangementInterfaces
#include "CATRouSectionTypes.h"

// System
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"

class CATIUnknownList;
class CATUnicodeString;
class IUnknown;

extern "C" const IID IID_CATICloPartRules ;

//------------------------------------------------------------------

/**
 * Interface to get the function types required to place parts.
 * <b>Role</b>: Equipment and Systems applications are used to layout 3D AEC designs. 
 * Fluid flow routes are defined using runs. Further detail is provided by adding
 * parts to runs. Part placement APIs need function type information of the
 * part being placed. This interface give the function type information.
 */

class CATICloPartRules: public IUnknown
{
  public:

 //----------------------------------------------------------------------
 // GetPartFunctions
 //----------------------------------------------------------------------
 /**
  * <dl>
  * <dt><b>GetPartFunctions:</b>
  * <pre>
  * Get function types for a given physical part.
  *   @param ipiReferencePart [in]
  *      Physical part reference.  The part type is extracted from the part.
  *   @param iuStandard [in]
  *      Standard for application attribute values.  Must not be empty string.
  *   @param iuSpecName [in]
  *      Specification name
  *   @param iuNominalSize [in]
  *      Nominal size
  *   @param oListFunctions [out]
  *      Returned list of function types this part is mapped to
  *   @param iSectionTypes [in]
  *      For HVAC parts, list of section types.  See CATRouSectionTypes.h for values.
  *      For HVAC transition parts with different shapes, include unique section types.
  *   @param ipiListParms [in]
  *      For HVAC parts.  List of CATICkeParms defining the section dimensions
  *      For rectangular section provide height and width.
  *      For round sections provide diameter
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>Function type(s) found</dd>
  *     <dt>E_INVALIDARG</dt>
  *     <dd>Invalid input argument</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>CATReturnError may be returned.  See Usage notes on how to handle CATReturnError</dd>
  *   </dl>
  * </pre>
  * </dl>
  */

    virtual HRESULT GetPartFunctions( const IUnknown* ipiReferencePart,
                                      const CATUnicodeString& iuStandard,
                                      const CATUnicodeString& iuSpecName, 
                                      const CATUnicodeString& iuNominalSize,
                                      CATListOfCATUnicodeString& oListFunctions,
                                      const CATListOfInt& iSectionTypes,
                                      const CATIUnknownList* ipiListParms = NULL ) = 0;
  
};

#endif
