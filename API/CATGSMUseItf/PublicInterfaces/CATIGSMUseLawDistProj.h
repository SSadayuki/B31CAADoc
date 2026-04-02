/* -*-c++-*- */
#ifndef CATIGSMUseLawDistProj_H
#define CATIGSMUseLawDistProj_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATIMmiMechanicalFeature.h"
#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
class CATICkeParm_var;
class CATUnicodeString;
class CATMathVector;
// class CATIMmiMechanicalFeature_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseLawDistProj ;
#else
extern "C" const IID IID_CATIGSMUseLawDistProj ;
#endif

/**
  * Interface to law feature. 
  * <b>Role</b>: Allows you to access data of a law feature created by using two curves : 
  * a reference and a definition curve.
  * @see CATIGSMUseFactory
  */

class ExportedByCATGSMUseItf CATIGSMUseLawDistProj: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	/**
	* Gets the reference curve.
	*   @param oElem
	*      reference curve.
    */
	virtual    HRESULT GetReferenceElement(CATIMmiMechanicalFeature_var & oElem) = 0;
	
	/**
    * Sets the reference curve.
    *   @param iElem
    *      reference curve.
    */
	virtual    HRESULT SetReferenceElement(const CATIMmiMechanicalFeature_var iElem) = 0;
	
	/**
    * Gets the definition curve.
    *   @param oElem
    *      definition curve.
    */
	virtual    HRESULT GetDefinitionElement(CATIMmiMechanicalFeature_var & oElem) = 0;
	
	/**
	* Sets the definition curve.
	*   @param iElem
	*      definition curve.
	*/
	virtual    HRESULT SetDefinitionElement(const CATIMmiMechanicalFeature_var iElem) = 0;

	/**
    * Queries whether evolution parameter is on reference curve (default) or on definition curve. 
	*   @param oParameterOnDefinition
	*      Flag for parameter type 
    *      <br>TRUE: Parameter on definition curve
	*      <br>FALSE: Parameter on reference curve
    */
	virtual    HRESULT IsParameterOnDefinition(CATBoolean & oParameterOnDefinition)= 0;
	
	/**
    * Sets evolution parameter on reference curve  or on definition curve.
    *   @param iParameterOnDefinition
	*      Flag for parameter type
	*     <br> TRUE: Parameter on definition curve
	*     <br> FALSE: Parameter on reference curve
    */
	virtual    HRESULT SetParameterOnDefinition(CATBoolean iParameterOnDefinition) = 0;

    /**
    * Sets the scaling value of the law.
    *   @param iScale
    *      New scaling value
    *   @see CATICkeParm
    */
    virtual    HRESULT SetScalingValue (const CATICkeParm_var & iScale) = 0;

   /**
    * Sets the scaling value of the law.
    *   @param iScale
    *      New scaling value
    */
    virtual    HRESULT SetScalingValue (const double iScale) = 0;

    /**
    * Gets the scaling value of the law.
    *   @param oScale
    *      New scaling value
    *   @see CATICkeParm
    */
    virtual    HRESULT GetScalingValue (CATICkeParm_var& oScale) = 0;

   /**
    * Gets the scaling value of the law.
    *   @param oScale
    *      New scaling value
    */
    virtual    HRESULT GetScalingValue (double& oScale) = 0;

    /**
    * Returns if law heterogeneous.
    *   @param IsHeterogeneousLaw
    *      TRUE or FALSE 
    */
    virtual    HRESULT IsHeterogeneousLaw (CATBoolean & IsHeterogeneousLaw) = 0;

	/**
    * Sets the symbol of the applied unit of the law.
    *   @param iUnitSymbol
    */
    virtual    HRESULT SetAppliedUnitSymbol (const CATUnicodeString & iUnitSymbol) = 0;

    /**
    * Sets the symbol of the measure unit of the law.
    *   @param iUnitSymbol
    */
    virtual    HRESULT SetMeasureUnitSymbol (const CATUnicodeString & iUnitSymbol) = 0;

    /**
    * Gets the symbol of the applied unit of the law.
	* If the returned string is empty there is no applied unit (case of Ratio Law)
    *   @param oUnitSymbol
	*
    * NB : If you want to get the CATICkeUnit corresponding to this symbol
	* you can do it the following way :
	* 	CATIParmDictionary_var parmDictionary = CATCkeGlobalFunctions::GetParmDictionary();
	*	CATICkeUnit_var	Unit=parmDictionary->FindUnitFromSymbol(oUnitSymbol);
    */
    virtual    HRESULT GetAppliedUnitSymbol (CATUnicodeString & oUnitSymbol) = 0;

    /**
    * Gets the symbol of the measure unit of the law.
	* If the returned string is empty the law is homogeneous
    *   @param oUnitSymbol
	*
    * NB : If you want to get the CATICkeUnit corresponding to this symbol
	* you can do it the following way :
	* 	CATIParmDictionary_var parmDictionary = CATCkeGlobalFunctions::GetParmDictionary();
	*	CATICkeUnit_var	Unit=parmDictionary->FindUnitFromSymbol(oUnitSymbol);
    */
    virtual    HRESULT GetMeasureUnitSymbol (CATUnicodeString & oUnitSymbol) = 0;
	
	/** 
	* Get the Normal of the plane support of inputs curve.
	*   @param oNormal
	*    CATMathVector
	*/
	virtual    HRESULT  GetPlaneNormal (CATMathVector & oNormal) = 0;
	
	/**  
	* Set the Normal of the plane support of inputs curve.
	*   @param iNormal
	*    CATMathVector
	*/
	virtual    HRESULT  SetPlaneNormal (const CATMathVector & iNormal) = 0;

   /**
   * Sets the direction of Law positive values. 
   *   @param Ori 
   *      -1 to invert the orientation of the positive direction
   *	   O : Unknown Orientation
   *
   *	PositiveLawDirection=Ori * PlaneNormal ^ TangentRefCurve.
   */
   virtual    HRESULT SetPositiveDirectionOrientation  (int Ori) = 0;

   /**
   * Gets the direction of Law positive values. 
   *   @param Ori
   *      -1 to invert the orientation of the positive direction
   *	   O : Unknown Orientation
   *
   *	PositiveLawDirection=Ori * PlaneNormal ^ TangentRefCurve.
   */
   virtual    HRESULT GetPositiveDirectionOrientation  (int & Ori) = 0;

};
CATDeclareHandler (CATIGSMUseLawDistProj, CATBaseUnknown);
//------------------------------------------------------------------
#endif
