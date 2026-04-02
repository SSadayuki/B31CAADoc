// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : ENOVLightQueryResult.h                                      
// --------------------------------------------------------------
// Content     : Result structure for Light Query
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/05/25 > JDV                                          
// --------------------------------------------------------------

/** 
  * @CAA2Level L1
  * @CAA2Usage U3
 */

#ifndef ENOVLightQueryResult_H
#define ENOVLightQueryResult_H


#include "GUIDVPMInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATListOfInt.h"
#include "ENOVQObjectIdentity.h"
#include "CATListOfCATUnicodeString.h"
#include "sequence_CORBAAny.h"
class CATUnicodeString;


/** 
  * Attribute type in the results.
 */

enum  ENOVLQType
{
   LQ_INDEX,
   LQ_BOOLEAN,
   LQ_INTEGER,
   LQ_REAL,
   LQ_STRING,
   LQ_BINARY,
   LQ_DATE,
   LQ_OBJECT,
   LQ_AGGR_BOOLEAN,
   LQ_AGGR_INTEGER,
   LQ_AGGR_REAL,
   LQ_AGGR_STRING,
   LQ_AGGR_BINARY,
   LQ_AGGR_DATE,
   LQ_AGGR_OBJECT                   
};


/** 
  * Class containing the results of a Light Query. The structure contains the identifiers of the objects results of the query,
  * as well as the attribute values of those objects.
  * <b>Role</b>: This class gives access to the results of a Light Query.
 */

class ExportedByGUIDVPMInterfaces ENOVLightQueryResult
{

   public :

      /** 
        * Destructor of the class. This destructor must be called at the end of the process to free the memory
        * taken by the data.
       */

      virtual ~ENOVLightQueryResult();


      /** 
        * Gets the number of objects result of the query.
        * @param oCount : Number of objects.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getReturnCount( int & oCount ) = 0;


      /** 
        * Gets the identifiers of the selected rows (objects) result of the query.
        * @param iIndexes     : List of row numbers for which to get the identifiers. If this list is empty, then
        *                       the identifiers of all rows are returned.
        * @param oIdentifiers : List of identifiers.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getIdentifiers( const CATListOfInt & iIndexes, CATListOfENOVQObjectIdentity & oIdentifiers ) = 0;


      /** 
        * Gets the attribute values of one specific row (object) result of the query, for a list of attributes.
        * @param iIndex           : Row number for which to get the attribute values.
        * @param ioAttributeNames : List of attribute names. This list must be a subset of the attributes given in the
        *                           Select Clause. If this list is empty, all the attributes are taken.
        * @param oValues          : Values of the attributes.
        * @param oIsSet           : Flag to know if an attribute is set or not. It can have 3 values :
        *                           1 if the attribute is set.
        *                           0 if the attribute is not set. In that case, the corresponding value in oValues is empty.
        *                           -1 if the object itself doesn't exist. See the CAA use case for an example.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getAttributesValues( const int & iIndex,	CATListOfCATUnicodeString & ioAttributeNames,
 				                      _SEQUENCE_CORBAAny & oValues, CATListOfInt & oIsSet ) = 0;


      /** 
        * Gets the values of one specific attribute for all rows (objects) result of the query.
        * @param iAttributeName : Attribute for which to get the values.
        * @param oValues        : Values of the attribute for all the rows.
        * @param oIsSet         : Flag to know if an attribute is set or not. It can have 3 values :
        *                         1 if the attribute is set.
        *                         0 if the attribute is not set. In that case, the corresponding value in oValues is empty.
        *                         -1 if the object itself doesn't exist. See the CAA use case for an example.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getAllValuesForAttribute( const CATUnicodeString & iAttributeName, _SEQUENCE_CORBAAny & oValues, CATListOfInt & oIsSet ) = 0;


      /** 
        * Gets the available attribute names in the results and their type.
        * @param oAttributeNames : List of attribute names for which the value is available in the result.
        * @param oTypes          : Type of the attribute.
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT getAttributesNames( CATListOfCATUnicodeString & oAttributeNames, CATListOfInt & oTypes ) = 0;

};

#endif




