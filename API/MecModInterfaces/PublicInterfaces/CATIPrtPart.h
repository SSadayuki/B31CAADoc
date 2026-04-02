#ifndef CATIPrtPart_h
#define CATIPrtPart_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

class CATISpecAttribute_var;
class CATISpecObject_var;
class CATIMechanicalTool_var;
#include "CATIBasicTool.h"
class CATBody_var;
class CATListValCATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIPrtPart;
#else
extern "C" const IID IID_CATIPrtPart;
#endif

/**
 * Interface to retrieve information on the MechanicalPart feature.
 * <b>Role</b>: This interface is implemented on the MechanicalPart feature. This feature
 * is named <tt>Part</tt> in the specification tree. With this
 * interface and the @href CATIPartRequest interface you have all the methods to
 * manage this feature.
 */
class ExportedByMecModItfCPP CATIPrtPart : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * @nodoc
   * Returns the topological result of the main body.
   * <br><b>Role:</b>This method returns the topological object 
   * associated with the main body of the Part document. The main body is  
   * the MechanicalTool named PartBody in the specification tree. 
   * <br>You retrieve the same <tt>CATBody</tt> with the following calls:
   * <ul>
   * <li>Retrieve the main body thanks to  @href CATIPartRequest#GetMainBody </li>
   * <li>Retrieve its resulting feature thanks to  @href CATIBodyRequest#GetResults </li>
   * <li>Retrieve the body of the resulting feature thanks to  
   * @href CATIGeometricalElement#GetBodyResult </li>
   * </ul>
   */
  virtual CATBody_var GetSolid() = 0;

  /**
   * Returns the current feature of the MechanicalPart feature.
   * <br><b>Role:</b>This method returns the mechanical feature set by the
   * @href #SetCurrentFeature method, or by the "Define In Work Object" command in an
   * interactive session.
   */
  virtual CATISpecObject_var GetCurrentFeature() = 0;

  /**
   * Sets the current feature of the MechanicalPart feature.
   * <br><b>Role:</b>This method is equivalent to the "Define In Work Object" command in an
   * interactive session.
   * @param iCurrent
   * The current feature.
   */
  virtual void SetCurrentFeature(CATISpecObject_var iCurrent) = 0;

  /**
   * Returns the elected feature of the MechanicalPart feature.
   */
  virtual CATISpecObject_var GetElectedFeature() = 0;

  /**
   * Returns the relay feature to the elected feature of the MechanicalPart feature.
   */
  virtual CATISpecObject_var GetRelayToElectedFeature() = 0;


  /**
   * @nodoc
   * Returns the main body feature of the MechanicalPart feature.
   */
  virtual CATIBasicTool_var GetMainTool() = 0;

  /**
   * Returns the current set of the MechanicalPart feature.
   * @return 
   *   The current set feature. It can be a Body feature, and Ordered Geometrical Set
   * feature, or a Geometrical Set feature.
   */
  virtual CATIBasicTool_var GetCurrentTool() = 0 ;	

  /**
   * Returns a list containing the reference planes of the MechanicalPart feature.
   * <br><b>Role:</b>The list contains : xy plane, yz plane and zx plane in that order in the list.
   */
  virtual CATListValCATISpecObject_var GetReferencePlanes()  = 0; 

    /**
   * @nodoc
   * Returns the feature holding the result of the main body.
   * <br><b>Role:</b>This method returns the resulting feature  
   * associated with the main body of the Part document. The main body is  
   * the MechanicalTool named PartBody in the specification tree. 
   * <br>You retrieve also this feature with the following calls:
   * <ul>
   * <li>Retrieve the main body thanks to  @href CATIPartRequest#GetMainBody </li>
   * <li>Retrieve its resulting feature thanks to  @href CATIBodyRequest#GetResults </li>
   * </ul>
   */
  virtual CATISpecObject_var GetFeatureSolid() =0;

  /**
   * Returns the product associated with the MechanicalPart feature.
   * <br><b>Role:</b>This ASMProduct feature represents the reference of all 
   * the instantiations of the Part in the Product documents. You can handle it
   * with the <tt>CATIProduct</tt> interface. It enables you to make 
   * the publication. 
   * <p>Each instantiation of this ASMProduct feature in a Product document holds
   * the position of the Part inside the Product. Refer to the <tt>CATIMovable</tt>
   * interface.</p>
   */
  virtual CATISpecObject_var GetProduct()=0;	

  /**
   * @nodoc
   * Returns the list of non operated body features of the MechanicalPart feature.
   */
  virtual CATListValCATISpecObject_var GetIndependentTools() = 0 ;

  /**
   * Returns the list of the imported body features in the MechanicalPart feature.
   */
  virtual CATListValCATISpecObject_var GetImportedBodies() = 0; 

  /**
   * @nodoc
   * Returns the list of the leaf features of the MechanicalPart feature.
   * <br>A leaf feature is a feature that is not used as input for another feature.
   */
  virtual CATListValCATISpecObject_var GetLeafFeatures() = 0 ; 

  /**
   * Returns the feature holding the set of default values.
   */
  virtual CATISpecObject_var GetDefaultValuesBag()=0;

  /**
   * @nodoc
   * Returns the feature holding the MechanicalPart properties (mass, wet area, center of gravity...).
   */
  virtual CATISpecObject_var GetMechanicalPartPropertiesObject()=0;  

  /**
   * Returns the feature containing external references of a contextual part.
   */
  virtual CATISpecObject_var GetBodyForExternalReferences() = 0; 

  /**
   * @nodoc
   * Returns the body feature containing isolated external references of a contextual part.
   */
  virtual CATISpecObject_var GetBodyForIsolatedExternalReferences() = 0; 

};

CATDeclareHandler(CATIPrtPart,CATBaseUnknown);

#endif
