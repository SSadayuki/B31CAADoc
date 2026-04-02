/* -*-c++-*- */
#ifndef CATIReportOptions_H
#define CATIReportOptions_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "Report.h"
#include "CATCke.h" //pour les type params
#include "CATExpertReportEnum.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByReport IID IID_CATIReportOptions ;
#else
extern "C" const IID IID_CATIReportOptions ;
#endif

/**
* Interface dedicated to customizing the report of an expert check.
*
* <b>Role</b> a report can be customized to let see only certain
* t-uples or only certain checks, to be verbose or not, ... .
*/

class ExportedByReport CATIReportOptions: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	/**
	* Sets the visualization type.
	*
	* @param iType @href CATExpertReportEnum#VisualizationTypeEnum .
	*/
	virtual void                           SetVisualizationType          (CATExpertReportEnum::VisualizationTypeEnum iType )=0;

	/**
	* Gets the visualization type.
	*
	* @return @href CATExpertReportEnum#VisualizationTypeEnum .
	*/
	virtual CATExpertReportEnum::VisualizationTypeEnum          GetVisualizationType          ()=0;

	/**
	* Sets the way the elements of the report are ordered.
	*
	* @param iType @href CATExpertReportEnum#ShowResultsEnum .
	*/
	virtual void                           SetShowResults                (CATExpertReportEnum::ShowResultsEnum iType )=0;

	/**
	* Gets the way the elements of the report are ordered.
	*
	* @return @href CATExpertReportEnum#ShowResultsEnum .
	*/
	virtual CATExpertReportEnum::ShowResultsEnum                GetShowResults                ()=0;
	
	/**
	* Sets the size of description (verbose or not).
	*
	* @param iType @href CATExpertReportEnum#DescriptionLengthEnum .
	*/
	virtual void                           SetDescriptionLength          (CATExpertReportEnum::DescriptionLengthEnum iType)=0;

	/**
	* Gets the size of description (verbose or not).
	*
	* @return @href CATExpertReportEnum#DescriptionLengthEnum .
	*/
	virtual CATExpertReportEnum::DescriptionLengthEnum          GetDescriptionLength          ()=0;
	
	/**
	* Sets the output format (text, HTML, ...).
	*
	* @param iType @href CATExpertReportEnum#OutputFormatEnum .
	*/
	virtual void                           SetOutputFormat               (CATExpertReportEnum::OutputFormatEnum iType )=0;

	/**
	* Gets the output format (text, HTML, ...).
	*
	* @return @href CATExpertReportEnum#OutputFormatEnum .
	*/
	virtual CATExpertReportEnum::OutputFormatEnum               GetOutputFormat               ()=0;
	
	/**
	* Sets the path where the report will be generated.
	*
	* @param iListOfPath list of strings (only the first one is useful).
	*/
	virtual void                           SetReportPath                 (const CATListOfCATUnicodeString& iListOfPath)=0; 

	/**
	* Gets the path where the report will be generated.
	*
	* @return list with one string.
	*/
	virtual CATListOfCATUnicodeString*      GetReportPath                 ()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIReportOptions, CATBaseUnknown) ;

#endif
