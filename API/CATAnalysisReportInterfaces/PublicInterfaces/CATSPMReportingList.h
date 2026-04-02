#ifndef CATSPMReportingList_H_
#define CATSPMReportingList_H_

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

//////////////////////////////////////////////////////////////////////////////
//
//	Class to use to add a list aligned on a given separator
//
//	Example :
//
//		CATSPMReportingBuffer *Buf = new CATSPMReportingBuffer();
//		CATSPMReportingList *Lst = new CATSPMReportingList('=');
//		Lst -> addLine("Value1",       23.f,   "mm");
//		Lst -> addLine("Second_value", 6,      "");
//		Lst -> addLine("3rdValue",     5.798f, "MPa");
//		Lst -> addLine("OtherValue",   "YES",  "");
//		Buf -> AddObject ( Lst );
//
//	Writes in the report :
//
//		Value1       = 23.000 mm
//		Second_value =  6
//		3rdValue     =  5.798 MPa
//		OtherValue   = YES
//
//////////////////////////////////////////////////////////////////////////////


class ExportedByCATAnalysisReportInterfaces CATSPMReportingList : public CATSPMReportingObj
{	
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------    
	CATSPMReportingList(char Separator=':');
	virtual ~CATSPMReportingList();
	
    // Add a line to the list
	HRESULT addLine(const CATUnicodeString &VariableName, const CATUnicodeString &Value, const CATUnicodeString & Unit);
	HRESULT addLine(const CATUnicodeString &VariableName, float                   Value, const CATUnicodeString & Unit, const char *Format = "%g");
	HRESULT addLine(const CATUnicodeString &VariableName, double                  Value, const CATUnicodeString & Unit, const char *Format = "%g");
	HRESULT addLine(const CATUnicodeString &VariableName, int                     Value, const CATUnicodeString & Unit, const char *Format = "%d");
	
	// used only by CATSPMReportingBuffer :
	virtual CATSPMReportingType GetReportingType() const {return SPMReportingList;}
	virtual void Report(unsigned int iFileDescMain, const char*, boolean, unsigned int iFileDescNav) const ;
	virtual void ASCIIReport (CATUnicodeString& oReport) const;
	virtual int GetWidthInChar() const;
	
	// used only by CATSPMReportingTable and CATSPMReportingList
	virtual void ASCIIReport_in_Table (CATUnicodeString& oReport) const;

private:
	CATUnicodeString *_VarList;
	CATSPMReportingObj **_ValList;
	CATUnicodeString *_UnitList;
	char _Separator;
	int _NbLines; /* Number of already written lines */
	int _NbAllocatedLines; /* Number of allocated lines */
	
	void Reallocate();
	static char float_separator();
	void GetColsWidth(int& VarListLength, int& ValListLength, int& UnitListLength) const;
	void ASCIIReport_generic (CATUnicodeString& oReport, boolean IsInTable) const;
};


#endif
