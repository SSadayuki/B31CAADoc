/* -*-c++-*- */
#ifndef CATIPrtFactory_H
#define CATIPrtFactory_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <CATUnicodeString.h>
#include <PartItf.h>
#include <CATBaseUnknown.h>
#include <CATLISTV_CATISpecObject.h>
#include <CATPrtEnum.h>
#include <CATICkeParm.h>


class CATISpecObject_var;
class CATISweepLimit_var;
class CATIPrismLimit_var;
class CATIHoleLimit_var;
class CATIMfBRep_var;
class CATIMfBRepFeature_var;
class CATMathPoint;
class CATMathDirection;
class CATMathVector;
class CATIGSMDirection_var;
class CATIRevolLimit_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrtFactory;
#else
extern "C" const IID IID_CATIPrtFactory;
#endif

/**
 * Interface to create all types of Mechanical Design feature.
 * <b>Role</b>: The CATIPrtfactory role is to build from scratch features that
 * will be used within the design process of parts.
 * In most cases, features are created from a factory with a minimum number 
 * of parameters. Other feature parameters will be set by using 
 * methods offered by the feature itself.
 */
class ExportedByPartItf CATIPrtFactory : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 

/** @nodoc */
  virtual void OpenPrtCatalog() = 0;

  /**
 * Creates a new pad.
 * @param ihSketch
 *   The sketch defining the pad profile.
 * @return 
 *   The pad feature.
 */  
  virtual CATISpecObject_var CreatePad(const CATISpecObject_var& ihSketch = NULL_var) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreatePad(const CATISpecObject_var& ihSketch, double Dim1, double Dim2, const CATMathDirection& Direction) = 0;
  
/**
 * Creates a new pocket.
 * @param ihSketch
 *   The sketch defining the pocket profile.
 * @return 
 *   The pocket feature.
 */  
  virtual CATISpecObject_var CreatePocket(const CATISpecObject_var& ihSketch = NULL_var) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreatePocket(const CATISpecObject_var& ihSketch, double Dim1, double Dim2, const CATMathDirection& Direction) = 0;
  
/** @nodoc */
  virtual CATISpecObject_var CreateMultiPad(const CATISpecObject_var& ihSketch) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreateMultiPocket(const CATISpecObject_var& ihSketch) = 0;

/**
 * Creates a new shaft.
 * @param ihSketch
 *   The sketch defining the shaft profile.<br>It must contain an axis used as revolution axis.
 * @return 
 *   The shaft feature.
 */  
  virtual CATISpecObject_var CreateShaft(const CATISpecObject_var& ihSketch = NULL_var) = 0;
   
/**
 * Creates a new groove.
 * @param ihSketch
 *   The sketch defining the groove profile.<br>It must contain an axis used as revolution axis.
 * @return 
 *   The groove feature.
 */  
  virtual CATISpecObject_var CreateGroove(const CATISpecObject_var& ihSketch = NULL_var) = 0;

/**
 * Creates a new stiffener.
 * @param ihSketch
 *   The sketch defining the stiffener profile.<br>It must be an open profile.
 * @return 
 *   The stiffener feature.
 */  
  virtual CATISpecObject_var CreateStiffener(const CATISpecObject_var& ihSketch = NULL_var) = 0;
  
/**
 * Creates and returns a new rib feature. 
 * @return 
 *   The rib feature.
 */ 
  virtual CATISpecObject_var CreateRib() = 0;
/**
 * Creates and returns a new rib feature. 
 * @param ihSketch
 *      Selected profile.
 * @param ihCenterCrv
 *      Selected center curve.
 * @return 
 *   The rib feature.
 */
  virtual CATISpecObject_var CreateRib(const CATISpecObject_var& ihSketch, const CATISpecObject_var& ihCenterCrv) = 0;
  
/**
 * Creates and returns a new slot feature. 
 * @return 
 *   The slot feature.
 */ 
  virtual CATISpecObject_var CreateSlot() = 0;
/**
 * Creates and returns a new slot feature. 
 * @param ihSketch
 *      Selected profile.
 * @param ihCenterCrv
 *      Selected center curve.
 * @return 
 *   The slot feature.
 */
  virtual CATISpecObject_var CreateSlot(const CATISpecObject_var& ihSketch, const CATISpecObject_var& ihCenterCrv) = 0;
     
/**
 * Creates and returns a new loft feature. 
 * @return 
 *   The loft feature.
 */ 
  virtual CATISpecObject_var CreateLoft() = 0;

/** 
 * Creates and returns a new removed loft feature. 
 * @return 
 *   The removed loft feature.
 */ 
  virtual CATISpecObject_var CreateRemovedLoft() = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihLimit,
                                         const CATISpecObject_var ihSketch,
                                         const CATISpecObject_var ihDirection) = 0;                
/**
 * Creates and returns a new hole feature. 
 * @param ihSurface
 *      Selected face or plane used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @return 
 *   The hole feature.
 */
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection) = 0;
/**
 * Creates and returns a new hole feature. 
 * @param iMathPoint
 *      Coordinates of the point uses to locate the hole feature on its support. 
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param IsPointOnSurface
 * <br>     = 0 if iMathPoint doesn't lay down support (ihSurface).
 * <br>     = 1 if iMathPoint lays down support (ihSurface).
 * @return 
 *   The hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATMathPoint       iMathPoint,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection,
                                         const int IsPointOnSurface) = 0;
/**
 * Creates and returns a new hole feature. 
 * @param ihPoint
 *      Selected point uses to locate the hole feature on its support  
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param IsPointOnSurface
 * <br>     = 0 if ihPoint does not lay down support (ihSurface).
 * <br>     = 1 if ihPoint lays down support (ihSurface).
 * @return 
 *   The Hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihPoint,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection,
                                         const int IsPointOnSurface) = 0;
/**
 * Creates and returns a new hole feature. 
 * This method creates a constraint in positionning sketch between
 * hole origine and selected edge .
 * @param iMathPoint
 *      Coordinates of the point uses to locate the hole feature on its support. 
 * @param ihFirstEdge
 *      First selected edge.
 * @param ihSecndEdge
 *      Second selected edge.
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @return 
 *   The hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATMathPoint       iMathPoint,
                                         const CATISpecObject_var ihFirstEdge,
                                         const CATISpecObject_var ihSecndEdge,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var iDirection) = 0;

/** 
 * @nodoc
 * Creates and returns a new hole type. 
 * param iType
 *      Hole type, can be: 
 * <br>    - Simple        
 * <br>    - Tapered     
 * <br>    - Counterbored
 * <br>    - Countersunk 
 * <br>    - Counterdrilled 
 */ 
  virtual CATISpecObject_var CreateHoleType (const int iType) = 0;

/**
 * @nodoc 
 */ 
  virtual CATIPrismLimit_var CreatePrismLimit(double Dim = 0, const CATUnicodeString& ustrName = "") = 0;  

/**
 * @nodoc 
 */ 
  virtual CATISweepLimit_var CreateSweepLimit() = 0;  

/** 
 * @nodoc 
 */ 
  virtual CATIHoleLimit_var  CreateHoleLimit() = 0;
   
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateAxis1() = 0;  
   
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateAxis1(const CATMathPoint& Point, const CATMathVector& Direction) = 0;  
   
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateProfile() = 0;  

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateExtrusionDomain(const CATUnicodeString& strFeat) = 0;  

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateCenterCurve (const CATISpecObject_var& ih) = 0;


/**
 * @nodoc 
 */
 virtual CATISpecObject_var CreateFillet (const CATIMfBRepFeature_var ihRsur1, const CATIMfBRepFeature_var ihRsur2, const double iRadius, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;  
 

/**
 * Creates and returns a solid face fillet feature.
 * @param ihRsur1
 * Specifies the first face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRsur2
 * Specifies the second face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param iRadius
 * Specifies the radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0. 
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created Face Fillet feature.
 */	
  virtual CATISpecObject_var CreateSolidFillet (const CATIMfBRep_var ihRsur1, const CATIMfBRep_var ihRsur2, const double iRadius, const CATISpecObject_var ihSupport=NULL_var) = 0;  

/**
 * Creates and returns a surface face fillet feature.
 * @param ihRsur1
 * Specifies the first face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRsur2
 * Specifies the second face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param iRadius
 * Specifies the radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0. 
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created Face Fillet feature.
 */	
  virtual CATISpecObject_var CreateSurfaceFillet (const CATIMfBRep_var ihRsur1, const CATIMfBRep_var ihRsur2, const double iRadius, const CATISpecObject_var ihSupport=NULL_var) = 0;  


/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateFillet (const CATIMfBRepFeature_var ihRsur1, const CATIMfBRepFeature_var ihRsur2, const CATIMfBRepFeature_var ihRemoveRsur, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;


 /**
 * Creates and returns a tritangent fillet feature. 
 * @param ihRsur1
 * Specifies the first face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRsur2
 * Specifies the second face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRemoveRsur
 * Specifies the face to be removed.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created tritangent fillet feature.
 */	
  virtual CATISpecObject_var CreateSolidFillet (const CATIMfBRep_var ihRsur1, const CATIMfBRep_var ihRsur2, const CATIMfBRep_var ihRemoveRsur, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * Creates and returns a tritangent fillet feature. 
 * @param ihRsur1
 * Specifies the first face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRsur2
 * Specifies the second face to be filleted.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihRemoveRsur
 * Specifies the face to be removed.
 * The CATIMfBRep_var should be a Rsur feature (CATIMfRsur) created with CATIMmiBRepFactory.
 * This face should not be already used in the fillet.
 * This face should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created tritangent fillet feature.
 */	
  virtual CATISpecObject_var CreateSurfaceFillet (const CATIMfBRep_var ihRsur1, const CATIMfBRep_var ihRsur2, const CATIMfBRep_var ihRemoveRsur, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;

/**
 * Creates and returns a solid constant edge fillet feature. 
 * @param iObjectList
 * Specifies the list of sharp edges or faces to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iRadius
 * Specifies the constant radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created constant edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSolidFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * Creates and returns a surface constant edge fillet feature. 
 * @param iObjectList
 * Specifies the list of sharp edges or faces to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iRadius
 * Specifies the constant radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created constant edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSurfaceFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius, const CATISpecObject_var ihSupport=NULL_var) = 0;


/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius,const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;

/**
 * Creates and returns a solid constant edge fillet feature with Keep Edge. 
 * @param iObjectList
 * Specifies the list of sharp edges or faces to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iRadius
 * Specifies the constant radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0.
 * @param iKeepEdgeList
 * Specifies the list of sharp edges that must not be modified. 
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature
 * created with CATIMmiBRepFactory. 
 * This edge should not be already used in the fillet.
 * This edge should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created constant edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSolidFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius,const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * Creates and returns a surface constant edge fillet feature with Keep Edge. 
 * @param iObjectList
 * Specifies the list of sharp edges or faces to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iRadius
 * Specifies the constant radius value.
 * <br><b>Legal values</b>: The radius value must be greater 
 * than 0 but not equal to 0.
 * @param iKeepEdgeList
 * Specifies the list of sharp edges that must not be modified. 
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature
 * created with CATIMmiBRepFactory. 
 * This edge should not be already used in the fillet.
 * This edge should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created constant edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSurfaceFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const double iRadius,const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var) = 0;


/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;

/**
 * Creates and returns a solid variable edge fillet feature. 
 * <br><b>Postcondition</b>: It just adds the edges to the fillet. So 
 * you have to use AddFilletRadius method of CATIEdgeFillet on the edge  
 * to add vertices for computing variable fillet.
 * @param iObjectList
 * Specifies the list of sharp edges to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iVariationMode
 * The variation mode specifies the way the fillet shape changes
 * from one radius to another.
 * <br>The variation can be performed in two ways:
 * <br><b>Cubic</b>: The fillet changes smoothly from one
 * radius to another.
 * <br><b>Linear</b>: The fillet changes straight from one
 * radius to another.
 * <br><b>Legal values</b>: The CATPrtFilletVariation variation mode can be set
 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created variable edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSolidFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * Creates and returns a surface variable edge fillet feature. 
 * <br><b>Postcondition</b>: It just adds the edges to the fillet. So 
 * you have to use AddFilletRadius method of CATIEdgeFillet on the edge  
 * to add vertices for computing variable fillet.
 * @param iObjectList
 * Specifies the list of sharp edges to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iVariationMode
 * The variation mode specifies the way the fillet shape changes
 * from one radius to another.
 * <br>The variation can be performed in two ways:
 * <br><b>Cubic</b>: The fillet changes smoothly from one
 * radius to another.
 * <br><b>Linear</b>: The fillet changes straight from one
 * radius to another.
 * <br><b>Legal values</b>: The CATPrtFilletVariation variation mode can be set
 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created variable edge fillet feature.
 */	
  virtual CATISpecObject_var CreateSurfaceFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * @nodoc 
 */
 	virtual CATISpecObject_var CreateFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var, const int iType = -1) = 0;



/**
 * Creates and returns a variable solid edge fillet feature with Keep Edge. 
 * <br><b>Precondition</b>: only for edge fillets with constant radius.
 * <br><b>Postcondition</b>: It just adds the edges to the fillet. So 
 * you have to use AddFilletRadius method of CATIEdgeFillet on the edge  
 * to add vertices for computing variable fillet.
 * @param iObjectList
 * Specifies the list of sharp edges to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iVariationMode
 * The variation mode specifies the way the fillet shape changes
 * from one radius to another.
 * <br>The variation can be performed in two ways:
 * <br><b>Cubic</b>: The fillet changes smoothly from one
 * radius to another.
 * <br><b>Linear</b>: The fillet changes straight from one
 * radius to another.
 * <br><b>Legal values</b>: The CATPrtFilletVariation variation mode can be set
 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 * @param iKeepEdgeList
 * Specifies the list of sharp edges that must not be modified. 
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature
 * created with CATIMmiBRepFactory. 
 * This edge should not be already used in the fillet.
 * This edge should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created variable edge fillet feature.
 */	
	virtual CATISpecObject_var CreateSolidFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var) = 0;

/**
 * Creates and returns a variable surfacic edge fillet feature with Keep Edge. 
 * <br><b>Precondition</b>: only for edge fillets with constant radius.
 * <br><b>Postcondition</b>: It just adds the edges to the fillet. So 
 * you have to use AddFilletRadius method of CATIEdgeFillet on the edge  
 * to add vertices for computing variable fillet.
 * @param iObjectList
 * Specifies the list of sharp edges to be filleted.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode 
 * The propagation mode specifies the edges taken into account when filleting.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>:CATIA continues filleting belong the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtFilletPropagation propagation mode can be set
 * to <tt>TANGENCY</tt> or <tt>MINIMAL</tt>.
 * @param iVariationMode
 * The variation mode specifies the way the fillet shape changes
 * from one radius to another.
 * <br>The variation can be performed in two ways:
 * <br><b>Cubic</b>: The fillet changes smoothly from one
 * radius to another.
 * <br><b>Linear</b>: The fillet changes straight from one
 * radius to another.
 * <br><b>Legal values</b>: The CATPrtFilletVariation variation mode can be set
 * to <tt>CUBIC</tt> or <tt>LINEAR</tt>.
 * @param iKeepEdgeList
 * Specifies the list of sharp edges that must not be modified. 
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) feature
 * created with CATIMmiBRepFactory. 
 * This edge should not be already used in the fillet.
 * This edge should belong to the same mechanical body.
 * @param ihSupport 
 * Do not use this parameter.
 * @return The created variable edge fillet feature.
 */	
	virtual CATISpecObject_var CreateSurfaceFillet (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtFilletPropagation iPropagationMode ,const CATPrtFilletVariation iVariationMode, const CATLISTV(CATISpecObject_var)* iKeepEdgeList, const CATISpecObject_var ihSupport=NULL_var) = 0;

  
  
  /** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateEdgeFilletRibbon () = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateCstEdgeFilletRibbon () = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateVarEdgeFilletRibbon () = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateFilletRadius () = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateFaceFaceFillet(const int iType = -1) = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateConstantEdgeFillet(const int iType = -1) = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateVariableEdgeFillet(const int iType = -1) = 0;

/** 
 * @nodoc
 */
  virtual CATISpecObject_var CreateBlendVertex () = 0;
/** 
 * @nodoc 
 */
  virtual CATISpecObject_var CreateSetBack () = 0;
/** 
 * @nodoc 
 */
  virtual CATISpecObject_var CreateFilletCst () = 0;
	   
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateDraft (const CATLISTV(CATISpecObject_var)* hSupportToDraft,
                                          const int                           iPropagation,
                                          const CATISpecObject_var            hNeutral,
                                          const int                           iNeutralPropagation,
                                          const CATISpecObject_var            hParting,
                                          const CATMathDirection              hPullDir,   
                                          const CATMathPoint                  hPullDirOrigin,
                                          const int                           iMode,
                                          const double                        Angle) = 0;

/**
 * Creates and returns a new draft.
 * Drafts are defined on molded parts to make them easier to remove from molds.
 * @param ihSupportToDraft
 *   The list of faces to be drafted.
 *    <br><b>Legal values</b>: The CATISpecObject_var must be a face.
 *    <br>NULL_var value is not allowed.
 * @param iBid1
 *    Not used. Must be set to 0.
 * @param ihNeutral
 *    The neutral element.
 *    The intersection of this element and the faces to be drafted,
 *    defines a neutral curve on which the drafted face will lie.
 *    This element will remain the same during the draft.
 *    The neutral element and parting element may be the same element. 
 *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
 *    <br>NULL_var value is not allowed.
 * @param iBid2
 *    Not used. Must be set to 0.
 * @param ihParting
 *    The parting element.
 *    This element cuts the faces to be drafted in two and one portion is drafted according to its
 *    previously defined pulling direction.
 *    The parting element and neutral element may be the same element.
 *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
 *    <br>NULL_var value means the draft has <b>no</b> parting element.
 * @param iPullDir
 *     The pulling direction.
 *     This is the direction in which the mold will be removed from the part.
 * @param ihPullDirSpec
 *     The pulling direction reference.
 *     <br><b>Precondition</b>: If you used a reference, you must set the pulling direction iPullDir with the
 *     CATMathDirection of the reference.
 *    <br><b>Legal values</b>: The CATISpecObject_var is either
 *    <tt>a plane or a planar face or a planar surface</tt>  the pulling direction is normal to this element,
 *    <tt>a line or a linear edge</tt> the pulling direction is the direction of the element.
 *    <tt>NULL_var</tt> there is no pulling direction reference.
 * @param iMode
 *	  The draft mode (standard or reflectline).
 *    <br><b>Legal values</b>: The Draft mode is either
 *	  <tt>0</tt> standard (the draft's neutral element must be input).
 *	  <tt>1</tt> reflectline (the draft's neutral element is computed as the reflect line).
 * @param iAngle
 *    The draft angle value.
 *    <br><b>Legal values</b>: Angle between -90 degrees (not included) and +90 degrees (not included).
 *    The value should be set in degree.
 * @param iBid4
 *    Not used. Must be set to 0.
 * @return The created draft.
 */
  virtual CATISpecObject_var CreateDraft (const CATLISTV(CATISpecObject_var)* ihSupportToDraft,
	  const int iBid1,
	  const CATISpecObject_var ihNeutral,
	  const int iBid2,
	  const CATISpecObject_var ihParting,
	  const CATMathDirection iPullDir, 
	  const CATISpecObject_var ihPullDirSpec,
	  const int  iMode,
	  const double iAngle,
	  const int iBid4) = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateVolumicDraft (const CATLISTV(CATISpecObject_var)* ihSupportToDraft,
	  const int iBid1,
	  const CATISpecObject_var ihNeutral,
	  const int iBid2,
	  const CATISpecObject_var ihParting,
	  const CATMathDirection iPullDir, 
	  const CATISpecObject_var ihPullDirSpec,
	  const int  iMode,
	  const double iAngle,
	  const int iBid4,
    const int iType,
    const CATISpecObject_var hSupport) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateDraft (const CATPrtDraftVariation iType,
	  const CATLISTV(CATISpecObject_var)* ihSupportToDraft,
	  const int iBid1,
	  const CATLISTV(CATISpecObject_var)* ihNeutral,
	  const int iBid2,
	  const CATISpecObject_var ihParting,
	  const CATMathDirection iPullDir, 
	  const CATISpecObject_var ihPullDirSpec,
	  const int  iMode,
	  const double iAngle,
	  const int iBid4,
		const CATPrtDraftForm iDraftForm) = 0;

  
/** @nodoc */
  virtual CATISpecObject_var CreateDraftAngle () =0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateVolumicDraftAngle ( const int & type) =0;

/** @nodoc */
  virtual CATISpecObject_var CreateDraftSubDomain () = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateDraftParam () = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateDraftResultingCurve () = 0;

/**
 * Creates and returns a new mirror.
 * A mirror allows users for transforming by duplication existing feature 
 * by a symmetry with respect to an existing plane. 
 * @param ihSymPlane
 *   The plane used by the mirror as the symmetry plane.
 * @return The created mirror.
 */
  virtual CATISpecObject_var CreateMirror (const CATISpecObject_var ihSymPlane) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreateMirror (const CATISpecObject_var ihSymPlane,
                                           const CATLISTV(CATISpecObject_var) iObjectList) = 0;
/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateSplit (const CATISpecObject_var ihSplitPlane, const CATPrtSplitType iSplitType) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreateSplit (const CATISpecObject_var ihSplitPlane, const CATPrtSplitType iSplitType, const CATBoolean iBrepStability) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreateVolumeSplit(const CATISpecObject_var &ihSplitPlane, const CATPrtSplitType &iSplitType, const CATBoolean &iBrepStability) = 0;

/**
 * Creates and returns a split feature.
 * @param ihSplitPlane
 *	The surfacic feature as splitting element to perform the split operation.
 * @param iSplitType
 *	Represents the side to be kept after the split operation.
 *	<br><b>Legal values</b>: <tt>iSplitType</tt> equals PositiveSide 
 *	or NegativeSide.
 *	The PositiveSide value refers to the same orientation as the splitting
 *	element normal vector.
 *	The NegativeSide value refers to the opposite orientation as the splitting
 *	element normal vector.
 * @return the created split feature.
 */
  virtual CATISpecObject_var CreateSolidSplit (const CATISpecObject_var ihSplitPlane, const CATPrtSplitType iSplitType) = 0;



/**
 * Creates and returns a sewing feature.
 * @param ihSewingPlane
 *	The surfacic feature to be sewn to perform the sewing operation.
 * @param iSewingType
 *	Represents the side to be kept after the sewing operation.
 *	<br><b>Legal values</b>: <tt>iSewingType</tt> equals PositiveSide 
 *	or NegativeSide.
 *	The PositiveSide value refers to the same orientation as the sewing
 *	element normal vector.
 *	The NegativeSide value refers to the opposite orientation as the sewing
 *	element normal vector.
 * @return the created sewing feature.
 */
  virtual CATISpecObject_var CreateSewing (const CATISpecObject_var ihSewingPlane, const CATPrtSplitType iSewingType) = 0;

/**
 * Creates and returns a volumic sewing feature.
 * @param Type
 *      Must be set to 4.
 * @param ihVolume
 *	The volumic feature to be operated.
 * @param ihSewingPlane
 *	The surfacic feature to be sewn to perform the sewing operation.
 * @param iSewingType
 *	Represents the side to be kept after the sewing operation.
 *	<br><b>Legal values</b>: <tt>iSewingType</tt> equals PositiveSide 
 *	or NegativeSide.
 *	The PositiveSide value refers to the same orientation as the sewing
 *	element normal vector.
 *	The NegativeSide value refers to the opposite orientation as the sewing
 *	element normal vector.
 * @return the created sewing feature.
 */
	virtual CATISpecObject_var CreateVolumicSewing (const int& Type, const CATISpecObject_var& hVolume, const CATISpecObject_var ihSewingPlane, const CATPrtSplitType iSewingType) = 0;

/**
 * Creates and returns a replace face feature.
 * @param ihAlignPlane
 *	The surfacic feature to be used to perform the replace operation.
 * @param iAlignType
 *	Represents the side to be kept after the replace operation.
 *	<br><b>Legal values</b>: <tt>iAlignType</tt> equals PositiveSide 
 *	or NegativeSide.
 *	The PositiveSide value refers to the same orientation as the replacing
 *	element normal vector.
 *	The NegativeSide value refers to the opposite orientation as the 
 *      replacing element normal vector.
 * @return the created replace face feature.
 */
  virtual CATISpecObject_var CreateAlign (const CATISpecObject_var ihAlignPlane, const CATPrtSplitType iAlignType) = 0;

/** @nodoc
  * Creates and returns a replace face feature for volume as support.
  * @param ihAlignPlane
  *	The surfacic feature to be used to perform the replace operation.
  * @param iAlignType
  *	Represents the side to be kept after the replace operation.
  *	<br><b>Legal values</b>: <tt>iAlignType</tt> equals PositiveSide
  *	or NegativeSide.
  *	The PositiveSide value refers to the same orientation as the replacing
  *	element normal vector.
  *	The NegativeSide value refers to the opposite orientation as the
  *      replacing element normal vector.
  * @return the created replace face feature.
  */
  virtual CATISpecObject_var CreateVolumeAlign(const CATISpecObject_var &ihAlignPlane, const CATPrtSplitType &iAlignType) = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateOffset (const CATISpecObject_var ihSurface,const CATPrtOffsetSens iIsensOffset,double iTopOffset,double iBotOffset) = 0;
/** @nodoc */
  virtual CATISpecObject_var CreateOffset (const CATISpecObject_var ihSurface,const CATPrtOffsetSens iIsensOffset,double iTopOffset,double iBotOffset, const CATBoolean iBrepStability) = 0;

/**
 * Creates and returns an offset feature.
 * @param ihSurface
 *	The surfacic feature to be offseted to perform an offset operation.
 * @param iIsensOffset
 *	Represents the orientation of the offset.
 *	<br><b>Legal values</b>: <tt>iIsensOffset</tt> equals NormalSide
 *	or InverseNormalSide.
 *	The NormalSide value refers to the same orientation as the normal vector of 
 *      the surfacic feature.
 *	The InverseNormalSide value refers to the opposite orientation as the normal 
 *      vector of the surfacic feature.	
 * @param iTopOffset
 *	Represents the offset value between the surfacic feature to be offseted and the top skin
 *	of the offset feature.
 * @param iBotOffset
 *	Represents the offset value between the surfacic feature to be offseted and the bottom skin
 *	of the offset feature. 
 * @return the created offset feature.
 */
  virtual CATISpecObject_var CreateSolidOffset (const CATISpecObject_var ihSurface,const CATPrtOffsetSens iIsensOffset,double iTopOffset,double iBotOffset) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateHybridOffset (const CATISpecObject_var ihSurface,const CATPrtOffsetSens iIsensOffset,double iTopOffset,double iBotOffset, const int type) = 0;


/**
 * Creates and returns a volumic offset feature.
 * @param ihSurface
 *	The surfacic feature to be offseted to perform an offset operation.
 * @param iIsensOffset
 *	Represents the orientation of the offset.
 *	<br><b>Legal values</b>: <tt>iIsensOffset</tt> equals NormalSide
 *	or InverseNormalSide.
 *	The NormalSide value refers to the same orientation as the normal vector of 
 *      the surfacic feature.
 *	The InverseNormalSide value refers to the opposite orientation as the normal 
 *      vector of the surfacic feature.	
 * @param iTopOffset
 *	Represents the offset value between the surfacic feature to be offseted and the top skin
 *	of the offset feature.
 * @param iBotOffset
 *	Represents the offset value between the surfacic feature to be offseted and the bottom skin
 *	of the offset feature. 
 * @return the created offset feature.
 */
  virtual CATISpecObject_var CreateVolumicOffset (const CATISpecObject_var ihSurface,const CATPrtOffsetSens iIsensOffset,double iTopOffset,double iBotOffset) = 0;

/**
 * Creates and returns a shell feature.
 * @param ihObjectList
 *	The list of the faces which corresponds to the shell openings.
 * @param iIntOffset
 *	The internal offset value.
 * @param iExtOffset
 *	The external offset value. 
 * @return The created shell feature.
 */
  virtual CATISpecObject_var CreateShell (const CATLISTV(CATISpecObject_var)* ihObjectList, double iIntOffset, double iExtOffset) = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateVolumicShell (const int type, const CATISpecObject_var ihVolume, const CATLISTV(CATISpecObject_var)* ihObjectList, double iIntOffset, double iExtOffset) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateShellSkin () = 0;
	   
/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateClose (const CATISpecObject_var ihCloseElement) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateClose (const CATISpecObject_var ihCloseElement, const CATBoolean iCreationNodes) = 0;

/**
 * Creates and returns a close feature.
 * @param ihCloseElement
 *  The surfacic feature to be closed.
 * @return The created close feature.
 */	
  virtual CATISpecObject_var CreateCloseSurface (const CATISpecObject_var ihCloseElement) = 0;


/** @nodoc */
  virtual CATISpecObject_var CreateHybridCloseSurface (const CATISpecObject_var ihCloseElement, const int type) = 0;

/**
 * Creates and returns a volumic close feature.
 * @param ihCloseElement
 *  The surfacic feature to be closed.
 * @return The created close feature.
 */	
  virtual CATISpecObject_var CreateVolumicCloseSurface (const CATISpecObject_var ihCloseElement) = 0;

/**
 * Creates and returns a thread feature.
 * @param ihSupportElement
 *	Face to thread or to tap. 	
 * @param ihLimitElement
 *	Face to limit top of thread or tap. 	
 * @return The created thread feature.
 */	
  virtual CATISpecObject_var CreateThread (const CATISpecObject_var ihSupportElement,const CATISpecObject_var ihLimitElement) = 0;
/**
 * Creates and returns a new thread feature. 
 * @return 
 *   The thread feature.
 */ 
  virtual CATISpecObject_var CreateThread() = 0;

/**
 * Creates and returns a thickness feature.
 * @param ihObjectList
 *	The list of the faces which corresponds to the shell openings.
 * @param iOffset
 *	The offset value.
 * @return The created Thickness feature.
 */
  virtual CATISpecObject_var CreateThickness (const CATLISTV(CATISpecObject_var)* ihObjectList, double iOffset) = 0;

  /**
 * Creates and returns a thickness feature.
 * @param ihObjectList
 *	The list of the faces which corresponds to the shell openings.
 * @param iOffset
 *	The offset value.
 * @param hSupport
 *    The volumic feature to be operated.
 * @return The created Thickness feature.
 */
  virtual CATISpecObject_var CreateVolumicThickness (const CATLISTV(CATISpecObject_var)* ihObjectList, double iOffset, const CATISpecObject_var ihSupport) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateThickSkin () = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateChamfer(const int iContext = -1) = 0;   
/**
 * Creates and returns a chamfer feature.
 * @param iObjectList
 * Specifies the list of sharp edges or faces to be chamfered.
 * <br>The CATISpecObject_var should be a Redge (CATIMfRedge) or Rsur (CATIMfRsur) feature
 * created with CATIMmiBRepFactory. 
 * This edge or face should not be already used in the fillet.
 * This edge or face should belong to the same mechanical body.
 * @param iPropagationMode
 * The propagation mode specifies the edges taken into account when chamfering.
 * <br>The propagation can be performed in two ways:
 * <br><b>Tangency</b>: CATIA continues chamfering beyond the selected edge 
 * until it encounters an edge that is non continuous in tangency.
 * <br><b>Minimal</b>: The propagation is done up to the first natural relimitation
 * by the geometry.
 * <br><b>Legal values</b>: The CATPrtChamferPropagation propagation mode can be set
 * to <tt>_TANGENCY</tt> or <tt>_MINIMAL</tt>.
 * @param iParameterMode 
 * The chamfer parameter mode specifies both parameters required 
 * to define the chamfer: two lengthes (Length1/Length2) or 
 * a length and an angle (Length1/Angle).
 * <br><b>Legal values</b>: The CATPrtChamferMode parameter mode can be set
 * to <tt>LENGTH</tt> or <tt>LENGTH_ANGLE</tt>.
 * @param iLength1 
 * This is the first length value if the chamfer is defined with two lengthes,
 * or if the chamfer is defined with a length and an angle.
 * <br><b>Legal values</b>: The first length value must be greater 
 * than 0 but not equal to 0.
 * @param iLength2 
 * This is the second length value if the chamfer is defined with two lengthes,
 * or the angle value if the chamfer is defined with a length and an angle.
 * <br><b>Legal values</b>: The second length value must be greater 
 * than 0 but not equal to 0 and the angle value must be greater than 0 
 * but not equal to 0 and smaller than 90 but not equal to 90.
 * @param iReferenceFace 
 * The first length, or the single length, depending on the way the
 * chamfer is defined, is measured on the reference face from the
 * edge to be chamfered. 
 * <br>This reference face is either the face selected or the face
 * determined by CATIA if the edge to be chamfered was selected.
 * <br>The chamfer orientation defines whether to keep the face selected or determined 
 * by CATIA as the chamfer reference face.
 * <br><b>Legal values</b>: The CATPrtChamferReferenceFace orientation can be set
 * to <tt>NO_REVERSE</tt> (the chamfer reference face is the face selected or determined
 * by CATIA) or <tt>REVERSE</tt> (the chamfer reference face is the other face).
 * @param ihSupport 
 * Do not use this parameter.
 * @param iContext 
 * Specifies the chamfer context. Set to 5 for Functional Chamfer.
 * @return The created chamfer feature.
 */	
  virtual CATISpecObject_var CreateChamfer (const CATLISTV(CATISpecObject_var)* iObjectList, const CATPrtChamferPropagation iPropagationMode, const CATPrtChamferMode iParameterMode, const double iLength1,const double iLength2, const CATPrtChamferReferenceFace iReferenceFace = NO_REVERSE, const CATISpecObject_var ihSupport=NULL_var,const int iContext = -1) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateChamferRibbon () = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateRectPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var ihLine1,
                                            const CATISpecObject_var ihLine2,
                                            const CATBoolean iDir1, 
                                            const CATBoolean iDir2,
                                            const int iNb1,
                                            const int iNb2,
                                            const double iStep1,
                                            const double iStep2,
                                            const int iNu,
                                            const int iNv,
                                            const double iRotationAngle,
																						const int iContext) = 0;

/**
 * Creates and returns a new solid rectangular pattern.
 * @param ihMotif
 *   The feature to be duplicated with the rectangular pattern.
 * @param ihLine1
 *   The line or linear edge that specifies the pattern first distribution
 *   direction.
 * @param iLine2
 *   The line or linear edge that specifies the pattern second distribution
 *   direction.
 * @param iDir1
 *   The boolean flag indicating if the natural orientation of
 *   <tt>iLine1</tt> used to orientate the pattern operation.
 *   True indicates that <tt>ihMotif</tt> is duplicated in the
 *   direction of the natural orientation of <tt>iLine1</tt>.
 * @param iDir2
 *   The boolean flag indicating if the natural orientation of 
 *   <tt>iLine2</tt> used to orientate the pattern operation.
 *   True indicates that <tt>ihMotif</tt> is duplicated in the 
 *   direction of the natural orientation of <tt>iLine2</tt>.
 * @param iNb1
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   the pattern first direction. <tt>ihMotif</tt> is the first
 *   instance.
 *   <br><b>Legal values</b>: <tt>iNb1</tt> must be greater or equal than 1.
 * @param iNb2
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   the pattern second direction.
 *   <br><b>Legal values</b>: <tt>iNb2</tt> must be greater or equal than 1.
 * @param iStep1
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its first direction.
 *   <br><b>Legal values</b>: <tt>iStep1</tt> must be greater than 0 but not equal to 0.
 * @param iStep2
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its second direction.
 *   <br><b>Legal values</b>: <tt>iStep2</tt> must be greater than 0 but not equal to 0.
 * @param iNu
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along <tt>iLine1</tt>.
 *   <br><b>Legal values</b>: <tt>iNu</tt> must be greater or equal than 1
 *   and less or equal than <tt>iNb1</tt>.
 * @param iNv
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along <tt>iLine2</tt>.
 *   <br><b>Legal values</b>: <tt>iNv</tt> must be greater or equal than 1
 *   and less or equal than <tt>iNb2</tt>.
 * @param iRotationAngle
 *   The angle between the real pattern directions and the two defined directions
 *   <tt>iLine1</tt> and <tt>iLine2</tt>, in case of two defined directions only.
 *   The original feature <tt>ihMotif</tt> is used as the rotation center.
 *   Nevertheless the duplicated shapes are not own rotated.
 * @return The created rectangular pattern.
 */ 
  virtual CATISpecObject_var CreateRectPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var ihLine1,
                                            const CATISpecObject_var ihLine2,
                                            const CATBoolean iDir1, 
                                            const CATBoolean iDir2,
                                            const int iNb1,
                                            const int iNb2,
                                            const double iStep1,
                                            const double iStep2,
                                            const int iNu,
                                            const int iNv,
                                            const double iRotationAngle) = 0;


/**
 * Creates and returns a new surfacic or volumic rectangular pattern.
 * @param ihMotif
 *   The feature to be duplicated with the rectangular pattern.
 * @param ihLine1
 *   The line or linear edge that specifies the pattern first distribution
 *   direction.
 * @param iLine2
 *   The line or linear edge that specifies the pattern second distribution
 *   direction.
 * @param iDir1
 *   The boolean flag indicating if the natural orientation of
 *   <tt>iLine1</tt> used to orientate the pattern operation.
 *   True indicates that <tt>ihMotif</tt> is duplicated in the
 *   direction of the natural orientation of <tt>iLine1</tt>.
 * @param iDir2
 *   The boolean flag indicating if the natural orientation of 
 *   <tt>iLine2</tt> used to orientate the pattern operation.
 *   True indicates that <tt>ihMotif</tt> is duplicated in the 
 *   direction of the natural orientation of <tt>iLine2</tt>.
 * @param iNb1
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   the pattern first direction. <tt>ihMotif</tt> is the first
 *   instance.
 *   <br><b>Legal values</b>: <tt>iNb1</tt> must be greater or equal than 1.
 * @param iNb2
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   the pattern second direction.
 *   <br><b>Legal values</b>: <tt>iNb2</tt> must be greater or equal than 1.
 * @param iStep1
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its first direction.
 *   <br><b>Legal values</b>: <tt>iStep1</tt> must be greater than 0 but not equal to 0.
 * @param iStep2
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its second direction.
 *   <br><b>Legal values</b>: <tt>iStep2</tt> must be greater than 0 but not equal to 0.
 * @param iNu
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along <tt>iLine1</tt>.
 *   <br><b>Legal values</b>: <tt>iNu</tt> must be greater or equal than 1
 *   and less or equal than <tt>iNb1</tt>.
 * @param iNv
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along <tt>iLine2</tt>.
 *   <br><b>Legal values</b>: <tt>iNv</tt> must be greater or equal than 1
 *   and less or equal than <tt>iNb2</tt>.
 * @param iRotationAngle
 *   The angle between the real pattern directions and the two defined directions
 *   <tt>iLine1</tt> and <tt>iLine2</tt>, in case of two defined directions only.
 *   The original feature <tt>ihMotif</tt> is used as the rotation center.
 *   Nevertheless the duplicated shapes are not own rotated.
 * @return The created rectangular pattern.
 */ 
  virtual CATISpecObject_var CreateSurfacicRectPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var ihLine1,
                                            const CATISpecObject_var ihLine2,
                                            const CATBoolean iDir1, 
                                            const CATBoolean iDir2,
                                            const int iNb1,
                                            const int iNb2,
                                            const double iStep1,
                                            const double iStep2,
                                            const int iNu,
                                            const int iNv,
                                            const double iRotationAngle) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateRectPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var ihLine1,
                                            const CATISpecObject_var ihLine2,
                                            const CATBoolean iDir1, 
                                            const CATBoolean iDir2,
                                            const int iNb1,
                                            const int iNb2,
                                            const double iStep1,
                                            const double iStep2,
                                            const int iNu,
                                            const int iNv,
                                            const double iRotationAngle,
                                            const CATLISTV(CATISpecObject_var) iListItem) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateRectPatt (const CATISpecObject_var ihMotif,
                                             const CATISpecObject_var ihPto,
                                             const CATISpecObject_var ihLine1,
                                             const CATISpecObject_var ihLine2,
                                             const CATISpecObject_var ihLine3,
                                             const int Nb1,
                                             const int Nb2,
                                             const int Nb3,
                                             const float Step1,
                                             const float Step2,
                                             const float Step3,
                                             const int Nu,
                                             const int Nv,
                                             const int Nw,
                                             const float AngleXY,
                                             const float AngleYZ,
                                             const float AngleZX) = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateRectPatt (const CATISpecObject_var ihMotif,
                                             const CATISpecObject_var ihPto,
                                             const CATISpecObject_var ihLine1,
                                             const CATISpecObject_var ihLine2,
                                             const CATISpecObject_var ihLine3,
                                             const CATISpecObject_var hNb1Parm,
                                             const CATISpecObject_var hNb2Parm,
                                             const CATISpecObject_var hNb3Parm,
                                             const CATISpecObject_var hStep1Parm,
                                             const CATISpecObject_var hStep2Parm,
                                             const CATISpecObject_var hStep3Parm,
                                             const CATISpecObject_var hNuParm,
                                             const CATISpecObject_var hNvParm,
                                             const CATISpecObject_var hNwParm,
                                             const CATISpecObject_var hAngleXYParm,
                                             const CATISpecObject_var hAngleYZParm,
                                             const CATISpecObject_var hAngleZXParm) = 0;

/**
 * @nodoc 
 */
  virtual CATISpecObject_var CreateCircPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var iPto,
                                            const CATBoolean iSensa, 
                                            const int iNbr,
                                            const int iNba,
                                            const double iStepr,
                                            const double iStepa,
                                            const int iNr,
                                            const int iNa,
                                            const double iRotationAngle,
                                            const CATBoolean iInstRot,
                                            const CATBoolean iCompleteCrown,
																						const int iContext) = 0;

/**
 * Creates and returns a new solid circular pattern.
 * @param ihMotif
 *   The feature to be duplicated with the circular pattern.
 * @param iDir
 *   The line or linear edge that specifies the axis around which duplications
 *   will be rotated relative to each other.
 * @param iPto
 *   The point or vertex that specifies the pattern rotation center.
 * @param iSensa
 *   The boolean flag indicating the natural orientation of 
 *   <tt>iDir</tt> used to orientate the pattern operation.
 *   A value of true indicates that <tt>ihMotif</tt> are duplicated in the 
 *   direction of the natural orientation of <tt>iDir</tt>.
 * @param iNbr
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   pattern radial direction.
 *   <br><b>Legal values</b>: <tt>iNbr</tt> must be greater or equal than 1.
 * @param iNba
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   pattern angular direction.
 *   <br><b>Legal values</b>: <tt>iNba</tt> must be greater or equal than 1.
 * @param iStepr
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its radial direction.
 *   <br><b>Legal values</b>: <tt>iStepr</tt> must be greater than 0 but not equal to 0.
 * @param iStepa
 *   The angle that will separate two consecutive duplications in the pattern
 *   along its angular direction.
 *   <br><b>Legal values</b>: <tt>iStepa</tt> must be greater than 0 but not equal to 0.
 * @param iNr
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along the radial direction.
 * @param iNa
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along the angular direction.
 * @param iRotationAngle
 *   Do not use, iRotationAngle must be already equal to 0.
 * @param iInstRot
 *   The boolean flag that specifies:
 *   <br>True to keep the same orientation of <tt>ihMotif</tt>
 *   for its duplications.
 *   <br>False to orientate the duplications of <tt>ihMotif</tt> same
 *   according to the radial direction.
 * @param iCompleteCrown
 *   The boolean flag specifies the mode of angular distribution.
 *   True indicates that the angular step will be equal to 360 degrees <tt>iNba</tt>.
 * @return The created circular pattern.
 */ 
  virtual CATISpecObject_var CreateCircPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var iPto,
                                            const CATBoolean iSensa, 
                                            const int iNbr,
                                            const int iNba,
                                            const double iStepr,
                                            const double iStepa,
                                            const int iNr,
                                            const int iNa,
                                            const double iRotationAngle,
                                            const CATBoolean iInstRot,
                                            const CATBoolean iCompleteCrown) = 0;

/**
 * Creates and returns a new surfacic or volumic circular pattern.
 * @param ihMotif
 *   The feature to be duplicated with the circular pattern.
 * @param iDir
 *   The line or linear edge that specifies the axis around which duplications
 *   will be rotated relative to each other.
 * @param iPto
 *   The point or vertex that specifies the pattern rotation center.
 * @param iSensa
 *   The boolean flag indicating the natural orientation of 
 *   <tt>iDir</tt> used to orientate the pattern operation.
 *   A value of true indicates that <tt>ihMotif</tt> are duplicated in the 
 *   direction of the natural orientation of <tt>iDir</tt>.
 * @param iNbr
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   pattern radial direction.
 *   <br><b>Legal values</b>: <tt>iNbr</tt> must be greater or equal than 1.
 * @param iNba
 *   The number of times that <tt>ihMotif</tt> will be duplicated along
 *   pattern angular direction.
 *   <br><b>Legal values</b>: <tt>iNba</tt> must be greater or equal than 1.
 * @param iStepr
 *   The distance that will separate two consecutive duplications in the pattern
 *   along its radial direction.
 *   <br><b>Legal values</b>: <tt>iStepr</tt> must be greater than 0 but not equal to 0.
 * @param iStepa
 *   The angle that will separate two consecutive duplications in the pattern
 *   along its angular direction.
 *   <br><b>Legal values</b>: <tt>iStepa</tt> must be greater than 0 but not equal to 0.
 * @param iNr
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along the radial direction.
 * @param iNa
 *   Specifies the position of the original feature <tt>ihMotif</tt>
 *   among its duplications along the angular direction.
 * @param iRotationAngle
 *   Do not use, iRotationAngle must be already equal to 0.
 * @param iInstRot
 *   The boolean flag that specifies:
 *   <br>True to keep the same orientation of <tt>ihMotif</tt>
 *   for its duplications.
 *   <br>False to orientate the duplications of <tt>ihMotif</tt> same
 *   according to the radial direction.
 * @param iCompleteCrown
 *   The boolean flag specifies the mode of angular distribution.
 *   True indicates that the angular step will be equal to 360 degrees <tt>iNba</tt>.
 * @return The created circular pattern.
 */
  virtual CATISpecObject_var CreateSurfacicCircPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var iPto,
                                            const CATBoolean iSensa, 
                                            const int iNbr,
                                            const int iNba,
                                            const double iStepr,
                                            const double iStepa,
                                            const int iNr,
                                            const int iNa,
                                            const double iRotationAngle,
                                            const CATBoolean iInstRot,
                                            const CATBoolean iCompleteCrown) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateCircPatt(const CATISpecObject_var ihMotif,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var iPto,
                                            const CATBoolean iSensa, 
                                            const int iNbr,
                                            const int iNba,
                                            const double iStepr,
                                            const double iStepa,
                                            const int iNr,
                                            const int iNa,
                                            const double iRotationAngle,
                                            const CATBoolean iInstRot,
                                            const CATBoolean iCompleteCrown,
                                            const CATLISTV(CATISpecObject_var) iListItem) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateCircPatt(const CATISpecObject_var ihItem,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var iPto,
                                            const CATBoolean Sensa, 
                                            const int Nbr,
                                            const int Nba,
                                            const double Stepr,
                                            const double Stepa,
                                            const int Nr,
                                            const int Na,
                                            const double AngleXY,
                                            const CATBoolean InstRot) = 0;
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateCircPatt(const CATISpecObject_var ihItem,
                                            const CATISpecObject_var iDir,
                                            const CATISpecObject_var ihPto,
                                            const CATISpecObject_var hNbrParm,
                                            const CATISpecObject_var hNbaParm,
                                            const CATISpecObject_var hSteprParm,
                                            const CATISpecObject_var hStepaParm,
                                            const CATISpecObject_var hNrParm,
                                            const CATISpecObject_var hNaParm,
                                            const CATISpecObject_var hAngleXY,
                                            const CATISpecObject_var hInstRot) = 0;
 
/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateSite () = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateGenerativeTool () = 0;

	/** @nodoc */
  virtual CATISpecObject_var CreatePatternSpacing () = 0;

	/** @nodoc */
  virtual CATISpecObject_var CreateRectPatternSpacing () = 0;



/**
 * Creates and returns a new solid user pattern.
 * @param ihMotif
 *   The feature to be duplicated by the user pattern.
 * @param iNbCopy
 *   The number of times that <tt>ihMotif</tt> will be duplicated.
 * @param iObjectList
 *   The list must be composed of one sketch of points to locate duplications. 
 * @param ihStepElt
 *   Do not use, ihStepElt must be equal to NULL_var.
 * @return The created user pattern.
 */ 
  virtual CATISpecObject_var CreateUserPatt(const CATISpecObject_var ihMotif,
				                            const int iNbCopy,
				                            const CATLISTV(CATISpecObject_var) iObjectList,
                                            const CATISpecObject_var ihStepElt) = 0;
/**
 * Creates and returns a new surfacic or volumic user pattern.
 * @param ihMotif
 *   The feature to be duplicated by the user pattern.
 * @param iNbCopy
 *   The number of times that <tt>ihMotif</tt> will be duplicated.
 * @param iObjectList
 *   The list must be composed of one sketch of points to locate duplications. 
 * @param ihStepElt
 *   Do not use, ihStepElt must be equal to NULL_var.
 * @return The created user pattern.
 */ 
  virtual CATISpecObject_var CreateSurfacicUserPatt(const CATISpecObject_var ihMotif,
				                            const int iNbCopy,
				                            const CATLISTV(CATISpecObject_var) iObjectList,
                                            const CATISpecObject_var ihStepElt) = 0;

/** 
 * @nodoc 
 */   
  virtual CATISpecObject_var CreateUserPatt(const CATISpecObject_var ihMotif,
				                            const int iNbCopy,
				                            const CATLISTV(CATISpecObject_var) iObjectList,
                                            const CATISpecObject_var ihStepElt,
																						const CATLISTV(CATISpecObject_var) iListItem) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateAffin (const CATISpecObject_var ihRefPoint, const double iFactor) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateScaling (const CATISpecObject_var ihRefPoint, const double iFactor) = 0;

/** @nodoc
 * Creates and returns a RemoveFace feature.
 * @param ihKeepFace
 *	The list of the faces to keep on the solid.
 * @param ihRemoveFace
 *	The list of the faces to remove from the solid.
 * @return The created RemoveFace feature.
 */
  virtual CATISpecObject_var CreateRemoveFace (const CATLISTV(CATISpecObject_var)* ihKeepFace, 
                                               const CATLISTV(CATISpecObject_var)* ihRemoveFace) = 0;

/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateBlend() = 0;


/** 
 * @nodoc 
 */ 
  virtual CATISpecObject_var CreateRemovedBlend() = 0;


/**
 * Creates and returns a Scaling feature.
 * @param ihToScale
 *	The object on which scaling will be applied.
 * @param ihReference
 *	The scaling reference element.
 * @param ihRatio
 *	The scaling ratio.
 * @return The created Scaling feature.
 */
  virtual CATISpecObject_var CreateScaling(const CATISpecObject_var ihToScale,
                                           const CATISpecObject_var ihReference,
                                           const CATICkeParm_var ihRatio) = 0;

/**
 * Creates and returns a Rotate feature.
 * @param ihToRotate
 *	The object on which rotate will be applied.
 * @param ihAxis
 *	The rotation axis.
 * @param ihAngle
 *	The rotation angle.
 * @return The created Rotate feature.
 */
  virtual CATISpecObject_var CreateRotate(const CATISpecObject_var ihToRotate,
                                           const CATISpecObject_var ihAxis,
                                           const CATICkeParm_var ihAngle) = 0;

/**
 * Creates and returns a Symmetry feature.
 * @param ihSpec
 *	The object on which symmetry will be applied.
 * @param ihPlane
 *	The plane used as mirroring element.
 * @return The created Symmetry feature.
 */
  virtual CATISpecObject_var CreateSymmetry  ( const CATISpecObject_var  ihSpec,
                                               const CATISpecObject_var  ihPlane)=0;

/**
 * Creates and returns a Translate feature.
 * @param ihSpecToTranslate
 *	The object on which translation will be applied.
 * @param ihDirection
 *	The translation direction.
 * @param ihDistance
 *	The translation length.
 * @return The created Symmetry feature.
 */
  virtual CATISpecObject_var CreateTranslate  ( const CATISpecObject_var  ihSpecToTranslate,
                       const CATIGSMDirection_var  ihDirection,
                       const CATICkeParm_var 	 ihDistance)=0;
/** @nodoc */
  virtual CATISpecObject_var CreateLimitingElement () =0;

  /** @nodoc */
  
  virtual CATISpecObject_var CreateSolidCombine(const CATISpecObject_var& ihFirstProf, 
                                                const CATISpecObject_var& ihSecondProf) = 0;
  
  /** 
  * Creates and returns a Draft feature in volumic context.
  */
  virtual CATISpecObject_var CreateVolumicDraftAngle () =0;

  /**
 * Creates and returns a volumic draft feature.
 * Drafts are defined on molded parts to make them easier to remove from molds.
 * @param ihSupportToDraft
 *   The list of faces to be drafted.
 *    <br><b>Legal values</b>: The CATISpecObject_var must be a face.
 *    <br>NULL_var value is not allowed.
 * @param iBid1
 *    Not used. Must be set to 0.
 * @param ihNeutral
 *    The neutral element.
 *    The intersection of this element and the faces to be drafted,
 *    defines a neutral curve on which the drafted face will lie.
 *    This element will remain the same during the draft.
 *    The neutral element and parting element may be the same element. 
 *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
 *    <br>NULL_var value is not allowed.
 * @param iBid2
 *    Not used. Must be set to 0.
 * @param ihParting
 *    The parting element.
 *    This element cuts the faces to be drafted in two and one portion is drafted according to its
 *    previously defined pulling direction.
 *    The parting element and neutral element may be the same element.
 *    <br><b>Legal values</b>: The CATISpecObject_var could be a plane, a face or a surface.
 *    <br>NULL_var value means the draft has <b>no</b> parting element.
 * @param iPullDir
 *     The pulling direction.
 *     This is the direction in which the mold will be removed from the part.
 * @param ihPullDirSpec
 *     The pulling direction reference.
 *     <br><b>Precondition</b>: If you used a reference, you must set the pulling direction iPullDir with the
 *     CATMathDirection of the reference.
 *    <br><b>Legal values</b>: The CATISpecObject_var is either
 *    <tt>a plane or a planar face or a planar surface</tt>  the pulling direction is normal to this element,
 *    <tt>a line or a linear edge</tt> the pulling direction is the direction of the element.
 *    <tt>NULL_var</tt> there is no pulling direction reference.
 * @param iMode
 *	  The draft mode (standard or reflectline).
 *    <br><b>Legal values</b>: The Draft mode is either
 *	  <tt>0</tt> standard (the draft's neutral element must be input).
 *	  <tt>1</tt> reflectline (the draft's neutral element is computed as the reflect line).
 * @param iAngle
 *    The draft angle value.
 *    <br><b>Legal values</b>: Angle between -90 degrees (not included) and +90 degrees (not included).
 *    The value should be set in degree.
 * @param iBid4
 *    Not used. Must be set to 0.
 * @param hSupport
 *    The volumic feature to be operated.
 * @return The created volumic draft.
 */
  virtual CATISpecObject_var CreateVolumicDraft (const CATLISTV(CATISpecObject_var)* ihSupportToDraft,
	  const int iBid1,
	  const CATISpecObject_var ihNeutral,
	  const int iBid2,
	  const CATISpecObject_var ihParting,
	  const CATMathDirection iPullDir, 
	  const CATISpecObject_var ihPullDirSpec,
	  const int  iMode,
	  const double iAngle,
	  const int iBid4,
    const CATISpecObject_var hSupport) = 0;

  /**
 * Creates and returns a volumic shell feature.
 * @param ihVolume
 *	The volumic feature to be operated.
 * @param ihObjectList
 *	The list of the faces which corresponds to the shell openings.
 * @param iIntOffset
 *	The internal offset value.
 * @param iExtOffset
 *	The external offset value. 
 * @return The created shell feature.
 */
  virtual CATISpecObject_var CreateVolumicShell (const CATISpecObject_var ihVolume, const CATLISTV(CATISpecObject_var)* ihObjectList, double iIntOffset, double iExtOffset) = 0;

  /**
 * Creates and returns an AxisToAxis transformation feature.
 * @param ihToTransform
 *	The object on which AxisToAxis transformation will be applied.
 * @param ihReferenceAxis
 *	The refrence axis.
 * @param ihTargetAxis 
 *	The target axis.
 * @return The created AxisToAxis feature.
 */
  virtual CATISpecObject_var CreateAxisToAxis(
                                              const CATISpecObject_var& ihToTransform,
                                              const CATISpecObject_var& ihReferenceAxis,
                                              const CATISpecObject_var& ihTargetAxis ) = 0;

  /**
 * Creates and returns an Affinity feature.
 * @param ihElemToTransfor
 *  The object on which Affinity transformation will be applied.
 * @param ihAxisOrigin
 *  Origin for the affinity.
 * @param ihAxisPlane
 *  Plane for the affinity.
 * @param ihAxisFirstDirection
 *  Direction for the affinity.
 * @param ihRatioX
 *  XRatio Value for the affinity.
 * @param ihRatioY
 *  YRatio Value for the affinity.
 * @param ihRatioZ
 *  ZRatio Value for the affinity.
 * @return The created Affinity feature.
 */

  virtual CATISpecObject_var CreateAffinity(
                                              const CATISpecObject_var& ihElemToTransfor,
                                              const CATISpecObject_var& ihAxisOrigin,
                                              const CATISpecObject_var& ihAxisPlane,
                                              const CATISpecObject_var& ihAxisFirstDirection,
                                              const CATICkeParm_var& ihRatioX,
                                              const CATICkeParm_var& ihRatioY,
                                              const CATICkeParm_var& ihRatioZ) = 0;

/**
 * Creates and returns a RemoveFace feature as per the given context.
 * @param ihKeepFace
 *	      The list of the faces to keep on the solid.
 * @param ihRemoveFace
 *	      The list of the faces to remove from the solid.
 * @param ihSupport
 *	      Support feature in case of Surfacic or Volume Remove Face feature.
 * @param iContext
 *	      1 = Surface feature 4 = Volume feature.
 * @return The created RemoveFace feature.
 */
  virtual CATBaseUnknown_var CreateRemoveFace (const CATLISTV(CATBaseUnknown_var)* ipKeepFace, 
                                               const CATLISTV(CATBaseUnknown_var)* ipRemoveFace,
																							 const CATBaseUnknown_var &ihSupport, 
																							 const int iContext) = 0;

  /** 
  * Creates and returns a LimitedFace feature(Internal Feature).
  * @param iLimitingFace
  *	       The face to be limited.
  * @param iLimitingFaceSupport
  *	       The limiting support.
  * @param iOrientation
  *	       The orientation for limiting element.
  * @return The created LimitedFace feature.
  */
  virtual CATISpecObject_var CreateLimitedFace ( const CATISpecObject_var& iLimitingFace,
                                                 const CATISpecObject_var& iLimitingFaceSupport,
                                                 const int iOrientation = 1) = 0;

/**
@nodoc
 * Creates and returns a Surfacic sewing feature.
 * @param Type
 *  Must be set to 1.
 * @param ihSurface
 *	The Surfacic feature to be operated upon.
 * @param ihSewingPlane
 *	The surfacic feature to be sewn to perform the sewing operation.
 * @param iSewingType
 *	Represents the side to be kept after the sewing operation.
 *	<br><b>Legal values</b>: <tt>iSewingType</tt> equals PositiveSide 
 *	or NegativeSide.
 *	The PositiveSide value refers to the same orientation as the sewing
 *	element normal vector.
 *	The NegativeSide value refers to the opposite orientation as the sewing
 *	element normal vector.
 * @return the created sewing feature.
 */
	virtual CATBaseUnknown_var CreateSurfacicSewing (const int& Type, const CATBaseUnknown_var& hSurface, const CATBaseUnknown_var &ihSewingPlane, const CATPrtSplitType iSewingType) = 0;

 /**
 * @nodoc 
 */ 
  virtual CATIRevolLimit_var CreateRevolLimit(double Dim = 0, const CATUnicodeString& ustrName = "") = 0; 

/** @nodoc */
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihLimit,
                                         const CATISpecObject_var ihSketch,
                                         const CATISpecObject_var ihDirection,
                                         const CATISpecObject *ipTopLimitFace) = 0;                
/**
 * Creates and returns a new hole feature. 
 * @param ihSurface
 *      Selected face or plane used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param ipTopLimitFace
 *      Selected relimited face used as top limit for the hole feature.
 *      Hole feature will be extended on top side until the "ihTopLimitFace" face.
 *      
 *      Suppose, Surface.1 is rectangular surface and which is divided(or modified) into two part as Face.1 and Face.2 due to pocket on it. 
 *      In this example, Face.1 or Face.2 are the relimited face and these can be provided as "ipTopLimitFace".
 * @return 
 *   The hole feature.
 */
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection,
                                         const CATISpecObject *ipTopLimitFace) = 0;
/**
 * Creates and returns a new hole feature. 
 * @param iMathPoint
 *      Coordinates of the point uses to locate the hole feature on its support. 
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param IsPointOnSurface
 * <br>     = 0 if iMathPoint doesn't lay down support (ihSurface).
 * <br>     = 1 if iMathPoint lays down support (ihSurface).
 * @param ipTopLimitFace
 *      Selected relimited face used as top limit for the hole feature.
 *      Hole feature will be extended on top side until the "ihTopLimitFace" face.
 *      
 *      Suppose, Surface.1 is rectangular surface and which is divided(or modified) into two part as Face.1 and Face.2 due to pocket on it. 
 *      In this example, Face.1 or Face.2 are the relimited face and these can be provided as "ipTopLimitFace".
 * @return 
 *   The hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATMathPoint     & iMathPoint,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection,
                                         const int IsPointOnSurface,
                                         const CATISpecObject *ipTopLimitFace) = 0;
/**
 * Creates and returns a new hole feature. 
 * @param ihPoint
 *      Selected point uses to locate the hole feature on its support  
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param IsPointOnSurface
 * <br>     = 0 if ihPoint does not lay down support (ihSurface).
 * <br>     = 1 if ihPoint lays down support (ihSurface).
 * @param ipTopLimitFace
 *      Selected relimited face used as top limit for the hole feature.
 *      Hole feature will be extended on top side until the "ihTopLimitFace" face.
 *      
 *      Suppose, Surface.1 is rectangular surface and which is divided(or modified) into two part as Face.1 and Face.2 due to pocket on it. 
 *      In this example, Face.1 or Face.2 are the relimited face and these can be provided as "ipTopLimitFace".
 * @return 
 *   The Hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATISpecObject_var ihPoint,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var ihDirection,
                                         const int IsPointOnSurface,
                                         const CATISpecObject *ipTopLimitFace) = 0;
/**
 * Creates and returns a new hole feature. 
 * This method creates a constraint in positionning sketch between
 * hole origine and selected edge .
 * @param iMathPoint
 *      Coordinates of the point uses to locate the hole feature on its support. 
 * @param ihFirstEdge
 *      First selected edge.
 * @param ihSecndEdge
 *      Second selected edge.
 * @param ihSurface
 *      Selected face used as support for the hole feature.
 * @param ihDirection
 *      Selected direction.
 * @param ipTopLimitFace
 *      Selected relimited face used as top limit for the hole feature.
 *      Hole feature will be extended on top side until the "ihTopLimitFace" face.
 *      
 *      Suppose, Surface.1 is rectangular surface and which is divided(or modified) into two part as Face.1 and Face.2 due to pocket on it. 
 *      In this example, Face.1 or Face.2 are the relimited face and these can be provided as "ipTopLimitFace".
 * @return 
 *   The hole feature.
 */ 
  virtual CATISpecObject_var CreateHole (const CATMathPoint     & iMathPoint,
                                         const CATISpecObject_var ihFirstEdge,
                                         const CATISpecObject_var ihSecndEdge,
                                         const CATISpecObject_var ihSurface,
                                         const CATISpecObject_var iDirection,
                                         const CATISpecObject *ipTopLimitFace) = 0;

/** @nodoc */
  virtual CATISpecObject_var CreateOffsetSubElemSkin () = 0;
};


CATDeclareHandler(CATIPrtFactory, CATBaseUnknown); 

#endif // CATIPrtFactory_H
