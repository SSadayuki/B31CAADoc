#ifndef CAT3DAxisRep_H
#define CAT3DAxisRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CAT3DRep.h"
#include "CATViz.h"

class CAT3DAnnotationTextGP;
class CAT3DFixedArrowGP;
class CAT4x4Matrix;
class CATVisuController;
  
/**
 * Class to create the representation of an axis system.
 * <b>Role</b>: view an axis system, possibly with arrow tips and labels.
 */
class ExportedByCATViz CAT3DAxisRep : public CAT3DRep
{
  friend class CATMarshallable3DAxisRep;
  friend class CATDmuStream3DAxisRep;
  CATDeclareClass;

public :

  virtual ~CAT3DAxisRep();

  /** Constructs the representation of an axis system. */
  CAT3DAxisRep();
#ifdef CATIAV5R26  
  /** Constructs the representation of an axis system. */
  static CAT3DAxisRep* CreateRep();

  /** Constructs the representation of an axis system.
   *  @param iMatrix
   *  The matrix defining the origin and the three directions of the axis system.
   *  @param iArrowShaftLength
   *  The length of the arrow shaft in mm.
   *  @param iArrowTipLength
   *  The length of the arrow tip in mm.
   */
  static CAT3DAxisRep* CreateRep(CAT4x4Matrix & iMatrix, int iArrowShaftLength, int iArrowTipLength = 5);
   /** Constructs the representation of an axis system.
   *  @param iMatrix
   *  The matrix defining the origin and the three directions of the axis system.
   *  @param iXArrowShaftLength
   *  The length (in mm) of the shaft of the first arrow. 
   *  @param iXLabel
   *  The text of the label of the first arrow.
   *  @param iYArrowShaftLength
   *  The length (in mm) of the shaft of the second arrow. 
   *  @param iYLabel
   *  The text of the label of the second arrow.
   *  @param iZArrowShaftLength
   *  The length (in mm) of the shaft of the third arrow. 
   *  @param iZLabel
   *  The text of the label of the third arrow.
   */
  static CAT3DAxisRep* CreateRep(CAT4x4Matrix & iMatrix,
                                 int iXArrowShaftLength, char * iXLabel,
                                 int iYArrowShaftLength, char * iYLabel,
                                 int iZArrowShaftLength, char * iZLabel);

#endif

  /** @nodoc : deprecated constructor */
  CAT3DAxisRep (CATModelIdentificator & one_ident,CATVisuController *iCntl);


  /** Constructs the representation of an axis system.
   *  @param iMatrix
   *  The matrix defining the origin and the three directions of the axis system.
   *  @param iArrowShaftLength
   *  The length of the arrow shaft in mm.
   *  @param iArrowTipLength
   *  The length of the arrow tip in mm.
   */
  CAT3DAxisRep(CAT4x4Matrix & iMatrix, int iArrowShaftLength, int iArrowTipLength = 5);

  /** Constructs the representation of an axis system.
   *  @param iMatrix
   *  The matrix defining the origin and the three directions of the axis system.
   *  @param iXArrowShaftLength
   *  The length (in mm) of the shaft of the first arrow. 
   *  @param iXLabel
   *  The text of the label of the first arrow.
   *  @param iYArrowShaftLength
   *  The length (in mm) of the shaft of the second arrow. 
   *  @param iYLabel
   *  The text of the label of the second arrow.
   *  @param iZArrowShaftLength
   *  The length (in mm) of the shaft of the third arrow. 
   *  @param iZLabel
   *  The text of the label of the third arrow.
   */
  CAT3DAxisRep(CAT4x4Matrix & iMatrix,
               int iXArrowShaftLength, char * iXLabel,
               int iYArrowShaftLength, char * iYLabel,
               int iZArrowShaftLength, char * iZLabel);
  
  /** @nodoc */
  virtual void DrawShading (CATRender &, int);

  /** @nodoc */
  virtual CAT4x4Matrix * GetMatrix();

  /** Get the CAT3DFixedArrowGPs and the CAT3DAnnotationTextGPs which compose the axis.<br>
   *  Do not delete the return pointers.
   *  @param oAxis[3]
   *  Return the 3 @href CAT3DFixedArrowGP pointers which compose the axis.
   *  @param oText[3]
   *  Return the 3 @href CAT3DAnnotationTextGP pointers which compose the axis.  
   */

  virtual void Get (CAT3DFixedArrowGP * oAxis[3], CAT3DAnnotationTextGP * oText[3]);

protected :
  CAT3DFixedArrowGP     * _axis_x, * _axis_y, * _axis_z; 
  CAT3DAnnotationTextGP * _x,       * _y,      * _z;
  CAT4x4Matrix          *_matrix;
};

#endif // CAT3DAxisRep_H
