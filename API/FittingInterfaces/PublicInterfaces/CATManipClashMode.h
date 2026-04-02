#ifndef CATManipClashMode_H
#define CATManipClashMode_H


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
// COPYRIGHT DASSAULT SYSTEMES 2004
//--------------------------------------------------------------------------
// CATManipClashMode Enum
//--------------------------------------------------------------------------

    /**
     * The manipulation clash mode attribute's possible values.
     * @param CATManipClashModeNo
     *      The clash detection mode will not be used (set to OFF)
     * @param CATManipClashModeOn
     *      The clash detection mode will be used in ON mode 
     *      (the parts that clash will be highlighted)
     * @param CATManipClashModeStop
     *      The clash detection mode will be used in STOP mode
     *      (the parts that clash will be stop moving)
     */

enum CATManipClashMode {
    CATManipClashModeNo,
    CATManipClashModeOn,
    CATManipClashModeStop
};
#endif
