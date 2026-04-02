#ifndef CATPRINTALBUMDIALOG_H
#define CATPRINTALBUMDIALOG_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CATDlgInclude.h"

class l_CATPrintAlbumDialog;

/**
 * Class to display and manage the album contents.
 */
class ExportedByCATPrint CATPrintAlbumDialog : public CATDlgDialog 
{
   DeclareResource(CATPrintAlbumDialog, CATDlgDialog);
   
public:

/**
 * Constructs a CATPrintAlbumDialog.
 * @param iFather
 *   The father of the album dialog.
 * @param iName
 *   The name of dialog.
 * @param iStyle
 *   The style of the dialog.
 */
    CATPrintAlbumDialog(CATDialog* iFather, const CATString& iName, CATDlgStyle iStyle=NULL);
    virtual ~CATPrintAlbumDialog();

/**
 * Returns the number of album dialog instances.
 * @return 
 *   The number of instances.
 */
    static int GetNInstance(void);

private:
    void cb_Dismiss(CATCommand*, CATNotification*, CATCommandClientData);

    l_CATPrintAlbumDialog *_albumDialog;
};

#endif
