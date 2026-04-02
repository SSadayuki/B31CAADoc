#ifndef CATDLGWINDOWS_H
#define CATDLGWINDOWS_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @deprecated CXR28 CATDlgBlackBox
 *
 * CATDlgWindows class is now deprecated and must be replaced by CATDlgBlackBox itself
 */

#include "CATDlgBlackBox.h"

#ifdef DRIVER_WINDOWS

class CWnd;

/** 
 * Class specific to Windows platforms, neutral window providing some interoperability capability with non V5 Dialog objects.
 * <br>
 * <b>Role</b>:
 * Creates an empty frame without any border. 
 * <br>
 * It is targeted for very specific usages. Most application developers do not have to deal with this object.
 */

class ExportedByDI0PANV2 CATDlgWindows : public CATDlgBlackBox
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
        CATDlgWindows( CATDialog *iParent, const CATString& iObjectName, CATDlgStyle iStyle=NULL);
        virtual ~CATDlgWindows();

       /** 
        * Gets a pointer to the MFC object of the underlying window.
        */ 
        CWnd*     GetFatherWidget();

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
