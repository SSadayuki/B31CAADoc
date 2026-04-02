#ifndef CATDLGMOTIF_H
#define CATDLGMOTIF_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @deprecated CXR28 CATDlgBlackBox
 *
 * CATDlgMotif class is now deprecated and must be replaced by CATDlgBlackBox itself
 * To keep using GetXtAppContext/GetXtDisplay, you must refer to CATDlgXToolkit
 */

#include "CATDlgBlackBox.h"

#ifdef DRIVER_MOTIF

#include <Xm/Xm.h>

/** 
 * Class specific to Unix platforms, neutral window providing some interoperability capability with non V5 Dialog objects.
 * <br>
 * <b>Role</b>:
 * Creates an empty frame without any border.
 * <br>
 * It is targeted for very specific usages. Most application developers do not have to deal with this object.
 */

class ExportedByDI0PANV2 CATDlgMotif : public CATDlgBlackBox
{

 public:

       /** 
        * Constructs a CATDlgWindows.
        * @param iParent
        *   The parent of the object
        * @param iObjectName
        *   The name of the object
        * @param iStyle
        *   The style of the object.
        */ 
        CATDlgMotif( CATDialog *iParent, const CATString& iObjectName, CATDlgStyle iStyle=NULL);
        virtual ~CATDlgMotif();

       /** 
        * Gets XToolkit application context.
        */ 
        XtAppContext GetXtAppContext();

       /** 
        * Gets XToolkit display.
        */ 
        Display*     GetXtDisplay();

       /** 
        * Gets instance of the Motif underlying window.
        */ 
        Widget       GetFatherWidget();

       /**
        * Returns internal object. Internal use only.
        */
        virtual l_CATDialog* GetLetterObject();

       /**
        * Resets internal object. Internal use only.
        */
        virtual void ResetLetterObject();

        CATDeclareClass ;
};
#endif
#endif
