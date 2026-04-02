#ifndef CATSPMReportingBuffer_H_
#define CATSPMReportingBuffer_H_

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
class CATSPMReportingObj;
class CATUnicodeString;
#include "CATBoolean.h"
#include "IUnknown.h"
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////
//
//	Object that manages all the creation of the text and HTML report, using
//	the objects that have been included in it.
//
//////////////////////////////////////////////////////////////////////////////////

class ExportedByCATAnalysisReportInterfaces CATSPMReportingBuffer
{
	
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------    
    CATSPMReportingBuffer();
    virtual ~CATSPMReportingBuffer();
    
    //-------------------------------
    // Generation of the HTML report 
    //-------------------------------
		// Flushes the content of the buffer.
		HRESULT Update();

    // Equivalent to BeginReport, Flush, then FinishReport,
    // excepted it checks whether there ought to be frames or not.
    HRESULT MakeReport  (const CATUnicodeString& HTMLDirPath, const CATUnicodeString& DocumentTitle);
   
   //-------------------------------
   // Generation of the text report
   //-------------------------------
    HRESULT MakeTextReport (const CATUnicodeString& DocumentTitle, CATUnicodeString& oReport) const;
    
    //--------------------------
    // Management of the Buffer
    //--------------------------

    // Add a Text, Table, List, Title or File object Obj to the CATSPMReportingBuffer Buffer 
    HRESULT AddObject ( CATSPMReportingObj * Obj );

    // Remove one of the added objects (may be a Bag)
		HRESULT RemoveObject ( int ObjIndex );
		// Attention : on ne va pas chercher les objets ranges dans des bags.
		HRESULT RemoveObject ( CATSPMReportingObj * iObj );
    
    // Retrieves the position of an object in the buffer
		HRESULT GetObjectIndex ( CATSPMReportingObj * iObj , int & ObjIndex );
    
    // Insert an object at a desired position in the buffer 
    HRESULT InsertObjectAtIndex ( CATSPMReportingObj * Obj , int ObjIndex );

    int& GetPagesNumber();
    
    int& GetIndex();

private:
    friend class CATSPMReportingFile;
    friend class CATSPMReportingTitle;
    friend class CATSPMReportingCmd;

    int& GetIncludedFilesNumber();

    HRESULT MakeReloadPage();

    // Objects contained in the buffer
    CATSPMReportingObj **_Objs;
    // Number of recorded objects
    int _NbObjs;
    // Number of allocated objects
    int _NbAllocatedObjs;
    // Number of files included via CATSPMReportingFiles
    int _NbIncludedFiles;
    // Number of pages
    int _NbPages;
    // Index of the last anchor of the current page
    int _Index;
    // May there be frames or not (always true if you don't use MakeReport)
    CATBoolean _Frames;
		// To know whether the report has been written once
		// i.e. whether the contained objects have sustained SetBufferData or not.
		CATBoolean _ReportStarted;
    CATUnicodeString *_HTMLDirPath;
    CATUnicodeString *_DocumentTitle;
    unsigned int _fileDescMainFile;
    unsigned int _fileDescNavigationFile;

    static CATUnicodeString _BackgroundCode;
    
    void Reallocate();
    CATBoolean FramesExist() const;
    // Methods to generate the report : BeginReport and FinishReport must be used only once.
    HRESULT BeginReport ();
    HRESULT Flush();
    HRESULT FinishReport();

    // Methods to generate the text report
    HRESULT BeginTextReport (const CATUnicodeString& DocumentTitle, CATUnicodeString& oReport) const;
    HRESULT FlushText(CATUnicodeString& oReport) const;

    HRESULT CopyIcon(CATUnicodeString& orig, CATUnicodeString& dirorig) const;

    static HRESULT PrepareFrames (CATUnicodeString& HTMLDirPath,
				  const CATUnicodeString& DocumentTitle,
          unsigned int& oFileDescNavigationFile,
          unsigned int& oFileDescPageFile);
    static HRESULT MakeStylesheets(CATUnicodeString& HTMLDirPath, char Frames);	
};

#endif
