#ifndef CAT3DPlanRep_H
#define CAT3DPlanRep_H

/* COPYRIGHT DASSAULT SYSTEMES 2000 */

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"

#include "CAT3DRep.h"

class CAT3DFixedPlanGP;
class CATMathPointf;
class CATMathDirectionf;
class CATGraphicAttributeSet;
class CATVisuController;

/**
* Class to create a graphic representation with a plane.
*/
class ExportedByCATViz CAT3DPlanRep : public CAT3DRep
{
 friend class CATMarshallable3DPlaneRep;
 friend class CATDmuStream3DPlanRep;
 CATDeclareClass;

 public :
#ifdef CATIAV5R26
	/**
	* Default constructor.
	*/
  static CAT3DPlanRep* CreateRep();

     /**
   * Constructs a graphic representation from an origin, two directions,
   * and a lenght expressed in millimeters.
   * <pre>
   *
   *                         -----------------------------      ^
   *                        |                             |     |
   *                        |          iDirection1        |     |     
   *                        |              ^              |     |
   *                        |              |              |     |
   *                        |              |  iDirection2 |     |
   *                        |              x --->         |     | iLenghtInMM
   *                        |           iOrigin           |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                         -----------------------------      v
   *
   *                         <--------------------------->
   *                                  iLenghtInMM
   *       
   *
   * </pre>
   * @param iOrigin
   *   The square center. 
   * @param iDirection1
   *   The first direction which
   *   is parallel to two of the edges.
   * @param iDirection2
   *   The second direction which is parallel
   *   to the two other edges.
   * @param iLengthInMM
   *   The square length expressed in millimeters.
   */
   static CAT3DPlanRep* CreateRep(const CATMathPointf & iOrigin,  
                                 const CATMathDirectionf & iDirection1,
                                 const CATMathDirectionf & iDirection2, 
                                 float iLengthInMM);
#endif
	/**
	* Default constructor.
	*/
   CAT3DPlanRep ();
     /**
   * Constructs a graphic representation from an origin, two directions,
   * and a lenght expressed in millimeters.
   * <pre>
   *
   *                         -----------------------------      ^
   *                        |                             |     |
   *                        |          iDirection1        |     |     
   *                        |              ^              |     |
   *                        |              |              |     |
   *                        |              |  iDirection2 |     |
   *                        |              x --->         |     | iLenghtInMM
   *                        |           iOrigin           |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                        |                             |     |
   *                         -----------------------------      v
   *
   *                         <--------------------------->
   *                                  iLenghtInMM
   *       
   *
   * </pre>
   * @param iOrigin
   *   The square center. 
   * @param iDirection1
   *   The first direction which
   *   is parallel to two of the edges.
   * @param iDirection2
   *   The second direction which is parallel
   *   to the two other edges.
   * @param iLengthInMM
   *   The square length expressed in millimeters.
   */

   CAT3DPlanRep ( const CATMathPointf & iOrigin,  
                  const CATMathDirectionf & iDirection1,
                  const CATMathDirectionf & iDirection2, 
                  float iLengthInMM);

   	/**
	* @nodoc 
	*/
   virtual ~CAT3DPlanRep();

  /** @nodoc : deprecated constructor */
   CAT3DPlanRep (CATModelIdentificator & one_ident, CATVisuController *iCntl);

   /** 
   * @nodoc 
   */
   virtual void DrawShading    (CATRender &, int);

   /**
   * Retrieves information about the plane.
   * @param ioOrigin
   *   The square center. 
   * @param ioDirection1
   *   The first direction which
   *   is parallel to two of the edges.
   * @param ioDirection2
   *   The second direction which is parallel
   *   to the two other edges.
   */
   void Get(CATMathPointf & ioOrigin, 
            CATMathDirectionf & ioDirection1, 
            CATMathDirectionf & ioDirection2);

 protected :

   CAT3DFixedPlanGP *_planGeometry; 
};

#endif 









