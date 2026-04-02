/* -*-c++-*- */
#ifndef CATICheckReport_H
#define CATICheckReport_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "Report.h"

class CATListValCATBaseUnknown_var;
class CATICheck_var;
class CATIGenericRuleBaseComponent_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByReport IID IID_CATICheckReport ;
#else
extern "C" const IID IID_CATICheckReport ;
#endif

#include "CATLISTV_CATIReportObject.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATListValCATIInstance.h"

/**
* Interface dedicated to retrieving the t-uples of an expert check, or information on that check.
*
* <b>Role</b> this interface can be used to retrieve the list of t-uples failing or
* succeeding the condition of a check. The @href CATICheck implementation and the
* @href CATICheckReport implementation have to be made on the same feature.
*
* @see CATICheck .
*/

class ExportedByReport CATICheckReport: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	
	/**
	* Type of t-uples to be retrieved.
	*
	* @param None  None of the t-uples.
	* @param Fail  Only the t-uples failing the condition.
	* @param Pass  Only the t-uples succeeding the condition.
	* @param All   All the t-uples.
	*/
	enum ReportEnum
	{
		None = 1,
		Fail = 2,
		Pass = 3,
		All  = 4
	} ;
    
	
	/**
	* Sets the report type.
	*
	* @param iReportType Type of the t-uples to be retrieved.
	*/
	virtual void                             SetReport(ReportEnum iReportType = None)=0 ;

	/**
	* Retrieves the list of specified t-uples.
	*
	* @param iReportType Type of the t-uples to be retrieved.
	* @param iolListToBeFilled List to be filled with the t-uples, seen as @href CATIReportObject .
	*
	* @return Number of t-uples.
	*/
	virtual int                              ExtractReportObjects(ReportEnum iReportType, CATListValCATIReportObject_var& iolListToBeFilled)=0;

	/** @nodoc */
	virtual int                              ExtractReport(ReportEnum iReportType, CATListValCATISpecObject_var& iolListToBeFilled)=0;
	
	/**
	* Returns the number of t-uples failing the condition.
	*
	* @return number of t-uples failing the condition.
	*/
	virtual int                              NumberFailed()=0 ;
    
	/**
	* Returns the number of t-uples succeeding the condition.
	*
	* @return number of t-uples succeeding the condition.
	*/
	virtual int                              NumberSucceeded()=0 ;
    
	/**
	* Resets the report.
	*
	* The list of t-uples of the report can become out-of-date, without
	* the CATICheckReport knowing it (for instance if an object of a type adressed
	* by the check, has been created, the report needs to be reset and extracted again).
	*/
	virtual void                             ResetReport()=0 ;
    
	/**
	* Returns the component (check, ruleset or rulebase) to which this check report is linked.
	*
	* @return component to which this check report is linked.
	*/
	virtual CATIGenericRuleBaseComponent_var GetGenericRuleBaseComponent()=0 ;

	/** @nodoc */
	virtual void SetFromCheck (const CATUnicodeString& fromcheckname)=0;

	/** @nodoc */
	virtual CATUnicodeString GetFromCheck()=0;

	/**
	* Add one t-uples in the list of failed t-uples.
	*
	* @param iListToBeFilled list of CATIInstance.
	* @return S_OK or E_FAILED
	*/
	virtual HRESULT AddTupleFailed (CATListValCATIInstance_var& iListToBeFilled) =0;

	/**
	* Add one t-uples in the list of succeeded t-uples.
	*
	* @param iListToBeFilled list of CATIInstance.
	* @return S_OK or E_FAILED
	*/
	virtual HRESULT AddTupleSucceeded (CATListValCATIInstance_var& ilListToBeFilled) =0;

	/**
	* Stop to fill the t-uples list automatically.
	*
	* You must use AddTupleFailed and AddTupleSucceeded to fill the t-uples.
	*/
	virtual void StopGenerateTuple()=0;

};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATICheckReport, CATBaseUnknown) ;

#endif
