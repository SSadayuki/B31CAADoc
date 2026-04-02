#ifndef CATMfPossibleCst_h
#define CATMfPossibleCst_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "MF0CST.h"
#include "CATCstDefs.h"

#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfDouble.h"

#include "CATICstData.h"

/**
 * @deprecated V5R15
 * do not use
 * Class representing a constraint definition.
 * <b>Role</b>: A constraint definition can be used to create a constraint.
 * Distance values are in millimeters, angle values are in degrees.
 * @see CATICst, CATICstFactory
 */

class ExportedByMF0CST CATMfPossibleCst
{
  public:

/**
 * Constructs an empty constraint definition.
 */
    CATMfPossibleCst(); 

/**
 * Copy constructor.
 */
    CATMfPossibleCst(const CATMfPossibleCst& iCst); 

/**
 * Constructs a constraint definition.
 * @param iElem1
 * The first element.
 * @param iElem2
 * The second element, equal to NULL_var if not defined.
 * @param iElem3
 * The third element, equal to NULL_var if not defined.
 * @param iCstData
 * The constraint type.
 * @param iStatus
 * The constraint status.
 * @param iListOfAttributeNames
 * The list of attribute names.
 * @param iListOfAttributeValues
 * The list of attribute values.
 * @param iDistanceOrAngle
 * The first numerical value, a distance or an angle.
 * @param iListOfDoubles
 * The list of numerical values.
 */
    CATMfPossibleCst(const CATBaseUnknown_var& iElem1,
		     const CATBaseUnknown_var& iElem2,
		     const CATBaseUnknown_var& iElem3,
		     const CATICstData_var& iCstData,
		     const CATCstStatus iStatus,
		     const CATListOfCATUnicodeString iListOfAttributeNames,
 		     const CATListOfCATUnicodeString  iListOfAttributeValues,
		     const double iDistanceOrAngle=0,
		     const CATListOfDouble iListOfDoubles=NULL 
		     ); 

    ~CATMfPossibleCst();

/**
 * Retrieves definition.
 * @param oCstData
 * The constraint type.
 * @param oStatus
 * The constraint status.
 * @param oDistancceOrAngle
 * The first numerical value, a distance or an angle.
 * @param oListOfAttributeNames
 * The list of attribute names.
 * @param oListOfAttributeValues
 * The list of attribute values.
 */

    void Read(CATICstData_var& oCstData,
	   CATCstStatus& oStatus,
	   double& oDistanceOrAngle,
	   CATListOfCATUnicodeString& oListOfAttributeNames,
	   CATListOfCATUnicodeString& oListOfAttributeValues) const; 

    
/**
 * Returns a constrained element.
 * @param iElemNumber
 * The number of the element.
 */
    CATBaseUnknown_var GetElement(const int iElemNumber) const;

/**
 * Returns type.
 */
    CATICstData_var  GetCstData() const;

/**
 * Returns status.
 */
    CATCstStatus GetStatus() const;

/**
 * Returns the first numerical value, a distance or an angle.
 */
    double GetDistanceOrAngle() const;

/**
 * Retrieves attributes names and attributes values.
 * @param oListOfAttributeNames
 * The list of attributes names.
 * @param oListOfAttributeValues
 * The list of attributes values.
 */
    void GetAttributes(CATListOfCATUnicodeString& oListOfAttributeNames,
                       CATListOfCATUnicodeString& oListOfAttributeValues) 
      const;

/**
 * Returns numerical values.
 */
    CATListOfDouble GetDoubles() const;

/**
 * Dumps the constraint definition.
 */
    int Dump() const;

  private:

/**
 * @nodoc
 * Constrained elements.
 */
    CATBaseUnknown_var _elem1;
    CATBaseUnknown_var _elem2;
    CATBaseUnknown_var _elem3;

/**
 * @nodoc
 * Type of the constraint.
 */
    CATICstData_var _cstData;
    
/**
 * @nodoc
 * Status of the constraint.
 */
    CATCstStatus _status;

/**
 * @nodoc
 * Value of the distance or angle.
 */
    double _distanceOrAngle;

/**
 * @nodoc
 * List of the attributes which exist on the constraint.
 */
    CATListOfCATUnicodeString _listOfAttributeNames ;
    
/**
 * @nodoc
 * List of the values of the attributes.
 */
    CATListOfCATUnicodeString _listOfAttributeValues ;
  
/**
 * @nodoc
 * List of the values.
 */
    CATListOfDouble _listOfDoubles;
    
};

#endif
