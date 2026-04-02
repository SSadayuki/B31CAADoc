#ifndef CATISamExplicitation_H
#define CATISamExplicitation_H
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000  
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//=================================================================================
#include "CATAnalysisInterface.h"
#include "CATBoolean.h"
#include "CATBaseUnknown.h"

class CATISpecObject;
class CATISamAnalysisModel;
class CATAnalysisExplicitData;
class CATAnalysisExplicitListUsr;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamExplicitation ;
#else
extern "C" const IID IID_CATISamExplicitation ;
#endif

//------------------------------------------------------------------

/**
 * Interface to generate the Field model.
 * <b>Role:</b>Interface designed to ensure the possibility for the analysis
 * features to be translated into a format understandable by 
 * solvers (Explicit format).
 * The translation of an analysis feature into an explicit language may
 * result in the creation of several explicit data.
 */
class ExportedByCATAnalysisInterface CATISamExplicitation: public CATBaseUnknown
	{
	CATDeclareInterface;

	public :

    /**
     * Translates Analysis feature into an explicit language described in
	 * the field Model.
	 * @param iFeatToTranslate
	 *	Define the Analysis Feature that must be translated.
	 * @param iFEMModel
	 *	Define the Analysis Model, that is to say the context in which the 
	 *	Analysis Feature is defined.
 	 * @param iOldExplObjects
	 *	Contain the old Analysis Feature translation.
 	 * @param oNewExplObjects
	 *	Should contain the result of the new Analysis Feature translation.
     */
		virtual HRESULT TranslateToFieldModel(CATISpecObject*			  iFeatToTranslate,
											  CATISamAnalysisModel*		  iFEMModel,
											  CATAnalysisExplicitListUsr& iOldExplObjects,
											  CATAnalysisExplicitListUsr& oNewExplObjects) = 0; 
	};

//------------------------------------------------------------------

CATDeclareHandler( CATISamExplicitation, CATBaseUnknown );

#endif
