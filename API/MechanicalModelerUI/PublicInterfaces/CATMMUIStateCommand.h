#ifndef CATMMUIStateCommand_h
#define CATMMUIStateCommand_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATStateCommand.h"
#include "CATISpecObject.h"
#include "CATMechanicalModelerUI.h"
class CATCSO;
class CATPSO;
class CATHSO;
class CATISO;
class CATIPrtPart_var;
class CATFrmEditor;
class CATPathElement;

/**
 * Basic class for mechanical feature creation and edition commands.
* <b>Role</b>: This class is a base class to edit or create a mechanical feature.
 * Do not derive it directly, but derive one of its deriving class.
 * <br><br><b>About the edited/created feature(s) : </b>
 * there are two cases to consider:
 * <ul> 
 *   <li>There is only one feature in edition or creation</li>
 *    <br>You implement the @href #GiveMyFeature , and the default implementation of the @href #GiveMyFeatures method will 
 *    return a list with the only one feature. 
 *   <li>There are several features in edition or creation</li>
 *   <br>You implement the @href #GiveMyFeature method to return the main feature, and you implement the @href #GiveMyFeatures method
 *   to return a list. 
 */
class ExportedByCATMechanicalModelerUI CATMMUIStateCommand : public CATStateCommand
{
public:

   /**
    * Constructs a CATStateCommand for feature creation and edition.
    * @param iName
    *  as in CATStateCommand
    * @param iBehavior
    *  as in CATStateCommand
    * @param iStatus
    *  as in CATStateCommand
	 * @param iWorkingPath
    *   The working path in assembly
	 * @param iActiveObjectPath
    *   The active object path
    * @see CATStateCommand
    */
   CATMMUIStateCommand(const CATString & iName,
                       CATDlgEngBehavior iBehavior = NULL,
                       CATCommandMode iStatus = CATCommandModeExclusive,
                       const CATPathElement* iWorkingPath = 0,
                       const CATPathElement* iActiveObjectPath = 0);

   virtual ~CATMMUIStateCommand ();
 
   /**
   * Returns the current editor.
   * @return
   * The current editor.
   * Do not release the returned value.
   */
   CATFrmEditor* GetEditor();

   /**
   * Empties the CSO, the HSO and the PSO.
   */
   void EmptySO();

   /**
   * Returns the CSO of the current editor.
   * @return
   * The current CSO.
   * Do not release the returned value.
   */
   CATCSO* GetCSO();

   /**
   * Returns the HSO of the current editor.
   * @return
   * The current HSO.
   * Do not release the returned value.
   */
   CATHSO* GetHSO();

   /**
   * Returns the PSO of the current editor.
   * @return
   * The current PSO.
   * Do not release the returned value.
   */
   CATPSO* GetPSO();

   /**
   * Returns the ISO of the current editor.
   * @return
   * The current ISO.
   * Do not release the returned value.
   */
   CATISO* GetISO();

   /**
   * Builds a path the leaf of which is <tt>iObject</tt>.
   * Puts the path in the CSO.
	* @param iObject
   * The object
   * @return
   * The path that has been generated.
   * The caller must release the returned path.
   */
   CATPathElement* AddInCSO(CATBaseUnknown* iObject); 

   /**
   * Builds a path the leaf of which is <tt>iObject</tt>.
   * Puts the path in the HSO.
	* @param iObject
   * The object
   * @return
   * The path that has been generated.
   * The caller must release the returned path.
   */
   CATPathElement* AddInHSO(CATBaseUnknown* iObject);

   /**
   * Puts the objects of the list <tt>iObjectList</tt> in the HSO.
   */
   HRESULT AddElementsInHSO(CATLISTP(CATBaseUnknown)* iObjectList);

   /**
   * Builds a path the leaf of which is <tt>iObject</tt>.
   * Puts the path in the PSO.
	* @param iObject
   * The object
   * @return
   * The path that has been generated.
   * The caller must release the returned path.
   */
   CATPathElement* AddInPSO(CATBaseUnknown* iObject);
 
   /**
   * Puts <tt>iObject</tt> in the ISO.
	* @param iObject
   * The object
   * @return
   * The object you pass in argument (<tt>iObject</tt>).
   */
   CATBaseUnknown* AddInISO(CATBaseUnknown* iObject);

   /**
   * Gets the part you are working with (the part with the blue node in product context).
   * @return
   * The part.
   */
   CATIPrtPart_var GetPart();

   /**
   * Returns the edited or created feature.
   * @return
   * The edited or created feature.
   */
   virtual CATISpecObject_var GiveMyFeature();

   /**
   * Returns the edited or created feature list.  
   * @return
   * The edited or created feature list.
   */
   virtual CATLISTV(CATISpecObject_var) GiveMyFeatures();

   /**
   * Sets <tt>iFeature</tt> as the current feature (the in work object) of the part you are working with.
   * @param iFeature
   * The new current feature.
   */
   void SetCurrentFeature(CATISpecObject* iFeature);

   /**
   * Gets the current feature (the in work object) of the part you are working with.
   * @return
   * The current feature.
   */
   CATISpecObject_var GetCurrentFeature();
 
   /**
   * Builds a path the leaf of which is <tt>iObject</tt>.
   * @param iObject
   * The object
   * @return
   * The path that has been generated.
   * The caller must release the returned value.
   */
   CATPathElement* GivePathElementFrom(CATBaseUnknown* iObject); 

   /**
   * Retrieves the working path (used for highlight, etc).
   * Usually the working path and the active path are equal: the two path contain
   * the part and the product structure. 
   * Use @href #SetWorkingPath to change it.
   * @return
   * The path that has been generated.
   * The caller must release the returned value.
   */
   CATPathElement* GetWorkingPath();

   /**
   * Sets the working path.
   * @param iWorkingPath
   *	The working path
   */
   void SetWorkingPath(const CATPathElement* iWorkingPath);

   /**
   * Retrieves the active object path.
   * <br><b>Role:</b>
   * This method is used to have the good workshop.Usually the working path and the active i
   * path are equal: the two path contain the part and the product structure. 
   * <br>Use #SetActiveObjectPath to change it.
   * @return
   * The path that has been generated.
   * The caller must release the returned value.
   */
   CATPathElement* GetActiveObjectPath();

   /**
   * Sets the active object path.
   * @param iActiveObjectPath
   *	The active object path
   */
   void SetActiveObjectPath(const CATPathElement* iActiveObjectPath);

   /**
   * Builds a path the leaf of which is <tt>iObject</tt>.
   * Sets this path as the active object path of the editor.
   * @param iObject
   * The leaf of the new active object path
   */
   void SetActiveObject(CATBaseUnknown* iObject);


   /**
   * Cancel Action.
   * @param iCmd
   *   The command that requests to cancel the current one
   * @param iNotif
   *   The notification sent
   */
   virtual CATStatusChangeRC Cancel(CATCommand* iCmd, CATNotification* iNotif);
   
   /** @nodoc */
   void Update3DVisu();
   /** @nodoc */
   void UpdateIcons();
   
protected:
  
   /**
    * Data member you can use to store the element that is beeing created or edited.
    * Use it to implement the GiveMyFeature method.
    */
   CATISpecObject_var _MyFeature;

private:

   CATPathElement* _working_path;
   CATPathElement* _activeobject_path;

};
#endif
