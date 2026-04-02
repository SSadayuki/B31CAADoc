#ifndef CATICfgInterval_h
#define CATICfgInterval_h

 
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"


class CATUnicodeString;
class CATTime;
class CATICfgInterval_var;
class CATListValCATICfgInterval_var;
class CATCfgVal;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgInterval ;
#else
extern "C" const IID IID_CATICfgInterval ;
#endif


/**
 * Class to manage operations on Intervals.
 * <b>Role</b>: An Interval is composed of a start value, and an end Value. This values can be ranges or dates.
 * They are used in a context of configuration, to give effectivity to a Item Instance.
 * ex: (50, 100) , or (11-02-2001,15-02-2001).
 * @see CATICfgNormalValue
 */

class ExportedByGUIDVPMInterfaces CATICfgInterval : public CATBaseUnknown {

    CATDeclareInterface;
    public:


/**
 * Return an infinite Interval of same type as 'this'.
 */
         virtual HRESULT GetInfiniteInterval(CATICfgInterval_var &oInfiniteInterval) const = 0;

/**
 * Check if an interval intersects another one.
 * @param &iInterval
 *   Interval to compute intersection with 'this'.
 * @param &oIntersection
 *   Intersection resulting from the computation.
 */
         virtual HRESULT ComputeIntersection2(const CATICfgInterval_var &iInterval,
                                              CATICfgInterval_var &oIntersection,
                                              CATListValCATICfgInterval_var &oListIntCompl1,
                                              CATListValCATICfgInterval_var &oListIntCompl2,
                                              CATICfgInterval_var &oIntTotal) const = 0;

/**
 * Check if an interval intersects another one.
 * @param &iInterval
 *   Interval to compare with present one.
 * @param &oIntersect
 *   Return code
 *  <br><b>Legal Values </b> 0 : Intersection exists.  1 : No Intersection.
 */	 
	 virtual HRESULT Intersect(const CATICfgInterval_var &iInterval, int &oIntersect) const = 0;

	 enum Type {Undef, Date, Range, Any, None};
/**
 *  Get Interval type.
 *  @return 
 *      Interval Type. 
 *      <br><b> Legal Values : <b> Undef, Date, Range
 *      Undef when Interval start and end values are still not defined.
 */
	 virtual const CATICfgInterval::Type GetType()  = 0 ;
 
/**
 *  Get start and end values of a Range interval.
 *  @param oStartRange
 *     Interval start range.
 *  @param oLastRange
 *     Interval end range.
 */      
	 virtual HRESULT GetValues(int &oStartRange, int &oLastRange) const = 0;

/**
 *  Get start and end values of a Date interval.
 *  @param oBegDate
 *     Interval Start Date.
 *  @param oEndDate
 *     Interval end Date.
 */      
	 virtual HRESULT GetValues(CATTime &oBegDate, CATTime &oEndDate) const = 0;


/** @nodoc
 *  Get start and end values of an interval, without knowledge of type of values.
 *  @param oStart
 *     Interval Start Value.
 *  @param oEnd
 *     Interval End Value.
 */ 	 
	 virtual HRESULT GetValues(CATCfgVal &oStart, CATCfgVal &oEnd) const = 0;

/**
 *  Substract an Interval from Another one.
 *  @param itoSubstract
 *    Interverval to substract from *this.
 *  @param oIntervalUsed
 *    Interval common to both Intervals.
 *  @param oList
 *    List of Intervals not resulting of substract operation.
 *    Examples :
 *       A =this  , B = itoSubstract
 *      if A fully includes B, oIntervalUSed contains B, olist contains two intervals , parts of A, not covered by B
 *      if A covers a part of B oIntervalUsed contains this part, olist contains the interval made by A minus this part.
 *      If A and B are disjoined, oIntervalused is empty, olist contains A
 */
	 virtual HRESULT Substract(const CATICfgInterval_var &iToSubstract, CATICfgInterval_var &oIntervalUsed, CATListValCATICfgInterval_var &oList) const = 0;   
	 
/**
 *  Compute intersection between two intervals.
 *  @return
 *    S_FALSE is there is no Intersection, S_OK intersection exists. 
 *  @param iInterval
 *    Interverval to compute intersection with *this
 *  @param oIntersection
 *    Interval common to both Intervals.
 */
	 virtual HRESULT ComputeIntersection(const CATICfgInterval_var &iInterval, CATICfgInterval_var &oIntersection) const = 0;

/**
 * Compare two intervals.                  
 *  @return
 *     An integer. <br><b> Legal Values : </b> 0 : Interval are equal. 1 : Interval are different.
 *     Comparaison is made at pointer level.
 */
        virtual int IsEqual(const CATICfgInterval_var &iValue) const = 0;

/**
 * Inverse an Interval.
 * @param oList
 *   List of Intervals resulting from Inversion operation.
 */
        virtual HRESULT Inverse(CATListValCATICfgInterval_var &oList) const = 0;
           
/**
 * Get a string representing the Interval.
 */
         virtual CATUnicodeString GetAsString() const = 0;
 
/**
 * Get an XML string representing the Interval. 
 */
       virtual CATUnicodeString GetAsXmlString() const = 0;
/**
 * Dump for debug purpose.
 */
        virtual void Dump() const = 0;

/**
 * Check if an interval intersects another one.
 * @param &iInterval
 *   Interval to compare with present one.
 * @param &oIntersect
 *   Return code
 *  <br><b>Legal Values </b> 0 : No Intersection.
 *                           1 : Lower Bound of iInterval is in present one.
 *                           2 : Upper Bound of iInterval is in present one.
 *                           3 : Totally included.
 */
         virtual HRESULT Intersect2(const CATICfgInterval_var &iInterval, int &oIntersect) const = 0;

};

CATDeclareHandler(CATICfgInterval, CATBaseUnknown);

#endif
