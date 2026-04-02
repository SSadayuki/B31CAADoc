/* -*-c++-*- */
#ifndef CATICatalogPersistentQuery_H
#define CATICatalogPersistentQuery_H
// COPYRIGHT Dassault Systemes 2001
/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "booleanDef.h"
#include "CATBoolean.h"

class CATICatalogChapter;
class CATICkeExpression;
class CATICatalogQueryResult;
class CATListValCATICatalogDescription_var;
class CATTime;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogPersistentQuery ;
#else
extern "C" const IID IID_CATICatalogPersistentQuery ;
#endif

/**
* Interface to manage a persistent query.
* <b>Role</b>:The persistent query is used for creating a new family of 
* descriptions. The @href CATICatalogChapter#AddPersistentQuery method
* enables to create an "empty" query. This method returns a pointer on this
* interface to complete and execute the query:
* <ul>
* <li>@href #SetResolutionChapter </li>
* <p>It is the root chapter of the catalog to filter. </p>
* <li>@href #SetExpression </li>
* <p>It is the expression of the query <p>
* <li>@href #ResolveQuery </li>
* <p>It launches the filtering on the external root chapter.
* </ul> 
* The result, that you have as output argument of the
* @href #ResolveQuery method, by the @href #GetGeneratedQueryResult method or by
* the @href #GetListGeneratedDescriptions, are descriptions of the external catalog.
*  
* <p>For each external description resolving the expression, a description is created on the
* family which has this persistent query. The only one keyword automatically valuated on 
* this family is the "Name" keyword.</p>
* <p> It is possible for each persistent query of a family to set new default values on 
* each keywords of this family. It means that the value of a keyword of a description
* of such family can be:
* <ul>
* <li>The own value of the keyword, set by the @href CATICatalogDescription#SetValue method</li>
* <li>if no own value, the default value set by the @href #SetDefaultValue 
*  method of this interface</li>
* <li>otherwise, the default value set on the family by the 
*  @href CATICatalogChapter#SetDefaultValue method </li>
* </ul></p>
*/

class ExportedByCATCclInterfaces CATICatalogPersistentQuery: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
   /**
    *   Returns the chapter which contain this current persistent query.
    *   @return
    *      The chapter containing this query.
    */
   virtual CATICatalogChapter* GetChapter () = 0 ;

   /**
    *   Retrieves the chapter on which the query would be solved.
    *   @param oChapter
    *      The chapter on which the query would be solved.
    *   @param iMode
    *      0: search chapter only in session.</br>
    *      1: default try to load chapter.
    */
   virtual HRESULT GetResolutionChapter (CATICatalogChapter*& oChapter, int iMode=1) = 0 ;

   /**
    *   Sets the chapter on which the query would be solved to the current query.
    *   <br><b>Role:</b>It is the root chapter of an another catalog.
    *   @param iChapter
    *      The chapter on which the query would be solved.
    */
   virtual HRESULT SetResolutionChapter (CATICatalogChapter* iChapter) = 0 ;

   /**
    *   Retrieves the knowledge expression defining the query.
    *   @param oExpression
    *      The defined query expression.
    */
   virtual HRESULT GetExpression (CATUnicodeString& oExpression) = 0 ;

   /**
   *   Sets the knowledge expression defining the query.
   *   @param iExpression
   *      The defined query expression.
   */
   virtual HRESULT SetExpression (const CATUnicodeString& iExpression) = 0 ;

   /**
    *   Resolves the query that is defined by the knowledge expression.
    *   @param iResolveMode
    *      Options to output the result of the query: </br>
    *           0 = Simuluation : generate the result in the output list only.</br>
    *           1 = Generation  : the generated result will be output and stored 
    *                             in the document.
    *   @param ListOfDescriptions
    *      The output list of the generated result.
    */
   virtual HRESULT ResolveQuery (const int iResolveMode,
                                 CATListValCATICatalogDescription_var*& ListOfDescriptions ) = 0 ;

   /**
    *   Retrieves the time/date of the resulting descriptions when the query is resolved.
    *   @param oResolutionTime
    *      The query resolved time stamp.
    */
   virtual HRESULT GetResolutionDate(CATTime& oResolutionTime) = 0 ;

   /**
    *   Sets the time/date of the resulting descriptions when the query is resolved.
    *   @param oResolutionTime
    *      The query resolved time stamp to be set.
    */
   virtual HRESULT SetResolutionDate(const CATTime &iResolutionTime) = 0 ;

   /**
    *   Retrieves the list of the resulting descriptions.
    *   <br><b>Role:</b>This method retrieves the descriptions which have resolved
    *   the query. The other way is to use the @href #GetGeneratedQueryResult method
    *   @param oListOfGeneratedDescriptions
    *      The generated list of description. 
    */
   virtual HRESULT GetListGeneratedDescriptions(CATListValCATICatalogDescription_var*& oListOfGeneratedDescriptions) = 0 ;

   /**
    *   Retrieves the result of the resolved query.
    *   <br><b>Role:</b>This method retrieves the descriptions which have resolved
    *   the query. The other way is to use the @href #GetListGeneratedDescriptions method
    *   @param oQueryResult
    *      The generated descriptions.
    */
   virtual HRESULT GetGeneratedQueryResult(CATICatalogQueryResult*& oQueryResult) = 0 ;

   /**
    *   Sets keyword Default Value for resolved attribute (integer).
    *   @param ikwdName
    *      The name of the keyword. It is a keyword of the family which
    *       contains this persistent query.
    *   @param odefaultValue
    *      The default value for the keyword.
    */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & ikwdName,
      int                      odefaultValue) = 0 ;

      /**
    *   Sets keyword Default Value for resolved attribute (real).
    *   @param ikwdName
    *      The name of the keyword.It is a keyword of the family which
    *       contains this persistent query.
    *   @param odefaultValue
    *      The default value for the keyword.
    */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & ikwdName,
                                    double                   odefaultValue) = 0 ;

      /**
    *   Sets keyword Default Value for resolved attribute (boolean).
    *   @param ikwdName
    *      The name of the keyword.It is a keyword of the family which
    *       contains this persistent query.
    *   @param odefaultValue
    *      The default value for the keyword.
    */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & ikwdName,
                                    CATBoolean                  odefaultValue) = 0 ;

      /**
    *   Sets keyword Default Value for resolved attribute (string).
    *   @param ikwdName
    *      The name of the keyword.It is a keyword of the family which
    *       contains this persistent query.
    *   @param odefaultValue
    *      The default value for the keyword.
    */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & ikwdName,
                                    CATUnicodeString       & odefaultValue) = 0 ;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------

   //-----------------------------------------------------------------------
   // methods nodoc or deprecated
   //-----------------------------------------------------------------------
   
    /**
    * @nodoc
    *   Retrieves the knowledge expression that the query is to defined.
    *   @param oExpression
    *      The defined query expression.
    */
   virtual HRESULT GetExpression (CATICkeExpression*& oExpression) = 0 ;

   /**
    * @nodoc
    *   Sets the knowledge expression that the query is to be defined.
    *   @param iExpression
    *      The defined query expression.
    */
   virtual HRESULT SetExpression (CATICkeExpression* iExpression) = 0 ;
  
};
CATDeclareHandler( CATICatalogPersistentQuery, CATBaseUnknown );

//------------------------------------------------------------------

#endif
