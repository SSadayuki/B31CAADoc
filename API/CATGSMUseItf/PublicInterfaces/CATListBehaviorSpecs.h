// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* @collection CATLISTP(CATLIST(IID))
* Collection class for CATLIST(IID).
*/

#ifndef CATListBehaviorSpecs_H
#define CATListBehaviorSpecs_H

#include "CATGSMUseItfExportedBy.h"
#include "CATCollec.h"
#include "CATLISTP_IID.h"
#include "CATLISTP_Clean.h"
#include <iostream>

#define CATLISTP_Append
#define CATLISTP_AppendList

class CATListPtrIID;

struct ListPtrIID
{
	CATListPtrIID listOfIID;
	ListPtrIID* nextOfList;
	ListPtrIID(CATListPtrIID nIIDs) : listOfIID(nIIDs) {};
};

class ExportedByCATGSMUseItf CATListBehaviorSpecs
{
public:
	// Standard constructors and destructors
	// -------------------------------------
	CATListBehaviorSpecs();
	virtual ~CATListBehaviorSpecs();

	void AppendListIID(const CATListPtrIID iListIID);
	int GetSize();
	void GetListIID(CATListPtrIID& oListIID, int i);

private:
	// Copy constructor and equal operator
	// -----------------------------------
	CATListBehaviorSpecs(CATListBehaviorSpecs &);
	CATListBehaviorSpecs& operator=(CATListBehaviorSpecs&);

	ListPtrIID * _ListIID;
};

#endif
