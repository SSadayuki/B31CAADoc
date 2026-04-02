// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATISamGenMeshPartMgt.h
// Define the CATISamGenMeshPartMgt interface
//
//===================================================================
#ifndef CATISamGenMeshPartMgt_H
#define CATISamGenMeshPartMgt_H
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
#include "CATAnalysisInterface.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATBaseUnknown.h"

class CATAnalysisExplicitNode;
class CATMSHNode;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamGenMeshPartMgt ;
#else
extern "C" const IID IID_CATISamGenMeshPartMgt ;
#endif

//------------------------------------------------------------------

/**
 * Associate MeshPart(s) to connection or virtual parts.
 * This interface is dedicated to manage Mesh Parts that will be 
 * generated and removed thanks to implementing entity.
 * Your property needs to be derived from SAMVirtualPart (to extend the virtual part concept) 
 * or SAMConnection (to extend the conection properties concept).
 */

class ExportedByCATAnalysisInterface CATISamGenMeshPartMgt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Defines the feature type of the MeshPart to create.
 * @param iMshPartType: Feature type of the MeshPart to create under the form : oStartUpName@oCatalogName?oClientId (For User defined Startups).
 * This methode needs to be called on the startup for the feature catalog definition.
 */
  virtual HRESULT SetMeshPartType(const	CATUnicodeString & iMshPartType) =0 ;

/**
 * Return feature type of the MeshPart to create.
 * @param MshPartType: Feature type of the MeshPart to create under the form : MeshPartLT@CatalogName?ClientId if withCatalogName is true, else it will be of type MeshPartLT only
 */
	virtual HRESULT GetMshPartType(	CATUnicodeString &MshPartType, CATBoolean withCatalogName = FALSE) =0;

/**
 * Generate Associated mesh parts if needed.
 * Should not be used. Called at the initialization of the analysis entity.
 */
	virtual HRESULT GenerateMeshPart() =0;

/**
 * Return the List of generated mesh parts.
 * It means that the creation of the entity may imply the creation of a mesh part.
 * @param oMeshParts: list of generated Mesh Parts.
 * @param iCreate: Allows the automatic creation.
  */
	virtual HRESULT GetGeneratedMeshParts(CATLISTV(CATISpecObject_var)& oMeshParts,CATBoolean iCreate=TRUE) =0;

/**
 * Return Master Node of the Mesh Part.
 * @param oMSHNode: Master Node.
 */
	virtual HRESULT GetHandler(CATMSHNode* & oMSHNode) =0;

/**
 * Return Explicit Master Node of the Mesh Part.
 * @param oExplicitNode: Explicit Master Node.
 */
	virtual HRESULT GetExplicitHandler(CATAnalysisExplicitNode & oExplicitNode) =0;

/**
 * Associates a pre-existing mesh part to the connection.
 * <font color="red">Should not be used directely.</font> This function is only usefull for 
 * synchronization with an existing meshpart.
 */
	virtual HRESULT SetMeshPart(CATISpecObject* iMeshPart) =0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamGenMeshPartMgt, CATBaseUnknown );

#endif
