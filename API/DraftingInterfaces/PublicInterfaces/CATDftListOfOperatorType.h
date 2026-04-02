// COPYRIGHT Dassault Systemes 2005
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */
#ifndef CATDftListOfOperatorType_H
#define CATDftListOfOperatorType_H

#include "DraftingItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfInt.h"

//-----------------------------------------------------------------------

/**
 * Type of a view operator.
 * @param DftBreak
 *   Break view operator.
 * @param DftBreakout
 *   Breakout view operator.
 * @param Dft3DBox
 *   3D Box view operator.
 * @param DftClipping
 *   Clipping view operator.
 * @param DftSection
 *   Section view operator.
 * @param DftHLR
 *   HLR view operator.
 */

enum CATDftGenOperatorType{DftBreak=0,DftBreakout=1,Dft3DBox=2,DftClipping=3,DftSection=4, DftHLR=5};

class ExportedByDraftingItfCPP CATDftListOfOperatorType: public CATBaseUnknown
{
  CATDeclareClass;

public:
	
	// Standard constructors and destructors
	// -------------------------------------
	CATDftListOfOperatorType ();
	virtual ~CATDftListOfOperatorType ();
	HRESULT AddOperator(CATDftGenOperatorType iOperator);
	HRESULT GetAt(int iIndex,CATDftGenOperatorType& iOperator);
	HRESULT Locate(CATDftGenOperatorType iOperatorType, int oIndex=0);
	int Size();
	void Empty();
private:
	CATListOfInt _OperatorList;
	// Copy constructor and equal operator
	// -----------------------------------
	CATDftListOfOperatorType (CATDftListOfOperatorType &);
	CATDftListOfOperatorType& operator=(CATDftListOfOperatorType&);

};

//-----------------------------------------------------------------------

#endif
