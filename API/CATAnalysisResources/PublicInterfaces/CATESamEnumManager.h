// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATESamEnumManager.h
// Implement the CATISamEnumManager interface
//
//===================================================================
//
// Usage notes: Implement the CATISamEnumManager interface
//   
//===================================================================
#ifndef CATESamEnumManager_H
#define CATESamEnumManager_H
/***
 * @CAA2Level L1
 * @CAA2Usage U2
 */


#include "CATAnalysisResources.h"
#include "CATISamEnumManager.h"

/**
 * Adaptor for implementing CATISamEnumManager interface.
 * This inferface is to be implemented on a basic component build
 * by derivation of <b>SAMListManager</b>.</p>
 * DataExtension Implementation is mandatory.
 */

class ExportedByCATAnalysisResources CATESamEnumManager: public CATBaseUnknown
{
	CATDeclareClass;

	public:

/**
 * Default constructor.
 */
 	CATESamEnumManager();

/**
 * Destructor.
 */
  virtual ~CATESamEnumManager();


/**
 * Retrieves the mode of the selection.
 * @param oMode
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">SAM_OR</font color="red"> The basic component or entity comes from an enumerated type. </li>
 * <li><font color="red">SAM_AND </font color="red"> Otherwise. </li></ul>
 */	
	virtual HRESULT GetMode(CATSamSelectionMode & oMode);

/**
 * Retrieves the list of string.
 * @param oList  List of string 
 */
	virtual HRESULT GetList( CATListValCATUnicodeString & oList);

 /**
  * Retrieves the string and the index (position in the list of an enumerated type) which correspond 
  * with a string selected in a list.
  * @param oString  String which corresponds with the selected string in a box
  * @param oIndex  Index or position in the list of an enumerated type
  */
	 virtual HRESULT GetSelected(CATUnicodeString & oString, int & oIndex);

 /**
  * Set the value of the enumerate.
  * @param iIndex  Index of selected line
  */
   virtual HRESULT SetSelected(int iIndex);

 /**
  * Retrieves the list of features (basic component or analysis entity) associated to a string.
  * @param iString  input string from the list
  * @param oFeatureName  features instance name
  * @param oFeatureType  features type
  * @param oListOfCATICkeType  type of the instance to create if Literal
  */
	virtual HRESULT GetResult(const CATUnicodeString & iString,
														CATListValCATUnicodeString & oFeatureName,
														CATListValCATUnicodeString & oFeatureType,
														CATLISTV(CATBaseUnknown_var)& oListOfCATICkeType);
	



	private:

    void GetStringValuesList(CATListValCATUnicodeString & oValuesList);

		void Instanciate(CATListValCATUnicodeString & iFeatureName,
										CATListValCATUnicodeString & iFeatureType,
										CATLISTV(CATBaseUnknown_var) & iListOfCATICkeType);

		CATBoolean _FirstTime;
    CATESamEnumManager(const CATESamEnumManager &);
	  CATESamEnumManager& operator=(const CATESamEnumManager &);

};

#endif
