/* -*-c++-*- */
#ifndef CATIGSMUseNewPolyhedralFactory_H
#define CATIGSMUseNewPolyhedralFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#include "CATGSMUseItfExportedBy.h"
#include "CATICkeParm.h"
#include "CATIGSMUseNewTessellate.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseNewPolyhedralFactory;
#else
extern "C" const IID IID_CATIGSMUseNewPolyhedralFactory;
#endif

/**
* Factory of polyhedral tessellated elements.
* <b>Role</b>: Creation of a feature Tessellate.
* <br> Retrieves a CATIGSMUseNewPolyhedralFactory interface pointer to the Part container CATPrtContainer.
* <br> the Part Container, CATPrtContainer, which is the root container of the Part document, implements CATIGSMUseNewPolyhedralFactory. 
*/
class ExportedByCATGSMUseItf CATIGSMUseNewPolyhedralFactory : public CATBaseUnknown
{
	CATDeclareInterface;

public: 

	/**
	* Creates a tessellate feature.
	* <br><b>Role:</b>This method creates a tessellate feature.
	*   @param ospTessellate
	*      The new tessellate feature.
	*/
	virtual HRESULT CreateTessellateFeature(
		CATIGSMUseNewTessellate_var & ospTessellate) const = 0;

};
CATDeclareHandler (CATIGSMUseNewPolyhedralFactory, CATBaseUnknown);
#endif // CATIGSMUseNewPolyhedralFactory_H


