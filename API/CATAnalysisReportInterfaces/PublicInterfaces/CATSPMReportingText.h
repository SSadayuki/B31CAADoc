#ifndef CATSPMReportingText_H_
#define CATSPMReportingText_H_

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//=========================================================================================================
// COPYRIGHT DASSAULT SYSTEMES  1999
//=========================================================================================================
//
// Usage Notes:
//	When you add an object (i.e. an instance of a class derived from
//   CATSPMReportingObj) :
//	   - to a CATSPMReportingBuffer with CATSPMReportingBuffer::AddObject(CATSPMReportingObj*)
//	   - to a CATSPMReportingTable with CATSPMReportingTable::SetObj (int, int, CATSPMReportingObj *)
//   DO NOT DEALLOCATE IT!
//   It will be automatically deleted when you call the destructor of your
//   CATSPMReportingBuffer instance.
//      Do not add the same object to two different CATSPMReportingBuffer instances.
// 
//=========================================================================================================
// Juin 99   Creation                                   RDO
//=========================================================================================================


#include "CATAnalysisReportInterfaces.h"
#include "CATSPMReportingObj.h"
#include "IUnknown.h"
#include "CATBooleanDef.h"

/////////////////////////////////////////////////////////////////////////////
//
//	Class to use to add ASCII text to the report
//
//	Example :
//
//		CATSPMReportingBuffer *Buf = new CATSPMReportingBuffer();
//		CATSPMReportingText *Txt = new CATSPMReportingText();
//		Txt->WriteUnicode("Hello CATIA");
//		Txt->WriteUnicode("You're wonderful!");
//		Buf -> AddObject ( Txt );
//
//	Writes in the report :
//
//		Hello CATIA
//		You're wonderful!
//
/////////////////////////////////////////////////////////////////////////////

class ExportedByCATAnalysisReportInterfaces CATSPMReportingText : public CATSPMReportingObj
{
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------    
	CATSPMReportingText();
	CATSPMReportingText(const CATUnicodeString& String);
	virtual ~CATSPMReportingText();
	
	HRESULT WriteUnicode (const CATUnicodeString & StringToAdd);
	HRESULT WriteFloat   (const float FloatToAdd, const char *Format = "%g");
	HRESULT WriteInt     (const int   IntToAdd,   const char *Format = "%d");
	
	// used only by CATSPMReportingBuffer :
	virtual CATSPMReportingType GetReportingType()  const{return SPMReportingText;}
	virtual void Report(unsigned int iFileDesMain, const char*, boolean, unsigned int iFileDescNav) const ;
	virtual void ASCIIReport (CATUnicodeString& oReport) const;
	virtual int GetWidthInChar() const;
	
	// used only by CATSPMReportingList :
	virtual void Report_in_List(unsigned int iFileDesMain, const char*, boolean, unsigned int iFileDescNav, char) const;
	
	// used only by CATSPMReportingTable :
	virtual void Report_in_Table (unsigned int iFileDesMain,
																const char* HTMLDirPath,
																CATBoolean Frames,
																unsigned int iFileDescNav,
																char IsTitle)const;
private:
	CATUnicodeString *_AllText;
	
	static void ReplaceAllOccurrences(CATUnicodeString& StringToChange,
																		const CATUnicodeString& StringToFind,
																		const CATUnicodeString& StringToInsert);
};

#endif
