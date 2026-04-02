// COPYRIGHT Dassault Systemes 2000
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
//
// CATIParmProvider.h
// Define the CATIParmProvider interface
// interface specifique surcharge de comportement en presence extension
// modele
//
//===================================================================

#ifndef CATIParmProvider_H
#define CATIParmProvider_H

#include "AD0XXBAS.h"
#include "CATBaseUnknown.h"

class CATListValCATBaseUnknown_var;

extern ExportedByAD0XXBAS IID IID_CATIParmProvider ;

/**
 * Interface used to retrieve the parameters aggregated by an extended object.
 * <br><b>See also: </b>CATIParmPublisher interface in LiteralFeatures framework.
 */

class ExportedByAD0XXBAS CATIParmProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Returns the list of the parameters aggregated by a product's extension.   
	 * @param intfName
	 *        The interface name.
	 * @param oList
	 *        The list of the direct children of the given object.
	 * @param iObj
	 *        The extended object whose direct children are to be retrieved.
     */
	virtual HRESULT GetDirectChildren(CATClassId intfName, CATListValCATBaseUnknown_var* oList,CATBaseUnknown* iObj)=0;
  
};

//------------------------------------------------------------------

#endif
