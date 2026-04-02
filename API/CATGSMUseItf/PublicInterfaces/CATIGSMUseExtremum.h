/* -*-c++-*- */
#ifndef CATIGSMUseExtremum_H
#define CATIGSMUseExtremum_H
// 
// COPYRIGHT DASSAULT SYSTEMES 2000 

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATIGSMUseDirection.h"
#include "CATGSMMinMax.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseExtremum;
#else
extern "C" const IID IID_CATIGSMUseExtremum;
#endif

/**
* Interface to extremum feature.
*  * <b>Role</b>: Allows you to access data of the Extremum
* @see CATIGSMUseFactory#CreateExtremum
*/

class ExportedByCATGSMUseItf CATIGSMUseExtremum : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 

  /**
    * Gets the element on which the extremum is detected.
    *   @param oReference 
    *      Reference element
    *   @see CATIMmiMechanicalFeature
	*/	 
    virtual HRESULT	GetReference	(CATIMmiMechanicalFeature_var& oReference) =0 ;
	

   /**
    * Sets the element on which the extremum is detected.
    *   @param iReference 
    *      Reference element
    *   @see CATIMmiMechanicalFeature
    */	
    virtual HRESULT	SetReference	(const CATIMmiMechanicalFeature_var  iReference) =0;
   
   /**
    * Gets the direction into which the extremum is detected.
    *   @param oDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT  GetDir	(CATIGSMUseDirection_var & oDirection) =0;
   
   /**
    * Sets the direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT	SetDir	(const CATIGSMUseDirection_var  iDirection) =0;
   
   /**
    * Gets the extremum type.
    *   @param oExtremumType 
    *      Extremum mode to get a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	GetExtremumType (GSMMinMax & oExtremumType) =0;

   /**
    * Sets the extremum type.
    *   @param oExtremumType 
    *      Extremum mode to set a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	SetExtremumType (GSMMinMax iExtremumType)	 =0; 


   /**
    * Gets the second direction into which the extremum is detected.
    *   @param oDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT  GetDir2	(CATIGSMUseDirection_var & oDirection) =0;
   /**
    * Sets the second direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *      iDirection = NULL_var unsets the direction.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT	SetDir2	(const CATIGSMUseDirection_var  iDirection) =0;
   /**
    * Gets the extremum type of the second direction.
    *   @param oExtremumType 
    *      Extremum mode to get a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	GetExtremumType2 (GSMMinMax & oExtremumType) =0;
   /**
    * Sets the extremum type of the second direction.
    *   @param oExtremumType 
    *      Extremum mode to set a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	SetExtremumType2 (GSMMinMax iExtremumType)	 =0; 

   /**
    * Gets the third direction into which the extremum is detected.
    *   @param oDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT  GetDir3	(CATIGSMUseDirection_var & oDirection) =0;
   /**
    * Sets the third direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *      iDirection = NULL_var unsets the direction.
    *   @see CATIGSMUseDirection
    */
    virtual HRESULT	SetDir3	(const CATIGSMUseDirection_var  iDirection) =0;
   /**
    * Gets the extremum type of the third direction.
    *   @param oExtremumType 
    *      Extremum mode to get a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	GetExtremumType3 (GSMMinMax & oExtremumType) =0;
   /**
    * Sets the extremum type of the third direction.
    *   @param oExtremumType 
    *      Extremum mode to set a maximum point(GSMMax) or a minimum point(GSMMin)
    *   @see GSMMinMax
    */
	virtual HRESULT	SetExtremumType3 (GSMMinMax iExtremumType)	 =0; 

};

CATDeclareHandler (CATIGSMUseExtremum, CATBaseUnknown);
#endif // CATIGSMUseExtremum_H
