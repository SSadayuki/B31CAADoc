// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATISamAnalysisConnectionDesign.h
// Define the CATISamAnalysisConnectionDesign interface
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
// Usage notes:
// Interface designed to manage AnalysisDesignConnection :
// the Analysis Entity designed for Analysis Connection
//
//===================================================================
#ifndef CATISamAnalysisConnectionDesign_H
#define CATISamAnalysisConnectionDesign_H

// CATAnalysisInterfaces Prereq
#include "CATAnalysisInterface.h"

// System Prereq
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisConnectionDesign;
#else
extern "C" const IID IID_CATISamAnalysisConnectionDesign ;
#endif


//------------------------------------------------------------------

/** 
 * Interface to manage "AnalysisDesignConnection".
 * <b>Role</b>:
 * This interface allows to 
 * <ul><li> retrieve the two list of supports defined on the Analysis Connection</li></ul>
*/

class ExportedByCATAnalysisInterface CATISamAnalysisConnectionDesign: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
    
/**
 * Retrieve Analysis Connection Supports.
 * @param oConnectorList1  Connectors list associated to the First Component of the connection
 * @param oMeshPartList1   Retrieves the list of Mesh Parts defined on the First Component of the connection
 * @param oConnectorList2  Connectors list associated to the Second Component of the connection
 * @param oMeshPartList2   Retrieves the list of Mesh Parts defined on the Second Component of the connection 
*/
    virtual HRESULT GetConnectionDesigners(CATLISTV(CATBaseUnknown_var) &oConnectorList1,
                                           CATLISTV(CATISpecObject_var) * &oMeshPartList1,
                                           CATLISTV(CATBaseUnknown_var) &oConnectorList2,
                                           CATLISTV(CATISpecObject_var) * &oMeshPartList2 ) = 0; 


/**
 * Retrieve Analysis Connection Supports.
 * @param oConnectorList1  Connectors list associated to the First Component of the connection
 * @param oConnectorList2  Connectors list associated to the Second Component of the connection
 */
    virtual HRESULT GetConnectedSupports(CATLISTV(CATBaseUnknown_var) &oConnectorList1,
                                         CATLISTV(CATBaseUnknown_var) &oConnectorList2) = 0; 
};

//------------------------------------------------------------------
CATDeclareHandler(CATISamAnalysisConnectionDesign,CATBaseUnknown);

#endif
