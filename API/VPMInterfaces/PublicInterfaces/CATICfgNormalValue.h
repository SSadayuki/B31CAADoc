//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================


/**
*   @CAA2Level L1
*   @CAA2Usage U3
*/

/**
 * A normal value contains either:
 *        - A range interval
 *        - A date interval
 *        - A specification
 *        - A modification
 *
 * Use CATICfgManager to create NormalValues.
 */

#ifndef CATICfgNormalValue_h
#define CATICfgNormalValue_h


//===============================================
// INCLUDES
//===============================================
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgNormalValue.h"
//===============================================
// CLASSES
//===============================================
class CATUnicodeString;
class CATICfgInterval_var;
class CATICfgNormalValue_var;
class CATListValCATICfgModification_var;
class CATListValCATICfgNormalValue_var;
class CATICfgSimpleSpecification_var;
class CATICfgMileStoneValue_var;
class CATICfgModification_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgNormalValue ;
#else
extern "C" const IID IID_CATICfgNormalValue ;
#endif

//-----------------------------------------------------------------------------
class ExportedByGUIDVPMInterfaces CATICfgNormalValue : public CATBaseUnknown {

    CATDeclareInterface;
    
    public:
/** @nodoc */
        virtual void GetValues(CATICfgInterval_var &oDate, CATICfgInterval_var &oRange, 
        CATICfgSimpleSpecification_var & oCfgSimpleSpec, CATICfgModification_var & oCfgMod) const = 0;

/** @nodoc */
        virtual void GetValues(CATICfgInterval_var &oDate, CATICfgInterval_var &oRange, CATUnicodeString &oCondition) const = 0;

/** @nodoc */
        virtual HRESULT GetValues(CATICfgInterval_var &oInterval) const = 0;

/** @nodoc */
        virtual HRESULT GetSpec(CATICfgSimpleSpecification_var &oSpec) const = 0;

/** @nodoc */
        enum Type {Range, RangeDate, RangeCondition, RangeDateCondition, Date, DateCondition, Condition, Undefined,Modification};

/** @nodoc */
        virtual CATICfgNormalValue::Type GetType()  = 0;
        
/** @nodoc */
        enum Comparator {Equal, Different, Intersect};

/** @nodoc */
        virtual CATICfgNormalValue::Comparator Compare(const CATICfgNormalValue_var &iValue)  = 0;

	// HRESULT:
	//        S_OK: Everythink OK
	//        S_FALSE: OK but the NormalValue to substract is greater than 'this' 
	//        E_FAIL: Impossible operation (NV are not of the same type, ...)
/** @nodoc */
	virtual HRESULT Substract(const CATICfgNormalValue_var &iValue, CATListValCATICfgNormalValue_var &oList) = 0;

        // Try to simplify an AND between to NV
        // R(x,y) & R(z,a) -> INtersection (same for date)
        // Spec1 & Spec1 -> Spec1
        // Spec1 & !Spec1 -> Empty
        // Spec1 & Spec2 -> Spec1 & Spec2 (can not simplify)
/** @nodoc */
        virtual HRESULT ComputeAND(const CATICfgNormalValue_var &iValue, CATListValCATICfgNormalValue_var &oList) = 0;

/** @nodoc */
	virtual HRESULT GetEndMileStoneName(CATUnicodeString& outTheEndMileStoneName) = 0;
/** @nodoc */
        virtual HRESULT GetStartMileStoneName(CATUnicodeString& outTheStartMileStoneName) = 0;
/** @nodoc */
	virtual HRESULT SetEndMileStoneName(const CATUnicodeString& iTheEndMileStoneName) = 0;
/** @nodoc */
        virtual HRESULT SetStartMileStoneName(const CATUnicodeString& iTheStartMileStoneName) = 0;
/** @nodoc */
	virtual HRESULT GetMileStoneValue(CATICfgMileStoneValue_var& outMileStoneValue) = 0;
/** @nodoc */
        virtual HRESULT GetListOfModifications(CATListValCATICfgModification_var& outModificationList) = 0;

/** @nodoc */
	virtual HRESULT AddModification(const CATICfgModification_var& inModification) = 0;

/** @nodoc */
	virtual HRESULT RemoveModification(const CATICfgModification_var& inModification) = 0;

/** @nodoc */
	virtual HRESULT Inverse(CATListValCATICfgNormalValue_var &oListNV) const = 0;

/** @nodoc */
        virtual int GetSign()  = 0;

/** @nodoc */
        virtual void SetSign(const int iSign)= 0;

/** @nodoc */
        virtual HRESULT CopyMe( CATICfgNormalValue_var &oValue) = 0;

/** @nodoc */
        virtual HRESULT IsTrue(const CATListValCATICfgNormalValue_var & iList) = 0;

/** @nodoc */
        virtual void Dump()  = 0;

/** @nodoc */
        virtual CATUnicodeString GetAsString() const = 0;

/** @nodoc */
        virtual HRESULT Delete() = 0;

};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATICfgNormalValue, CATBaseUnknown);

#endif


