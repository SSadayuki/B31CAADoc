#ifndef CATManipAutoInsertMode_H
#define CATManipAutoInsertMode_H


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 2004
//--------------------------------------------------------------------------
// CATManipAutoInsertMode Enum
//--------------------------------------------------------------------------

    /**
     * The manipulation auto insert setting attribute possible values.
     * @param CATOnMouseRelease
     *      Automatic insert on each mouse release
     * @param CATWhileMouseMoving
     *      Automatic insert based on specific parameters
     */

enum CATManipAutoInsertMode {
    CATOnMouseRelease,
    CATWhileMouseMoving
};
#endif

