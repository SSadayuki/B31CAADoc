//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================

#ifndef CATIMfgMachiningFeatureFactory_H
#define CATIMfgMachiningFeatureFactory_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATILinkableObject_var;
class CATISpecObject_var;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgMachiningFeatureFactory;
#else
extern "C" const IID IID_CATIMfgMachiningFeatureFactory;
#endif

/**   
 * Interface dedicated to machining features factory.
 * <b>Role</b>: This interface is used to create new Manufacturing Features. <br>
 */

class ExportedByMfgItfEnv CATIMfgMachiningFeatureFactory : public CATBaseUnknown
{
  CATDeclareInterface ;
  
  public :

  /**
   * Creates a new Manufacturing Direction.
   * @param oDirection  The newly created Manufacturing Direction
   * @param iDirectionMode The type of direction to be created. By default, it is set to Manual.
   *   <br><b>Legal values</b>: The tool axis mode may be
   *   <dl>
   *     <dt><tt>NormalBottom </tt>      
   *     <dt><tt>Selection  </tt>     
   *     <dt><tt>NormalView</tt>   
   *     <dt><tt>2Rotations</tt> 
   *     <dt><tt>Manual</tt>    
   *     <dt><tt>Axis</tt>    
   *     <dt><tt>PtView</tt>    
   *   </dl>
   */
  virtual HRESULT CreateMfgDirection (CATBaseUnknown_var& oDirection, const CATUnicodeString& iDirectionMode = "") const = 0 ;

  /**
   * Creates a new Manufacturing Tool Axis.
   * @param oToolAxis  The newly created Tool Axis.
   * @param iDirectionMode The type of direction to be created. By default, it is set to Manual.
   *   <br><b>Legal values</b>: The tool axis mode may be
   *   <dl>
   *     <dt><tt>NormalBottom </tt>      
   *     <dt><tt>Selection  </tt>     
   *     <dt><tt>NormalView</tt>   
   *     <dt><tt>2Rotations</tt> 
   *     <dt><tt>Manual</tt>    
   *     <dt><tt>Axis</tt>    
   *     <dt><tt>PtView</tt>    
   *   </dl>
   */
  virtual HRESULT CreateMfgToolAxis (CATBaseUnknown_var& oToolAxis, const CATUnicodeString& iDirectionMode = "")  const = 0 ;

  /**
   * Creates a new Manufacturing View.
   * @param oMfgView  The newly created Manufacturing View.
   */
  virtual HRESULT CreateMfgView (CATBaseUnknown_var& oMfgView) const = 0 ;


  /**
   * Creates a new Activity Compensation .
   * @param oActivityCompensation  The newly created Activity Compensation.
   */
  virtual HRESULT CreateMfgActivityCompensation (CATBaseUnknown_var& oActivityCompensation) const = 0 ;

  /**
   * Creates a new Manufacturing Prismatic feature.
   *  @param oPrismaticFeature
   *        The newly created Manufacturing Prismatic feature.
   *  @param iMfgFather
   *        Feature to which is agregated oPrismaticFeature by @href CATIMfgAgregate#AddElement
   *  @param iType
   *        Type of the feature to create 
   *    <br>For example, MfgHole, MfgPocket, Mfg2DRAFeature, Mfg2DMAFeature.
   *  @param iNotify
   *        To indicate whether an event is sent. 
   * <br><b>Legal values</b>:
   *        <ul><li> 1 : an event is sent to notify the change. This is the default value.</li>
   *            <li> other value : no event sent</li>
   *        </ul>
   *
   * @see CATIMfgAgregate
   */

  virtual HRESULT CreatePrismaticFeature (CATBaseUnknown_var& oPrismaticFeature,
                                          const CATBaseUnknown_var &iMfgFather,
                                          CATUnicodeString& iType,
                                          int iNotify = 1) const = 0 ;

  /**
   * Creates a new Manufacturing Geometry.
   * @param oManufacturingGeometry
   *        The newly created Manufacturing Geometry.
   * @param iGeometry
   *        Geometry pointed by the Manufacturing Geometry.
   * @param iProduct
   *        Product containing the geometry.
   * @param iStyle
   *	    Style of the created geometry.    
   * <br><b>Legal values</b>:
   *        <ul><li> 0 : standard geometry. This is the default value. </li>
   *            <li> 1 : light geometry.    </li>
   *            <li> 2 : oriented geometry. </li>
   *            <li> 3 : full geometry.     </li>
   *            <li> 4 : lathe geometry.    </li>
   *        </ul>
   */
  virtual HRESULT CreateGeometry (CATBaseUnknown_var& oManufacturingGeometry,
                                  const CATILinkableObject_var &iGeometry,
                                  const CATBaseUnknown_var &iProduct = NULL_var,
                                  const int iStyle = 0) const = 0 ;

  /**
   * Creates a new Manufacturing Pattern Site.
   *   @param oPatternSite
   *     The newly created Manufacturing Pattern Site
   *   @param iPosition
   *	 Position (ie Point or Design Pattern) pointed by the Manufacturing Pattern Site    
   *   @param iProduct
   *        Product containing the geometry.
   */
  virtual HRESULT CreatePatternSite (CATBaseUnknown_var& oPatternSite,
                                     const CATILinkableObject_var &iPosition,
                                     const CATBaseUnknown_var &iProduct = NULL_var) const = 0 ;

  /**
   * Creates a new PointToPoint Site.
   *   @param oPointToPointSite
   *    The newly created Manufacturing Pattern Site
   *   @param iPosition
   *	Position (ie Point or Design Sketch) pointed by the PointToPoint Site  
   *   @param iProduct
   *        Product containing the geometry.
   */
  virtual HRESULT CreatePointToPointSite (CATBaseUnknown_var& oPointToPointSite,
                                          const CATILinkableObject_var &iPosition,
                                          const CATBaseUnknown_var &iProduct = NULL_var) const = 0 ;

  /**
   * Creates a Connector.   
   * @param oConnector The newly created Connector
   * @param iGeometry
   *	Geometry pointed by the Connector    
   * @param iProduct
   *	 Product containing the geometry    
   *
   * @see CATIConnector
   */
  virtual HRESULT CreateConnector (CATBaseUnknown_var& oConnector,
                                   const CATILinkableObject_var &iGeometry,
                                   const CATISpecObject_var &iProduct) const = 0 ;

  /**
   * Creates a TriConnector.    
   * @param oTriConnector
   *    The newly created Connector
   * @param iGeometry
   *	Geometry pointed by the Connector    
   * @param iProduct
   *	Product containing the geometry    
   * @param iListBodies
   *	List of bodies in which the geometry can be found    
   *
   * @see CATIConnector
   */
  virtual HRESULT CreateTriConnector ( CATBaseUnknown_var& oTriConnector,
                                       const CATILinkableObject_var& iGeometry,
                                       const CATBaseUnknown_var& iProduct,
                                       const CATListValCATBaseUnknown_var& iListBodies) = 0;

  /**
   * Creates a new Manufacturing Design.
   * @param oManufacturingDesign The newly created Manufacturing Design
   **/
  virtual HRESULT CreateMfgDesign (CATBaseUnknown_var& oManufacturingDesign) const = 0 ;

  /**
   * Creates a new Manufacturing island.
   * @param oIsland The newly created Manufacturing Island
   */
  virtual HRESULT CreateMfgIsland (CATBaseUnknown_var& oIsland) const = 0 ;

  /**
   * Creates a new Manufacturing Mapping Feature.
   * @param oMappingFeature
   *    The newly created Manufacturing Mapping Feature
   * @param iDesignFeature
   *	Design feature to be mapped 
   * @param iProduct
   *	Product containing the design feature     
   */
  virtual HRESULT CreateMappingFeature (CATBaseUnknown_var& oMappingFeature, 
                                        const CATILinkableObject_var &iDesignFeature,
                                        const CATBaseUnknown_var &iProduct) const = 0 ;

  /**
   * Creates a new Manufacturing Attribute.
   * @param oAttribute The newly created Manufacturing Attribute
   * @param iType Type of the attribute.
   */
  virtual HRESULT CreateMfgAttribut (CATBaseUnknown_var& oAttribute, CATUnicodeString& iType) const = 0 ;

  /**
   * Creates a new Manufacturing Optional Attribute.
   * @param oOptionalAttribute The newly created Manufacturing Attribute
   * @param iCheck Value of attribute "Check" of the created attribute
   * @param iValue Value of attribute "Value" of the created attribute
   */
  virtual HRESULT CreateMfgOptionalAttribut (CATBaseUnknown_var& oOptionalAttribute,
                                             const CATISpecObject_var    &iCheck,
                                             const CATISpecObject_var    &iValue) const = 0 ;

  /**
   * Creates a new Manufacturing parameter.
   * @param oParameter The newly created Manufacturing Parameter
   */
  virtual HRESULT CreateMfgParameter (CATBaseUnknown_var& oParameter) const = 0 ;

  /**
   * Creates a new Default Values Bag.
   * @param	The newly created Manufacturing Default Values Bag
   */
  virtual HRESULT CreateMfgDefaultValuesBag (CATBaseUnknown_var& oDefaultValueBag) const = 0 ;

  /**
   * Creates a new Manufacturing Safety Plane.
   * @param The newly created Manufacturing Safety Plane   
   */
  virtual HRESULT CreateMfgSetupStyPlane (CATBaseUnknown_var& oSafetyPlane) const = 0 ;

  /**
   * Creates a new Manufacturing TraverseBox Plane.
   * @param The newly created Manufacturing TraverseBox Plane   
   */
  virtual HRESULT CreateMfgSetupTraverseBoxPlane (CATBaseUnknown_var& oTraverseBoxPlane) const = 0 ;

  /**
   * Creates a new Manufacturing Transition Plane.
   * @param The newly created Manufacturing Transition Plane    
   */
  virtual HRESULT CreateMfgSetupTransitionPlane (CATBaseUnknown_var& oTransitionPlane) const = 0 ;

  /**
   * Creates a new Manufacturing Rotary Plane.
   * @param The newly created Manufacturing Rotary Plane   
   */
  virtual HRESULT CreateMfgSetupRotaryPlane (CATBaseUnknown_var& o) const = 0 ;


  /**
   * Creates a new Manufacturing Line between two vertices.
   *   @param oLine
   *    The newly created Manufacturing Line
   *   @param iVertex1
   *	<tt> First vertex pointed by the Manufacturing Line </tt>  
   *   @param iVertex2
   *	<tt> Second vertex pointed by the Manufacturing Line </tt>  
   *   @param iProduct1
   *	<tt> Product containing the first vertex</tt>      
   *   @param iProduct2
   *	<tt> Product containing the second vertex</tt>    
   *   @param iStyle
   *   <br><b>Legal values</b>:
   *        <ul><li> 0 : standard geometry. This is the default value. </li>
   *            <li> 1 : full geometry.    </li>
   *            <li> 2 : lathe geometry.   </li>
   *        </ul>
   */
  virtual HRESULT CreateLine (CATBaseUnknown_var& oLine,
                              const CATILinkableObject_var &iVertex1,
                              const CATILinkableObject_var &iVertex2,
                              const CATBaseUnknown_var &iProduct1 = NULL_var,
                              const CATBaseUnknown_var &iProduct2 = NULL_var,
                              const int iStyle = 0) const = 0 ;

  /**
   * Creates a new Manufacturing Pattern Position.
   * @param oPatternPosition The newly created Manufacturing Pattern Position
   */
  virtual HRESULT CreatePatternPosition (CATBaseUnknown_var& oPatternPosition) const = 0 ;

  /**
   * Creates a new Manufacturing Pattern Definition.
   * @param oPatternDefinition The newly created Manufacturing Pattern Definition
   */
  virtual HRESULT CreatePatternDefinition (CATBaseUnknown_var& oPatternDefinition) const = 0 ;

  /**
   * Creates a new Manufacturing Pattern Usage.
   * @param oPatternUsage The newly created Manufacturing Pattern Usage
   */
  virtual HRESULT CreatePatternUsage (CATBaseUnknown_var& oPatternUsage) const = 0 ;

  /**
   * Creates a new Manufacturing Pattern Direction.
   * @param oPatternDirection The newly created Manufacturing Pattern Direction
   */
  virtual HRESULT CreatePatternDirection (CATBaseUnknown_var& oPatternDirection) const = 0 ;

  /**
   * Creates a new Manufacturing continuous contour.
   * @param oContour The newly created Manufacturing Contour
   */
  virtual HRESULT CreateMfgContour (CATBaseUnknown_var& oContour) const = 0 ; 


  /**
   * Creates a new Manufacturing 2D Rework Area Feature.
   * @param oReworkArea The newly created Manufacturing 2D Rework Area feature
   * @param iMfgFather
   *        Feature to which is agregated oReworkArea by @href CATIMfgAgregate#AddElement
   *
   * @see CATIMfgAgregate
   */
  virtual HRESULT Create2DRAFeature (CATBaseUnknown_var& oReworkArea, const CATBaseUnknown_var &iMfgFather) const = 0 ;

  /**
   * Creates a new Manufacturing 2D Machining Area Feature.
   * @param oMachiningArea the newly created Manufacturing 2D Machining Area Feature
   * @param iMfgFather
   *        Feature to which is agregated oMachiningArea by @href CATIMfgAgregate#AddElement
   *
   * @see CATIMfgAgregate
   */
  virtual HRESULT Create2DMAFeature (CATBaseUnknown_var& oMachiningArea, const CATBaseUnknown_var &iMfgFather) const = 0 ;

  /**
   * Creates a new Manufacturing 2D island.
   * @param oIsland The newly created Manufacturing 2D Island
   */
  virtual HRESULT Create2DIsland (CATBaseUnknown_var& oIsland) const = 0 ;


  /**
   * Creates a new Manufacturing 2D continuous contour.
   * @param oContour The newly created Manufacturing 2D continuous contour
   */
  virtual HRESULT Create2DContour (CATBaseUnknown_var& oContour) const = 0 ;

  /**
   * Creates a new Manufacturing Machine Rotation Feature.
   * @param oMachineRotation The newly created Manufacturing Machine Rotation Feature
   */
  virtual HRESULT CreateMachineRotationFeature (CATBaseUnknown_var& oMachineRotation) const = 0 ;

  /**
   * Creates a new Machinable Computed Stock Feature.
   * @param oComputedStock The newly created Machinable Computed Stock Feature
   */
  virtual HRESULT CreateMachinableComputedStockFeature (CATBaseUnknown_var& oComputedStock) const = 0 ;

  /**
   * Creates a new Max Turn Envelope Machinable Feature.
   * @param oMaxTurnEnvelope The newly created Max Turn Envelope Machinable Feature
   * @param iMfgFather
   *        Feature to which is agregated oMaxTurnEnvelope by @href CATIMfgAgregate#AddElement
   */
  virtual HRESULT CreateMaxTurnEnvelopeMachinableFeature (CATBaseUnknown_var& oMaxTurnEnvelope,
                                                          const CATBaseUnknown_var &iMfgFather) const = 0 ;

  /**
   * Creates a new Transition Element Feature.
   * @param oTransitionElement The newly created Transition Element Feature
   */
  virtual HRESULT CreateTransitionElementFeature (CATBaseUnknown_var& oTransitionElement) const = 0 ;

  /**
   * Creates a Manufacturing Synchronisation.
   * @param oSynchronisation The newly created Synchronisation
   */
  virtual HRESULT CreateManufacturingSynchronisation (CATBaseUnknown_var& oSynchronisation) const = 0;

};

CATDeclareHandler(CATIMfgMachiningFeatureFactory, CATBaseUnknown) ;
#endif
