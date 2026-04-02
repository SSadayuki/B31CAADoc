#ifndef CATIntSpecContext_H
#define CATIntSpecContext_H
//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework InterferenceInterfaces
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2005 - DBS
//
//----------------------------------------------------------------------------

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */


#include "CATInterference.h"

#include "CATInterfereDefine.h"

#include "IUnknown.h"

class CATRepPath;
class CATInterfereBE;

/**
  * <b>Role</b>: Class to describe interference specification context.<br>
  * To use with CATInterfereModel
  *
  */
class ExportedByCATInterferenceInterfaces CATIntSpecContext
{
  public:
  
  //---------------------------------------------------------------------------
  /**
    * 
    * Create CATIntSpecContext.
    *
    * To construct a interference specification context
    * 
    */
  //---------------------------------------------------------------------------
      
      static CATIntSpecContext * Create();
      

  //---------------------------------------------------------------------------
  /**
    * SetFirstGroup.
    * 
    * @param ippTabPath
    *        The table of CATRepPath to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabPath] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT SetFirstGroup  (CATRepPath ** ippTabPath, int iSizeTab) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetSecondGroup.
    * 
    * @param ippTabPath
    *        The table of CATRepPath to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabPath] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT SetSecondGroup (CATRepPath ** ippTabPath, int iSizeTab) = 0;


  //---------------------------------------------------------------------------
  /**
    * SetFirstGroupOfBE.
    * 
    * @param ippTabBE
    *        The table of CATInterfereBE to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabBE] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT SetFirstGroupOfBE  (CATInterfereBE ** ippTabBE) = 0;

  //---------------------------------------------------------------------------
  /**
    * SetSecondGroupOfBE.
    * 
    * @param ippTabBE
    *        The table of CATInterfereBE to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabBE] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT SetSecondGroupOfBE  (CATInterfereBE ** ippTabBE) = 0;

  //---------------------------------------------------------------------------
  /**
    * GetFirstGroup.
    * 
    * @param oppTabPath
    *        The table of CATRepPath to the SpecContext
    *
    * @param oSizeTab
    *        The size of [ippTabPath] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT GetFirstGroup  (CATRepPath *** oppTabPath, int & oSizeTab) const = 0;

  //---------------------------------------------------------------------------
  /**
    * GetSecondGroup.
    * 
    * @param oppTabPath
    *        The table of CATRepPath to the SpecContext
    *
    * @param oSizeTab
    *        The size of [ippTabPath] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT GetSecondGroup (CATRepPath *** oppTabPath, int & oSizeTab) const = 0;

  //---------------------------------------------------------------------------
  /**
    * GetFirstGroupOfBE.
    * 
    * @param oppTabBE
    *        The table of CATInterfereBE to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabBE] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT GetFirstGroupOfBE   (CATInterfereBE *** oppTabBE) const = 0;

  //---------------------------------------------------------------------------
  /**
    * GetSecondGroupOfBE.
    * 
    * @param oppTabBE
    *        The table of CATInterfereBE to the SpecContext
    *
    * @param iSizeTab
    *        The size of [ippTabBE] table
    *
    * @return
    *        HRESULT
    * 
    */
  //---------------------------------------------------------------------------
    virtual
    HRESULT GetSecondGroupOfBE  (CATInterfereBE *** oppTabBE) const = 0;

  //---------------------------------------------------------------------------
  /**
    * DestroyBE - to delete all CATInterfereBE set in this.
    * 
    * @return
    *        HRESULT
     */
  //---------------------------------------------------------------------------
    virtual
    HRESULT DestroyBE()                                             = 0;

  //---------------------------------------------------------------------------
  /**
    * IsValidBE - to verify if all CATInterfereBE are valid.
    * 
    * @return
    *        HRESULT
     */
  //---------------------------------------------------------------------------
    virtual
    HRESULT IsValidBE()                                       const = 0;

  //---------------------------------------------------------------------------
  /**
    * 
    * Destruct CATIntSpecContext.
    *
    * To delete a interference specification context
    * 
    */
  //---------------------------------------------------------------------------
    virtual ~CATIntSpecContext();
};  



#endif // CATIntSpecContext_H


