#ifndef CATIGeometricalElement_h
#define CATIGeometricalElement_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h" 
#include "CATLISTV_CATISpecObject.h" 
#include "CATMfDefs.h" 
#include "MecModItfCPP.h"

class CATBrpScope;
class CATMathPoint;
class CATMathDirection;

class CATGeometry_var;
class CATBody_var;
class CATISpecObject_var;

class CATProcReport;
class CATCGMJournalList;

class CATMathTransformation; 
class CATSoftwareConfiguration;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIGeometricalElement;
#else
extern "C" const IID IID_CATIGeometricalElement;
#endif


/**
 * Interface to manage a geometrical feature.
 * <b>Role</b>: A geometrical feature is a mechanical feature with a topological result 
 * (a <tt>CATBody</tt>). It can be included into a Geometrical Set, an Ordered Geometrical Set or 
 *  a Body feature. The  <tt>CATBody</tt> can be assigned to the feature: 
 * <ul>
 *  <li>Manually </li>
 * <p>Thanks to the @href CATIDatumFactory interface</p>
 *  <li>Automatically</li>
 * <p>The construction is done by the update mechanism. The @href CATIBuild#Build or 
 * the @href CATIBuildShape#BuildShape methods 
 * build the <tt>CATBody</tt></p>
 * </ul>
 */
class ExportedByMecModItfCPP CATIGeometricalElement : public CATBaseUnknown
{
  CATDeclareInterface;

 public:
/**
 * @nodoc
 */
  virtual CATBrpScope* CreateScope(CATListValCATBaseUnknown_var* lst ) = 0;

/**
 * @nodoc
 * Creates a scope from a given topology.
 *
 */
  virtual CATBrpScope* CreateScopeAndNodes(CATListValCATBaseUnknown_var* iLst ) = 0;

/**
 * @nodoc
 * Deletes a scope.
 */
  virtual void DeleteScope() = 0;
  
/**
 * @nodoc
 */
  virtual int GetGeometricalType() = 0; 

 /**
 * Returns the result topological body associated with the current feature.
 * @return
 * Depending on the geometrical feature type, the returned <tt>CATBody</tt> has been 
 * associated with the feature thanks to:
 * <ul>
 * <li>@href CATIDatumFactory for a datum feature - see @href CATIMf3DBehavior - </li>
 * <li>@href CATIBuildShape#BuildShape for a form feature - see <tt>CATIShapeFeatureProperties</tt> </li>
 * <li>@href CATIBuild#Build  otherwise </li>
 * </ul>
 * To know more about the result of a geometrical feature, refer to the CAA Encyclopedia home page. 
 * Click MechanicalModeler at the middle, and read the 
 * "Specification/Result Mechanism Applied to Mechanical Features" article.
 */
  virtual CATBody_var GetBodyResult() = 0;

/**
 * @nodoc
 */
  virtual CATGeometry_var GetGeometryResult() = 0;

 /**
 * Retrieves the bounding box center of gravity and the bounding box extremities.
 * <br><b>Role:</b>This method enables to know the bounding box of the
 * geometrical feature. You retrieve the same information in using the
 * @href CATGeometry#GetBoundingBox method applied to the <tt>CATBody</tt> returned by 
 * the previous @href #GetBodyResult method.
 * <br>The bounding box contents the geometrical feature, but can be greater.
 * @param oBoundingBoxGravityCenter
 * The bounding box center of gravity. 
 * @param oLowerPoint
 * Lower extremity of the bounding box.
 * @param oHigherPoint
 * Higher extremity of the bounding box.
 */ 
  virtual void GetCharacteristicPoints(CATMathPoint& oBoundingBoxGravityCenter,CATMathPoint&  oLowerPoint, CATMathPoint& oHigherPoint) = 0;

  /**
 * Retrieves the inertia directions of the current feature.
 * @param oDirection1
 * First inertia direction.
 * @param oDirection2
 * Second inertia direction.
 * @param oDirection3
 * Third inertia direction.
 */
  virtual void GetCharacteristicDirections(CATMathDirection& oDirection1, CATMathDirection& oDirection2, CATMathDirection& oDirection3 ) = 0; 


/**
 * @nodoc
 */
  virtual void CopyBodyResultOf(const CATBaseUnknown_var &iFeatureReference, const CATMathTransformation& tra,const CATMfStoreProcReportNamingType MfNamingType,CATSoftwareConfiguration* Config = NULL) = 0;
  
/**
 * @nodoc
 */
  virtual void CopyGeometryResultOf(const CATBaseUnknown_var &iFeatureReference, const CATMathTransformation& tra,CATSoftwareConfiguration* Config = NULL)= 0 ; 

/**
 * @nodoc
 * Returns the scope of the current feature.
 */
    virtual CATBrpScope* GetScope() = 0;

/**
 * @nodoc
 */
    virtual void SetScope(CATBrpScope* iScope) = 0;

/**
 * Returns the list of BRep features that involve the current feature.
 * <br><b>Role:</b>This method returns all the BRep features (@href CATIFeaturize )
 * that involve the geometrical feature. 
 * @param interfaceName
 * The interface name used to filter the type of the BRep features. The available
 * interfaces are for example: @href CATIMfFsur , @href CATIMfRsur , @href CATIMfFedge ...
 */
    virtual CATLISTV(CATISpecObject_var) GetBRepFeatures(CATClassId interfaceName = 0) = 0;
};

CATDeclareHandler(CATIGeometricalElement,CATBaseUnknown);

#endif

