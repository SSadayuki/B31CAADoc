// COPYRIGHT DASSAULT SYSTEMES 2005
//===================================================================
//
// CATSamAnalysisUpdateTools.h
// Header definition of CATSamAnalysisUpdateTools
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//===================================================================
#ifndef CATSamAnalysisUpdateTools_H
#define CATSamAnalysisUpdateTools_H

#include "IUnknown.h"            
#include "CATAnalysisToolkit.h"
#include "CATBaseUnknown.h"

class CATISpecObject ;
class CATListValCATISpecObject_var ;
class CATListPtrCATBaseUnknown;

/**
 * General tools for Update control.
 */

class ExportedByCATAnalysisToolkit CATSamAnalysisUpdateTools
{

  public:
			     
/**
 * Checks whether an update cycle exists inside an object.
 * @param iFrom is the feature to check.
 * @param The list iOtherInputs contains a list of objects that you would like to put into iFrom as IN. <br>
 * <b>If NULL</b>, the method will only check the ifrom definition. <br>
 * Else, the method checks whether a cycle happens (either because iFrom cycles or because adding iOtherInputs as inputs of iFrom would cause a cycle).<br>
 * @return ListCycle will contain the list of features which cause the cycle. It's up to the caller to delete the ListCycle .
 * <b>Note:</b> It cannot check side effects like objects implementing CATISamAnalysisFeatureUpdate or CATIBuild and thereby potentially producing cycles (reimpacts).
 * All the check is done if iOtherInputs are located the same document as iFrom.
 */
    static CATListValCATISpecObject_var* FindUpdateCycle(const CATISpecObject* iFrom,CATListPtrCATBaseUnknown*  iOtherInputs=NULL);
		       
  private:
    
    CATSamAnalysisUpdateTools();
  

};
//-----------------------------------------------------------------------
#endif
