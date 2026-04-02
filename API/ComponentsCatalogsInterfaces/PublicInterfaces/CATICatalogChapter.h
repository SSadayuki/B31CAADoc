/* -*-c++-*- */
#ifndef CATICatalogChapter_H_
#define CATICatalogChapter_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATCclInterfaces.h"
#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATICatalogKeyword ;
class CATICatalogChapter_var;
class CATICatalogDescription ;
class CATICatalogQueryResult ;
class CATICatalogPersistentQuery ;
class CATILinkableObject ;
class CATListValCATICatalogKeyword_var ;
class CATListValCATICatalogDescription_var ;
class CATListValCATICatalogPersistentQuery_var ;
class CATICkeType ;
class CATIDesignTable;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogChapter ;
#else
extern "C" const IID IID_CATICatalogChapter ;
#endif

/**
* Interface to manage catalog chapters.
* <b>Role</b>: A chapter is an object which contains :
* <ul>
* <li><b>Keywords </b>(@href CATICatalogKeyword ) </li>
* <p>A keyword is like a property (dimension, material,...). The keywords are used for
*  describing descriptions. See @href CATICatalogKeyword for more details. </p>
* <li><b>Descriptions</b> (@href CATICatalogDescription ) </li>
* <p>A description contains a links towards an object: a fetaure, a document, 
*  an another chapter. See @href CATICatalogDescription for more details.
*  </p>
* </ul>
* A Chapter is created by the @href CATICatalogChapterFactory#CreateChapter method. There are
* two kinds of chapters which depends on the second parameter of this <tt>CreateChapter</tt> method:
* <ul>
* <li>Chapter which contains other sub-chapters</li>
* <li>Chapter which contains only components (feature,document,..). In this case, the chapter
* is also named a family.</li>
* </ul>
*/
class ExportedByCATCclInterfaces CATICatalogChapter : public CATBaseUnknown
{
   CATDeclareInterface;
public:
   /**
   *   Returns the name of the chapter.
   *   @return
   *      The name of the chapter.
   */
   virtual CATUnicodeString GetChapterName () = 0 ;
   
   /**
   *   Returns the type of the chapter.
   *   @return
   *      TRUE if the chapter is an end chapter (or family), FALSE otherwise.
   */
   virtual CATBoolean KindIsEndChapter () = 0 ;	
   
   /**
   *   Retrieves the list of keywords on the chapter.
   *   @param oListKeywords
   *      The list of keywords.
   */
   virtual HRESULT ListKeywords (CATListValCATICatalogKeyword_var*& oListKeywords) = 0 ;
   
   /**
   *   Retrieves a keyword from its name.
   *   @param iName
   *     The name of the keyword to retrieve.
   *   @param oKeyword [out, CATBaseUnknown#Release]
   *      The keyword.
   */
   virtual HRESULT FindKeyword (const CATUnicodeString& iName, CATICatalogKeyword*& oKeyword) = 0 ;
   
   /**
   *   Creates a new keyword on the chapter.
   *   @param iName
   *      The name of the keyword to create.
   *   @param iType
   *      The type of the keyword to create.
   *   @param oNewKeyword [out, CATBaseUnknown#Release]
   *      The new keyword.
   */
   virtual HRESULT AddKeyword (const CATUnicodeString& iName,
      CATICkeType* iType,
      CATICatalogKeyword*& oNewKeyword) = 0 ;
   
   /**
   *   Creates a new keyword on the chapter.
   *   @param iName
   *      The name of the keyword to create.
   *   @param iType
   *      The type of the keyword to create.
   *      <br>Example: string, LENGTH, REAL.
   *   @param oNewKeyword [out, CATBaseUnknown#Release]
   *      The new keyword.
   */
   virtual HRESULT AddKeyword (const CATUnicodeString& iName, 
      const CATUnicodeString& iType,
      CATICatalogKeyword*& oNewKeyword) = 0 ;
   
   /**
   *   Removes a keyword on the chapter.
   *   @param ioToBeRemoved
   *      The keyword to remove. This keyword must be released after.
   */
   virtual HRESULT RemoveKeyword (CATICatalogKeyword* ioToBeRemoved) = 0 ;
   
   /**
   *   Sets a default value of an integer type keyword.
   *   <br><b>Role</b>:Every modification of the keyword default value 
   *   automatically modifies all descriptions without own values.
   *   @param iName
   *      The name of keyword to modify.
   *   @param idefaultValue
   *      The new default value (integer) for the keyword.
   */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & iName,
      int                      idefaultValue) = 0 ;
   
   /**
   *   Sets a default value of a real type keyword.
   *   <br><b>Role</b>:Every modification of the keyword default value automatically modifies all
   *   descriptions without own values.
   *   @param iName
   *      The name of keyword to modify.
   *   @param idefaultValue
   *      The new default value (real) for the keyword.
   */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & iName,
      double                   idefaultValue) = 0 ;
   
   /**
   *   Sets a default value of a boolean type keyword.
   *   <br><b>Role</b>:Every modification of the keyword default value automatically modifies 
   *   all descriptions without own values.
   *   @param iName
   *      The name of keyword to modify.
   *   @param idefaultValue
   *      The new default value (boolean) for the keyword.
   */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & iName,
      CATBoolean                  idefaultValue) = 0 ;
   
   /**
   *   Sets a default value of a string type keyword.
   *   <br><b>Role</b>:Every modification of the keyword default value automatically modifies all
   *   descriptions without own values.
   *   @param iName
   *      The name of keyword to modify.
   *   @param idefaultValue
   *      The new default value (string) for the keyword.
   */
   virtual HRESULT SetDefaultValue (const CATUnicodeString & iName,
      CATUnicodeString       & idefaultValue) = 0 ;
   
   /**
   *   Removes the default value for a keyword.
   *   <br><b>Role</b>:Every modification of keyword default value automatically modifies all 
   *   descriptions without own values.
   *   @param iName
   *      The name of the keyword.
   */
   virtual HRESULT UnsetDefaultValue(const CATUnicodeString& iName) = 0 ;
   
   /**
   *   Retrieves the default value of an integer type keyword.
   *   @param iName
   *      The name of the keyword.
   *   @param odefaultValue
   *      The default value (integer).
   */
   virtual CATBoolean GetDefaultValue (const CATUnicodeString & iName,
      int                    & odefaultValue) = 0 ;
   
   /**
   *   Retrieves the default value of a real type keyword.
   *   @param iName
   *      The name of the keyword.
   *   @param odefaultValue
   *      The default value (real).
   */
   virtual CATBoolean GetDefaultValue (const CATUnicodeString & iName,
      double                 & odefaultValue) = 0 ;
   
   /**
   *   Retrieves the default value of a boolean type keyword.
   *   @param iName
   *      The name of the keyword.
   *   @param odefaultValue
   *      The default value (boolean).
   */
   virtual CATBoolean GetDefaultValue (const CATUnicodeString & iName,
      CATBoolean                & odefaultValue) = 0 ;
   
   /**
   *   Retrieves the default value of a string type keyword.
   *   @param iName
   *      The name of the keyword.
   *   @param odefaultValue
   *      The default value (string).
   */
   virtual CATBoolean GetDefaultValue (const CATUnicodeString & iName,
      CATUnicodeString       & odefaultValue) = 0 ;
   
   /**
   *   Retrieves the number of descriptions on the chapter.
   *   @param oNumberOfDescriptions
   *      The number of descriptions.
   */
   virtual HRESULT GetNumberOfDescriptions (int& oNumberOfDescriptions) = 0 ;
   
   /**
   *   Retrieves all descriptions on the chapter.
   *   @param oListDescriptions
   *       The list of descriptions.
   */
   virtual HRESULT ListDescriptions (CATListValCATICatalogDescription_var*& oListDescriptions) = 0 ;
   
   /**
   *   Adds a new description on the chapter.
   *   @param oDescription [out, CATBaseUnknown#Release]
   *      The new description which has been created.
   *   @param iextObj
   *      The object to link to the new description. This object could be a chapter.
   */
   virtual HRESULT AddDescription (CATICatalogDescription*& oDescription, CATILinkableObject* iextObj=0) = 0 ;
   
   /**
   *   Removes a description on the chapter.
   *   @param extObj
   *      The description to remove.
   */
   virtual HRESULT RemoveDescription (CATICatalogDescription* itoBeRemoved) = 0 ;
   
   /**
   *   Adds a family of descriptions from a design table associated to a CATPart document.
   *   <br><b>Role:</b>This methods creates a set of descriptions on the current chapter
   *   in taken account of each row of a design table. This chapter must be a family, in 
   *   other words a end chapter. See the @href CATICatalogChapterFactory#CreateChapter method.
   *   <br>The design table must contains the "PartNumber" header. 
   *   <p>This method creates automatically on the family a keyword for each header of
   *    the design table. The value of each keyword on each description is the value
   *    taken in the design table.</p>
   *   @param iDT
   *      The design table which has been retrieve from the CATPart document.   
   */
   virtual HRESULT AddFamilyDescriptionsFromDesignTable(CATIDesignTable* iDT) = 0 ;
   
   /**
   *   Adds a new persistent query on the chapter.
   *   @param iQueryName
   *      The name of the query.
   *   @param oPersistentQuery [out, CATBaseUnknown#Release]
   *      The new persistent query.
   */
   virtual HRESULT AddPersistentQuery (const CATUnicodeString& iQueryName,
      CATICatalogPersistentQuery *& oPersistentQuery) = 0 ;
   
   /**
   *   Removes a persistent query on the chapter.
   *   @param iPersistentQuery
   *      The persistent query to remove.
   *   @param iRemoveGeneratedDescription
   *      Indicates if the result of the query should be removed or not.</br>
   *        0 = Only the query will be removed.</br>
   *        1 = Descriptions that belong to the query will be removed.
   */
   virtual HRESULT RemovePersistentQuery (CATICatalogPersistentQuery * iPersistentQuery,
      const int iRemoveGeneratedDescription = 1) = 0 ;
   
   /**
   *   Retrieves the list of persistents queries on the chapter.
   *   @param oListOfPersistentQuery
   *      The list of persistent queries.
   */
   virtual HRESULT ListPersistentQuery (CATListValCATICatalogPersistentQuery_var *& oListOfPersistentQuery) = 0 ;
   
   
   //-----------------------------------------------------------------------------
   // Methods NODOC - DO NOT USE - DEPRECATED
   //-----------------------------------------------------------------------------
   /**
   * @nodoc
   * Reference for all descriptions.
   * @return  CATBaseUnknown#Release
   */
   virtual CATICatalogDescription* GetDefaultValues () = 0 ;
   
   /**
   * @nodoc
   * Associated Icon - DEPRECATED - DO NOT USE.
   */
   virtual HRESULT SetAssociatedIcon (const CATUnicodeString& iconName) = 0 ;
   
   /**
   * @nodoc
   * Associated Icon - DEPRECATED - DO NOT USE.
   */
   virtual HRESULT GetAssociatedIcon (CATUnicodeString& iconName) = 0 ;
   
   /**
   * @nodoc
   * Associated dictionary type.
   * Obsolet method, do not use.
   */
   virtual HRESULT SetAssociatedDictionaryType (const CATUnicodeString& DictionaryType) = 0 ;

   /**
   * @nodoc
   * Associated dictionary type.
   * Obsolet method, do not use.
   */
   virtual HRESULT GetAssociatedDictionaryType (CATUnicodeString& DictionaryType) = 0 ;
   
   /**
   * Duplicates the Keywords on a chapter.
   *   @param iFatherChapter
   *      The chaper from which the keyword are coped, this paramater is not taken 
   *      into account if LstKeyword is valuated 
   *   @param LstKeywords
   *      The list of keyword to dupilcate
   */
   virtual HRESULT HeritageOfKeywords(const CATICatalogChapter_var& iFatherChapter,const CATListValCATICatalogKeyword_var* LstKeywords=NULL ) = 0;
      
   /**
   * @nodoc
   */
   virtual CATListValCATICatalogKeyword_var* ListKeywords () = 0 ;
   
   /**
   * @nodoc
   * @return  CATBaseUnknown#Release
   */  
   virtual CATICatalogKeyword* FindKeyword (const CATUnicodeString& iName) = 0 ;
   
   /**
   * @nodoc
   */
   virtual CATListValCATICatalogDescription_var* ListDescriptions () = 0 ;
   
   /**
   * @nodoc
   * @return  CATBaseUnknown#Release
   */
   virtual CATICatalogDescription* AddDescription (CATILinkableObject* extObj=0) = 0 ;

  /**
   *   Renames one of the keywords of the chapter.
   *   @param iKeyword
   *      The keyword to rename.
   *   @param iNewName
   *      The new name of the keyword to rename.
   */
   virtual HRESULT RenameKeyword(CATICatalogKeyword& iKeyword,
       const CATUnicodeString& iNewName) = 0 ;


} ;

CATDeclareHandler( CATICatalogChapter, CATBaseUnknown );

#endif
