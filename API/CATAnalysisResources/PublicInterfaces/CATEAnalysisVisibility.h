// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
#ifndef CATEAnalysisVisibility_H
#define CATEAnalysisVisibility_H
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */ 
#include "CATAnalysisResources.h"
#include "CATISamVisibility.h"

class CATListValCATBaseUnknown_var ;

//-----------------------------------------------------------------------

/**
 * Adaptor for CATISamVisibility interface.
 * This Adaptor can be used in <font color="red"> BOA DataExtension</font>.</p>
 * Basically, for implementing this interface, you just need to implement the constructor
 * by initializing the internal data @href #_Visibility.
 * @see CATISamVisibility.
 */
class ExportedByCATAnalysisResources CATEAnalysisVisibility: public CATISamVisibility
{
	public:

/**
 * Enumerate for decoding the visibility flag.
 * @param InGraph For feature visible in the feature tree.
 * @param In3D    For feature visible in 3D.
 */
	  enum DecodeVisibility {InGraph = (1<<0), In3D	= (1<<1)};

// Standard constructors and destructors for an implementation class
// -----------------------------------------------------------------
/**
 * Default constructor.
 */
		CATEAnalysisVisibility ();
/**
 * Default destructor.
 */
		virtual ~CATEAnalysisVisibility ();

/**
 * Defines the Visibility attribute of an analysis feature.
 *   @param iVisibility Value for Visibility. @href CATSamVisibility
 */
		virtual void SetVisibilityProperty(CATSamVisibility iVisibility);

/**
 * Returns the Visibility attribute of an analysis feature.
 *   @return iVisibility Value for Visibility. @href CATSamVisibility
 */

		virtual CATSamVisibility GetVisibilityProperty();
/**
 * Returns the Visibility attribute of an analysis feature in the feature tree.
 *   @return True if the feature is connected to the tree. @href CATSamVisibility
 */

		virtual CATBoolean IsVisibleInGraph();

/**
 * Returns the Visibility attribute of an analysis feature in the 3D Window.
 *   @return True if the feature will be visualize in the 3D Window . @href CATSamVisibility
 */

		virtual CATBoolean IsVisibleIn3D();

 /**
 * Returns the Visibility is managed by persistent attribute.
 * @return True if the feature have a persistent attribute for this implementation.
 */

    virtual CATBoolean IsPersistent() const ;

	protected :
/**
  * Set Up a default visibility.
  * <b>Default Value</b> is set up as <font color="red">VisuGraphAnd3D</font>.
  */
    CATSamVisibility _Visibility;

	private :

/**
 * Defines the show mode of an analysis feature.
 *   @param iStatus TRUE if feature must be in No Show mode
 */
		virtual void SetShowStatus(CATBoolean iStatus);

/**
 * Returns the show mode of an analysis feature.
 * @return True if the feature is in NoShow mode
 */
		virtual CATBoolean IsNoShow();
/**
 * Internal method.
 * Should not be used.
 * @return The list of parents for visualization and graph.
 */
    virtual CATListValCATBaseUnknown_var* GetFatherForGraphAnd3D();
		CATBoolean _ShowStatus;

};
//-----------------------------------------------------------------------

#endif
