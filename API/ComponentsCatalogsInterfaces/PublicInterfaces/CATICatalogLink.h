/* -*-c++-*- */
#ifndef CATICatalogLink_H
#define CATICatalogLink_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

class CATUnicodeString;
class CATICatalogDescription;
class CATIDocId;
class CATILinkableObject;
class CATListValCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces  IID IID_CATICatalogLink;
#else
extern "C" const IID IID_CATICatalogLink;
#endif


//------------------------------------------------------------------
/**
* Interface to manage link with a catalog description.
* <b>Role</b>: Interface to manage link with a catalog description in the case of instantiation.<br>
* A CATICatalogLink object is given as parameter to the @href CATICatalogInstantiation#RunInstantiationCmd method.
*/
class ExportedByCATCclInterfaces CATICatalogLink: public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
  /**
    *   Retrieves the pointed description.
    *   @param oDescription [out, CATBaseUnknown#Release]
    *       the pointed description.
    */
   virtual HRESULT GetPointedDescription(CATICatalogDescription** oDescription) const = 0 ;
   
  /**
   *   Retrieves the pointed catalog if the pointed description is in a another container.
   *   @param oLinkObject  [out, CATBaseUnknown#Release]
   *       the pointed catalog.
   */
   virtual HRESULT GetRootPointedCatalog(CATILinkableObject** oLinkObject) const = 0;
   
   
   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------
   
   //------------------------------------------------------------------
   // Methods NODOC or DEPRECATED
   //------------------------------------------------------------------
   /**
   *   @nodoc
   *   Retrieves the docId of catalog to open in browser for edition.
   *   @param oDocId  [out, CATBaseUnknown#Release]
   *   @return
   *      Error code of function.
   */
   virtual HRESULT GetPointedCatalogDocId(CATIDocId** oDocId) = 0;
   
   /**
   *  @nodoc
   *   Sets the pointed description.
   *   @param iDescription
   *       the pointed description.
   */
   virtual HRESULT SetPointedDescription(const CATICatalogDescription* iDescription) = 0;
   
   /**
   *  @nodoc
   *   Sets the pointed catalog if the pointed description is in a another container.
   *   @param iLinkObject
   *      The pointed catalog.
   */
   virtual HRESULT SetRootPointedCatalog(const CATILinkableObject* iLinkObject) = 0;
   
   /**
   *  @nodoc
   *   Retrieves the current chapter to open in browser for edition.
   *   @param oListPath
   */
   virtual HRESULT GetPointedChapterString(CATListOfCATUnicodeString** oListPath) const = 0;
   
   /**
   *  @nodoc
   *   Sets the current chapter to open in browser for edition.
   *   @param iListPath
   */
   virtual HRESULT SetPointedChapterString(const CATListOfCATUnicodeString* iListPath) = 0;
   
   /**
   *  @nodoc
   *   Retrieves the query used to filter the description.
   *   @param oQuery
   *       The filter which is used to filter the current description.
   */
   virtual HRESULT GetCatalogQuery(CATUnicodeString& oQuery) const = 0;
   
   /**
   *  @nodoc
   *   Sets the query used to filter the description.
   *   @param iQuery
   *      The filter which is used to filter the current description.
   */
   virtual HRESULT SetCatalogQuery(const CATUnicodeString* iQuery) const = 0;
   
   /**
   *  @nodoc
   *   Retrieves the list of keyword values on referenced description.
   *   @param oListKeywordValues
   *       This argument is a list of CATICkeParm. Each CATICkeParm object is a keyword.
   */
   virtual HRESULT GetKeywordValues (CATListValCATBaseUnknown_var** oListKeywordValues) const = 0  ;
   
};

//------------------------------------------------------------------
CATDeclareHandler( CATICatalogLink, CATBaseUnknown );

#endif
