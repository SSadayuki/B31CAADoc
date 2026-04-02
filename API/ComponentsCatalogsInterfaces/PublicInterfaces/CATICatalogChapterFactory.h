/* -*-c++-*- */
#ifndef CATICatalogChapterFactory_H_
#define CATICatalogChapterFactory_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "booleanDef.h"
#include "CATBoolean.h"

class CATICatalogChapter;
class CATUnicodeString;
class CATListValCATICatalogChapter_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogChapterFactory;
#else
extern "C" const IID IID_CATICatalogChapterFactory;
#endif

/**
 * Interface to manage (create,delete,list) chapters in a catalog document.
 * <b>Role</b>: This interface is used to create, to find or to 
 * delete chapters within a catalog document. This interface is implemented
 * on the root container of the catalog document. You retrieve it thanks to
 * the @href CATInit#GetRootContainer method.
 * <br>All the chapters are stored
 * in the root container. The tree structure of the chapters is done by 
 * descriptions. 
 * @see CATICatalogChapter, CATICatalogDescription
 */
class ExportedByCATCclInterfaces CATICatalogChapterFactory : public CATBaseUnknown
{
	CATDeclareInterface;
public:
   /**
    *   Creates a new chapter.
    *   @param iName
    *      The name of the chapter.
    *   @param iKindIsEndChapter
    *      The type of the chapter.
    *      <ul>
    *      <li><tt>FALSE:</tt>This chapter contains sub-chapter.</li>
    *      <li><tt>TRUE:</tt>This chapter contains descriptions which all
    *       have links towards a component (feature,document,...) but not an 
    *       another chapter. In this case the chapter is also named a <b>family</b></li>
    *      </ul>
    *   @param oNewChapter [out, CATBaseUnknown#Release]
    *      The new created chapter.
    */
   virtual HRESULT CreateChapter ( const CATUnicodeString& iName, 
                                    CATBoolean iKindIsEndChapter,
                                    CATICatalogChapter*& oNewChapter) = 0 ;
   
   /**
   *   Retrieves the root chapter of the current document.
   *   <br><b>Role:</b>The first chapter created by the @href #CreateChapter method
   *  is the root chapter. This method retrievesn among all the  chapters of the root
   *  container, the first created.
   *   @param oChapter [out, CATBaseUnknown#Release]
   *      The root chapter.
   */
   virtual HRESULT GetRootChapter(CATICatalogChapter*& oChapter) = 0 ;
   
   /**
   *   Retrieves a chapter from its name in the current document.
   *   @param iName
   *      The name of the chapter to retrieve.
   *   @param oChapter [out, CATBaseUnknown#Release]
   *      The retrieved chapter.
   */
	virtual HRESULT FindChapter (const CATUnicodeString& iName, CATICatalogChapter*& oChapter) = 0 ;

   /**
    *   Retrieves the list of chapters from its name in the root container.
    *   <br><b>Role:</b>This method retrieves only the chapters inside the current
    * root container. It means that this method doesn't retrieve the external chapters.
    *   @param iName
    *      The name of the chapter to retrieve.
    *   @param oChapterList
    *      The list of retrieved chapters.
    */
	virtual HRESULT FindListChapter (const CATUnicodeString& iName, CATListValCATICatalogChapter_var& oChapterList) = 0 ;

   /**
    *   Retrieves the list of chapters in the root container.
    *   <br><b>Role:</b>This method retrieves only the chapters inside the current
    * root container. It means that this method doesn't retrieve the external chapters.
    *   @param oListChapters
    *      The list of chapters.
    */
   virtual HRESULT ListChapters (CATListValCATICatalogChapter_var*& oListChapters ) = 0 ;

   /**
    *   Removes a chapter and all its descriptions and keywords.
    *   @param iChapterToDelete
    *      The chapter to delete.
    *   @param oErrorMessage
    *      The error message if E_FAIL.
    *   @param iManageImpact
    *      1 to delete all links on this chapter in the current container.
    */
	virtual HRESULT DeleteChapter (CATICatalogChapter*& iChapterToDelete, CATUnicodeString & oErrorMessage, int iManageImpact = 1) = 0 ;

   //-------------------------------------------------------------------------------------------------------
   // NODOC OR DEPRECATED
   //-------------------------------------------------------------------------------------------------------
   /**
   * @nodoc
   */   
   virtual CATListValCATICatalogChapter_var* ListChapters () = 0 ;

} ;



CATDeclareHandler( CATICatalogChapterFactory, CATBaseUnknown );

#endif
