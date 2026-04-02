// COPYRIGHT Dassault Systemes 2002
//===================================================================

#ifndef CATIMfgDOFTable_H
#define CATIMfgDOFTable_H

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATMfgSimulationItfCPP.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgSimulationItfCPP IID IID_CATIMfgDOFTable;
#else
extern "C" const IID IID_CATIMfgDOFTable ;
#endif

//------------------------------------------------------------------

/**
* Interface on Manufacturing Operation or Manufacturing Program to remove DOF data.<br>
*/
class ExportedByCATMfgSimulationItfCPP CATIMfgDOFTable: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
 /**
   *	Remove data in DOF table.
   **/
	virtual HRESULT FlushDOFTable() = 0;
	
};

CATDeclareHandler( CATIMfgDOFTable, CATBaseUnknown) ;

//------------------------------------------------------------------

#endif
