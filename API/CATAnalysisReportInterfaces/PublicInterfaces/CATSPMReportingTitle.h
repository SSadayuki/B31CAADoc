#ifndef CATSPMReportingTitle_H_
#define CATSPMReportingTitle_H_

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

////////////////////////////////////////////////////////////////////////////
//
//	Class to use to add a title
//	(the most important title has the smallest Order, which must be >=1)
//
//	Example :
//
//		CATSPMReportingTitle *Ttl1 = new CATSPMReportingTitle("Title 1", 1);
//		CATSPMReportingTitle *Ttl2 = new CATSPMReportingTitle("Title 2", 2);
//		CATSPMReportingTitle *Ttl3 = new CATSPMReportingTitle("Title 3", 3);
//		CATSPMReportingTitle *Ttl4 = new CATSPMReportingTitle("Title 4", 4);
//		CATSPMReportingText *Txt2 = new CATSPMReportingText();
//		Txt2->WriteUnicode("A small introduction here.");
//		CATSPMReportingTitle *Ttl5 = new CATSPMReportingTitle("Title 5", 5);
//		Buf -> AddObject ( Ttl1 );
//		Buf -> AddObject ( Ttl2 );
//		Buf -> AddObject ( Ttl3 );
//		Buf -> AddObject ( Ttl4 );
//		Buf -> AddObject ( Txt2 );
//		Buf -> AddObject ( Ttl5 );
//
//	Writes in the report something as follows and also shows the titles as hyperlinks
//	in the navigation frame of the HTML report :
//
//		***********
//		* Title 1 *
//		***********
//		  Title 2
//		  =======
//
//		  Title 3
//		  -------
// 	Title 4
// 	-------
//	A small introduction here.
//
// 	Title 5
//
////////////////////////////////////////////////////////////////////////////

class ExportedByCATAnalysisReportInterfaces CATSPMReportingTitle : public CATSPMReportingObj
{
public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------
	CATSPMReportingTitle(const CATUnicodeString & Title, int Order);
	virtual ~CATSPMReportingTitle();

  virtual void ASCIIReport (CATUnicodeString& oReport) const;

private:
  friend class CATSPMReportingBuffer;
  friend class CATSPMReportingBag;
  friend class CATSPMReportingList;

	virtual CATSPMReportingType GetReportingType() const {return SPMReportingTitle;}
	virtual void Report(unsigned int iFileDescMain, const char*, CATBoolean, unsigned int iFileDescNav) const ;
	virtual int GetWidthInChar() const;
	int GetOrder() const;
	virtual void SetBufferData (const CATUnicodeString *iHTMLDirPath);

	virtual void ASCIIReport_in_Table(CATUnicodeString& oReport) const;
	
	HRESULT NewPage(const CATUnicodeString* PageTitle, unsigned int& ioFileDescMain, const char* HTMLDirPath) const;

	CATUnicodeString *_Title;
	CATUnicodeString *_HTMLDirPath;
	int _Order;
};

#endif
