#ifndef CATISamAnalysisContext_H
#define CATISamAnalysisContext_H
//==================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000  
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//==================================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATSamAnalysisContext.h"

class CATString;
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisContext ;
#else
extern "C" const IID IID_CATISamAnalysisContext ;
#endif

//==================================================================================
/**
 * Interface to define the usage context of an application based on CATISAMWorkshop.
 * <b>Role</b>:
 * Two contexts to customize an Analysis Workshop:
 * <ul><li>"Designer" is used for a GPS application. (Generative one)
 *     <li>"AdvancedMeshing" is used to work with meshing edition.</li></ul>
 */
class ExportedByCATAnalysisInterface CATISamAnalysisContext: public CATBaseUnknown
{
	CATDeclareInterface;

	public:
/**
 * Sets the context of the Workshop.
 * @param iContext context name.
 */
		virtual HRESULT SetContext(const CATString &iContext) = 0;
/**
 * Retrieves the context of the Workshop.
 * @param oContext context name.
 */
		virtual HRESULT GetContext(CATString &oContext) = 0;
/**
 * Sets the context of the CATAnalysis document.
 * @param iContext the context.
 */
		virtual HRESULT SetContext(const CATSamAnalysisContext &iContext) = 0;
/**
 * Retrieves the context of the CATAnalysis document.
 * @param oContext the context.
 */
		virtual HRESULT GetContext(CATSamAnalysisContext &oContext) = 0;

/**
 * Sets the default and global context visualization mode.
 * @param iDefaultMode the default visualization mode.
 * @param iGlobalMode the global visualization mode.
 * @param iPropagated TRUE if modes are valuated due to propagation mechanism
 * @param iUpdatVisu TRUE if Entities visulaization must be refreshed
 */
		virtual HRESULT SetVisuModes(const CATSamVisuMode iDefaultMode,
									               const CATSamVisuMode iGlobalMode,
																 const CATBoolean iPropagated = FALSE,
																 const CATBoolean iUpdateVisu = TRUE) = 0;

/**
 * Retrieves the default and global context visualization mode.
 * @param oDefaultMode the default visualization mode.
 * @param oGlobalMode the global visualization mode.
 */
		virtual HRESULT GetVisuModes(CATSamVisuMode & oDefaultMode, CATSamVisuMode & oGlobalMode) = 0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATISamAnalysisContext, CATBaseUnknown );

#endif
