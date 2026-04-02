#ifndef CATSPMReportingBag_H_
#define CATSPMReportingBag_H_

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
//	   - to a CATSPMReportingBag with CATSPMReportingBag::AddObject(CATSPMReportingObj*)
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
//	Class used to manage the deletion of reporting methods in CATSPMReportingCmd.
//	A CATSPMReportingBag just contains other CATSPMReportingObj's, the "Report"
//	method of which it calls when its own Report method is called by the Buffer.
//	In fact, a "clean" Buffer should contain only Bags containing other objects.
//
//	Example :
//
//		CATSPMReportingBuffer *Buf = new CATSPMReportingBuffer();
//		CATSPMReportingBag    *Bag = new CATSPMReportingBag();
//		CATSPMReportingText   *Text ("A table :");
//		Bag -> AddObject ( Text );
//		CATSPMReportingTable  *Tbl = new CATSPMReportingTable(Border);
//		Tbl -> SetText(0,0,"Results");
//		Tbl -> SetFloat(2,2,3.5323);
//		Tbl -> SetInt(0,1,5);
//		Bag -> AddObject ( Tbl );
//		Buf -> AddObject ( Bag );
//
//	Writes in the report an array such as :
//
//		A table :
//		 __________________________
//		| Results |   5  |        |
//		|_________|______|________|
//		|         |      |        |
//		|_________|______|________|
//		|         |      | 3.5323 |
//		|_________|______|________|
//
//////////////////////////////////////////////////////////////////////////////////


class ExportedByCATAnalysisReportInterfaces CATSPMReportingBag : public CATSPMReportingObj
{
	public:
    //------
    // Default constructor/copy constructor/other constructors/Destructor
    //------
		CATSPMReportingBag ();
		virtual ~CATSPMReportingBag();

		//------------------------------------------
		// Methods inherited from CATSPMReportingObj
		//------------------------------------------
    virtual CATSPMReportingType GetReportingType() const { return SPMReportingBag; }
    //iFileDesMain and iFileDescNav are descriptors that have been obtained through CATFOpen
		virtual void Report(unsigned int iFileDesMain, const char* HTMLDirPath,
                            CATBoolean Frames, unsigned int iFileDescNav) const;
		virtual void ASCIIReport(CATUnicodeString& oReport) const;
		virtual int GetWidthInChar() const;

		// Overload of the inherited functions
		virtual void SetBuffer (CATSPMReportingBuffer *Buffer);
		virtual void SetBufferData (const CATUnicodeString *iHTMLDirPath);

		//--------------------------
    // Management of the content
    //--------------------------
    // Add a CATSPMReportingObject Obj to the Bag
    void AddObject(CATSPMReportingObj* Obj);

	private:
    friend class CATSPMReportingBuffer;

		int GetNbTitles (int iOrder);
		virtual HRESULT RemoveFromReport();
		void Reallocate();

    // Objects contained in the buffer
		CATSPMReportingObj **_Objs;
		// Number of recorded objects
		int _NbObjs;
		// Number of allocated objects
		int _NbAllocatedObjs;
};

#endif
