// COPYRIGHT Dassault Systemes 2000
//===================================================================
//
// CATISamSharedEdit.h 
// Define the CATISamSharedEdit interface
//
/**
  * @CAA2Level L0
  * @CAA2Usage U3 
  */
//===================================================================
#ifndef CATISamSharedEdit_H
#define CATISamSharedEdit_H

#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"  

class CATPathElement;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamSharedEdit ;
#else
extern "C" const IID IID_CATISamSharedEdit
#endif

class CATCommand;

//------------------------------------------------------------------
  /**
  * Interface implemented by CATIA objects to get the feature edition command
  */ 
class ExportedByCATAnalysisInterface CATISamSharedEdit: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


	/**
    * @param iPath
    *   A <tt>CATPathElement</tt> to the current feature object
    * @return
    *   Returning the instanciated command, if any, is a good choice
    * @see CATPathElement
    */ 
    virtual CATCommand * Activate(CATPathElement * iPath) const	=0;	

};

//------------------------------------------------------------------
CATDeclareHandler(CATISamSharedEdit,CATBaseUnknown);

#endif
