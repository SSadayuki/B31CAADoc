// COPYRIGHT Dassault Systemes 2005
//===================================================================
#ifndef CATIMfgMIKCE3OriginMgt_H
#define CATIMfgMIKCE3OriginMgt_H

/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */

#include "CATMfgSimulationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgMIKCE3OriginMgt;
#else
extern "C" const IID IID_CATIMfgMIKCE3OriginMgt ;
#endif

//------------------------------------------------------------------

/**
 * Interface to implement on the Manufacturing Program for ISO file simulation.
* <br><b>Role</b>: The rule of this interface is to return the list of ISO code for workpiece
 * position management for ISO file simulation.
 */
class ExportedByCATMfgSimulationItfCPP CATIMfgMIKCE3OriginMgt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Returns the list of ISO code for workpiece position management.
	 *   @param iFileName
	 *      The path and the name of the controller emulator identifying the machine
	 *   @param oListOfISOCode
	 *      The list of ISO code for workpiece position management
	 *   @param oListOfISOIndex
	 *      The list of index associated to each ISO code
     */
	  virtual HRESULT MIKGetListOfISOSyntax(const CATUnicodeString&             iFileName,
											      CATListValCATUnicodeString&   oListOfISOCode,
												  CATListOfInt&                 oListOfISOIndex) = 0;
};

CATDeclareHandler( CATIMfgMIKCE3OriginMgt, CATBaseUnknown) ;
//------------------------------------------------------------------

#endif
