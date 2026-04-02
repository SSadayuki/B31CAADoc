#ifndef CATISamAccess_h
#define CATISamAccess_h
/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATIContainerOfDocument.h"
#include "CATAnalysisInterface.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAccess;
#else
extern "C" const IID IID_CATISamAccess;
#endif

/**
 * Interface to access the containers of an Analysis document.
 * <b>Role</b>: Query this interface on a document to retrieve its containers.<br>
 * If it succeeds you can access the
 * <ul><li>Specification container that implement the CATISamAnalysisContainer Interface 
 *         by using the standard GetSpecContainer method</li>
 *     <li>Field Model container</li>
 *     <li>PostproContainer container</li>
 * </ul>
 * @see CATISamAnalysisContainer, CATAnalysisExplicitModel
 */

class ExportedByCATAnalysisInterface CATISamAccess : public CATIContainerOfDocument
{
	CATDeclareInterface;
	public :

  /**
   * Retrieves the field Model container of the analysis document.<br>
   * This container will the result view of a Finite Element model.
   * @param oContainer [out , CATBaseUnknown#Release]
   * The field Model container. 
   */

	virtual HRESULT GetExplicitContainer(CATIContainer *&oContainer) = 0;
	
  /**
   * Retrieves the PostproContainer container of the document.<br>
   * This container will manage Images (for Finite Element visualization).
   * @param oContainer [out , CATBaseUnknown#Release]
   * The Postprocessing container. 
  */
	
	virtual HRESULT GetPostproContainer(CATIContainer *&oContainer) = 0;

  /**
   * Retrieves the Meshing feature container of the document.<br>
   * This container will manage the meshing specifications.
   * @param oContainer [out , CATBaseUnknown#Release]
   * The Meshingcontainer. 
  */
	
	virtual HRESULT GetMeshingContainer(CATIContainer *&oContainer) = 0;

};

CATDeclareHandler(CATISamAccess,CATIContainerOfDocument);

#endif
