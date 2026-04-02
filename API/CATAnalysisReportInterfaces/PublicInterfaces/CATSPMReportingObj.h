#ifndef CATSPMReportingObj_H_
#define CATSPMReportingObj_H_

//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=================================================================================
/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

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

#include "CATAnalysisReportInterfaces.h"

#include "CATBoolean.h"
#include "IUnknown.h"
class CATSPMReportingBuffer;
class CATUnicodeString;


/** @c++ansi fbq 2004-08-05.10:18:26 [Replace forward declaration by #include <iosfwd.h>] **/
#ifdef _CAT_ANSI_STREAMS
#include <iosfwd.h>
#endif

//
// Possible types of the objects derived
// from the current class
//

enum CATSPMReportingType
{
	SPMReportingObj,
	SPMReportingBag,
	SPMReportingText, 
	SPMReportingTable, 
	SPMReportingList, 
  SPMReportingTitle,
	SPMReportingFile,
	SPMReportingFloat,
	SPMReportingInt
};

//
// Generic Class for report
// For implementation only
//

class ExportedByCATAnalysisReportInterfaces CATSPMReportingObj
{
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------
	CATSPMReportingObj();
	virtual ~CATSPMReportingObj();
	
	virtual HRESULT RemoveFromReport();

    //------
    // Other methods
    //------
	virtual CATSPMReportingType GetReportingType() const{return SPMReportingObj;} 
	virtual void Report(unsigned int iFileDescMain,
											const char* HTMLDirPath,
											CATBoolean Frames,
											unsigned int iFileDescNav) const;
	virtual void ASCIIReport(CATUnicodeString& oReport) const = 0;

	virtual int GetWidthInChar() const = 0;
	
protected:
  friend class CATSPMReportingList;
  friend class CATSPMReportingTable;
  friend class CATSPMReportingBuffer;
  friend class CATSPMReportingBag;

  virtual void Report_in_List(unsigned int iFileDesMain,
                              const char* HTMLDirPath,
                              CATBoolean Frames,
                              unsigned int iFileDescNav,
                              char FloatExists) const;

  virtual void Report_in_Table (unsigned int iFileDesMain,
                                const char* HTMLDirPath,
                                CATBoolean Frames,
                                unsigned int iFileDescNav,
                                 char IsTitle) const;

	virtual void ASCIIReport_in_Table(CATUnicodeString& oReport) const;

	virtual void SetBuffer (CATSPMReportingBuffer *Buffer);
	virtual void SetBufferData (const CATUnicodeString *iHTMLDirPath);

	CATSPMReportingBuffer *_Buffer;
};

#endif
