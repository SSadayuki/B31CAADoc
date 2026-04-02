// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATISamViewManager.h
//
//===================================================================
//
// Usage notes:
//   Gestion de la vue de l'objet (visu et graphe):
//        Creation, Modification, Destruction
//
//===================================================================
#ifndef CATISamViewManager_H
#define CATISamViewManager_H
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamViewManager ;
#else
extern "C" const IID IID_CATISamViewManager ;
#endif

class CATI3DGeoVisu;
//------------------------------------------------------------------

/**
 * Manages analysis object views.
 * <p>
 * Makes components ready to communicate with their visualization (graphical
 * representation) and their graph attachement. It creates, modifies and deletes 
 * the view (Graph and Visualization) of an analysis feature.
 * <p>
 * This interface manages the CATIModelEvents and CATIRedrawEvent.
 */
class ExportedByCATAnalysisInterface CATISamViewManager: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


/**
 * Creates the view.
 * @param  iFather: The connecting father.
 * @param iTypeView: The connection kind.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Manage all views. </li>
 * <li><font color="red">1</font color="red"> Manage 2D and 3D the visualization.</li>
 * <li><font color="red">2</font color="red"> Manage the Graph.</li></ul>
 */
	
	virtual HRESULT CreateView(CATBaseUnknown* iFather, int iTypeView = 0) = 0;

/**
 * Updates the view.
 * @param iTypeView: The connection kind.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Manage all views. </li>
 * <li><font color="red">1</font color="red"> Manage 2D and 3D the visualization.</li>
 * <li><font color="red">2</font color="red"> Manage the Graph.</li></ul>
 */
	virtual HRESULT ModifyView(int iTypeView = 0) = 0;

/**
 * Disconnect the view.
 * Should not be called. This is managed by us.
 * @param iTypeView: The connection kind.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Manage all views. </li>
 * <li><font color="red">1</font color="red"> Manage 2D and 3D the visualization.</li>
 * <li><font color="red">2</font color="red"> Manage the Graph.</li></ul>
 */

  virtual HRESULT DeleteView(int iTypeView = 0) = 0;

/**
 * Informs that the object is connected at least once.
 * @param iTypeView: The connection kind.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Manage all views. </li>
 * <li><font color="red">1</font color="red"> Manage 2D and 3D the visualization.</li>
 * <li><font color="red">2</font color="red"> Manage the Graph.</li></ul>
 */
	virtual void AttachToView(int iTypeView = 0) = 0;

/**
 * Informs that the object is no more connected.
 * @param iTypeView: The connection kind.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> Manage all views. </li>
 * <li><font color="red">1</font color="red"> Manage 2D and 3D the visualization.</li>
 * <li><font color="red">2</font color="red"> Manage the Graph.</li></ul>
 */
	virtual HRESULT DetachFromView(int iTypeView = 0) = 0;

/**
 * Adds temporary object to current feature visualization.
 * This method can be used for example to attach a command in the represenation of the feature.
 * To to this connect a  @href CATI3DGeoVisu implementation of your command 
 * in the @href CATStateCommand#Activate 
 * @param iObject The object to connect.
 */
	virtual HRESULT AddObjectView(CATI3DGeoVisu* iObject) = 0;

/**
 * Removes temporary object to current feature visualization.
 * This method can be used for example to attach a command in the represenation of the feature.
 * To to this connect a  @href CATI3DGeoVisu implementation of your command 
 * in the @href CATCommand#Cancel or @href CATStateCommand#Desactivate
 * @param iObject The object to disconnect.
 */
	virtual HRESULT RemoveObjectView(CATI3DGeoVisu* iObject) = 0;

/**
 * Retrieves temporary object to current feature visualization.
 * @param oObjectList The liust of connected objects.
 */
	virtual HRESULT GetAddedObjectsView(CATLISTV(CATBaseUnknown_var) &oObjectList) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamViewManager, CATBaseUnknown );

#endif
