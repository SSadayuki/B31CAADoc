#ifndef CATSPMReportingFile_H_
#define CATSPMReportingFile_H_

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
#include "CATBooleanDef.h"

class CATUnicodeString;
///////////////////////////////////////////////////////////////////////////////////////
//
//	Class to use to insert a multimedia file in the report (image, animation...)
//
//	Example :
//	
//		CATSPMReportingBuffer *Buf = new CATSPMReportingBuffer();
//		CATSPMReportingFile *File = new CATSPMReportingFile(IMAGE, "/u/users/rdo/infos_reporting/buttonbar.gif");
//		Buf -> AddObject ( File );
//
//	inserts the JPEG image contained in ImageFile in the HTML report.
//
///////////////////////////////////////////////////////////////////////////////////////

enum CATSPMReportingFileType
{
	IMAGE,
	VRML,
	ANIMATION,
	SOUND
};


class ExportedByCATAnalysisReportInterfaces CATSPMReportingFile : public CATSPMReportingObj
{
public:
	CATSPMReportingFile(CATSPMReportingFileType FileType,
		      const char* iFilePath);
	virtual ~CATSPMReportingFile();
	
	virtual HRESULT RemoveFromReport();

	// used only by CATSPMReportingBuffer :
	virtual CATSPMReportingType GetReportingType() const{return SPMReportingFile;}
	virtual void Report(unsigned int iFileDescMain, const char*, boolean, unsigned int iFileDescNav) const ;
	virtual void ASCIIReport (CATUnicodeString& oReport) const;
	virtual int GetWidthInChar() const;
	virtual void SetBufferData (const CATUnicodeString *iHTMLDirPath);

	// used only by CATSPMReportingTable and CATSPMReportingList :
	virtual void ASCIIReport_in_Table (CATUnicodeString& oReport) const;
	
private:
	CATSPMReportingFileType _FileType;
	char* _SourceFilePath;
	CATUnicodeString *_HTMLDirPath;

	char* MoveFile(const char* HTMLDirPath) const;
};


#endif
