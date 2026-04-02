#ifndef CATSPMReportingTable_H_
#define CATSPMReportingTable_H_

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
#include "CATSPMReportingObj.h"
class CATUnicodeString;


//////////////////////////////////////////////////////////////////////////////////
//
//	Class to use to add an array or a matrix
//
//	Example :
//
//		CATSPMReportingBuffer *Buf = new CATSPMReportingBuffer();
//		CATSPMReportingTable *Tbl = new CATSPMReportingTable(Border);
//		Tbl -> SetText(0,0,"Results");
//		Tbl -> SetFloat(2,2,3.5323);
//		Tbl -> SetInt(0,1,5);
//		Buf -> AddObject ( Tbl );
//
//	Writes in the report an array such as :
//
//		 __________________________
//		| Results |   5  |        |
//		|_________|______|________|
//		|         |      |        |
//		|_________|______|________|
//		|         |      | 3.5323 |
//		|_________|______|________|
//
//////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////
// Available styles for an array or matrix                    //
// Can be used with a logical OR ('|') as in TitleLeft|Border //
////////////////////////////////////////////////////////////////

typedef unsigned long CATSPMReportingTableStyle;
// The first case of each column is a title case
#define TitleUp     (1<<0)
// The last case of each column is a title case
#define TitleDown   (1<<1)
// The first case of each line is a title case
#define TitleLeft   (1<<2)
// The array has a border
#define Border      (1<<3)
// The array is not centered on the page
#define NotCentered (1<<4)

class ExportedByCATAnalysisReportInterfaces CATSPMReportingTable : public CATSPMReportingObj
{	
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------
	CATSPMReportingTable (CATSPMReportingTableStyle Style=0);
	virtual ~CATSPMReportingTable();
	
    // Functions to fill the table. The smallest LineNumber and ColumnNumber are 0.
	HRESULT SetInt   (int LineNumber, int ColumnNumber, int Text,    const char *Format = "%d");
	HRESULT SetFloat (int LineNumber, int ColumnNumber, float Text,  const char *Format = "%g");
	HRESULT SetFloat (int LineNumber, int ColumnNumber, double Text, const char *Format = "%g");
	HRESULT SetText  (int LineNumber, int ColumnNumber, const CATUnicodeString& Text);
	HRESULT SetObj   (int LineNumber, int ColumnNumber, CATSPMReportingObj *Obj);
	
private:
  friend class CATSPMReportingBuffer;
  friend class CATSPMReportingList;

	virtual CATSPMReportingType GetReportingType() const{return SPMReportingTable;}
	virtual void Report(unsigned int fileDescMain, const char*, CATBoolean, unsigned int fileDescNav) const ;
	virtual void ASCIIReport (CATUnicodeString& oReport) const;
	virtual int GetWidthInChar() const;
	
	virtual void ASCIIReport_in_Table (CATUnicodeString& oReport) const;

	void Reallocate(int LineNumber, int ColumnNumber);
	int* GetColsWidth() const;
	void PrintRow (CATUnicodeString& oReport,
    int RowNumber, const CATUnicodeString& BeginLine,
    const CATUnicodeString& BeginCase, const CATUnicodeString& EndCase,
    const int *ColsWidth ) const;

	void ASCIIReport_generic (CATUnicodeString& oReport, CATBoolean IsInTable) const;

  CATSPMReportingObj **_Cases;
	int _NbLines;
	int _NbCols;
	CATSPMReportingTableStyle _Style;	
};

#endif
