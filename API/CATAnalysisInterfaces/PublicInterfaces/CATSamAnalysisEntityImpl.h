// COPYRIGHT DASSAULT SYSTEMES  1998
//=============================================================================
//
// CATSamAnalysisEntityImpl.h
//
//=============================================================================
//
// Usage Notes: this class extends AnalysisEntity feature for 
// CATIAAnalysisEntity interface
// 
//=============================================================================
// Jan. 99   Creation                       GFT
//=============================================================================
#ifndef CATSamAnalysisEntityImpl_H
#define CATSamAnalysisEntityImpl_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisToolkit.h"
#include "CATSamAnalysisEntityAdaptIDL.h"
#include "CATVariant.h"

class CATIScriptMethodCall;
class CATBaseDispatch;

/**
 * Root object used to implement derived classes of CATIAAnalysisEntity.
 * Declare your interface as <b>interface MyInterface : CATIAAnalysisEntity</b><br>
 * Implement it as <b>class MyImplementation : public CATSamAnalysisEntityImpl</b>.
 * @see CATSamAnalysisEntityAdaptIDL
 */
class ExportedByCATAnalysisToolkit CATSamAnalysisEntityImpl : public CATSamAnalysisEntityAdaptIDL
{
	CATDeclareClass;
  
	public :
/**
 * Default constructor.
 */
		CATSamAnalysisEntityImpl();
/**
 * Default destructor.
 */
		virtual ~CATSamAnalysisEntityImpl();


	private :

		CATSamAnalysisEntityImpl(const CATSamAnalysisEntityImpl &);
		CATSamAnalysisEntityImpl& operator=(const CATSamAnalysisEntityImpl &);

};   
#endif      
