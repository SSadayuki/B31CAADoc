#ifndef CATISPPActivity_H
#define CATISPPActivity_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATISPPAbstractActivity.h"
#include "CATUnicodeString.h"
#include "CATSPPDeclarations.h"

class CORBAAny ;
class CATListValCATUnicodeString ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPActivity ;
#else
extern "C" const IID IID_CATISPPActivity ;
#endif

/**
* Interface for Physical Activities.
* <br> <b>Note: </b> Physical activities are Activities with technological contents,
* not used for time synchronisation.
*/

class ExportedByProcessInterfaces CATISPPActivity : public CATISPPAbstractActivity
{
  CATDeclareInterface ;  
  
  public:
    
    /**
    *   Sets up the Estimated Cycle time at iCT, on an Activity.
    *   <br><b> Role: </b> This time represents a Specification of Cycle Time for the sons of that Activity.
    *   @param iCT
	*        Estimated Cycle Time.By default, at Activity creation, it is equal to the value set on 
	*        the related Activity type. 
    */
    virtual void 				SetSpecifiedCycleTime(double iCT) = 0 ;
    
    /**
    *   Returns the Estimated Cycle time on an Activity.
    */
    virtual double	 		GetSpecifiedCycleTime() const = 0 ;

    /**
    *   Sets up the Estimated Beginning date , on an Activity.
	*   @param iBegin
	*          Estimated Beginning date. By default, at Activity creation, equal to 0.
    */
    virtual void 				SetSpecifiedBeginning(double iBegin) = 0 ;
    
    /**
    *   Returns the Estimated Beginning date on an Activity.
    */
    virtual double	 		GetSpecifiedBeginning() const = 0 ;

    /**
    *   Tests if an Attribute is valuated.
    *   @param iAttributeName
    *		<tt>name of the attribute to test </tt>
    *   @return 
    *		<dt><tt>TRUE</tt>		<dd>if this Attribute is valuated.
    *		<dt><tt>FALSE</tt>		<dd>if this Attribute is NOT valuated.
    *   <br>The only attributes that may be tested are the ones existing on the related Activity type.
    *   <br>The only attribute type which are managed as of today are :
    *	<br>	- string
    *	<br>	- integer
    *	<br>	- double
    */
    virtual CATBoolean 		TestAttrValue(const CATUnicodeString& iAttributeName) = 0 ;    
    
    /**
    *   Sets the value of an Attribute for an Activity.
    *   @param iAttributeName
    *		<tt>the name of the attribute to valuate </tt>
    *   @param iValue
    *		<tt>the value of the attribute </tt>
    *
    *   <br>The only attributes that may be valuated are the ones existing on the related Activity type.
    *   <br>The only attribute type which are managed as of today are :
    *	<br>	- string
    *	<br>	- integer
    *	<br>	- double
    */
    virtual void 			SetAttrValue(const CATUnicodeString& iAttributeName, const CORBAAny& iValue) = 0 ;

        /**
    *   Returns the value of an Attribute for an Activity.
    *   @param iAttributeName
    *		<tt>the name of the attribute</tt>
    *   @return 
    *		The value of the attribute 
    */
    virtual CORBAAny 		GetAttrValue(const CATUnicodeString& iAttributeName) const = 0 ;

    /**
    *	Returns the list of Attributes that are managed on an Activity. 
    */
    virtual CATListValCATUnicodeString* 	GetAttrList() const = 0 ;

    /**
    * Adds attribute to an Activity.
    * @param iAttributeName
    * 	<tt> Name of the attribute to add </tt>
    * @param AttrType
    * 	<tt> Type of the attribute to add : it may be today a string, an integer or a double </tt>
    **/
    //virtual void						AddAttr(const CATUnicodeString& iAttributeName,
    //                                                                        CATSPPAttrKind AttrType) = 0 ;


/**
    * Adds attribute to an Activity.
    * @param iAttributeName
    * 	<tt> Name of the attribute to add </tt>
    * @param AttrType
    * 	<tt> Type of the attribute to add : it may be today a string, an integer or a double </tt>
	* @param iAttributePromptName
    * 	<tt> Prompt Name of the attribute to add </tt>
    **/
    virtual void						AddAttr(const CATUnicodeString& iAttributeName,
												CATSPPAttrKind AttrType,
												const CATUnicodeString& iAttributePromptName=NULL_string) = 0 ;




    /**
    * Removes attributes to an Activity type.
    * @param iAttributeName
    * 	<tt> Name of the attribute to remove </tt>
    **/
    virtual void						RemoveAttr(const CATUnicodeString& iAttributeName) = 0 ;

   
     /**
    *   Returns the label of the operator associated to an Activity.
    *   @return 
    * 	   The label of the operator associated to an Activity
    **/
   virtual wchar_t* GetOperatorLabel() const = 0 ;



//CFO 25/10/01
   /**
    *   Sets up the Calculated Cycle time on an Activity.
    */
   virtual void SetCalculatedCycleTime(double iCCT) = 0 ;

   /**
    *   Returns the Calculated Cycle time on an Activity.
	*/
   virtual double GetCalculatedCycleTime() const = 0 ;
//CFO 25/10/01

   /**
    *   Sets up the Calculated Begin time on an Activity.
    */
   virtual void SetCalculatedBeginTime(double iCCT) = 0 ;

   /**
    *   Returns the Calculated Begin time on an Activity.
    *   @return 
    *		<dt><tt>-99</tt>		<dd>if the calculated begin time is not synchronized with 
    *   the activity's specified begin time
    *		<dt><tt>0 or positive</tt>		<dd>otherwise.
	*/
   virtual double GetCalculatedBeginTime() const = 0 ;


};

CATDeclareHandler( CATISPPActivity, CATISPPAbstractActivity) ;

#endif







