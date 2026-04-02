#ifndef CATIMfgCopy_H
#define CATIMfgCopy_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgCopy;
#else
extern "C" const IID IID_CATIMfgCopy;
#endif

/**   
 * Interface dedicated to copy an object through Cut/Copy/Paste mechanism.
 * <b>Role</b>: To be completed<br>
 */

class ExportedByMfgItfEnv CATIMfgCopy : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
  /**
   * Copy.
   * @param oDuplicatedElement
   *  copied element
   * @param iTargetContainer
   *  targetted container : optional
   **/
  virtual HRESULT Copy(CATBaseUnknown_var & oDuplicatedElement, 
                       const CATBaseUnknown_var &iTargetContainer=NULL_var)=0;

  /**
   * Copy.
   * @param oExtractedElements
   *  extracted elements from boundary
   * @param oDuplicatedElements
   *  copied elements
   * @param iTargetContainer
   *  targetted container : optional
   **/

  virtual HRESULT Copy(CATListValCATBaseUnknown_var & oExtractedElements, 
                       CATListValCATBaseUnknown_var & oDuplicatedElements, 
                       const CATBaseUnknown_var &iTargetContainer=NULL_var)=0;

  /**
   * CopyFromList.
   * @param ToBeDuplicatedElements
   *  elements to duplicate
   * @param ouplicatedElements
   *  copied elements
   * @param iTargetContainer
   *  targetted container : optional
   **/
  virtual HRESULT CopyFromList(CATListValCATBaseUnknown_var & ToBeDuplicatedElements, 
                               CATListValCATBaseUnknown_var & DuplicatedElements, 
                               const CATBaseUnknown_var & iTargetContainer=NULL_var)=0;
};

CATDeclareHandler(CATIMfgCopy, CATBaseUnknown);

#endif
