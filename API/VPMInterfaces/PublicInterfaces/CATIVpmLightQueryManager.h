// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : CATIVpmLightQueryManager.h                                      
// --------------------------------------------------------------
// Content     : Light Query
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/05/25 > JDV                                          
// --------------------------------------------------------------

/** 
  * @CAA2Level L1
  * @CAA2Usage U3
 */

#ifndef CATIVpmLightQueryManager_H_
#define CATIVpmLightQueryManager_H_

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIVpmQuery.h"
#include "ENOVLightQueryResult.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmLightQueryManager;
#else
extern "C" const IID IID_CATIVpmLightQueryManager;
#endif


/** 
  * Type of the query to be run.
  * DatabaseOnly      : The query will only run on the database.
  * DatabaseAndMemory : The query will be run on the database and memory.
 */

enum QueryType
{
   DatabaseOnly,
   DatabaseAndMemory
};


/** 
  * Interface to run Light Query. A Light Query returns a list of rows matching a predicate, only containing object identifiers and attribute values.
  * Contrary to the method RunQuery, objects are not loaded in session, which means the memory and time to execute a Light Query are much smaller
  * than for RunQuery
  * <b>Role</b>: This interface runs light queries.   
 */

class ExportedByGUIDVPMInterfaces CATIVpmLightQueryManager : public CATBaseUnknown   
{
   CATDeclareInterface;

   public :

      /** 
        * This method runs a light query.
        * @param iQuery        : Interface describing the query definition, with the entity on which to run the query and the predicate
        *                        to apply that the results must match.
        * @param iSelectClause : List of attributes to get the values for in the results. The format is
        *                        <main entity>::<Attribute name> or
        *                        <main entity>::<{list of join attributes}.><Attribute name>
        * @param iSortAttr     : Attribute (part of the Select Clause) used to sort the results. This attribute can be
        *                        a string, real, integer or date attribute.
        * @param iTypeOfQuery  : Type of the query, either database only or database and memory.
        * @param oQueryResult  : The result of the Light Query holding the identifiers and the attribute values (for the attributes
        *                        given in the Select Clause) of the rows matching the predicate (defined by iQuery).
        * @returns : S_OK if everything went fine
        *            E_FAIL if there is an error.
       */

      virtual HRESULT RunLightQuery( const CATIVpmQuery_var &          iQuery,
                                     const CATListOfCATUnicodeString & iSelectClause,
                                     const CATUnicodeString &          iSortAttr,
                                     const QueryType &                 iTypeOfQuery,
                                     ENOVLightQueryResult * &          oQueryResult ) = 0;
};

CATDeclareHandler( CATIVpmLightQueryManager, CATBaseUnknown );

#endif








