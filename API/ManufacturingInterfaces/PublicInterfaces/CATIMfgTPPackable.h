/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATIMfgTPPackable : Description interface
//
//=============================================================================
#ifndef CATIMfgTPPackable_H
#define CATIMfgTPPackable_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"

#include "CATBooleanDef.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTPPackable;
#else
extern "C" const IID IID_CATIMfgTPPackable;
#endif

/**
* Interface usefull to transfer points of the tool path in an external file, rather than keeping them
* in the model. The action of transfer in an external file is named Packing. You must unpack the tool path
* to get it again in the document.
* 
* <b>Role</b>: Transfer points of the tool path in an external file.
*/


class ExportedByMfgItfEnv CATIMfgTPPackable : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

/**
*   Tell if the tool path can be packed. A tool path can be packed if it contains one and only one MfgTpMultipleMotion<br>
 *   @param imode
*   <br><b>Legal values</b>:
*   <ul>
*   <li>imode = 0 : tool path cannot be packed</li>
*   <li>imode = 1 : tool path can be packed</li>
*   </ul>
**/
	  virtual CATBoolean IsPackable    		   (int& imode) = 0;

/**
*   Tell if the tool path is packed or not.<br>
*   @param istatut
*   <ul>
*   <li>istatut = 0 : tool path is not packed</li>
*   <li>istatut = 1 : tool path is packed</li>
*   </ul>
**/
	  virtual CATBoolean IsPacked                 (int& istatut) = 0;

/**
*   Pack a tool path.<br>
*   @param iPath
*      Path of the file which will be used for packing.
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE:  packing has succeeded</li>
*   <li>FALSE: packing has failed</li>
*   </ul>
**/
	  virtual CATBoolean PackToolPath             (const CATUnicodeString& iPath) = 0;

/**   Unpack a tool path.<br>
*   @return
*    Return code.
*   <br><b>Legal values</b>:
*   <ul>
*   <li>TRUE:  unpacking has succeeded</li>
*   <li>FALSE: unpacknig has failed</li>
*   </ul>
**/
	  virtual CATBoolean UnpackToolPath           () = 0;
};

CATDeclareHandler(CATIMfgTPPackable, CATBaseUnknown);

#endif







