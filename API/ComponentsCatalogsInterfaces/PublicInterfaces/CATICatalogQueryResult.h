/* -*-c++-*- */
#ifndef CATICatalogQueryResult_H_
#define CATICatalogQueryResult_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"


class CATICatalogChapter ;
class CATICatalogDescription ;
class CATListValCATICatalogDescription_var ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogQueryResult ;
#else
extern "C" const IID IID_CATICatalogQueryResult ;
#endif

/**
* Interface to inquire query results.
* <br><b>Role</b>: This interface is used to inquire query results. A query is
* the means to filter the descriptions of a chapter in taken account of a criteria.
* A criteria is a set of conditions that must resolve the keywords of the chapters.
* Each description resolving the query has keyword values filling the criteria.
* <br>The query result is a temporary object which is not included in
* the catalog document. This interface is a handle on this object. 
* There are three cases to have a such object:
* <ul>
* <li><b>Persistent query</b>: see @href CATICatalogPersistentQuery </li>
* <p> The @href CATICatalogPersistentQuery#GetGeneratedQueryResult method applied to
*  the persistent query created by the @href CATICatalogChapter#AddPersistentQuery method
* enables to retrieve the query result</p>
* <li><b>Temporary query</b>: see @href CATICatalogQuery </li>
* <p>The @href CATICatalogQuery#Query method enables to retrieve the query result</p>
* <li><b>Sub-chapter</b>: The @href CATICatalogDescription#GetObject method returns a such
* object when the description has a link towards a sub-chapter.</li>
* </ul>
* 
*/

class ExportedByCATCclInterfaces CATICatalogQueryResult : public CATBaseUnknown
{
	CATDeclareInterface;

public :
   /**
    *   Retrieves the chapter from the current query.
    *   @param oChapter  [out, CATBaseUnknown#Release]
    *      The chapter to which the query has been applied.
    */
   virtual HRESULT GetChapter (CATICatalogChapter*& oChapter) = 0 ;

   /**
    *   Returns the knowledge expression of the current query.
    *   @return
    *      The query expression. It can be an empty string.
    */
   virtual CATUnicodeString GetQuery () = 0 ;

   /**
    *   Returns the number of descriptions solving the query.
    *   @return
    *      Retrieves the number of descriptions.
    */
	virtual int Size () = 0 ;

   
   /**
    *   Returns the type of the query.
    *   @return
    *      The type of the query.there are two possibilities:
    *      <ul>
    *      <li><tt>1</tt>:It is the result of a persistent query on the chapter.</li>
    *      <li><tt>0</tt>:Otherwise</li>
    *      </ul>
    */
   virtual int GetQueryMode () = 0 ;

   /**
   *  Retrieves the list of descriptions.
   *  @param oListDescriptions
   *        The list of descriptions which is the result of the query.
   */
   virtual HRESULT AsAList (CATListValCATICatalogDescription_var*& oListDescriptions) = 0 ;
   
   //---------------------------------------------------------------------------
   // methods NODOC or DEPRECATED
   //---------------------------------------------------------------------------
   /**
    * @nodoc
    *   @return  CATBaseUnknown#Release
    */
	virtual CATICatalogDescription* DescriptionAt (int n) = 0 ;	

   /**
     * @nodoc
     */
   virtual CATListValCATICatalogDescription_var* AsAList () = 0 ;

   /**
    * @nodoc
    *   @return  CATBaseUnknown#Release
    */
   virtual CATICatalogChapter* GetChapter () = 0 ;
	
} ;


CATDeclareHandler( CATICatalogQueryResult, CATBaseUnknown );

#endif
