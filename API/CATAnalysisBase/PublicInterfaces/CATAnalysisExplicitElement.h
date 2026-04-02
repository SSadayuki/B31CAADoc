// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitElement
//
//=============================================================================
//
// Usage Notes: Services linked to the field model entities.
//
//=============================================================================
#ifndef CATAnalysisExplicitElement_H_
#define CATAnalysisExplicitElement_H_

#include "CATAnalysisExplicitEntity.h"

class CATString;
class CATMathVector;
class CATMSHElement;
class CATIMSHConnectivity;
class CATMSHGeometricalEngine;
class CATAnalysisExplicitAxis;
class CATAnalysisExplicitNode;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model element.
 * This object is used to provide services common to objects of the field model
 * which can represent the Meshing Elements and their physical behavior.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitElement : public CATAnalysisExplicitEntity
{
   private :
      CATMSHElement *_MSHElement ;

      virtual void    Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitElement() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitElement(const CATAnalysisExplicitElement &iElement) ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitElement(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitElement &operator = (const CATAnalysisExplicitElement &iElement) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitElement &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Create the field model representation of a mesh element.
 * @param iElementSet
 *    The parent element set.
 * @param iMeshElement
 *    The mesh Element pointer.
 * @param iElementPhysicalType
 *    The physical type of the element.
 */
	  HRESULT CreateElement(CATAnalysisExplicitSet  &iElementSet,
                          CATMSHElement            *iMeshElement,
                          CATSamPhysicalType       iElementPhysicalType);

/**
 * Links the current object with a field model element based on its pointer.
 * @param iExplicitPtr
 *   The pointer to the field model object.
 * @param iModel
 *   A pointer to the field model.
 */
    HRESULT LinkWithPointer(CATSamExplicitPtr iExplicitPtr, const CATAnalysisExplicitModel *iModel) ;

/**
 * Returns the tag (ie unique identifier) of the mesh element object.
 * @param oMeshTag
 *   The mesh Element tag.
 */
      HRESULT GetMeshTag(unsigned int &oMeshTag) const ;

/**
 * Links the current object with a field model element based on a mesh element tag.
 * @param iMeshTag
 *   The tag of the mesh Element.
 * @param iModel
 *   A pointer to the field model.
 */
      HRESULT LinkWithMeshTag(unsigned int iMeshTag, const CATAnalysisExplicitModel *iModel) ;

/**
 * Returns the pointer of the mesh Element object.
 * @return the mesh pointer.
 */
      CATMSHElement *GetMeshPointer(void) const ;

/**
 * Retrieves the link to the current object with a field model Element based on a mesh pointer.
 * @param iMeshPointer
 *   The pointer of the mesh Element.
 * @param iModel
 *   A pointer to the field model.
 */
      HRESULT LinkWithMeshPointer(CATMSHElement *iMeshPointer, const CATAnalysisExplicitModel *iModel) ;

/**
 * Creates the link to the current unlinked explicit element with an element mesh pointer.
 * @param iMeshElement
 *   The pointer of the mesh Element.
 *   This Mesh Element must be undeleted, not linked to any Explicit Element.
 *   This Explicit Element must not be linked to any Mesh ELement.
 */
      HRESULT SetMeshPointer(CATMSHElement *iMeshElement);

/**
 * Returns the number of linked Nodes.
 * @param oNumber  The number of linked Nodes.
 */
      HRESULT GetNumberOfLinkedNodes(int &oNumber) const ;

/**
 * Returns the number of principal linked Nodes.
 * @param oNumber The number of principal linked Nodes.
 */
      HRESULT GetNumberOfPrincipalLinkedNodes(int &oNumber) const ;

/**
 * Returns the linked Nodes to the Element.
 * @param oLinkedNodes  The linked Nodes.<br>
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 * @see CATAnalysisExplicitNode
 */
      HRESULT GetLinkedNodes(CATSamExplicitPtr * (&oLinkedNodes)) const ;

/**
 * Returns the number of available position.
 * They are defined according to a position identifier.
 * @param iPosition
 *   The position identifier.
 * @param oNumber
 *   The number of available position.
 */
      HRESULT GetNumberOfAvailablePosition(const CATString &iPosition, int &oNumber) const ;

/**
 * Returns the mesh connectivity.
 * @param oMshConnectivity
 *   The Connectivity.
 * <br><b>Lifecycle rules deviation</b>: No AddRef is done on returned value.
 */
      HRESULT GetConnectivity(CATIMSHConnectivity * (&oMshConnectivity)) const;

/**
 * Returns the GeometricalEngine.
 * @param oMshGeometricalEngine
 *   The GeometricalEngine.
 */
      HRESULT GetGeometricalEngine(CATMSHGeometricalEngine * (&oMshGeometricalEngine)) const;

/**
 * Returns the CATAnalysisExplicitAxis attached to.
 * @param oNbLocalAxis
 *   The number of attached <b>CATAnalysisExplicitAxis</b>. It can be either 1, the <b>CATAnalysisExplicitAxis</b>
 *   is defined for the whole <b>CATAnalysisExplicitElement</b>, either N, the N <b>CATAnalysisExplicitAxis</b> are defined for
 *   each of the N node of the <b>CATAnalysisExplicitElement</b>.
 * @param oAxis
 *   The <b>CATAnalysisExplicitAxis</b>.
 * @see CATAnalysisExplicitAxis
 */
      HRESULT GetAttachedLocalAxis(int &oNbLocalAxis, CATAnalysisExplicitAxis * (&oAxis)) const;

/**
 * Returns intrinsic coordinates according to a position identifier, and a position number.
 * In case of the position is invalid, the method return the origin coordinates.
 * @param iPosition  The position identifier.
 * @param iPositionNumber The position number.
 * @param isValid   Returns TRUE if the position is valid.
 * @param oCoordinates
 * The coordinates of the computed position.
 */
      HRESULT GetPositionCoordinates(const CATString  &iPosition,
                                     int               iPositionNumber,
                                     CATBoolean       &isValid,
                                     float             oCoordinates[3]) const;

/**
 * Returns intrinsic coordinates according to a position identifier, and a position number.
 * In case of the position is invalid, the method return the origin coordinates.
 * @param iPosition The position identifier.
 * @param iPositionNumber The position number.
 * @param isValid  Returns TRUE if the position is valid.
 * @param oCoordinates
 *   The coordinates of the computed position.
 */
      HRESULT GetPositionCoordinates(const CATString  &iPosition,
                                     int               iPositionNumber,
                                     CATBoolean       &isValid,
                                     double            oCoordinates[3]) const;

/**
 * Returns internal coordinates according to parametric parameter.
 * In case of the position is invalid, the method return the origin coordinates.
 * @param iUVW
 *   The UVW parameters.
 * @param isValid
 *   Returns TRUE if the position is valid..
 * @param oCoordinates
 *   The coordinates of the computed position.
 */
      HRESULT GetPositionCoordinates(const float iUVW[3], CATBoolean &isValid, float oCoordinates[3]) const;

/**
 * Returns internal coordinates according to parametric parameter.
 * In case of the position is invalid, the method return the origin coordinates.
 * @param iUVW            The UVW parameters.
 * @param isValid         Returns TRUE if the position is valid.
 * @param oCoordinates    The coordinates of the computed position.
 */
      HRESULT GetPositionCoordinates(const float iUVW[3], CATBoolean &isValid, double oCoordinates[3]) const;

/**
 * Returns the definition of the local axis.
 * In case of the local axis can not be computed, the method return the Global Axis.
 * @param iPosition
 *   The position identifier.
 * @param iPositionNumber
 *   The position number.
 * @param isAttached
 *   Returns TRUE if a local axis is attached..
 * @param oVecU  The U Vector of the local axis.
 * @param oVecV  The V Vector of the local axis.
 * @param oVecW  The W Vector of the local axis.
 */
      HRESULT GetAttachedLocalAxis(const CATString  &iPosition,
                                   int               iPositionNumber,
                                   CATBoolean       &isAttached,
                                   CATMathVector    &oVecU,
                                   CATMathVector    &oVecV,
                                   CATMathVector    &oVecW) const;

/**
 * Returns the definition of the implicit axis.
 * according to a position identifier, and a position number.<br>
 * In case of the implicit axis can not be computed, the method return the Global Axis.
 * @param iPosition
 *   The position identifier.
 * @param iPositionNumber
 *   The position number.
 * @param isEvaluated
 *   Returns TRUE if a implicit axis can be evaluated.
 * @param oVecU  The U Vector of the implicit local axis.
 * @param oVecV  The V Vector of the implicit local axis.
 * @param oVecW  The W Vector of the implicit local axis.
 */
      HRESULT GetImplicitLocalAxis(const CATString  &iPosition,
                                   int               iPositionNumber,
                                   CATBoolean       &isEvaluated,
                                   CATMathVector    &oVecU,
                                   CATMathVector    &oVecV,
                                   CATMathVector    &oVecW) const;

/**
 * Returns the definition of the local axis.
 * This is done according to a position identifier, and a position number.<br>
 * In case of the current instance have a local axis attached the definition of this local axis will be
 * returned, else if an implicit axis can be computed the definition of this implicit axis will be
 * returned, otherwise the method return the Global Axis.
 * @param iPosition
 *   The position identifier.
 * @param iPositionNumber
 *   The position number.
 * @param isEvaluated
 *   Returns TRUE if a local or an implicit can be evaluated.
 * @param oVecU  The U Vector.
 * @param oVecV  The V Vector.
 * @param oVecW  The W Vector..
 */
      HRESULT GetLocalAxis(const CATString  &iPosition,
                           int               iPositionNumber,
                           CATBoolean       &isEvaluated,
                           CATMathVector    &oVecU,
                           CATMathVector    &oVecV,
                           CATMathVector    &oVecW) const;
/**
 * Returns if a local axis can be evaluated.
 * @param oIsValid
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">TRUE</font color="red"> if a local axis is valid.</li>
 * <li><font color="red">FALSE</font color="red"> if a local axis can not be computed.</li></ul>
 */
      HRESULT CanEvaluateLocalAxis(CATBoolean &oIsValid) const;

/**
 * Returns if a local axis is attached.
 * @param oHadLocalAxis
 * <ul>
 * <li><font color="red">TRUE</font color="red"> if a local axis is defined.</li>
 * <li><font color="red">FALSE</font color="red"> if no local axis  is defined.</li></ul>
 */
      HRESULT HaveAttachedLocalAxis(CATBoolean &oHadLocalAxis) const;

};

#endif
