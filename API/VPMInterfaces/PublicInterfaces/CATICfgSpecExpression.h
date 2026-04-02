//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgSpecExpression_h
#define CATICfgSpecExpression_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATICfgSpecification.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgSimpleSpecification.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecExpression ;
#else
extern "C" const IID IID_CATICfgSpecExpression ;
#endif

class CATUnicodeString ;
class CATICfgORExpression_var;

/**
 * Interface for Specification Expression.
 */
class ExportedByGUIDVPMInterfaces CATICfgSpecExpression : public CATICfgSpecification {
	CATDeclareInterface;
public:

	/**
	 * Gets the name of a Specification Expression.
	 * @param oName
	 *     A @href CATUnicodeString for the name
	 */
        virtual HRESULT  GetName(CATUnicodeString &oName)  = 0 ;

	/**
	 * Gets the description of a Specification Expression.
	 * @param oDescription
	 *     A @href CATUnicodeString for the description
	 */
        virtual HRESULT  GetDescription(CATUnicodeString &oDescription)  =0;

	/**
	 * Sets the description of a Specification Expression.
	 * @param iDescription
	 *     A @href CATUnicodeString containing the description
	 */
	virtual HRESULT SetDescription(const CATUnicodeString &iDescription)=0;

	/**
	 * Gets the value of a Specification Expression.
	 * @param oOrExp
	 *     A @href CATICfgORExpression for the value
	 */
        virtual HRESULT  GetValue(CATICfgORExpression_var &oOrExp)  = 0 ;

	/**
	 * Sets the value of a Specification Expression.
	 * @param iOrExp
	 *     A @href CATICfgORExpression
	 */
        virtual HRESULT  SetValue(CATICfgORExpression_var &iOrExp)  = 0 ;

	/**
	 * Attaches a Specification Expression to a Configured Object.
	 * @param iObjectUUID
	 *      The UUID of a configured object
	 */
        virtual HRESULT Attach(SEQUENCE(octet) &iObjectUUID) = 0;

	/**
	 * Detaches a Specification Expression from a Configured Object.
	 * @param iObjectUUID
	 *      The UUID of a configured object
	 */
        virtual HRESULT  Detach(SEQUENCE(octet) &iConfigurableUID) = 0;

	/**
	 * Gets the list of Configured Objects on which a Spec Expression is attached to.
	 * @param oUUIDList
	 *      The list of configured objects currently attached
	 */
        virtual HRESULT GetUIDList(SEQUENCE(CORBAAny)& oUUIDList)  = 0;
  
	/**
	 * Checks whether the value is true or not depending on a list of Simple Specifications.
	 * (@see #SetValue)
	 * @param iList
	 *     The list of @href CATICfgSimpleSpecification to be checked.
	 * @return
	 *    <ul><li>S_OK - True</li>
	 *        <li>S_FALSE - False </li>
	 *    </ul>
	 */
        virtual HRESULT Solve (CATListValCATICfgSimpleSpecification_var &iList)  =0;

	/**
	 * Deletes the Specification Expression.
	 */
        virtual HRESULT Delete() = 0;  
    
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgSpecExpression, CATICfgSpecification);

#endif

