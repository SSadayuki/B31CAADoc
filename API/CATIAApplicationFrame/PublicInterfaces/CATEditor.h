#ifndef CATEditor_h
#define CATEditor_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "OM0EDPRO.h"
#include <CATUnicodeString.h>
#include <CATInterfaceObject.h>
#include <CATImplementationAdapter.h>
#include <CATSettingRepository.h>
#include "PropertyMode.h"
#include "CATString.h"
#include "CATBoolean.h"

class CATEditorPage;
class CATCommandGlobalUndo;

/**
 * Class to define an editor called by the PropertyEditor.
 */
class ExportedByOM0EDPRO CATEditor : public CATImplementationAdapter 
{

  CATDeclareKindOf;

 public:

  /**
  * Constructs the editor.
  */
  CATEditor();
  virtual ~CATEditor();

/**
 * Constructs the dialog objects of the editor.
 */
  virtual void BuildEditor(CATEditorPage * iPage) = 0 ;

/**
 * Method to close dialog object open by the editor.
 */
  virtual void CloseWindowFromEditor();
  /**
    ** Peut-être à mettre en R10 - voir avec JBT. Le besoin est la prise dynamique de 
    * licences.
    * @nodoc
    * Closes secondary dialog objects.
    * <br><b>Role</b>: In the case that the dialog object associated with
    * the property sheets creates a secondary window,
    * this method must provide a way to close it.
    * In addition to that, the editor can dispatch a notification: this method 
    * has to be used only for dynamic licencing purposes.
    *
    virtual HRESULT CloseWindowFromEditorAtExit(CATBoolean iValue) = 0;
    ***/

/**
 * Method to give a name to the editor.
 */
  virtual CATUnicodeString  GetEditorTitle();

  /**
  * Valuates the dialog objects of the editor.
  */
  virtual void SetPropertyValue ( CATLISTV(CATBaseUnknown_var)& iExtract,
				   ModeReadWrite iMode );

  /**
  * @nodoc
  */
  virtual void SetUserSettingsValue (CATSettingRepository * iRep);

  /**
  * Resets all values of repositories.
  */
  virtual void ResetUserSettingsValue ();
  
  /**
  * Saves properties modifications for all the selection.
  * @param iExtract
  *       list of concerned objects with the modification.
  */
  virtual void CommitModification( CATLISTV(CATBaseUnknown_var)& iExtract );

  /**
  * Saves settings modifications.
  * @param iRep 
  *      not used.
  * <br><b> careful: </b> you need to get the repository by yourself
  *  by GetRepository method, don't try to use iRep directly
  * @see CATSettingRepository
  */
  virtual void CommitModification(CATSettingRepository *iRep);

  /**
  * Cancels a modification when closing the panel.
  * @param iExtract
  *      list of concerned objects with the modification.
  */
  virtual void CancelModification( CATLISTV(CATBaseUnknown_var)& iExtract );
	
  /**
  * Cancels settings modification.
  * @param iRep 
  *      not used. 
  * <br><b> careful: </b> you need to get the repository by yourself
  *  by GetRepository method, don't try to use iRep directly
  * @see CATSettingRepository
  */
  virtual void CancelModification(CATSettingRepository *iRep);

	/**
	* Sets the behaviour of the dialog objects during the update of tabpages when applying modifications.
  * Useful for tab pages depending on each other
	* @param oStatus
	* <br><b> Legal Values : </b>
	*     <tt> 0 if no repaint is required : for each tabpage, methods CommitModification and SetPropertyValue are called one after the other 
	*     <tt> 1 otherwise : default behaviour - for each tabpage method CommitModification is applied. Then, for each tabpage method SetPropertyValue is called. 
	*/
  virtual HRESULT OKToRepaintOnCommit(int& oStatus);

  /**
  * Method to make a query on the selection for acceptance.
  */
  virtual void ExtractFromSelection ( CATLISTV(CATBaseUnknown_var)& iExtract,
				       const CATLISTV(CATBaseUnknown_var) * iSelection =NULL );
  
  /**
  * @nodoc	
  */
  virtual int QueryAcceptDocument (const CATDocument * doc);

/**
 * @nodoc
 */
  virtual void SetEditorSize(int & iSize );

/**
 * Method to record an undo action from the editor.
 */
  virtual CATCommandGlobalUndo * GetUndoFromEditor();
};


#endif


