//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgSpecInclusion_h
#define CATICfgSpecInclusion_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "sequence_CORBAAny.h"

#include"GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecInclusion ;
#else
extern "C" const IID IID_CATICfgSpecInclusion ;
#endif


class CATICfgValue_var;
class CATListValCATICfgSimpleSpecification_var;
class CATUnicodeString;
class CATICfgORExpression_var;

/**
 * Interface for Specification Inclusion
 * Specify a list of specifications to be included if the condition is true
 */
class ExportedByGUIDVPMInterfaces CATICfgSpecInclusion : public CATBaseUnknown {
	CATDeclareInterface;
public:

	/**
	 * Gets the name of a Specification Inclusion.
	 * @param oName
	 *     A @href CATUnicodeString for the name
	 */
        virtual HRESULT  GetName(CATUnicodeString &iName) const = 0 ;

	/**
	 * Gets the description of a Specification Inclusion.
	 * @param oDescription
	 *     A @href CATUnicodeString for the description
	 */
        virtual HRESULT  GetDescription(CATUnicodeString &iDescription) const = 0 ;
	/**
	 * Sets the description of a Specification Inclusion.
	 * @param iDescription
	 *     A @href CATUnicodeString containing the description
	 */
	virtual HRESULT SetDescription(const CATUnicodeString &iDescription) =0;

	/**
	 * Sets the condition of a Specification Inclusion.
	 * @param iOrExp
	 *     A @href CATICfgORExpression to be evaluated for the SpecInclusion
	 */
        virtual HRESULT SetIfCondition(CATICfgORExpression_var &iOrExp) =0;

	/**
	 * Gets the condition of a Specification Inclusion.
	 * @param oOrExp
	 *     A @href CATICfgORExpression that is evaluated for the SpecInclusion
	 */
        virtual HRESULT GetIfCondition(CATICfgORExpression_var &oOrExp)  = 0;

	/**
	 * Gets the list of included @href CATICfgSimpleSpecification.
	 * @param oList
	 *     The list of  @href CATICfgSimpleSpecification that are taken into
	 *     account if the condition is true
	 */
        virtual HRESULT GetIncludedSpecification(CATListValCATICfgSimpleSpecification_var &oList) const = 0;

        /**
	 * Removes a list of included @href CATICfgSimpleSpecification.
	 * @param iList
	 *
         */
         virtual HRESULT RemoveIncludedSpecification(const CATListValCATICfgSimpleSpecification_var &iList) = 0;

	/**
	 * Sets the list of included @href CATICfgSimpleSpecification .
	 * @param iList
	 *     The list of  @href CATICfgSimpleSpecification that are taken into
	 *     account if the condition is true
	 */
        virtual HRESULT SetIncludedSpecification(CATListValCATICfgSimpleSpecification_var &iList) const =0;

	/**
	 * Attaches a Specification Inclusion to a Configured Object.
	 * @param iObjectUUID
	 *      The UUID of a configured object
	 */
        virtual HRESULT Attach(SEQUENCE(octet) &iObjectUUID) = 0;

	/**
	 * Detaches a Specification Inclusion from a Configured Object.
	 * @param iObjectUUID
	 *      The UUID of a configured object
	 */
        virtual HRESULT  Detach(SEQUENCE(octet) &iObjectUUID) = 0;

	/**
	 * Gets the list of Configured Objects attached to a Spec Inclusion.
	 * @param oUUIDList
	 *      The list of configurable objects currently attached
	 */
        virtual HRESULT GetUIDList(SEQUENCE(CORBAAny)& Ret) const = 0;
        
	/**
	 * Checks whether the condition is true or not depending on a list of Simple Specifications.
	 * (@see #SetIfCondition)
	 * @param iList
	 *     A list of @href CATICfgSimpleSpecification to be checked against the condition
	 * @param oList
	 *     The list of @href CATICfgSimpleSpecification to be included if the condition is true
	 */
        virtual HRESULT Solve (CATListValCATICfgSimpleSpecification_var &iList,CATListValCATICfgSimpleSpecification_var &oList) const =0;

	/**
	 * Deletes the Specification Inclusion.
	 */
        virtual HRESULT Delete() = 0;  

	/**
	 * Sets the Specification Inclusion Priority.
	 */
	virtual HRESULT SetPriority(int iPriority)=0;

	/**
	 * Gets the Specification Inclusion Priority.
	 */
	virtual HRESULT GetPriority(int &oPriority) =0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgSpecInclusion, CATBaseUnknown);

#endif

