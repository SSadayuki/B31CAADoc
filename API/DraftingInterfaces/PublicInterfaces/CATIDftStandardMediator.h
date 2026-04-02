// COPYRIGHT DASSAULT SYSTEMES 2005
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#ifndef CATIDftStandardMediator_H
#define CATIDftStandardMediator_H

class CATUnicodeString;
class CATIContainer;

#include "CATBaseUnknown.h"
#include "DraftingItfCPP.h"


/**
 * <b>Role</b>: Interface dedicated to the management and synchronization of a document-wide DFT-Standard.
 * For documents on which the CATIDftStandardMediator interface can be requested, there should be
 * a <b>SINGLE</b> DFT-standard.
 * The multiple drafting-based application instances coexisting in the same document are supposed 
 * to share this DFT-standard. 
 * Consequently, any modification of it <b>MUST</b> be done through this interface rather than through CATIDftStandardManager.
 *
 * <br>
 * <b>NOTE</b>: The DFT-standard is a version number and the set of key/value used by drafting elements in order to 
 * customize their  behavior (for example: color, shape, but also how given features should react to a given 
 * interaction).
 * In order to retrieve theses key/values pair, we usually use a dedicated interface.@see CATIDftStandard.
 *
 * <br>
 * An embedded standard can be switched (standard A to standard B) or upgraded (standard A version x to standard A version y).
 * Both a switch and an upgrade consist in the replacement of the embedded standard A with a standard B whose characteristics
 * will be taken from the ressources/standard/drafting/B.xml file.
 * However, features can have a custom way of adapting to the new standard according to the import strategy (switch or upgrade).
 * For example, in drafting a switch of standard will reset the sheet's format to the default format of the new standard.
 * However during an upgrade, the sheet's format will remain roughly the same.
 *
 * <b>WARNING</b>: any switch or upgrade requires that the target standard has a greater version number that the source standard.
 *
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftStandardMediator;
#else
extern "C" const IID IID_CATIDftStandardMediator;
#endif


class ExportedByDraftingItfCPP CATIDftStandardMediator: public CATBaseUnknown
{
  CATDeclareInterface;

public:


/**
 * Checks whether the XML standard identified by the given name can be imported.
 * This method is typically used in order to construct the list of available standards for import.
 *
 * @param iNewStd
 * The name of the standard.
 * @return
 * An <tt>HRESULT</tt> value.
 * <br><b>Legal values</b>:
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success. the XML standard can be used.
 * <dt> <tt>S_FALSE </tt> <dd> Success. The standard cannot be imported, check the version number.
 * <dt> <tt>E_FAIL</tt>   <dd> Error. Internal error or the XML standard is inconsistant.
 * </dl>
 */
  virtual HRESULT CheckStandardCanBeImported(const CATUnicodeString &iNewStd)= 0;

/**
 * Initialize the DFT-standard in the document to the given standard <b>for</b> the given drafting-like container.
 *
 * @precond this method should be called only for the first initialization of the standard for the given container.
 * @precond the given container must be a DFT-container.
 *
 * @param iNewStd
 * The name of the standard xml file which should be imported and used globally (see this interface description).
 * @param iContainer
 * The container whose standard is to be initialized for the first time to iNewStd.
 * @return
 * An <tt>HRESULT</tt> value.
 * <br><b>Legal values</b>:
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>S_FALSE</tt>  <dd> There are existing containers in this document whose standard cant be changed to iNewStd.
 *                             Check the version number of the standard you want to import (see this interface description).
 * <dt> <tt>E_FAIL</tt>   <dd> Preconditions not met or internal critical error. The model can potentially be corrupted and unusable.
 * </dl>
 */
  virtual HRESULT InitializeDftStandard(const CATUnicodeString &iNewStd, CATIContainer *iContainer)= 0;


/**
 * Switch the DFT-standard in the document to the given standard <b>for</b> the given drafting-like container.
 * See this interface description for more explanation about switches.
 *
 * @precond the given container must be a DFT-container.
 *
 * @param iNewStd
 * The name of the standard xml file which should be imported and used globally (see this interface description).
 * @param iContainer
 * The container whose standard is to be changed and will consequently impact other DFT containers.
 * @return
 * An <tt>HRESULT</tt> value.
 * <br><b>Legal values</b>:
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Sucess.
 * <dt> <tt>S_FALSE</tt>  <dd> The version number of the standard in the xml file you want to import is lower than 
 *                             the version number of the embeded standard (see the warning this interface description).
 * <dt> <tt>E_FAIL</tt>   <dd> Preconditions not met or internal critical error. The model can potentially be corrupted and unusable.
 * </dl>
 */
  virtual HRESULT ImportDftStandard(const CATUnicodeString &iNewStd, CATIContainer *iContainer)= 0;


/**
 * Upgrade the embeded DFT-standard in the document <b>for</b> the given drafting-like container.
 * See this interface description for more explanation about upgrades.
 *
 * @precond the given container must be a DFT-container.
 *
 * @param iContainer
 * The container for which the standard is upgraded.
 * @return
 * An <tt>HRESULT</tt> value.
 * <br><b>Legal values</b>:
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Sucess.
 * <dt> <tt>S_FALSE</tt>  <dd> The version number of the standard in the xml file you want to import is lower than 
 *                             the version number of the embeded standard (see this interface description).
 * <dt> <tt>E_FAIL</tt>   <dd> Preconditions not met or internal critical error. The model can potentially be corrupted and unusable.
 * </dl>
 */
  virtual HRESULT UpgradeDftStandard(CATIContainer *iContainer)= 0;

};

CATDeclareHandler(CATIDftStandardMediator, CATBaseUnknown);

#endif

