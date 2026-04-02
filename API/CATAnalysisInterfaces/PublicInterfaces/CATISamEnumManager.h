// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISamEnumManager.h
// Define the CATISamEnumManager interface
//
//===================================================================
//
// Usage notes:
//  Interface dedicated to manage a list inside an enumerated type 
//===================================================================
#ifndef CATISamEnumManager_H
#define CATISamEnumManager_H
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATESamEnumManager
  */

#include "CATAnalysisInterface.h"

#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"
#include "CATUnicodeString.h"
#include "CATISpecObject.h"
#include "CATSamDefs.h" 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamEnumManager ;
#else
extern "C" const IID IID_CATISamEnumManager;
#endif

/**
 * Interface to manage enumerate basic componenent that will create other basic components.
 * This inferface is to be implemented on a basic component build by derivation of "SAMListManager".
 * According to the first level selection return lists of basic components to instanciate.</p>
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class ExportedByCATAnalysisInterface CATISamEnumManager: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the mode of the selection.
* @param oMode : oMode = SAM_OR if only the selected element is present
*				 oMode = SAM_AND if all elements are present
*/	
	virtual HRESULT GetMode(CATSamSelectionMode & oMode) = 0;


 /**
 * Retrieves the list of strings defined in the enumerate.
 * @param oList : List of string inside an enumerated type 
 */
	virtual HRESULT GetList(CATListValCATUnicodeString & oList) = 0;

 /**
 * Retrieves the string and the index (position in the list of an enumerated type) which correspond 
 * with a string selected in a list.
 * @param oString : selected element as string
 * @param oIndex : Index of the selected element in the list
 */
    virtual HRESULT GetSelected(CATUnicodeString & oString, int & oIndex)  = 0;

 /**
 * Set the value of the enumerate .
 * @param iIndex : Index of the selected element in the list
 */
    virtual HRESULT SetSelected(int iIndex)  = 0;

 /**
 * Retrieves the list of features. 
 It can be basic component or analysis entity associated to a string.
 * @param iString : input string from the list
 * @param oFeatureName : features instance name
 * @param oFeatureType : features type
 * @param oListOfCATICkeType : type of the instance to create if Literal
 */
		virtual HRESULT GetResult(const CATUnicodeString & iString,
															CATListValCATUnicodeString & oFeatureName,
															CATListValCATUnicodeString & oFeatureType,
															CATLISTV(CATBaseUnknown_var)& oListOfCATICkeType) =0;

};

// Macro for handlers
CATDeclareHandler(CATISamEnumManager,CATBaseUnknown);

#endif
