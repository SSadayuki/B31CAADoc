#ifndef CATExpertReportEnum_H
#define CATExpertReportEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "Report.h"
#include "CATBaseUnknown.h"

/**
* Enumerated types for report generation.
*/

class ExportedByReport CATExpertReportEnum
{
public:
	enum ReportEnum
	{   
		Bidon,
		None,
		Fail,
		Pass,
		All
	} ;
	
	/**
	* Type of checks to be chosen.
	*
	* @param Passed  True checks.
	* @param Failed  False checks.
	* @param Both    True and false checks.
	*/
	enum VisualizationTypeEnum
	{   
		Passed  = 1,
		Failed  = 2,
		Both    = 3
	} ;
	
	/**
	* Sorting option for the text report.
	*
	* @param ByRule   Sort by the name of the rules.
	* @param ByObject Sort by the name of the objects.
	* @param ByState  Sort by the status of the rules (failed or succeeded).
	*/
	enum ShowResultsEnum
	{   
		ByRule    = 1,
		ByObject  = 2,
		ByState   = 3
	} ;
	
	/**
	* Output format of the text report.
	*
	* @param HTML  HTML format.
	* @param TEXT  Simple text format.
	* @param PRINT To the printer.
	* @param EMAIL As an e-mail.
	*/
	enum OutputFormatEnum
	{  
		HTML  = 1,
		TEXT  = 2,
		PRINT = 3,
		EMAIL = 4
	} ;
	
	
	/**
	* Precision of the text report.
	*
	* @param Long  Full text report (status and t-uples for each check).
	* @param Short Short text report (status only).
	*/
	enum DescriptionLengthEnum
	{  
		Long  = 1,
		Short  = 2
	} ;
	
	/**
	* Type of the corrective action to be performed on a false check.
	*
	* @param VBFunction   The corrective action is a VB script call on each t-uple failing the check.
	* @param Comment      The corrective action is a simple comment.
	* @param Http         The corrective action is an URL.
	* @param UserFunction The corrective action is a user function call on each t-uple failing the check.
	*/
	enum CorrectingFunctionTypeEnum
	{ 
		VBFunction  = 1,
		Comment  = 2,
		Http  = 3,
		UserFunction  = 4
	} ;
	
	/**
	* Status of a check.
	*
	* @param Red             False check.
	* @param Green           True check.
	* @param Black           Check solved but never fed with objects (no possible t-uple).
	* @param NotSolved       Check not solved.
	* @param InteropValidity Check able to determine its status itself according to a previously generated report.
	*/
	enum ValidityTypeEnum
	{   
		Red      = 1,
		Green    = 2,
		Black    = 3,
		NotSolved =4,
		InteropValidity =5
	} ;

private:
	CATExpertReportEnum();
};

#endif
