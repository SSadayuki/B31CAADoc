/* -*-c++-*- */
#ifndef CATIGSMExtremum_H
#define CATIGSMExtremum_H
// 
// COPYRIGHT DASSAULT SYSTEMES 2000 

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATIGSMDirection.h"
#include "CATGSMMinMax.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMExtremum;
#else
extern "C" const IID IID_CATIGSMExtremum;
#endif

/**
* Interface to extremum feature.
*  * <b>Role</b>: Allows you to access data of the Extremum
* @see CATIGSMFactory#CreateExtremum
*/

class ExportedByCATGitInterfaces CATIGSMExtremum : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 

  /**
    * Gets the element on which the extremum is detected.
    *   @param oReference 
    *      Reference element
    *   @see CATISpecObject
	*/	 
    virtual HRESULT	GetReference	(CATISpecObject_var& oReference) =0 ;
	

   /**
    * Sets the element on which the extremum is detected.
    *   @param iReference 
    *      Reference element
    *   @see CATISpecObject
    */	
    virtual HRESULT	SetReference	(const CATISpecObject_var  iReference) =0;
   
   /**
    * Gets the direction into which the extremum is detected.
    *   @param oDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMDirection
    */
    virtual HRESULT  GetDir	(CATIGSMDirection_var & oDirection) =0;
   
   /**
    * Sets the direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *   @see CATIGSMDirection
    */
    virtual HRESULT	SetDir	(const CATIGSMDirection_var  iDirection) =0;
   
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
    *   @see CATIGSMDirection
    */
    virtual HRESULT  GetDir2	(CATIGSMDirection_var & oDirection) =0;
   /**
    * Sets the second direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *      iDirection = NULL_var unsets the direction.
    *   @see CATIGSMDirection
    */
    virtual HRESULT	SetDir2	(const CATIGSMDirection_var  iDirection) =0;
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
    *   @see CATIGSMDirection
    */
    virtual HRESULT  GetDir3	(CATIGSMDirection_var & oDirection) =0;
   /**
    * Sets the third direction into which the extremum is detected.
    *   @param iDirection 
    *      Direction into which the extremum is detected.
    *      iDirection = NULL_var unsets the direction.
    *   @see CATIGSMDirection
    */
    virtual HRESULT	SetDir3	(const CATIGSMDirection_var  iDirection) =0;
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

CATDeclareHandler (CATIGSMExtremum, CATBaseUnknown);
#endif // CATIGSMExtremum_H
