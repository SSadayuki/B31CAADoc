#ifndef CATIDrwAnnotationComponent_H
#define CATIDrwAnnotationComponent_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
#include "CATIDrwAnnotation.h"

#include "CATDftTextBoxDisplay.h"
class CATIDrwTextStyle_var;
class CATIDrwAnnFrame_var;
class CATMathPoint2D;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwAnnotationComponent;
#else
extern "C" const IID IID_CATIDrwAnnotationComponent;
#endif

/**
 *  @nodoc
 */
#define DrwOrientSheet   0
/**
 *  @nodoc
 */
#define DrwOrientView    1
/**
 *  @nodoc
 */
#define DrwOrientElement 2

/**
* Interfaces to handle global aspects of annotation object.
*/
class ExportedByDraftingItfCPP CATIDrwAnnotationComponent : public CATIDrwAnnotation
{
  CATDeclareInterface;
  
public:
  
  /** 
  * @nodoc
  */
  virtual void SetGlobalTextStyle(CATIDrwTextStyle_var GlobalTextStyle) = 0;
  /** 
  * @nodoc
  */
  virtual CATIDrwTextStyle_var GetGlobalTextStyle() = 0;
  
  /** 
  * Set the orientation reference of an annotation.
  * @param OrientReference
  * <br>0 : Sheet orientation
  * <br>1 : View orientation
  */
  virtual void SetOrientationReference(int OrientReference) = 0;
  /** 
  * Returns the orientation reference of an annotation.
  * @return
  * <br>0 : Sheet orientation
  * <br>1 : View orientation
  */
  virtual int GetOrientationReference() = 0;
  
  /** 
  * @nodoc
  */
  virtual int Build() = 0;
  /** 
  * @nodoc
  */
  virtual int UpdateLeader () = 0;
  
  /** 
  * @nodoc
  */
  virtual CATIDrwAnnFrame_var GetGlobalFrame() = 0; 
  /** 
  * @nodoc
  */
  virtual void SetGlobalFrame(CATIDrwAnnFrame_var GlobalTextFrame) = 0; 
  
  /** Returns characteristic points of the text included in a AnnotationComponent.
  * <br>Note :
  * <pre>
  * oPt3 -------------- oPt4
  *      !  T e x t   !
  * oPt1 -------------- oPt2
  * </pre>
  * The points are computed without leaders but the Frame is included
  */
  virtual void GetTextBox(CATMathPoint2D & oPt1, CATMathPoint2D & oPt2, 
    CATMathPoint2D & oPt3, CATMathPoint2D & oPt4) = 0; 
/**
  * Used to manage the display mode of the annotation value.
  * @param iModeDisplay
  * @see CATDftTextBoxDisplay
  */
   virtual HRESULT SetTextBoxDisplay (CATDftTextBoxDisplay iModeDisplay) = 0;
   
/**
  * Used to read the display mode of the annotation value.
  * @param oModeDisplay
  * @see CATDftTextBoxDisplay
  */
   virtual HRESULT GetTextBoxDisplay (CATDftTextBoxDisplay &oModeDisplay) = 0;
};
CATDeclareHandler(CATIDrwAnnotationComponent, CATIDrwAnnotation);
#endif 
