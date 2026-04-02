#ifndef CATAfrCommandHeaderServices_H
#define CATAfrCommandHeaderServices_H
#include "ApplicationFrame.h"

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATString.h"

class CATUnicodeString;
class CATCommand;
class CATCommandHeader;

//---------------------------------------------------------------------------
/**
 * Starts the command associated with a command header.
 * <br><b>Role</b>: This function starts the @href CATCommand associated
 * with a @href CATCommandHeader, and returns a pointer to this command.
 * @param iCommandHeaderId
 *  The identifier of the CATCommandHeader.
 * @param oCommand
 *  The CATCommand.
 * @return
 * Returns S_OK on success. Returns E_FAIL if the identifier is not an existing CATCommandHeader identifier.
 */
ExportedByApplicationFrame
HRESULT CATAfrStartCommand (CATString iCommandHeaderId,
                            CATCommand *& oCommand);

//---------------------------------------------------------------------------
/**
 * Gets a pointer to a command header.
 * <br><b>Role</b>: This function looks for a @href CATCommandHeader identifier and returns a pointer 
 * to this command header.
 * @param iCommandHeaderId
 *  The identifier of the CATCommandHeader.
 * @param oCommandHeader
 *  The CATCommand.
 * @return
 * Returns S_OK on success. Returns E_FAIL if the identifier is not an existing CATCommandHeader identifier.
 */
ExportedByApplicationFrame
HRESULT CATAfrGetCommandHeader (CATString iCommandHeaderId,
                                CATCommandHeader *& oCommandHeader);

//---------------------------------------------------------------------------
/**
 * Creates a command header.
 * <br><b>Role</b>: This function creates a command header from an official V5 command header.
 * You can find the reusable command headers in the corresponding CAA documentation.
 * After calling this service the identifier can be used in a toolbar or in a menu to give an access to the corresponding command.
 * @param iCommandHeaderId
 *  The identifier of the Command Header. Only identifiers which are documented in any CAA documentation can be used.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>         <dd>the service has succeeded and the command header was created
 *   <dt><tt>S_FALSE</tt>      <dd>the service has succeeded but no command header was created because it already existed
 *   <dt><tt>E_NOTIMPL</tt>    <dd>the service has failed because the identifier is not an authorized command header identifier
 *   <dt><tt>E_FAIL</tt>       <dd>the service has failed because a licensing control fails
 *   <dt><tt>E_UNEXPECTED</tt> <dd>the service has failed because another error has occurred
 */
ExportedByApplicationFrame
HRESULT CATAfrCreateCommandHeader (CATString iCommandHeaderId);


/**
 * Changes the icon of a command header.
 * @param iCommandHeaderId
 *  The identifier of the command header.
 * @param iIconName
 *  The name of the icon.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>    <dd>the service has succeeded and the icon was changed.
 *   <dt><tt>E_FAIL</tt>  <dd>the service has failed and the icon was not changed. Notice that no check is performed on the icon existence.
 */
ExportedByApplicationFrame
HRESULT CATAfrSetCommandHeaderIconName (const CATString & iCommandHeaderId, const CATString & iIconName);

/**
 * Changes the icon of a command header.
 * @param iCommandHeaderId
 *  The identifier of the command header.
 * @param iTitle
 *  The unicode string containing the title.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>    <dd>the service has succeeded and the title was changed.
 *   <dt><tt>E_FAIL</tt>  <dd>the service has failed and the title was not changed.
 */
ExportedByApplicationFrame
HRESULT CATAfrSetCommandHeaderTitle    (const CATString & iCommandHeaderId, const CATUnicodeString & iTitle);

#endif
