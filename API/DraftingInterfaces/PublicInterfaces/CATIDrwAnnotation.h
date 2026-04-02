#ifndef CATIDrwAnnotation_H
#define CATIDrwAnnotation_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include "CATBaseUnknown.h"
#include "CATDrwDimDefine.h"
#include "CATDrwAssDefs.h" // INCLUDE_AUTORISE
#include "booleanDef.h" // INCLUDE_AUTORISE

class CATIDrwAssociativePosition_var;
class CATIDrwAssociativeOrientation_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAnnotation ;
#else
extern "C" const IID IID_CATIDrwAnnotation ;
#endif

/**
* Interfaces to handle position, orientation and associativity of Annotation object.
*/
class ExportedByDraftingItfCPP CATIDrwAnnotation : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
  * @nodoc
  */
  virtual void InitPosition(double   iXPos , double   iYPos , double iAngle) = 0;
  
  /**
  * Returns the anchor position of an annotation.
  */
  virtual void GetPosition (double & oXPos , double & oYPos ) = 0;
  /**
  * Set the anchor position of an annotation.
  */
  virtual void SetPosition (double   iXPos , double   iYPos ) = 0;
  /**
  * Moves the anchor position of an annotation.
  * @param ideltaX,ideltaY
  * Relative vector.
  */
  virtual void Move(double ideltaX, double ideltaY) = 0;
  
  /**
  * Returns the angle of an annotation.
  */
  virtual double GetOrientation() = 0;
  /**
  * Sets the angle of an annotation.
  */
  virtual void   SetOrientation(double iAngle) = 0;
  /**
  * Rotates an annotation.
  */
  virtual void   Rotate(double iDeltaAngle) = 0;
  
  /**
  * @nodoc
  */
  virtual HRESULT GetAssociativePosition(CATIDrwAssociativePosition_var & opos) =0;
  /**
  * @nodoc
  */
  virtual HRESULT SetAssociativePosition(CATIDrwAssociativePosition_var & ipos) =0;



  /**
  * Gets element on which associativity orientation link has been created.
  * @param iRef
  *    Element Pointed by annotation
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  * @return
   * <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Element has been found
   * <dt> <tt>E_FAIL</tt>   <dd> No element found or element coming from generative geometry
   * </dl>
   */
  virtual HRESULT GetAssociativeOrientation(CATBaseUnknown * &oRef,CATAssProjectingMode &oProjMode) = 0;

  /**
  * Puts orientation link between the annotation and a reference.
  * @param iRef
  *    The reference. All elements which implements the CATIDrwMarkupable interface can
  *    be used (annotations, geometry, ...).
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  *    <br>Default : projected on the curve.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Orientation link has been created
  * <dt> <tt>E_FAIL</tt>   <dd> No orientation link created
  * </dl>
  */
    virtual HRESULT SetAssociativeOrientation(CATBaseUnknown * iRef,CATAssProjectingMode iProjMode=Ass_Contour) = 0;


  /**
  * Gets element on which positional link has been created.
  * @param iRef
  *    Element Pointed by annotation
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Element has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No element found or element coming from generative geometry
  * </dl>
  */
  virtual HRESULT GetAssociativePosition(CATBaseUnknown  * &oRef,CATAssProjectingMode &oProjMode) = 0;

  /**
  * Puts a positional link between the annotation and a reference.
  * @param iRef
  *    The reference. All elements which implements the CATIDrwMarkupable interface can
  *    be used (annotations, geometry, ...).
  * @param iDelta
  *    Represents the distance between the reference and the annotation.
  *    <br>Only taken into account when iComputeDelta = FALSE.
  * @param iComputeDelta
  *    TRUE (default) : the current position of the annotation is taken to compute a delta.
  *      The annotation will not move when using this behavior.
  *<br>FALSE : The anchor point of the annotation is projected on the reference and 
  *    iDelta is used. The annotation may move when using this behavior.
  * @param iPosBehavior
  *    Relative or absolute.
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  *    <br>Default : projected on the curve.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Positional link has been created
  * <dt> <tt>E_FAIL</tt>   <dd> No positional link created
  * </dl>
  */
  virtual HRESULT SetAssociativePosition(CATBaseUnknown * iRef,
    double iDelta=0.0, boolean iComputeDelta=TRUE, 
    CATAssPositioningBehavior iPosBehavior=Ass_Relative,
    CATAssProjectingMode iProjMode=Ass_Contour) = 0;
  
  /**
  * @nodoc
  */
  virtual HRESULT GetAssociativeOrientation(CATIDrwAssociativeOrientation_var & oori) =0;
  /**
  * @nodoc
  */
  virtual HRESULT SetAssociativeOrientation(CATIDrwAssociativeOrientation_var & iori) =0;  
};
CATDeclareHandler(CATIDrwAnnotation, CATBaseUnknown);
#endif
