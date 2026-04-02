/* -*-c++-*- */

#ifndef CATIExchangeRepresentation_H
#define CATIExchangeRepresentation_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 03/12/02: ABM: Creation
// 17/03/03: MAX: CAA Documentation 
//
//===================================================================

#include "DataExchangeKernelItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIExchangeInputDocument_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeKernelItfCPP IID IID_CATIExchangeRepresentation;
#else
extern "C" const IID IID_CATIExchangeRepresentation ;
#endif

/**
 * Interface to exchange representations.
 * <b>Role</b>: This is the abstract class for all representations which are the 
 * different sets of information contained in a CAD document,
 * and are different focusses a XCAD exchange operation may have.
 * <br>Available from CATIA V5R11.
 * @see CATIExchangeBoundaryRepresentation, CATIExchangeProductRepresentation, CATIExchangeVisuRepresentation
 */ 
class ExportedByDataExchangeKernelItfCPP CATIExchangeRepresentation: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


/**
 * Retrieves the representation type.
 * @param oRepresentationType
 *				Get the representation type.
 */
	virtual HRESULT GetRepresentationType( CATUnicodeString& oRepresentationType) = 0;

/**
 * Retrieves the owning document.
 * @param oDocument
 *				Get the associated document.
 */	
	virtual HRESULT GetAssociatedDocument( CATIExchangeInputDocument_var& oDocument ) = 0;

};
CATDeclareHandler(CATIExchangeRepresentation,CATBaseUnknown);

#endif
