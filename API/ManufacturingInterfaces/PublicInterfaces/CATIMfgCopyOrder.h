/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
//
// CATIMfgCopyOrder :
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Feb. 02   Creation                                  NNU
// Mars. 03   Ajout de methodes                        PFE
//=============================================================================
#ifndef CATIMfgCopyOrder_H
#define CATIMfgCopyOrder_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2002
//=============================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U0
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h" 

#include "CATUnicodeString.h"
#include "CATMathTransformation.h"
#include "CATBoolean.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCopyOrder;
#else
extern "C" const IID IID_CATIMfgCopyOrder;
#endif

/**   
 * Interface dedicated to manufacturing Copy Transformation data acces.
 * <b>Role</b>: This interface offers services mainly to read stored data in the Copy Transformation Manufacturing Activity <br>
 */


class ExportedByMfgItfEnv CATIMfgCopyOrder : public CATBaseUnknown
{
  CATDeclareInterface ;  

public:

  /**
    * Return the list of reference MO pointed by the Copy Transformation.
    * The returned list could be empty, if 
    *    reference have been destroyed
    *    or reference is a tool path.
    * The retruned list have to be deleted by caller.
    */
  virtual CATListValCATBaseUnknown_var * GetListOfRefMOs()=0;

  /**
    * Read number of copies and strategy of copy
    * @param oNbCopy
    *   the number of copies
    * @param oPriority
    *   the copy strategy
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>0 : loop on MO List then on transformation occurence</li>
    *   <li>1 : loop on transformation occurence then on MO List</li>
    *   </ul>
    */
  virtual HRESULT GetCopyInfo(int & oNbCopy, int & oPriority)=0;

  /**
    * Return the transformation matrix of the CopyTransformation.
    * @param oToolAxisTransformationMode
    *   Tool axis transformation needed
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>TRUE : The Tool Axis needs to be transformed</li>
    *   <li>FALSE : The Tool Axis does not need to be transformed</li>
    *   </ul>
    */
  virtual CATMathTransformation * GetCopyTransformation(CATBoolean & oToolAxisTransformationMode)=0;

  /**
    * Extract Sub Tool Pathes and give a related MOs to find relative data for each.
    * The two list must have the same size to be correctly managed.
    * List are allocated/Deallocated by caller. List initial content is preserved.
    * @param ihBU
    *   the entry point
    *   <br><b>Legal values</b>:
    *   <ul>
    *   <li>NULL_var : Current Copy Transformation used</li>
    *   <li>Other : Element used as starting point to porceed </li>
    *   </ul>
    * @param oBUListTLP
    *   the ordered list of sub tool path
    * @param oBUListMO
    *   the ordered list of corresponding Machining Operations
    */
  virtual   HRESULT ExtractTLPChain (CATBaseUnknown_var & ihBU,CATListValCATBaseUnknown_var * oBUListTLP, CATListValCATBaseUnknown_var * oBUListMO)=0;


};

CATDeclareHandler(CATIMfgCopyOrder, CATBaseUnknown) ;
#endif

