/* -*-c++-*- */
#ifndef CATICatalogQuery_H
#define CATICatalogQuery_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "booleanDef.h"
#include "CATBoolean.h"

class CATICatalogDescription;
class CATICatalogQueryResult;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogQuery ;
#else
extern "C" const IID IID_CATICatalogQuery ;
#endif

/**
* Interface to launch a temprorary query on a catalog chapter.
* <b>Role</b>:This interface, implemented by the catalog's chapter,
* @href CATICatalogChapter, enables to filter chapter's descriptions. 
* <br>To retrieve the filtered descriptions use the methods of the
* @href CATICatalogQueryResult interface.
* @see CATICatalogPersistentQuery
*/
class ExportedByCATCclInterfaces CATICatalogQuery: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  
     /**
     *   Launches a query on the current chapter.
     *   <br><b>Role:</b>This method enables to filter a chapter in using its keywords.
     *   The query is not recursive. It means that if the chapter contains sub-chapters, the research
     *   is only done on the descriptions of the current chapter.
     *    @param oQueryResult  [out, CATBaseUnknown#Release]
     *      The result of the query.
     *
     *    @param iQueryExpression
     *      The expression of the query. 
     *      <br>It has a knowledgeware syntax and the available operators are:
     *       <ul>
     *       <li>+,-,*,/,(,),**,==,<>,<,>,<=,>= </li>
     *       <li>abs,sqrt,cos,sin,tan,log,min,max ...</li>
     *       <li>Search,Extract,Length,ToUpper ... </li>
     *       <li>if ... then.., and,or,... </li>
     *       </ul>
     *       An example:
     *       <pre>
     *       (x.DIAMETER  <=  4)<b>AND</b>(x.TYPE == "FHC")
     *       where DIAMETER and TYPE are keywords of the Chapter.
     *       </pre>
     *    @param iQueryMode
     *      Not use. Lets the default value <tt>0</tt>
     */
     virtual HRESULT Query ( CATICatalogQueryResult*& oQueryResult,
        const CATUnicodeString& iQueryExpression="",
        const int iQueryMode = 0) = 0 ;

     
   //-----------------------------------------------------------------------------
   // Methods NODOC - DO NOT USE - DEPRECATED
   //-----------------------------------------------------------------------------
      
  /**
    * @nodoc
    *   @return  CATBaseUnknown#Release
    */
  virtual CATICatalogDescription* FindDescription (
     const CATUnicodeString& queryExpression) = 0 ;
     
 /**
   * @nodoc
   */
  virtual HRESULT DoesDescriptionSatisfy (
     CATBoolean & result,
     const CATICatalogDescription * desc,
     const CATUnicodeString& condition="") = 0 ;

  /**
    * @nodoc
    *   @return  CATBaseUnknown#Release
    */
     virtual CATICatalogQueryResult* Query (
			const CATUnicodeString& iqueryExpression="",
      const int iqueryMode = 0) = 0 ;

};

//------------------------------------------------------------------

CATDeclareHandler( CATICatalogQuery, CATBaseUnknown );

#endif
