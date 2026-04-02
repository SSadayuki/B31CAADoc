/* -*-c++-*- */
#ifndef CATICatalogKeyword_H_
#define CATICatalogKeyword_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATCclInterfaces.h"
#include "CATUnicodeString.h"
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATICkeType.h"
#include "CATICkeUnit.h"
#include "CATIParmValuator.h"
#include "booleanDef.h"
#include "CATBoolean.h"

class CATICatalogChapter ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogKeyword ;
#else
extern "C" const IID IID_CATICatalogKeyword ;
#endif

/**
* Interface for the catalog keywords.
* <br><b>Role</b>: This interface is used to handle catalog keywords.<br>
* A keyword is an object which is used by chapter for describing descriptions.
* A keyword can be see like a property (dimensions, customers,...).<br>
* About the keyword: 
* <ul>
* <li>It is a data of the chapter. It is created by the @href CATICatalogChapter#AddKeyword 
* method,</li>
* <li>It can have a default value, See the 
* @href CATICatalogChapter#SetDefaultValue methods,</li>
* <li>It can have a value defined on each description of the chapter.To valuate a keyword, 
* use @href CATICatalogDescription#SetValue methods. </li>
* </ul>
* This interface enables methods to retrieve informations on a keyword (its name, its type,
*  its unit and if it is hidden or not inside a Catalog Browser Dialog box)
* @see CATICatalogChapter,CATICatalogDescription, CATICatalogBrowser
*/

class ExportedByCATCclInterfaces CATICatalogKeyword : public CATBaseUnknown
{
   CATDeclareInterface;
   
public :
   
   /**
   *   Returns the name of the keyword.
   *   The returned name is the name of the feature.
   *   @return
   *     The name of the keyword.
   */
   virtual CATUnicodeString GetKeywordName () = 0 ;

   /**
   *   Returns the type of the keyword.
   *   @return  CATBaseUnknown#Release
   *     The type of the keyword or NULL, if an error has occured.
   */
   virtual CATICkeType * GetKeywordType () = 0 ;
   
   /**
   *   Returns the unit of the keyword.
   *   @return  CATBaseUnknown#Release
   *      The unit of the keyword or NULL, if an error has occured.
   */
   virtual CATICkeUnit * GetKeywordUnit () = 0 ;
   
   /**
   *   Returns the "hidden" property.
   *   <br><b>Role:</b>
   *   When a keyword is hidden, it's not displayed in the catalog browser.
   *   The keyword is only displayed and used in the catalog editor.
   *   @return
   *      TRUE is the keyword is hidden, else FALSE.
   */
   virtual CATBoolean GetHidden () = 0 ;
   
   /**
   *   Sets the "hidden" property. 
   *   <br><b>Role:</b>
   *   When a keyword is hidden, it's not displayed in the catalog browser.
   *   The keyword is only displayed and used in the catalog editor.
   *   @param iBoolean
   *     TRUE if the keyword is hidden,</br> 
   *     FALSE if the keyword is visible.
   */
   virtual void SetHidden (CATBoolean iBoolean) = 0 ;

   //-----------------------------------------------------------------------------------------
   // Methods NODOC or DEPRECATED.
   //-----------------------------------------------------------------------------------------
   /**
   * @nodoc
   */
   virtual CATBoolean GetVisibility () = 0 ;
   
   /**
   * @nodoc
   */
   virtual void SetVisibility (CATBoolean b) = 0 ;
   
   /**
   * @nodoc
   * Returns the active relation valuating the parameter.
   */
   virtual CATIParmValuator_var Relation() = 0;

   /**
   *   Retrieves the alias of the keyword.
   *   The alias is the name displayed in the catalog browser.
   *   @return
   *     The alias of the keyword.
   */
   virtual CATUnicodeString GetKeywordAlias() =0 ;
   
} ;


CATDeclareHandler( CATICatalogKeyword, CATBaseUnknown );

#endif
