#ifndef CATIMmiUsePrtPart_h
#define CATIMmiUsePrtPart_h
// COPYRIGHT DASSAULT SYSTEMES 2008
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModLiveUseItf.h"
#include "CATBaseUnknown.h"

class CATIMmiMechanicalFeature_var;
class CATIBasicTool_var;
class CATListValCATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModLiveUseItf IID IID_CATIMmiUsePrtPart;
#else
extern "C" const IID IID_CATIMmiUsePrtPart;
#endif

/**
 * Interface to retrieve information on the MechanicalPart feature.
 * <b>Role</b>: This interface is implemented on the MechanicalPart feature. This feature
 * is named <tt>Part</tt> in the specification tree. With this
 * interface and the @href CATIPartRequest interface you have all the methods to 
 * manage this feature.
 */
class ExportedByCATMecModLiveUseItf CATIMmiUsePrtPart : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Returns the current feature of the MechanicalPart feature.
   * <br><b>Role:</b>This method returns the mechanical feature set by the
   * @href #SetCurrentFeature method, or by the "Define In Work Object" command in an
   * interactive session.
   * @param oInWorkObject
   * The current feature.
   */
  virtual HRESULT GetInWorkObject(CATIMmiMechanicalFeature_var& oInWorkObject) = 0;

  /**
   * Sets the current feature of the MechanicalPart feature.
   * <br><b>Role:</b>This method is equivalent to the "Define In Work Object" command in an
   * interactive session.
   * @param iInWorkObject
   * The current feature.
   */
  virtual HRESULT SetInWorkObject(CATIMmiMechanicalFeature_var iInWorkObject) = 0;

  /**
   * Returns the elected feature of the MechanicalPart feature.
   */
  virtual HRESULT RetrieveElectedFeature(CATIMmiMechanicalFeature_var& oElectedFeature ) = 0;

  /**
   * Returns the relay feature to the elected feature of the MechanicalPart feature.
   */
  virtual  HRESULT RetrieveRelayToElectedFeature(CATIMmiMechanicalFeature_var& oRelay) = 0;

  /**
   * Returns the current set of the MechanicalPart feature.
   * @return 
   *   The current set feature. It can be a Body feature, and Ordered Geometrical Set
   * feature, or a Geometrical Set feature.
   */
  virtual  HRESULT GetInWorkObjectTool(CATIBasicTool_var& oCurrentSet) = 0 ;	

  /**
   * Returns a list containing the reference planes of the MechanicalPart feature.
   * <br><b>Role:</b>The list contains : xy plane, yz plane and zx plane in that order in the list.
   */
  virtual HRESULT RetrieveReferencePlanes(CATListValCATIMmiMechanicalFeature_var& oListOfPlanes )  = 0; 

  /**
   * Returns the list of the imported body features in the MechanicalPart feature.
   */
  virtual HRESULT RetrieveImportedBodies(CATListValCATIMmiMechanicalFeature_var& oImportedBodies) = 0; 


  /**
   * Returns the feature holding the set of default values.
   */
  virtual HRESULT RetrieveDefaultValuesBag(CATBaseUnknown_var& oBag)=0;


  /**
   * Returns the feature containing external references of a contextual part.
   */
  virtual HRESULT RetrieveBodyForExternalReferences(CATIMmiMechanicalFeature_var& oBody) = 0; 

	/**
   * Returns the feature containing isolated external references of a contextual part.
   */
  virtual HRESULT RetrieveBodyForIsolatedExternalReferences(CATIMmiMechanicalFeature_var& oBody) = 0; 

};

CATDeclareHandler(CATIMmiUsePrtPart,CATBaseUnknown);

#endif
