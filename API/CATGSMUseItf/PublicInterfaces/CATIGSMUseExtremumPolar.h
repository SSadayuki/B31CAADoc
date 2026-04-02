#ifndef CATIGSMUseExtremumPolar_H
#define CATIGSMUseExtremumPolar_H

// COPYRIGHT DASSAULT SYSTEMES 2000 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

#include "CATGSMUseItfExportedBy.h"
#include "CATGSMMinMax.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseExtremumPolar;
#else
extern "C" const IID IID_CATIGSMUseExtremumPolar;
#endif

class CATIMmiMechanicalFeature_var; 
class CATICkeParm_var;
class CATIGSMUseDirection_var;

/**
* Interface to ExtremumPolar feature.
* <b>Role</b>: Allows you to access data of the ExtremumPolar
* @see CATIGSMUseFactory#CreateExtremumPolar
*/

class ExportedByCATGSMUseItf CATIGSMUseExtremumPolar : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 

  /**
    * Gets the element on which the ExtremumPolar is detected.
    *   @param oContour
    *      Contour element
    *   @see CATIMmiMechanicalFeature
	*/	 
    virtual HRESULT	GetContour	(CATIMmiMechanicalFeature_var& oContour) =0 ;
   /**
    * Sets the element on which the ExtremumPolar is detected.
    *   @param iContour
    *      Contour element
    *   @see CATIMmiMechanicalFeature
    */	
    virtual HRESULT	SetContour	(const CATIMmiMechanicalFeature_var  iContour) =0;


  /**
    * Gets the contour support.
    *   @param oSupport
    *      Contour support element
    *   @see CATIMmiMechanicalFeature
    */	 
    virtual HRESULT	GetSupport(CATIMmiMechanicalFeature_var& oSupport) =0 ;
  /**
    * Sets the contour support.
    *   @param iSupport
    *      Contour support element
    *   @see CATIMmiMechanicalFeature
    */	 
    virtual HRESULT	SetSupport(const CATIMmiMechanicalFeature_var  iSupport) =0;
	
   
   /**
    * Gets the reference direction into which the Extremum is detected.
    *   @param oDirection 
    *      Direction into which the Extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT  GetDir	(CATIGSMUseDirection_var & oDirection) =0;
   
   /**
    * Sets the reference direction into which the Extremum is detected.
    *   @param iDirection 
    *      Direction into which the Extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT	SetDir	(const CATIGSMUseDirection_var  iDirection) =0;
	
   
   /**
    * Gets the axis origin.
    *   @param oOrigin
    */
    virtual HRESULT GetOrigin (CATIMmiMechanicalFeature_var& oOrigin) =0 ;
   /**
    * Sets the axis origin.
    *   @param iOrigin
    *      Axis origin 
    */
    virtual HRESULT SetOrigin (const CATIMmiMechanicalFeature_var  iOrigin) =0;

   
   /**
    * Gets the ExtremumPolar type.
    *   @param oExtremumType 
    *      Extremum mode to get a extremum point:
    *         = 0   Minimum radius
    *         = 1   Maximum radius
    *         = 2   Minimum angle
    *         = 3   Maximum angle
    */
	virtual HRESULT	GetExtremumType (unsigned short & oExtremumType) =0;

   /**
    * Sets the ExtremumPolar type.
    *   @param oExtremumType 
    *      Extremum mode to get a extremum point:
    *         = 0   Minimum radius
    *         = 1   Maximum radius
    *         = 2   Minimum angle
    *         = 3   Maximum angle
    */
	virtual HRESULT	SetExtremumType (unsigned short iExtremumType)	 =0; 

   
   /**
    * Gets the extremum radius.
    *   @param oRadius
    */
	virtual HRESULT	GetRadius (double & oRadius) =0;
   /**
    * Gets the extremum angle.
    *   @param oAngle
    */
	virtual HRESULT	GetAngle (double & oAngle) =0;


public: 

    /**
    * Gets the literal feature representing the radius.
    *   @param oRadius
    */
	virtual HRESULT GetRadius(CATICkeParm_var & oRadius) =0;
    /**
    * Gets the literal feature representing the angle.
    *   @param oAngle
    */
	virtual HRESULT GetAngle(CATICkeParm_var & oAngle) =0;

};

CATDeclareHandler (CATIGSMUseExtremumPolar, CATBaseUnknown);
#endif // CATIGSMUseExtremumPolar_H
