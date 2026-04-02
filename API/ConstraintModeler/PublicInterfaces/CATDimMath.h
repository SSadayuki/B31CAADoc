
#ifndef CATDimMath_h
#define CATDimMath_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATCstComputerForwards.h"
#include "CATMathPoint.h"
#include "CATMathDirection.h"
#include "CATCORBABoolean.h"
#include "MF0DimInt.h"
#include "CATBaseUnknown.h"




class CATDimMathElement;
class CATIDimCst_var;
class CATMathTransformation;
class CATDimMathExt;


/**
 * @deprecated V5R15
 * do not use
 * angle_type value :
 * stands for 0 x PI.
 */
#define CATDimAngle0PI 0
/**
 * @deprecated V5R15
 * do not use
 * angle_type value :
 * Stands for 1 x PI.
 */
#define CATDimAngle1PI 1
/**
 * @deprecated V5R15
 * do not use
 * angle_type value :
 * Stands for 2 x PI.
 */
#define CATDimAngle2PI 2
/**
 * @deprecated V5R15
 * do not use
 * angle_type value :
 * Unspecified.
 */
#define CATDimAngleUnspec 3

/**
 * @nodoc 
 */
#define CATDimSector         0
/**
 * @nodoc 
 */
#define CATDimSectorOpposite 1
/**
 * @nodoc 
 */
#define CATDimSectorCompl    2

/**
 * @deprecated V5R15
 * do not use
 * Class for 3D constraint visualization. 
 * <b>Role</b>:All the characteristic points for constraint visualization 
 * are stored in this class . 
 * <br>This is an example of visualization for a vertical oriented length constraint.
 * <pre>
 * 
 *
 *                      ----- + callout
 *                    /
 *                  /
 * p2dl!<----------*---------->!p1dl
 *     !           ^           !
 *     !           !           !
 *     !           !vertical   !
 *     !           !offset     !
 *     !           !           ! 
 *     !           !           !
 * pt2 +           !           ! 
 *       \         !           !
 *         \       !           !
 *           \     !           ! 
 *             \   !           !
 *               \             ! 
 *      center     +           !
 *                   \         !
 *                     \       !
 *                       \     !
 *                         \   !           ^
 *                           \ !           |
 *                             + pt1       | dir
 *                  
 * </pre>
 */





class ExportedByMF0DimInt CATDimMath
{
public:
/** 
 * Constructs a <tt>CATDimMath</tt>.
 */
      CATDimMath();
      virtual ~CATDimMath();
private:
     void Dump(const char* s,const CATMathPoint& x);
     void Dump(const char* s,const CATMathDirection& x);
     void Copy(const CATDimMath &X);
public:
/**
 * Copy Constructor of <tt>CATDimMath</tt>.
 */
     CATDimMath(const CATDimMath& X);
/** 
 * Copy Constructor of <tt>CATDimMath</tt>.
 */
     CATDimMath &operator = (const CATDimMath&X);
/** 
 * @nodoc 
 */     
	 void Dump();
/** 
 * @nodoc 
 */
     virtual void Allocate(int nb);

/**
 * @nodoc 
 * Stores the support's elements of the constraint.
 * @param iCst
 * Visualized constraint.
 * @param iE1 
 * First element.
 * @param iE2
 * Second element.
 * @param iE3 
 * Third element.
 */
     virtual void SetElements( const CATIDimCst_var &iCst,
			       const CATBaseUnknown_var &iE1,
			       const CATBaseUnknown_var &iE2,
			       const CATBaseUnknown_var &iE3);

/**
 * @nodoc 
 * Retrieves the support's elements of the constraint.
 * @param oCst 
 * Visualized constraint.
 * @param oE1  
 * First element.
 * @param oE2  
 * Second element.
 * @param oE3  
 * Third element.
 */    
	virtual void GetElements( CATIDimCst_var &oCst,
			       CATBaseUnknown_var &oE1,
			       CATBaseUnknown_var &oE2,
			       CATBaseUnknown_var &oE3);
/** 
 * @nodoc 
 */
     void GetElements(CATDimMathElement *&elements,int &nb)
       {
	 nb = m_number_of_elements;
	 elements = m_elements;
       }
      
/**
 * Data member: first extremity of extension line.
 */
  CATMathPoint pt1;
/**
 * Data member: second extremity of extension line.
 */	 
 CATMathPoint pt2;
/** 
 * Data member: center (angle/radius/diameter).
 */
 CATMathPoint center;
/**
 * Data member: dimension direction.
 */ 
 CATMathDirection dir;
/**
 * Data member: axis ( it is the normal of the dimension plane ).
 */ 
 CATMathDirection axis;
/**
 * Data member: rotation way
 */
 unsigned cclockwise:1;
 /**
 * Data member: dimension line first point.
 */
 CATMathPoint p1dl;
/**
 * Data member: dimension line second point.
 */
 CATMathPoint p2dl;
/** 
 * Data member: callout anchor point.
 */ 
 CATMathPoint callout;
/**
 * Sets by EvalPosition: Angles. 
 */ 
 unsigned angle_sector:3; 
/**
 * Sets by EvalPosition: Angles : 0 /pi/2*pi/Unspecified.    
 */
 unsigned angle_type:2; 
/** 
 * Declares that arcs are less than pi.
 */    
 unsigned lessthanPI:1; 

private:

	  CATDimMathElement *m_elements;
      int m_number_of_elements;
    CATDimMathExt* m_mathExt;
      
public:
/**
 * Data member: second dimension direction (angular case).
 */ 
 CATMathDirection w2;
/**
 * Gets dimension initial offset. 
 */
      double GetDefaultOffset() const;
/**
 * Sets dimension initial offset.
 * @param oValue
 * The default offset value.
 */
      void SetDefaultOffset(double value);
/**
 * Applies transformation to pt1, pt2, dir, w2, axis,
 * and eventually to p1dl, p2dl and callout.
 * @param iMatrix
 * The matrix of transformation.
 * @param iAll
 * Optional value.	  
 */
      void Transform(const CATMathTransformation &iMatrix, int iAll = 1);
/**
 * @nodoc 
 */
      HRESULT GetMathExtension(CATDimMathExt* &mathExt);
/**
 * @nodoc 
 */
      HRESULT SetMathExtension(CATDimMathExt* mathExt);
/**
 * @nodoc 
 */
      HRESULT RemoveExtension();

private:
      double m_offset;
      
};

#endif
