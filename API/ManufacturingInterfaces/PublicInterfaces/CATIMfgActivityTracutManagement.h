/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2005
//=============================================================================
#ifndef CATIMfgActivityTracutManagement_H
#define CATIMfgActivityTracutManagement_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

class CATMathTransformation;

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgActivityTracutManagement;
#else
extern "C" const IID IID_CATIMfgActivityTracutManagement;
#endif

 /**   
 * Interface implemented on a Manufacturing Activity for management of Tracut data.
 * <b>Role</b>: If the Manufacturing Activity is inside a Tracut block, this interface allows to retrieve the data to apply on the Manufacturing Activity.
 */

class ExportedByMfgItfEnv CATIMfgActivityTracutManagement : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
 
  /**
   *   Retrieves the transformation to apply to a Manufacturing Activity if this last one is in a Tracut block. 
   *    @param oTracutToDo
   *  <br><b>Legal values</b>:
   *   <ul>
   *   <li> 0 : The Manufacturing Activity is not in a Tracut block.</li>
   *   <li> <> 0 : The Manufacturing Activity is in a Tracut block.</li>
   *   </ul>
   *    @param oTracutTransformation
   *      The Tracut transformation
   **/
  virtual HRESULT GetTracutMatrix (int &oTracutToDo, CATMathTransformation &oTracutTransformation) =0 ;

};

CATDeclareHandler(CATIMfgActivityTracutManagement, CATBaseUnknown);

#endif







