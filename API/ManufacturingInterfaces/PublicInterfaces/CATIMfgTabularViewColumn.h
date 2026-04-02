// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// CATIMfgTabularViewColumn.h
// Define the CATIMfgTabularViewColumn interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//
//  Jun 2004  Creation
//===================================================================
#ifndef CATIMfgTabularViewColumn_H
#define CATIMfgTabularViewColumn_H

/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/

#include "MfgItfEnv.h"

#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATListOfCATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfCATBaseUnknown.h"
#include "CATListOfInt.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgTabularViewColumn;
#else
extern "C" const IID IID_CATIMfgTabularViewColumn ;
#endif

//------------------------------------------------------------------

/**
 * Interface for management of new columns in the Process Table.<br>
 */
class ExportedByMfgItfEnv CATIMfgTabularViewColumn: public CATBaseUnknown
{
  CATDeclareInterface;

public:


  /**
    * Retrieves the list of ColumnId Of the new columns.
    * @param oListColumnId	The list of ColumId
	* @return
	*	S_Ok  : is succeded<br>
	*	E_FAIL : otherwise
    */
    virtual HRESULT GetListColumnId(CATListOfCATString& oListColumnId) = 0;

  /**
    *	Retrieves the list of titles which will be shown at the head of the new columns.
    * @param oListTitle	The list of titles
	* @return
	*	S_Ok  : is succeded<br>
	*	E_FAIL : otherwise
    */
    virtual HRESULT GetListTitleColumn(CATListOfCATUnicodeString& oListTitle) = 0;

  /**
    *	Retrieves the CkeParm for an Activity and a ColumnId.
    * @param ispBUActivity	The Activity
    * @param iColumnId	The ColumnId
    * @param ospBUCkeParm	The CkeParm
    * @param oNoMultipleModification Flag to forbide or allow multi modification of parameter
    *     0: Multiple Modification on parameter is allowed (default value)
    *     1: Multiple Modification on parameter is forbiden
	* @return
	*	S_Ok  : is succeded<br>
	*	E_FAIL : otherwise
    */
    virtual HRESULT GetParamCke(const CATBaseUnknown_var& ispBUActivity,
                                const CATString& iColumnId,
                                CATBaseUnknown_var& ospBUCkeParm,
                                int& oNoMultiModification) = 0;

    /**
    *	Retrieves the value for an Activity and a ColumnId as a CATUnicodeString.
    * @param ispBUActivity The Activity
    * @param iColumnId	The ColumnId
    * @param ostrValue	The value
	* @return
	*	S_Ok  : is succeded<br>
	*	E_FAIL : otherwise
    */
    virtual HRESULT GetValue(const CATBaseUnknown_var& ispBUActivity,
                             const CATString& iColumnId,
                             CATUnicodeString& ostrValue) = 0;


    /**
    *	Resets from client request any cache managed on the possible implementation of the Interface.
    * @param iCacheID	The cache Id to reset (if more than one managed)
	* @return
	*	S_Ok  : is succeded<br>
	*	E_FAIL : otherwise
    */
    virtual HRESULT ResetCache(const int iCacheID) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
 CATDeclareHandler(CATIMfgTabularViewColumn, CATBaseUnknown) ;


#endif
