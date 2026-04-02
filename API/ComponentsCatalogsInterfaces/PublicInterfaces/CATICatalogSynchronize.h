/* -*-c++-*- */
#ifndef CATICatalogSynchronize_H
#define CATICatalogSynchronize_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATICkeType.h"

class CATPixelImage;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogSynchronize;
#else
extern "C" const IID IID_CATICatalogSynchronize;
#endif

//------------------------------------------------------------------
/**
 * Interface for catalog component synchronisation.
 * <b>Role:</b>
 * This interface enables to components to update their attributes in catalog
 * like name, preview and keyword values.
 * This interface is used during the synchronization step in Edit/Links.
  * <br>This interface can be implemented (it is not mandatory) on a component 
  * when it must be integrated
  * into a catalog document. To integrate a new type of component in a catalog document there
 * are two others interfaces to considere:
 * <ul>
 *  <li>@href CATICatalogEnable : Interface to authorize a component (only for
 *  features) to be integrated into a catalog </li>
  *  <li>@href CATICatalogInstantiation : Interface to provide the interactive command
 *  to instantiate in context the component</li>
 * </ul>
 */
class ExportedByCATCclInterfaces CATICatalogSynchronize: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

   /**
     * Retrieves the display name of the description.
     * <br><b>Role:</b>This method returns the display name of the description
     * ( @href CATICatalogDescription ) which contains a links towards an 
     * instance of the component. In other words, the name of the description,
     * returned by the @href CATICatalogDescription#GetName method is those 
     * returned by this method.
     * <br>The name of the description is also the value of the <tt>Name</tt>
     * keyword.
     *   @param oAlias
     *      The display name of the description.
     */
   virtual HRESULT GetAlias(CATUnicodeString& oAlias) = 0;
   /**
     * Retrieves embedded preview.
     * <br><b>Role:</b>
     * This method is called only if a previous embedded preview was stored in the catalog.
     *   @param oImage  [out, CATBaseUnknown#Release]
     *      A CATPixelImage with 130*110 size.
     */
   virtual HRESULT GetEmbeddedPreview(CATPixelImage** oImage) = 0;
   /**
     * Retrieves an integer keyword value.
     *   @param iKeywordName
     *      The name of the keyword.
     *   @param oKeywordValue
     *      The value of the keyword in MKS Unit.
     */
   virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName,
                                   int& oKeyWordValue) = 0;
   /**
     * Retrieves a double keyword value.
     *   @param iKeywordName
     *      The name of the keyword.
     *   @param iKeywordType
     *      The type of the keyword, usefull for MKS units.
     *   @param oKeywordValue
     *      The value of the keyword in MKS Unit.
     */
   virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName,
                                   const CATICkeType* iKeywordType,
                                   double& oKeyWordValue) = 0;
   /**
     * Retrieves a boolean keyword value.
     *   @param iKeywordName
     *      The name of the keyword.
     *   @param oKeywordValue
     *      The value of the keyword in MKS Unit.
     */
   virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName,
                                   CATCke::Boolean & oKeyWordValue) = 0;
   /**
     * Retrieves a string keyword value.
     *   @param iKeywordName
     *      The name of the keyword.
     *   @param oKeywordValue
     *      The value of the keyword in MKS Unit.
     */
   virtual HRESULT GetKeywordValue(const CATUnicodeString& iKeywordName,
                                   CATUnicodeString& oKeyWordValue) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATICatalogSynchronize,CATBaseUnknown);

#endif
