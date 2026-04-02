// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

//===================================================================
//
// Usage notes:
//   Interface used to customize PartNumber : Open files.
//
//===================================================================

#ifndef CATICustomName_H
#define CATICustomName_H

#include "AS0STARTUP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

extern ExportedByAS0STARTUP IID IID_CATICustomName ;

//------------------------------------------------------------------

/**
 * Interface used as a client-specific user exit to customize PartNumber. 
 */
class ExportedByAS0STARTUP CATICustomName: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  	  /** Computes the part number and file extension from the current path.
	    * @param iCurrentPath
		*     The file storage path.
		* @param oPartNumber
		*     The computed part number.
		* @param oExtension
		*     The computed file extension.
	    *
		*/
	  virtual HRESULT ComputePartNumber(  const CATUnicodeString& iCurrentPath
										, CATUnicodeString& oPartNumber
										, CATUnicodeString& oExtension) = 0;
  

};

//------------------------------------------------------------------

CATDeclareHandler( CATICustomName, CATBaseUnknown );

#endif
