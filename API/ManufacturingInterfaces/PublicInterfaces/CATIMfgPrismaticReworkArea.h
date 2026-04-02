/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef CATIMfgPrismaticReworkArea_H
#define CATIMfgPrismaticReworkArea_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "CATLISTP_CATMathPoint2D.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgPrismaticReworkArea;
#else
extern "C" const IID IID_CATIMfgPrismaticReworkArea;
#endif

/**
* Interface to manage a user rework feature.
* <br><b>Role</b>: CATIMfgPrismaticReworkArea has methods to manage a user rework feature.
*/

class ExportedByMfgItfEnv CATIMfgPrismaticReworkArea : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:  

/**
* Initializes the Mfg2DRAFeature with a Mfg2DMAFeature.
*/

    virtual HRESULT SetPrismaticMachiningArea (CATBaseUnknown_var& iManufacturingArea) = 0; 

/**
* Retrieves the Mfg2DMAFeature of the Mfg2DRAFeature.
*/

    virtual HRESULT GetPrismaticMachiningArea (CATBaseUnknown_var& oManufacturingArea) = 0; 

/**
* Computes resulting contours of the Mfg2DRAFeature.
*/

    virtual HRESULT Compute () = 0; 

  /**
  * Retrieves resulting contours once they have been computed on the Mfg2DRAFeature.
  * @param oContourType
*   returns the type for each contour<br>
  *   <b>Legal values</b>:
  *   <dl>
  *     <dt><tt>"0"</tt>: Corner<dd>
  *     <dt><tt>"1"</tt>: Channel<dd>
  *     <dt><tt>"2"</tt>: Island<dd>
  *   </dl>
  * @param oNbOfPointsByContour
  *   returns the number of points for each contour<br>
	* @param oListOfPoints
  *   2D (x,y) coordinates for each point<br>
	* @param oPointType
  *   returns the type for each point<br>
  *   <b>Legal values</b>:
  *   <dl>
  *     <dt><tt>"0"</tt>: Center -> the corresponding point is the middle of an arc of a circle whose beginning point is Point-1 and whose ending point is Point+1.<dd>
  *     <dt><tt>"1"</tt>: Other -> the corresponding point can be the beginning or the end of a segment or the beginning or the end of a circle.<dd>
  *   </dl>
	* @param oHardness
  *   returns the hardness mode for each point<br>
	*   The hardness to take into account for a segment or an arc of a circle is the one defined for the first point of the element.<br>
	*   <b>Legal values</b>:
  *   <dl>
  *     <dt><tt>"0"</tt>: Hard<dd>
  *     <dt><tt>"1"</tt>: Soft<dd>
  *   </dl>
  * </dl>
  * <dt><b>Example:</b>
  * <dd>The following example determines the first contour of a Mfg2DRAFeature
  * <pre>
  * int index = 1;
  *
  * CATMathPoint2D * StartPoint = oListOfPoints[index];
  * CATMathPoint2D * MiddlePoint = NULL;
  * CATMathPoint2D * EndPoint = NULL;
  *
  * int IsSoft = oHardness[index];
  *
  * index++;
  *
  * while (index <= oNbOfPointsByContour[1])
  * {
  *
  *   if (oListOfPoints[index] == 1) // it's not the middle of an arc of a circle, so it is the end of a segment
  *   {
  *     EndPoint = oListOfPoints[index];
  * 
  *     // creation of the segment [StartPoint/EndPoint] with Hardness mode = IsSoft
  *   }
  *   else     // circle
  *   {
  *     MiddlePoint = oListOfPoints[index];
  *     index++;
  *     if (index > oNbOfPointsByContour[1])
  *     {
  *       index = 1;
  *       // if this point is the center of a circle, then there's an error
  *       if (oListOfPoints[index] == 0) {ERROR}
  *     }
  *
  *     EndPoint = oListOfPoints[index];
  *
  *     // creation of the circle [StartPoint/MiddlePoint/EndPoint] with Hardness mode = IsSoft
  *   }
  * 
  *   StartPoint = EndPoint;
  *   MiddlePoint = NULL;
  *   EndPoint = NULL;
  *
  *   IsSoft = oHardness[index];
  *
  *   if(index == 1)
  *   {
	*     index = oNbOfPointsByContour[1] + 1; // to exit the while loop
  *   }
  * }  // end while loop
  * </pre>
  * </dl>
  */
    virtual HRESULT GetResultingContours (CATListOfInt& oContourType,
											CATListOfInt& oNbOfPointsByContour,
											CATLISTP(CATMathPoint2D)& oListOfPoints,
											CATListOfInt& oPointType,CATListOfInt& oHardness) = 0; 
};

CATDeclareHandler(CATIMfgPrismaticReworkArea, CATBaseUnknown);
#endif
