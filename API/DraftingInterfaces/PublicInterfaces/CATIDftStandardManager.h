
#ifndef CATIDftStandardManager_h
#define CATIDftStandardManager_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
*/

#include "IUnknown.h"
#include "CATIStringList.h"

class CATIDftStandard;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftStandardManager ;
#else
extern "C" const IID IID_CATIDftStandardManager;
#endif

/**
* Interface which manages the available standards for a drawing document.
*/


class ExportedByDraftingItfCPP CATIDftStandardManager : public IUnknown
{
	
public:

       
   /**
   * Description : Gets the list of the standards that can be used in the drawing document.
   * @param CATIStringList **oList : List of standard names.
   */  
 
    virtual HRESULT GetAvailableStandards ( CATIStringList **oList ) = 0;

   /**
   * Description : Gets the list of the standards that are used in the drawing document.
   * @param CATIStringList **oList : List of standard names.
   */  

    virtual HRESULT GetUsedStandards ( CATIStringList **oList ) = 0;

    
   /**
   * Description : Creates a standard in the drawing document
   * and makes it current.
   * @param wchar_t *iName : Name of standard to be created.
   */  
    virtual HRESULT ImportStandard ( wchar_t *iName ) = 0;


  /**
   * Upgrades the current standard.
   * UpgradeStandard differs from ImportStandard in its way of updating formats.
   * @return
   * Un <tt>HRESULT</tt>
   * <dl>
   * <dt> <tt>S_OK</tt>     <dd> Success.
   * <dt> <tt>E_FAIL</tt>   <dd> Error.
   * </dl>
   */
    virtual HRESULT UpgradeStandard() = 0;

    
   /**
   * @nodoc
   * Description : Creates a standard in the drawing document
   * and makes it current, but doesn't check if the switch is possible without loss.
   * Shouldn't be used outside the creation of a drawing.
   * @param wchar_t *iName : Name of standard to be created.
   * @param int iCleanPRJ : if non null, the old standard is not updated but destroyed before
   *                        been rebuilt. All the contained descriptions will be lost.
   */  
    virtual HRESULT ImportStandardWithoutCheck ( wchar_t *iName, int iCleanPRJ=0 ) = 0;
  
    
   /**
   * Description : Gets the current standard name in the drawing document..
   * @param wchar_t **oName : Name of the current standard.
   */  
    virtual HRESULT GetDefaultStandard ( wchar_t **oName ) = 0;

   /**
   * Description : Gets the current standard object in the drawing document..
   * @param CATIDftStandard **oCurrentStd : pointer to the current standard object.
   */  
    virtual HRESULT GetDefaultStandardPtr ( CATIDftStandard **oCurrentStd ) = 0;

    /**
    * @deprecated CXR24
    * do not use
    */
    virtual HRESULT SetDefaultStandard ( wchar_t *iName ) = 0;


   /**
   * Description : Gets the standard object from its name.
   * @param wchar_t *iStd : Name of standard to be retrieved
   * @param CATIDftStandard **ooStand : pointer to the standard object.
   */  
    virtual HRESULT GetStandard ( wchar_t *iStd, CATIDftStandard **oStand ) = 0;
			
};

#endif













