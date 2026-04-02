#ifndef CATIProdDraftingProperties_H
#define CATIProdDraftingProperties_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATAssemblyInterfaces.h"

#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAssemblyInterfaces IID IID_CATIProdDraftingProperties;
#else
extern "C" const IID IID_CATIProdDraftingProperties;
#endif

/**
 * Interface to manage the drafting properties of a product.
 * <br><b>Role</b>: Allows to specify the properties that should
 * be used when generating views in the Drafting workbench.
 */
class ExportedByCATAssemblyInterfaces CATIProdDraftingProperties : public CATBaseUnknown
{
    CATDeclareInterface;
  
  public: 
  
   /**
    * Gets the Cut option.
    * @param oCutStatus
    *   The cut option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be cut when
    *            projected in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be cut when
    *            projected in section views</td></tr>
    * </table>
    */
    virtual HRESULT GetCutStatus( CATBoolean & oCutStatus ) = 0;
   /**
    * Retrieves the Cut option.
    * @param iCutStatus
    *   The cut option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be cut when
    *            projected in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be cut when
    *            projected in section views</td></tr>
    * </table>
    */
    virtual HRESULT SetCutStatus( const CATBoolean iCutStatus ) = 0;
  
   /**
    * Gets the Use option.
    * @param oUseStatus
    *   The use option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be projected in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be projected in section views</td></tr>
    * </table>
    */
    virtual HRESULT GetUseStatus( CATBoolean & oUseStatus ) = 0;
   /**
    * Retrieves the Use option.
    * @param iUseStatus
    *   The use option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be projected in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be projected in section views</td></tr>
    * </table>
    */
    virtual HRESULT SetUseStatus( const CATBoolean iUseStatus ) = 0;
  
   /**
    * Gets the hidden lines option.
    * @param oHiddenLineMode
    *   The hidden lines option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be represented
    *         with hidden lines in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be represented
    *         with hidden lines in section views</td></tr>
    * </table>
    */
    virtual HRESULT GetHiddenLineMode( CATBoolean & oHiddenLineMode ) = 0;
   /**
    * Retrieves the hidden lines option.
    * @param iHiddenLineMode
    *   The hidden lines option.
    * <table>
    *	    <tr><td>TRUE</td>    <td>the component will be represented
    *         with hidden lines in section views</td></tr>
    *     <tr><td>FALSE</td>   <td>the component will not be represented
    *         with hidden lines in section views</td></tr>
    * </table>
    */
    virtual HRESULT SetHiddenLineMode( const CATBoolean iHiddenLineMode ) = 0;
  
};

CATDeclareHandler(CATIProdDraftingProperties, CATInterfaceObject); 

#endif
