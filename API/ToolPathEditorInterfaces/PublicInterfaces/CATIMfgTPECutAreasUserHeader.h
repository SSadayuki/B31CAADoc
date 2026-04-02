//===================================================================
// COPYRIGHT Dassault Systemes 2002
//===================================================================
#ifndef CATIMfgTPECutAreasUserHeader_H
#define CATIMfgTPECutAreasUserHeader_H

#include "TPEItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByTPEItfEnv IID IID_CATIMfgTPECutAreasUserHeader;
#else
extern "C" const IID IID_CATIMfgTPECutAreasUserHeader ;
#endif

/**
* @CAA2Level L1
* @CAA2Usage U5
*/


//------------------------------------------------------------------

/**
 * Interface to add user commands in the cut areas tool bar of the tool path editor. 
 *
 * <br><b>Role</b> This interface is intended to provide to users a way to add their
 * own command in the tool bar of "cut area" modification in the tool path editor.
 * @see CATIMfgTPECutAreasEditor
 **/
class ExportedByTPEItfEnv CATIMfgTPECutAreasUserHeader: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Give the user's list of headers of command in the tool bar "Cut Area" of the tool path editor.
     * @param ioHeadersList
     *   The list of headers.
     */
  virtual HRESULT GetHeaders( CATListValCATString &ioHeadersList )= 0;



};
CATDeclareHandler( CATIMfgTPECutAreasUserHeader, CATBaseUnknown );

//------------------------------------------------------------------

#endif
