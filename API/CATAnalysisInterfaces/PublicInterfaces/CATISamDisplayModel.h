// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISamDisplayModel.h
// Define the CATISamDisplayModel interface
//
//===================================================================
#ifndef CATISamDisplayModel_H
#define CATISamDisplayModel_H
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
#include "CATAnalysisInterface.h"

#include "CATLISTV_CATBaseUnknown.h"
#include "CATBaseUnknown.h"
class CATISpecObject;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamDisplayModel;
#else
extern "C" const IID IID_CATISamDisplayModel ;
#endif

//------------------------------------------------------------------
/** 
 * Analysis 2D Display model access.
 * Allows to connect a 2D Display feature under an analysis set or an analysis entity.
 */ 
class ExportedByCATAnalysisInterface CATISamDisplayModel: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Adds a new Display in the model.
 * @param ipiDisplay the Display feature.
 */
  virtual HRESULT AddDisplay (const CATISpecObject* ipiDisplay) = 0;

/**
 * Removes a display from the model.
 * @param ipiDisplay the Display feature.
 */
  virtual HRESULT RemoveDisplay (const CATISpecObject* ipiDisplay) = 0;

/**
 * List all display's in the model.
 * @param oDisplayList the Display features.
 */
  virtual HRESULT ListDisplay (CATLISTV(CATBaseUnknown_var) * & oDisplayList) const = 0;

};

CATDeclareHandler(CATISamDisplayModel,CATBaseUnknown);


//------------------------------------------------------------------

#endif
