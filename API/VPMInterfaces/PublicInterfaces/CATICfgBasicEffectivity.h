#ifndef CATICfgBasicEffectivity_h_
#define CATICfgBasicEffectivity_h_

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * A BasicEffectivity is made of:
 *        - One interval (range or date)
 *        - A set of CATICfgSignedSpec_var ANDed together (see CATICfgSpecANDExpression)
 */



#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgSignedSpec.h"
 
class CATUnicodeString;
class CATICfgBasicEffectivity_var;
class CATListValCATICfgBasicEffectivity_var;
class CATICfgInterval_var;
class CATListValCATICfgInterval_var;
class CATICfgORExpression_var;
class CATICfgSpecANDExpression_var;
class CATICfgMileStone_var;
class CATTime;
class CATListValCATICfgXEff_var;
class CATICfgValue_var;
class CATICfgNormalValue_var;
class CATListValCATICfgSimpleSpecification_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgBasicEffectivity;
#else
extern "C" const IID  IID_CATICfgBasicEffectivity;
#endif

class ExportedByGUIDVPMInterfaces CATICfgBasicEffectivity : public CATBaseUnknown {

CATDeclareInterface;
	public:
/**
 * Sets the range or the date interval of an <b>Effectivity</b>
 *  @param iInterval
 *    The interval to set.
 */
    virtual HRESULT SetInterval(const CATICfgInterval_var& iInterval) = 0;

/**
 * Sets the value of the date interval.
 *  @param iBegTime
 *    The lower bound of the date interval.
 *  @param iEndTime
 *    The upper bound of the date interval.
 */
	 virtual HRESULT SetDateInterval(const CATTime& iBegTime, const CATTime& iEndTime) = 0;

/**
 * Sets the value of the date interval with infinite upper bound
 *  @param iBegTime
 *    The lower bound of the date interval.
 */
	 virtual HRESULT SetDateInterval(const CATTime& iBegTime) = 0;

/**
 * Sets the value of the range interval.
 *  @param iStartRange
 *    The lower bound of the range interval.
 *  @param iEndRange
 *    The upper bound of the range interval.
 */
	 virtual HRESULT SetRangeInterval(const int& iStartRange, const int& iEndRange) = 0;

/**
 * Sets the value of the range interval with infinite upper bound.
 *  @param iStartRange
 *    The lower bound of the range interval.
 */
	 virtual HRESULT SetRangeInterval(const int& iStartRange) = 0;

/**
 * Retrieves the value of the date interval.
 *  @param oBegTime
 *    The lower bound of the date interval.
 *  @param oEndTime
 *    The upper bound of the date interval.
 */
	 virtual HRESULT GetDateInterval(CATTime& oBegTime, CATTime& oEndTime) = 0;
/**
 * Retrieves the value of the range interval.
 *  @param oStartRange
 *    The lower bound of the range interval.
 *  @param oEndRange
 *    The upper bound of the range interval.
 */
	 virtual HRESULT GetRangeInterval(int& oStartRange, int& oEndRange) = 0;
	 

/**
 * Retrieves the range and the date interval of an <b>Effectivity</b>
 *  @param oDateInterval
 *    The Date interval.
 *  @param oRangeInterval
 *    The Range interval.
 */
virtual HRESULT GetIntervals(CATListValCATICfgInterval_var& oIntervals) = 0;


/**
 * Sets the user interval of an <b>Effectivity</b>
 *  @param iStart
 *    The start value of the interval to set.
 *  @param iEnd
 *    The end value of the interval to set.
 */
virtual HRESULT SetUserInterval(const CATUnicodeString& iStart,
				const CATUnicodeString& iEnd) = 0;

/**
 * Retrieves the user interval of an <b>Effectivity</b>
 *  @param oStart
 *    The start value of the interval to get.
 *  @param oEnd
 *    The end value of the interval to get.
 */
virtual HRESULT GetUserInterval(CATUnicodeString& oStart,
				CATUnicodeString& oEnd) = 0;

/**
 * Sets the specexp of an <b>Effectivity</b>
 *  @param iSpecExp
 *    The SpecExp to set.
 */
virtual HRESULT SetSpecExp(const CATICfgSpecANDExpression_var& iSpecExp) = 0;

/**
 * Add a spec to the specexp of an <b>Effectivity</b>
 * Warning: If you have several specs to add, it's better to use SetSpecExp
 *  @param iSpec
 *    The Spec to add.
 */
virtual HRESULT AddSpec(const int iSign, const CATICfgSimpleSpecification_var& iSpec) = 0;


/**
 * Retrieves the specexp of an <b>Effectivity</b>
 *  @param oSpecExp
 *    The SpecExp to retrieve.
 */
virtual HRESULT GetSpecExp(CATICfgSpecANDExpression_var& oSpecExp) = 0;


/**
 * Sets the effectivity to share the specexp from.
 *  @param iEffectivity 
 *    The effectivity to share.
 */
virtual HRESULT ShareSpecExpFromEffectivity(const CATICfgBasicEffectivity_var& iEffectivity) = 0;


/** Retrieves the effectivity shared.
 * @param oEffectivity
 *  The effectivity shared.
 */
virtual HRESULT GetTheEffectivityShared(CATICfgBasicEffectivity_var& oEffectivity) = 0;

/** Retrieves the start milestone name.
 * @param oStartMilestoneName.
 *  The start milestone name.
 */     
virtual HRESULT GetStartMilestoneName(CATUnicodeString &oStartMilestoneName) = 0;

/** Retrieves the end milestone name.
 * @param oEndMilestoneName.
 *  The end milestone name.
 */      
virtual HRESULT GetEndMilestoneName(CATUnicodeString &oEndMilestoneName) = 0;

/**
 * Sets the start milestone name
 *  @param iStartMilestoneName 
 *    The start milestone name.
 */
virtual HRESULT SetStartMilestone(const CATICfgMileStone_var &iStartMilestoneName) = 0;

/** @nodoc */
virtual HRESULT SetStartMilestoneName(const CATUnicodeString &iStartMilestoneName) = 0;

     
/**
 * Sets the end milestone name
 *  @param iEndMilestoneName 
 *    The end milestone name.
 */
virtual HRESULT SetEndMilestone(const CATICfgMileStone_var &iEndMilestoneName) = 0;

/** @nodoc */
virtual HRESULT SetEndMilestoneName(const CATUnicodeString &iEndMilestoneName) = 0;



/**
 * Retrieves all the effectivities sharing this effectivity.
 *  @param oList.
 *    The effectivities sharing this effectivity.
 */
virtual HRESULT GetTheSharingEffectivities(CATListValCATICfgBasicEffectivity_var& oList) = 0;

/**
 * Look if this or one of its ancestors shares an effectivity.
 *  @param iEffectivity.
 *    The effectivity to check if it is already shared.
 */
virtual HRESULT DoesAlreadyShare(const CATICfgBasicEffectivity_var& iEffectivity) = 0;


/**
 * Removes a Basic Effectivity from a <b>Basic Effectivity</b>
 *  @param iEffectivity
 *    The effectivity to remove.
 */
virtual HRESULT Substract(const CATICfgBasicEffectivity_var& iEffectivityToSubstract,
                                            CATListValCATICfgBasicEffectivity_var& oResult) = 0;
/** @nodoc */    
virtual void Dump() const = 0;

/** @nodoc */	 
    virtual HRESULT  GetAsXmlString(CATUnicodeString & OutString) const = 0;

/** @nodoc */
    virtual int HasRange() const = 0;

/** @nodoc */
    virtual int HasDate() const = 0;

/** @nodoc */
    virtual int HasMileStone() const = 0;

/** @nodoc */
    virtual int HasStartMileStone() const = 0;

/** @nodoc */
    virtual int HasEndMileStone() const = 0;

/** @nodoc */
    virtual HRESULT ComputeAND(const CATICfgBasicEffectivity_var &iBasicEff,CATICfgBasicEffectivity_var &oBasicRes) const = 0;

/** @nodoc */
    virtual HRESULT ComputeAnd(const CATICfgNormalValue_var &iCond, CATICfgBasicEffectivity_var &oRes) const = 0;
    
/** @nodoc 
 *   Get all XEff using this BasicEffzffectivity.
 */
	 virtual HRESULT GetOwningXEff(CATListValCATICfgXEff_var &oList) const = 0;

/** @nodoc
 * Update all mods impacted by this BasicEffefectivify.
 * Very costly method. Use with care
 */
    virtual HRESULT UpdateMods() const = 0;

/** @nodoc */
	 virtual CATUnicodeString GetAsString() const = 0;

/** @nodoc 
 *	 Type Spec Expression means that the Basic Effectivity is made of a SpecANDExpression only. 
 */
	 enum PrimType{RangeLike, DateLike, SpecLike};

/** @nodoc */
	 enum SecType {Range, Range_RangeMileStone, RangeMileStone_Range, Date, Date_DateMileStone, DateMileStone_Date, RangeMileStone_RangeMileStone, DateMileStone_DateMileStone, SpecExpression};
	
/** @nodoc */ 
	 virtual HRESULT GetTypes(CATICfgBasicEffectivity::PrimType &PrimType, 
							  CATICfgBasicEffectivity::SecType &SecType ) const   = 0;

/** @nodoc */
	 virtual HRESULT GetListOfSimpleSpecsInSpecExp(CATListValCATICfgSimpleSpecification_var &oSpecList) const = 0;


/** @nodoc */
         virtual HRESULT Simplify(const CATICfgBasicEffectivity_var &iBasicEff, CATListValCATICfgBasicEffectivity_var &oListBasicEff) const = 0;

/** @nodoc */
         virtual HRESULT SetStartValue(const CATICfgValue_var &iVal) = 0;

/** @nodoc */
         virtual HRESULT SetEndValue(const CATICfgValue_var &iVal) = 0;
         
/** @nodoc */
        virtual HRESULT IsTrue(const CATListValCATICfgNormalValue_var & iList) const = 0;

};

CATDeclareHandler(CATICfgBasicEffectivity, CATBaseUnknown);

#endif
