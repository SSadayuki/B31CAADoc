#ifndef CATICciReadCompositesData_H
#define CATICciReadCompositesData_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//==============================================================================
//
// CATICciReadCompositesData :
//   Class defining the operator that performs a core sample
//   in a composites part.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciReadCompositesData (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATICciStacking.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciReadCompositesData;
#else
extern "C" const IID IID_CATICciReadCompositesData;
#endif

class CATDocument;
class CATICciCompositesParameters_var;

/**
 * Interface to read composites data from a document.
 * <ul>
 * <li> XXXXX.
 * <li> Release this interface when it is no longer needed.
 */ 

class ExportedByCAACompositesItf CATICciReadCompositesData : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
	/**
     * Returns the composites parameters.
     * @param iDocument
     *   The document in which to perform the search (CATPart only).
     * @param oParameters
     *   The composites parameters.
     */
    virtual HRESULT GetParameters(CATDocument * iDocument, 
								  CATICciCompositesParameters_var & oParameters) = 0;

    /**
     * Returns the material catalogue used in a given document (CATPart only).
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oMaterialCatalog
     * The material catalogue (full path) used in iDocument.
     */
    virtual HRESULT GetMaterialCatalog(CATDocument * iDocument,
                                       CATUnicodeString & oMaterialCatalog) = 0;

    /**
     * Returns the list of directions available in a given document (CATPart only).
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oListOfDirections
     * The list of directions available in iDocument.
     */
    virtual HRESULT GetDirections(CATDocument * iDocument,
                                  CATListOfDouble & oListOfDirections) = 0;

    /**
     * Returns the groups of zones from a given document (CATPart only).
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oListOfGroups
     * The list of groups of zones (CATICciZonesGroup) in iDocument.
     */
    virtual HRESULT GetGroupsOfZones(CATDocument * iDocument,
                                     CATLISTV(CATBaseUnknown_var)& oListOfGroups) = 0;

    /**
     * Returns the groups of plies from a given document (CATPart only).
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oListOfGroups
     * The list of groups of plies (CATICciPliesGroup) in iDocument.
     */
    virtual HRESULT GetGroupsOfPlies(CATDocument * iDocument,
                                     CATLISTV(CATBaseUnknown_var)& oListOfGroups) = 0;

    /**
     * Returns the sequences directly under the stacking node from a given document (CATPart only).
     * NOTE: Sequences inside groups of plies are NOT returned by this method.
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oListOfSequences
     * The list of sequences (CATICciSequence) directly under the stacking node in iDocument.
     */
    virtual HRESULT GetSequencesUnderStacking(CATDocument * iDocument,
                                              CATLISTV(CATBaseUnknown_var)& oListOfSequences) = 0;

    /**
     * Returns the stacking node of composites spec tree
     * @param iDocument
     * The document in which to perform the search (CATPart only).
     * @param oStacking
     * The stacking node in iDocument.
     */
    virtual HRESULT GetStacking(CATDocument * iDocument,
        CATICciStacking_var &oStacking) = 0;
};

CATDeclareHandler(CATICciReadCompositesData, CATBaseUnknown);

#endif
