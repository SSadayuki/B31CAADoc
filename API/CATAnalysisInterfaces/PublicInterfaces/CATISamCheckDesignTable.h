// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATISamCheckDesignTable.h 
// Define the CATISamCheckDesignTable interface
//
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
#ifndef CATISamCheckDesignTable_H
#define CATISamCheckDesignTable_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

class CATIDesignTable;
class CATISamBasicComponent;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamCheckDesignTable ;
#else
extern "C" const IID IID_CATISamCheckDesignTable ;
#endif

//------------------------------------------------------------------

/**
 * Complete the definition of the SAMDesignTablePtr basic component.
 * The SAMDesignTablePtr is used in order to manage the storage of some data inside
 * design table files. This interface allows to add some controle on the content of 
 * this file. It can be complemented on the entity that aggregate the component or 
 * directely on the component.
 * <p>
 */
class ExportedByCATAnalysisInterface CATISamCheckDesignTable: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
	* Returns the number of column.
	* @param ipiBasicComponent : basic component.
	* @param oNb :  Number of columns
	*/
    virtual HRESULT GetNbColumns(const CATISamBasicComponent * ipiBasicComponent, int& oNb) =0;

/**
	* Returns the list of mangitude.
	* @param ipiBasicComponent : basic component.
	* @param oMagnitudes : The magnitude list.
	*/

    virtual HRESULT GetMagnitudes(const CATISamBasicComponent * ipiBasicComponent, 
                                  CATListOfCATUnicodeString& oMagnitudes) =0;
		
/**
	* Controles the file format.
	* @param ipiBasicComponent : basic component.
	* @param ipiDT :The design table file.
	* @param oUnits : The Units list.
	*/
    virtual HRESULT CheckFormat(const CATISamBasicComponent * ipiBasicComponent,
                                CATIDesignTable * iDT, CATListOfCATUnicodeString& oUnits) =0;
		
		
/**
	* Returns the title of the column(s).
	* @param ipiBasicComponent : basic component.
	* @param oTitles :  Number of columns
	*/
    virtual HRESULT GetColTitles(const CATISamBasicComponent * ipiBasicComponent,
                                 CATListOfCATUnicodeString& oTitles) =0;

/**
	* Adds a bounfing box option.
  * This make sense only if the design table returns a spatial way of assigning the values.
	* @param ipiBasicComponent : basic component which the bounding box belongs to
	* @param oIsBoundingBoxDisp : Controls of the check button.
  * <b>Legal Values:</b>
  * <ul>
  * <li><b>0</b>:      No check button is available.</li>
  * <li><b>1</b></li>  The check button is available.
  * </li></ul>
	*/
    virtual HRESULT IsBoundingBoxDisplayed(const CATISamBasicComponent * ipiBasicComponent,
                                           int & oIsBoundingBoxDisp) = 0;


};

//------------------------------------------------------------------

CATDeclareHandler(CATISamCheckDesignTable, CATBaseUnknown);

#endif
