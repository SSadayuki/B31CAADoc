// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
//
// CATSamAnalysisContext.h
// Header definition of CATSamAnalysisContext
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
//===================================================================
#ifndef CATSamAnalysisContext_H
#define CATSamAnalysisContext_H

#include "CATAnalysisToolkit.h"
#include "CATString.h"
#include "CATBoolean.h"
#include "CATListOfCATString.h"


/**
 * Enumerate to manage visualization modes in the window 
 * definition. Values can be cumulated to multiple type authorized. <br> 
 * @param CATSamVisuModeMeshing: Mesh is visualized.
 * @param CATSamVisuModeGeometry: Geometry is visualized.
 * @param CATSamVisuModePreProcessing: Preprocessing is visualized.
 * @param CATSamVisuModePostProcessing: Images are visualized.
 * @param CATSamVisuModeRealDeformation: Real deformation image is visualized.
 */
typedef int CATSamVisuMode;
/** @nodoc  */
#define CATSamVisuModeMeshing			    (1<<0)		
/** @nodoc  */
#define CATSamVisuModeGeometry				(1<<1)		
/** @nodoc  */
#define CATSamVisuModePreProcessing		(1<<2)		
/** @nodoc  */
#define CATSamVisuModePostProcessing	(1<<3)		
/** @nodoc  */
#define CATSamVisuModeRealDeformation	(1<<4)		

/** @nodoc  */
/** @deprecated V5R15 do not use */
#define CATSamVisuModeGroups					(1<<5)		
/** @nodoc  */
/** @deprecated V5R15 use CATSamVisuModeMeshing instead*/
#define CATSamVisuModeMeshingRes			(1<<6)		


/**
  * Class representing an analysis context.
  * <b> Role </b>: 
  * Provides a structure which is easy to use for managing the analysis context.
  * Context is defined by it's name:
  * <ul><li>"Designer" is used for a GPS application. (Generative one)
  *     <li>"AdvancedMeshing" is used to work with meshing edition.</li></ul>
  * Context allow also to configure a workbench to be in read-only mode.
  * @see CATISamAnalysisContext , CATISamAnalysisContextCheck
  */

class ExportedByCATAnalysisToolkit CATSamAnalysisContext
{

	friend class CATESamDocumentAnalysisContext;
	friend class CATESamEditorAnalysisContext;

  public:

/**
 * Default Constructor.
 */ 
    CATSamAnalysisContext() ;
    
/**
 * Copy Constructor.
 * @param iContext: The context to copy.
 */ 
   CATSamAnalysisContext(const CATSamAnalysisContext &iContext) ;
    
/**
 * Destructor.
 */ 
    virtual ~CATSamAnalysisContext() ;

/**
 * Assignment operator. 
 * @param iContext: The context to assign.
 */
    CATSamAnalysisContext &operator=(const CATSamAnalysisContext &iContext) ;

/** @deprecated V5R15 Use @href CATISamAnalysisContext#SetVisuModes instead. */
	void SetVisuModes(const CATSamVisuMode iDefaultMode, const CATSamVisuMode iGlobalMode, const CATBoolean iOverload = FALSE );
/** @deprecated V5R15 Use @href CATISamAnalysisContext#GetVisuModes instead. */
	CATSamVisuMode GetVisuModes( CATSamVisuMode & oDefaultMode, CATSamVisuMode & oGlobalMode);

/** 
 * Name of the Context.
 * "AnalysisCheck_"_ContextName gives the late type of the object
 * implementing CATISamAnalysisContextCheck.
 */
  CATString           _ContextName ;

/** 
 * Set by default to "STRUCTURAL".
 * Used as a prefix to find the late type which implements "CATISamExplicitation"
 * <b>Note:</b> Do not change the contexte. Software not yet implemented.
 */
     CATString           _ExplicitationDomain ;
/** 
 * Indicates if the document should be read-only.
 */
     CATBoolean          _ReadOnly ;



	private:

/**
 * Depends on the current workbench and UI active object
 * Gives the default visualisation mode, i.e. the one out of the active object scope
 */
	 CATSamVisuMode _DefaultVisuMode;
/** 
 * Depends on the current workbench and UI active object.
 * Gives the global visualisation mode, i.e. the one below the active object
 */
	 CATSamVisuMode _GlobalVisuMode;
/**
 * Gives the overloaded state.
 * if TRUE, these visu modes are overloaded, otherwise they correspond to the editor context visu modes.
 */
	 CATBoolean _Overloaded;
		 
};

//-----------------------------------------------------------------------

#endif
